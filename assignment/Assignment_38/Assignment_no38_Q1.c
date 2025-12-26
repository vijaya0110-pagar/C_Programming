#include<stdio.h>
void StrCpyRev(char *src, char *dest)
{
    char *start = src;
    char *end = src;
    while(*end != '\0')
    {
        end++;
    }
    end--;  

    while(end >= start)
    {
        *dest = *end;
        dest++;
        end--;
    }

    *dest = '\0';  
}

int main()
{
    char arr[30]="Marvellous Python";
    char brr[30]; 

    
    StrCpyRev(arr, brr);

    printf("Original String: %s\n", arr);
    printf("Reversed Copy : %s\n", brr);

    return 0;
}