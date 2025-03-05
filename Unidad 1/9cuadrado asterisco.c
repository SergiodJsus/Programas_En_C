#include <stdio.h>
int main() {

    for (int aaaa=0;aaaa<=9;aaaa++){
        printf("%3s","*");
    }
    printf("\n");
    for(int bbbb=1;bbbb<=7;bbbb++){
        printf("%3s","*");

        for (int cccc=1;cccc<=8;cccc++){
            printf("%3s"," ");
        }

        printf("%3s","*");
        printf("\n");

    }
    for (int aaaa=0;aaaa<=9;aaaa++){
        printf("%3s","*");
    }

return 0;
    
}