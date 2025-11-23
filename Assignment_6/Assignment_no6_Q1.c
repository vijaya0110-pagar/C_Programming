// TIME COMPLEXITY :O(1)

#include<stdio.h>
int main()
{
    char cName[30];
    printf("please enter full name:");
    scanf("%s",cName);
    printf("your nmae is %s",cName);
    return 0;
}
//Note: When working with strings in scanf(),
// you must specify the size of the string/array 
//(we used a very high number, 30 in our example,
// but at least then we are certain it will store 
//enough characters for the first name),
//and you don't have to use the reference operator (&).