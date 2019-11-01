//Gleidson Vinícius Gomes Barbosa - 6331
#include <stdio.h>
#include <string.h>
void intro (char n[])
{
        printf ("\n\n\n\nOlá %s, seja bem vindo ao jogo de 21 palitos, esse jogo consiste em um jogo de turnos em que cada jogador, em seu turno, pode retirar até quatro palitos e após isso passa a vez para o outro jogador, perde o jogo quem retirar o último palito.\nBom jogo e boa sorte!\n\n\n\n", n);
}
int NPC (int p)//Função do NPC invencível.
{
    int roubo;
    if (p==20)
    {
        roubo=4;
    }
    if (p==19)
    {
        roubo=3;
    }
    if (p==18)
    {
        roubo=2;
    }
    if (p==17)
    {
        roubo=1;
    }
    if (p==15)
    {
        roubo=4;
    }
    if (p==14)
    {
        roubo=3;
    }
    if (p==13)
    {
        roubo=2;
    }
    if (p==12)
    {
        roubo=1;
    }
    if (p==10)
    {
        roubo=4;
    }
    if (p==9)
    {
        roubo=3;
    }
    if (p==8)
    {
        roubo=2;
    }
    if (p==7)
    {
        roubo=1;
    }
    if (p==5)
    {
        roubo=4;
    }
    if (p==4)
    {
        roubo=3;
    }
    if (p==3)
    {
        roubo=2;
    }
    if (p==2)
    {
        roubo=1;
    }
    return roubo;
}
int main()
{
    int palitos,turno,j1,j2;
    int i,j;//Variáveis de controle.
    char nome[51],oponente[51];
    printf ("Digite seu nome:\n");
    gets (nome);
    printf ("Digite um nome para seu oponente:\n");
    gets (oponente);
    intro(nome);//Função de introdução do jogo.
    palitos=21;
    i=1;//Variável de controle dos turnos.
    do
    {
        printf ("\n---------- TURNO %d ----------\n\n", i);
        if (palitos==1)
        {
            printf ("Resta apenas um palito, aquele que retira o último palito perde o jogo, a vitória é do jogador %s.\n", oponente);
            break;
        }
        for (j=0;j>=0;j++)
        {
            printf ("### O número de palitos é: %d. ###\nTurno do jogador %s, digite o número de palitos que deseja retirar(1,2,3 ou 4):", palitos, nome);
            scanf ("%d", &j1);
            if (j1<1||j1>4)
            {
                printf ("\n\nNúmero de palitos inválido, cada jogador pode retirar o mínimo de 1 (um) e o máximo de 4 (quatro) palitos.\n\n\n");
            }
            else
            {
                printf("Você retirou %d palitos.\n", j1);
                break;
            }
        }
        palitos=palitos-j1;
        i=i+1;
        printf ("\n---------- TURNO %d ----------\n\n", i);
        printf ("### O número de palitos é %d. ###\nTurno do jogador %s.", palitos,oponente);
        j2=NPC(palitos);
        printf ("O jogador %s retirou %d palitos.\n", oponente, j2);
        palitos=palitos-j2;
        i++;
        
    }while(palitos>=1);
    printf ("\n\n\nFim de jogo!\n");

    return 0;     
}
