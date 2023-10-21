#include <stdio.h>
#include <string.h>

int main() {
    char Str[1000];
    int i;

    printf("Enter the String: ");
    scanf("%s", Str);

    printf("Length of Str is %ld", strlen(Str));
    char ch = Str[strlen(Str)-2];
    printf("Character is : %c",ch);
    
    return 0;
}