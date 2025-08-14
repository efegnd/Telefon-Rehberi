#ifndef HEADER_H
#define HEADER_H

typedef struct {
    char isim[20];
    char soyad[20];
    char numara[12];
} Kisi;

void menu();
int phoneAdd();
int phoneList();
int phoneSearch(char*);

#endif

