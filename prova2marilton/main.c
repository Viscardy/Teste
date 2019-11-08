#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], *token, aux, pal[100];
    int i, acc=0, cont, qtd=0, z=0, j=0;

    while(1)
    {
        while((aux=getchar()) != '\n')
        {
            str[acc]=aux;
            acc++;
        }
        str[acc]='\0';
        acc=0;

        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]==' ')
                qtd++;
        }

        token=strtok(str, " ");

        while(j<qtd)
        {
            if(j==0)
            {
                cont=strlen(token)-1;

                for(i=0; i<strlen(token); i++)
                {
                    pal[i]=token[cont];
                    cont--;
                    z++;
                }
                pal[z]=' ';
                z++;
                cont=0;
            }
            else
            {
                token=strtok(NULL, " ");
                cont=strlen(token)-1;
                for(i=0; i<strlen(token); i++)
                {
                    pal[z]=token[cont];
                    cont--;
                    z++;
                }
                pal[z]=' ';
                z++;
                cont=0;
            }
            j++;
        }
        j=0;
        qtd=0;
        pal[z]='\0';
        puts(pal);
        z=0;
    }

    return 0;
}
