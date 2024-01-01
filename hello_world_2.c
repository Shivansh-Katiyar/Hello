#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i=0,j,k,r;
    char a[20];
    char b[20]={'h','e','l','l','o',' ','w','o','r','l','d'};
    srand(time(NULL));
    while(b[i]!='\0')
    {
        for(int l=0;l<50;l++)
        {
            if(b[i]==' ')
            {
                a[i]=' ';
                break;
            }
            else
            {
                r=rand()%25;
                a[i]=97+r;
            }

            for(k=0;k<20000000;k++);
            for(j=0;j<i;j++)
            {
                printf("%c",a[j]);
            }
            
            printf("%c\n",a[i]);
        }
        
        a[i]=b[i];
        for(j=0;j<i;j++)
        {
            printf("%c",a[j]);
        }
        printf("%c\n",a[i]);
        i++;
    }

    return 0;
}