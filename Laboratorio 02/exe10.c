#include <stdio.h>
#include <string.h>

//declarando a estrutura
typedef struct
{
    int x;
    int y;
} ponto;

//declarando a função
void inc_dir(ponto *p ,char c);

int main()
{

    ponto p;
    ponto *ponteiro;
    char direcao[10], dir;

    printf("Digite o ponto: ");
    scanf("%d,%d", &p.x, &p.y);
    getchar(); //recebe a direcao

    printf("Digite a direcao: ");
    fgets(direcao, 10, stdin);
    direcao[strcspn(direcao,"\n")] = '\0';

    if (strcasecmp(direcao, "norte")==0) dir = 'n';
    if (strcasecmp(direcao, "sul")==0) dir = 's';
    if (strcasecmp(direcao, "leste")==0) dir = 'l';
    if (strcasecmp(direcao, "oeste")==0) dir = 'n';

    ponteiro = &p;

    printf("Resultado: (%d,%d) %s  => ", p.x, p.y, direcao);
    inc_dir(ponteiro, dir);
    printf("(%d,%d)\n", p.x, p.y);

    return 0;
}

//funçao
void inc_dir(ponto *p ,char c)
{
    if (c=='n') p->y+=1;
    if (c=='s') p->y-=1;
    if (c=='l') p->x+=1;
    if (c=='o') p->x-=1;
}
