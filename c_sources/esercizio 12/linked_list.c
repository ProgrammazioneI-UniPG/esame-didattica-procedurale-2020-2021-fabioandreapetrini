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
  
int main() { 
    struct Node* linkedListPointer = NULL; 
    int k;

    printf("Quanti nodi vuoi inserire? ");
    scanf("%d", &k);
  
    linkedListPointer = buildList(k, linkedListPointer);
    printList(linkedListPointer);

    free(linkedListPointer);
  
    return 0; 
} 