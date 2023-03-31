#include <stdio.h>
#include <string.h>

int main()
{

    char w[20];
    printf("Enter string:");
    gets(w);
    int l = strlen(w);
    char a;
    scanf("%c", &a);

    for (int i = 0; i <= l-1; i++)
    {
      
        if(w[i] == a)
		{
			for(int j = i; j < l; j++)
			{
				w[j] = w[j + 1];
			}
			l--;
			i--;	
		} 
    } 
    
printf("%s",w);
     return 0;
}