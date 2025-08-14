#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "menu.h"
#include "phoneAdd.h"
#include "phoneList.h"
#include "phoneSearch.h"

int main() {
    int secim = 0;
    char aranacakIsim[20];
    int aramaSonucu;

    menu();

    do {
        printf("\nSeciminizi giriniz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                if (phoneAdd() == 0) {
                    printf("\nTelefon numarasi basariyla eklendi.\n");
                } else {
                    printf("\nTelefon numarasi eklenirken hata olustu.\n");
                }
                break;

            case 2:
                if (phoneList() == 0) {
                    printf("\nTelefon numaralari basariyla listelendi.\n");
                } else {
                    printf("\nTelefon numaralari listelenirken hata olustu.\n");
                }
                break;

            case 3:
                printf("Aranacak ismi giriniz (max 19 karakter): ");
                scanf("%s", aranacakIsim);
                aramaSonucu = phoneSearch(aranacakIsim);

                if (aramaSonucu == 0) {
                    printf("\nAranilan kayit bulunamadi.\n");
                } else {
                    printf("\nToplam %d adet kayit bulundu.\n", aramaSonucu);
                }
                break;

            case 4:
                printf("Cikis yaptiniz. Hosca kalin!\n");
                return 0;

            default:
                printf("Lutfen 1-4 arasinda secim yapiniz!\n");
        }
    } while (secim != 4);

    return 0;
}

