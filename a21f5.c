#include <stdio.h>
#include "simpio.h"
#include "math.h"

#define TAB_SIZE 5
#define CALC_SIZE 4

void fill_it (double tab[]);
void calc(double tab[],double fabTable[]);
void print_it(double tab[],double fabTable[]);

int main()
{
    double tab[TAB_SIZE];
    double fabTable[CALC_SIZE];

    fill_it(tab);
    calc(tab,fabTable);
    print_it(tab,fabTable);


    system("PAUSE");
    return 0;

}
void fill_it (double tab[])
{
    int i;
    for (i=0;i<TAB_SIZE;i++)
    {
        printf("Enter number");
        tab[i]=GetReal();
    }

}
void calc(double tab[],double fabTable[])
{
    int i;
    for (i=0;i<CALC_SIZE;i++)
    {
        fabTable[i]=fabs(tab[i+1]-tab[i]);
    }
}
void print_it(double tab[],double fabTable[])

{
    int i;
    for(i=0;i<TAB_SIZE;i++)
       {
           printf(" %2.g ",tab[i]);
       }
       printf("\n");

       for(i=0;i<CALC_SIZE;i++)
       {
           printf(" %2.g ",fabTable[i]);
       }

}
