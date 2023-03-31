#include<stdio.h>
#include<string.h>

int main(){

 char w[20];
    printf("Enter string:");
    gets(w);
    int l = strlen(w);
    char a;
    scanf("%c", &a);
int i=0;int j=0;
    for (int i = 0; i <= l-1; i++)
    {
      
        if (w[i]==a)
        {
            j++;
        }
    }
printf("%d",j);

    return 0;
}