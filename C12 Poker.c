#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int player();

int main()
{
    int deck[52],i,card,x,j,n,k,suit,y;
    system("color 0A");
    srand(time(NULL));
    for (i=0;i<52;++i)
        deck[i]=i;
    for (i=0;i<52;++i)
    {
        n=rand()%52;
        y=deck[i];
        deck[i]=deck[n];
        deck[n]=y;
    }
    x=player();
    int n_card=52;
    printf("Cards in the deck %d.\n\n",n_card);
    for (i=0,k=0;i<x;++i)
    {
        printf("Player %d\n",i+1);
        for (j=0;j<5;++j)
        {
            card=deck[k]%13;
            switch(card)
            {
                case 0:
                    printf("A");
                    break;
                case 10:
                    printf("J");
                    break;
                case 11:
                    printf("Q");
                    break;
                case 12:
                    printf("K");
                    break;
                default:
                    printf("%d",card+1);
                    break;
            }
            suit=deck[k]/13;
            switch(suit)
            {
                case 0:
                    printf("_H ||");
                    break;
                case 1:
                    printf("_D ||");
                    break;
                case 2:
                    printf("_C ||");
                    break;
                case 3:
                    printf("_P ||");
                    break;
            }
            ++k;
            --n_card;
        }
        puts("\n");
    }
    printf("Cards in the deck %d.\n\n",n_card);
    return 0;
}

int player()
{   int x=0;
    printf("***********  Poker  ***********\n\n");
    printf("***********  Wellcome  ***********\n\n");
    printf("please enter player 1-8 : ");
    scanf("%d",&x);
    while ((x<1)||(x>8))
    {
        printf("Try again! : ");
        scanf("%d",&x);
    }
    printf("\n!!!!!  Let begin  !!!!!\n\n");
    return x;
}

