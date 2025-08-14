#ifndef PHONESEARCH_H
#define PHONESEARCH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int phoneSearch(char* ptSearch) {
    Kisi guncelKisi;
    int i = 0;
    FILE *fp;

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("\nDosya acilamadi. HATA!\n");
        return 0;
    }

    while (fscanf(fp, "%s %s %s", guncelKisi.isim, guncelKisi.soyad, guncelKisi.numara) == 3) {
        if (strcmp(ptSearch, guncelKisi.isim) == 0) {
            printf("%s\t\t\t%s\t\t\t%s\n", guncelKisi.isim, guncelKisi.soyad, guncelKisi.numara);
            i++;
        }
    }

    fclose(fp);
    return i;
}

#endif

