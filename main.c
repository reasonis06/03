#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char a,b;
    int i,j;
    
    printf("enter a character : ");
    scanf("%c", &a);
    
    i = a;
    b = i + 1;
    j = b;

    printf("The next character of %c (%i) is %c (%i)\n", a, i, b, j);
    
    system("PAUSE");
    return 0;
}
