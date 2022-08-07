typedef struct no *Pilha;

Pilha cria_pilha();
int pilha_vazia(Pilha p);
int empilha(Pilha *p, int elem);
int desempilha(Pilha *p, int *elem);
int le_topo(Pilha *p, int *elem);
void imprime(Pilha p);
int eh_palindromo(char *vet);
int elimina(Pilha p, int elem);
void pares_impares(Pilha p);