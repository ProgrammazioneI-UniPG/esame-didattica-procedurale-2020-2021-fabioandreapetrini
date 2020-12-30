#include <stdio.h>

struct cellula {
    int numeroVicini;
    int vivo;
};

struct cellula transizione(struct cellula c) {
    if (c.vivo && (c.numeroVicini < 2 || c.numeroVicini > 3)) {
        c.vivo = 0;
    } 

    return c;
}

void display(struct cellula c) {
    printf("-------------------------------\n");
    printf("Stato automa cellulare\n");

    printf("Neighbor: %d\n", c.numeroVicini);
    if (c.vivo) {
        printf("Esistenza: viva\n");
    } else {
        printf("Esistenza: morta\n");
    }
}

int main() {
    struct cellula c1;
    c1.vivo = 1;
    c1.numeroVicini = 1;

    display(c1); 

    c1 = transizione(c1);

    display(c1); 

    return 0;
}

