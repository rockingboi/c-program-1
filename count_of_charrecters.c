#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
    char str[MAX_SIZE];
    int i;

  
    printf("Enter your text : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
       
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string : %s",str);
    return 0;
}s %d\n",k);
    printf("alphabet are %d\n",c);
    printf("space are %d\n",f);
    printf("special character are %d\n",k-(c+f+d)-1);
    return 0;
}