#include <stdio.h>
#include <stdlib.h>
int main () {
    //input
    int angka;
    printf ("Masukkan angka: ");
    scanf ("%d", &angka);

    //output
    if (angka > 0 ) {
        printf ("Angka bernilai positif");
    } else if (angka == 0) {
        printf ("Angka bernilai nol");
    } else {
        printf ("Angka bernilai negatif");
    }

return 0;

}
