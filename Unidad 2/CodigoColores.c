#include <stdio.h>

void setColor(const char* color) {
    printf("%s" ,color);

}

    int main(){

        printf("\033[2J");

        setColor("\033[4;36m]");
        printf("\nBienvenidos al programa marco y colores\n");

        setColor("\033[0m");

        setColor("\033[7;34m]");
        printf("\nBienvenidos al programa marco y colores\n");

        setColor("\033[0m");

        setColor("\033[4;34m]");
        printf("\nBienvenidos al programa marco y colores 2!\n");

        setColor("\033[0m");
        return 0;
    }