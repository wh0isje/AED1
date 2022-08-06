typedef struct fila * Fila;

Fila criar_fila();
int fila_vazia(Fila f);
int fila_cheia(Fila f);
int insere_fim(Fila f, int elem);
int remove_ini(Fila f, int *elem);
int le_final(Fila f);
int imprime(Fila f);