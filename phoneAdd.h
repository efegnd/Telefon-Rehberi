#ifndef PHONEADD_H
#define PHONEADD_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int phoneAdd() {
    Kisi yeniKisi;
    FILE *fp;

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("\nDosya acilamadi. HATA!\n");
        return 1;
    }

    printf("\nIsim giriniz (max 19 karakter): ");
    scanf("%s", yeniKisi.isim);
    while (strlen(yeniKisi.isim) > 19) {
        printf("Lutfen max 19 karakter giriniz: ");
        scanf("%s", yeniKisi.isim);
    }

    printf("Soyad giriniz (max 19 karakter): ");
    scanf("%s", yeniKisi.soyad);
    while (strlen(yeniKisi.soyad) > 19) {
        printf("Lutfen max 19 karakter giriniz: ");
        scanf("%s", yeniKisi.soyad);
    }

    printf("Numara giriniz (max 11 rakam): ");
    scanf("%s", yeniKisi.numara);
    while (strlen(yeniKisi.numara) > 11) {
        printf("Lutfen max 11 rakam giriniz: ");
        scanf("%s", yeniKisi.numara);
    }

    fprintf(fp, "%s %s %s\n", yeniKisi.isim, yeniKisi.soyad, yeniKisi.numara);

    fclose(fp);
    return 0;
}

#endif
