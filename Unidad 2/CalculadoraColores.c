    #include <stdio.h>
    void gotoxy(int x, int y) {
        printf("\033[%d;%dH", y, x);
    }

    void setColor(const char* color) {
        printf("%s", color);
    }
    int main(){

        printf("\033[2J"); 
        setColor("\033[7;32m");
        gotoxy(25, 5);
        printf("Calculadora Basica con gotoxy y switch-case");
        setColor("\033[0m");

        setColor("\033[4;37m");
        gotoxy(15, 7);
        printf("Menu de operaciones:");

        
        setColor("\033[7;31m");
        gotoxy(15, 9);
        printf("1.");
        setColor("\033[0m");
        printf("  Suma");

            
        setColor("\033[7;34m");
        gotoxy(15, 11);
        printf("2.");
        setColor("\033[0m");
        printf("  Resta");

        setColor("\033[7;35m");
        gotoxy(15, 13);
        printf("3.");
        setColor("\033[0m");
        printf("  Multiplicacion");

        setColor("\033[7;36m");
        gotoxy(15, 15);
        printf("4.");
        setColor("\033[0m");
        printf(" Division");

        gotoxy(15, 17);
        printf("SELLECIONE UNA OPCION (");
        setColor("\033[7;33m");
        printf("1-4");
        setColor("\033[0m");
        printf("):");

        



        return 0;

    }