#include <stdio.h>

int main(){

int ast=1;
for (int iii=6 ; iii>=0;iii--) {
    for (int jjj=1; jjj<= ast; jjj++) {
    printf("%5s", "*");
}
ast++;
printf("\n");

}
return 0;
}