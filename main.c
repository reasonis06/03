#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a,b;
    
    printf("enter bunja : ");
    scanf("%d", &a);
    
    printf("enter bunmo : ");
    scanf("%d", &b);

    printf("The result is %f\n", (float)a/b);
    
    system("PAUSE");
    return 0;
}
