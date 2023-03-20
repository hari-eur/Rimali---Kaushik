#include<stdio.h>
#include<string.h>
void sortstr(char[],char);
int main(void)
{
    char str[100],s;
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    sortstr(str,s);
   return 0;
}
void sortstr(char str[],char s)
{
    int i,j,len;
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                s = str[j];
                str[j] = str[j+1];
                str[j+1] = s;
            }
        }
    }
    printf("\n%s",str);
}