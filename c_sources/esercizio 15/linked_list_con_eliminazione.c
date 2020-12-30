#include <stdio.h> 

struct Node { 
    int data; 
    struct Node* next; 
}; 

void printList(struct Node* n) { 
    while (n != NULL) { 
        printf("%d ", n->data); 
        n = n->next; 
    } 
} 

struct Node* buildList(int k, struct Node* head) {
    struct Node* tail = NULL; 
    struct Node* tmp = NULL; 
    int inputValue;

    printf("Creazione linked list con %d elementi\n", k);

    for (int i = 0; i < k; i++) {
        printf("Inserisci l'elmento %d: ", i);
        scanf("%d", &inputValue);

        if (i == 0) {
            head = (struct Node*) malloc(sizeof(struct Node)); 
            head->data = inputValue;
            head->next = NULL;
            
            tail = head;
        } else {
            tmp = (struct Node*) malloc(sizeof(struct Node)); 
            tmp->data = inputValue;
            tmp->next = NULL;

            tail->next = tmp;
            tail = tmp;
        }
    }

    return head;
}
  
int elimina(int key, struct Node **radice){
   while( (*radice != NULL) && ((*radice)->data < key)){
      radice = &( (*radice)->next );
   }
   if ((*radice != NULL) && ((*radice)->data == key)){  
      struct Node *next;
      next=(*radice)->next;
      free(*radice);
      *radice=next;
      return(1);
   } else {
      return(0);
   }
}


int main() { 
    struct Node* linkedListPointer = NULL; 
    int numeroElementiDaInserire;
    int numeroElementiEliminati;
    struct Node *temp = NULL;
    int chiaveDaEliminare;

    printf("Quanti nodi vuoi inserire? ");
    scanf("%d", &numeroElementiDaInserire);
  
    linkedListPointer = buildList(numeroElementiDaInserire, linkedListPointer);
    temp = linkedListPointer;
    printf("Elementi inseriti: ");
    printList(linkedListPointer);
    printf("\nInserisci l'elemento da eliminare: ");
    scanf("%d", &chiaveDaEliminare);
    numeroElementiEliminati = elimina(chiaveDaEliminare, &temp);
    printList(linkedListPointer);
    printf("\nNumero di elementi eliminati: %d", numeroElementiEliminati);

    free(linkedListPointer);
  
    return 0; 
} 