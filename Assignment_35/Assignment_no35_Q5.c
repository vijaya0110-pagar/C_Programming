#include<stdio.h>
void Reverse(char *src)
{
    char *end = src;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(src < end)
    {
        temp = *src;
        *src = *end;
        *end = temp;

        src++;
        end--;
    }
}
int main()
{
    char Arr[20];

    printf("enter String :");
    scanf(" %[^'\n']",Arr);
    Reverse(Arr);
    
    printf("Reversed String: %s\n", Arr);
    return 0;
}