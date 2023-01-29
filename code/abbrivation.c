#include<stdio.h>

int len(char *s)
{

    int i=0;

    while(s[i]!='\0')i++;

    return i;
}


int main()
{

    char s1[50];
    char s2[50];

fgets(s1,sizeof(s1),stdin);
fgets(s2,sizeof(s2),stdin);

    int i=0;

    int space=1;
    for(int j=0; j<strlen(s1); j++)
    {

        if(s1[j]==' ')
        {

            space=1;
            continue;

        }
        else if(space==1)
        {
            if(s1[j]!=s2[i])
            {
                puts("break!");
                return 0;
            }
            else
            {
                i++;
            }

            space=0;
        }




    }

    puts("yes");



    return 0;
}

