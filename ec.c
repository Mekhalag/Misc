#include <stdio.h>
  
int main()
{
    int i,n,s, c[100];
    char ch[100];
    printf("Type 0 to encrypt and type 1 to decrypt your file\n");
    scanf("%d", &n);
    if (n==0)
    {
    printf("Enter the no of letters in your text; Max limit 100\n");
    scanf("%d", &s);
    printf("Enter your text\n");
    for (i=0;i<s; i++)
    scanf("%c", &ch[i]);
    for (i=0;i<s;i++) 
    {
    c[i]=(int)(ch[i])+1;
    printf("%c", c[i]);
    }
    printf("\n");
    }
    else if (n==1)
    {
    printf("Enter the no of letters in your text; Max limit 100\n");
    scanf("%d", &s);
    printf("Enter your text\n");
    for (i=0;i<s; i++)
    scanf("%c", &ch[i]);
    for (i=0;i<s; i++)
    {
    c[i]=(int)(ch[i])-1;
    printf("%c", c[i]);
    }
    printf("\n");
    }
}
