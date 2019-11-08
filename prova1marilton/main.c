#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char pal[21]="", cod[21]="", aux;
    int i, acc=0;

    while((aux=getchar()) != '\n')
    {
        pal[acc]=aux;
        acc++;
    }
    pal[acc]='\0';
    acc=0;


    for(i=0; i<strlen(pal); i++)
    {
        if(pal[i]=='B' || pal[i]=='F' || pal[i]=='P' || pal[i]=='V')
        {
                if(pal[i-1]!='B' && pal[i-1]!='F' && pal[i-1]!='P' && pal[i-1]!='V')
                {
                    cod[acc]='1';
                    acc++;
                }
        }

        if(pal[i]=='C' || pal[i]=='G' || pal[i]=='J' || pal[i]=='K' || pal[i]=='Q' || pal[i]=='S' || pal[i]=='X' || pal[i]=='Z')
        {
                if(pal[i-1]!='C' && pal[i-1]!='G' && pal[i-1]!='J' && pal[i-1]!='K' && pal[i-1]!='Q' && pal[i-1]!='S' && pal[i-1]!='X' && pal[i-1]!='Z')
                {
                    cod[acc]='2';
                    acc++;
                }
        }

        if(pal[i]=='D' || pal[i]=='T')
        {
                if(pal[i-1]!='D' && pal[i-1]!='T')
                {
                    cod[acc]='3';
                    acc++;
                }
        }

        if(pal[i]=='L')
        {
                if(pal[i-1]!='L')
                {
                    cod[acc]='4';
                    acc++;
                }
        }

        if(pal[i]=='M' || pal[i]=='N')
        {
                if(pal[i-1]!='M' && pal[i-1]!='N')
                {
                    cod[acc]='5';
                    acc++;
                }
        }

        if(pal[i]=='R')
        {
                if(pal[i-1]!='R')
                {
                    cod[acc]='6';
                    acc++;
                }
        }
    }

    cod[acc]='\0';
    printf("%s",cod);

    return 0;
}
