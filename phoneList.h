#ifndef PHONELIST_H
#define PHONELIST_H

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int phoneList() {
    Kisi guncelKisi;
    FILE *fp;

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("\nDosya acilamadi. HATA!\n");
        return 1;
    }

    printf("\nIsim\t\t\tSoyad\t\t\tNumara\n");
    printf("----\t\t\t-----\t\t\t------\n");

    while (fscanf(fp, "%s %s %s", guncelKisi.isim, guncelKisi.soyad, guncelKisi.numara) == 3) {
        printf("%-23s %-23s %-13s\n", guncelKisi.isim, guncelKisi.soyad, guncelKisi.numara);
;
    }

    fclose(fp);
    return 0;
}

#endif

