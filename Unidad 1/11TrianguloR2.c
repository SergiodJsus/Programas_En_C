#include <stdio.h>

int main(){

int aste=1;
for (int ii=6 ; ii>=0;ii--) {
    for (int kk=6; kk>= aste; kk--){
        printf("%5s", " ");

    }
    for (int jj=1; jj<= aste; jj++) {
    printf("%5s", "*");
}
aste++;
printf("\n");

}
return 0;
}