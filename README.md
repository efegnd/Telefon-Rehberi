# Telefon Rehberi

Bu proje, C dili kullanılarak yazılmış basit bir **telefon rehberi uygulamasıdır**.  
Projede `.h` kütüphaneleri ile modüler bir yapı kullanılmıştır.

## Özellikler

- Telefon numarası ekleme
- Rehberdeki numaraları listeleme
- İsim ile arama yapabilme
- Dosya tabanlı veri saklama (`data.txt`)

## Dosya Yapısı

- `main.c`        → Programın ana fonksiyonu
- `header.h`      → Kisi yapısı ve fonksiyon prototipleri
- `menu.h`        → Menü fonksiyonu
- `phoneAdd.h`    → Telefon ekleme fonksiyonu
- `phoneList.h`   → Telefonları listeleme fonksiyonu
- `phoneSearch.h` → Arama fonksiyonu
- `data.txt`      → Telefon kayıtları (program çalıştığında oluşturulur)


## Kullanım

1. Projeyi bilgisayarına indir ve derle (`gcc main.c -o telefon_rehberi`).  
2. Programı çalıştır (`./telefon_rehberi` veya Windows için `telefon_rehberi.exe`).  
3. Menüden seçim yaparak:
- 1 → Telefon ekle
- 2 → Telefonları listele
- 3 → Arama yap
- 4 → Çıkış


## Notlar

- Maksimum isim ve soyad uzunluğu: 19 karakter  
- Maksimum numara uzunluğu: 11 rakam  
- Boş rehberde listeleme yapıldığında “Rehber boş” mesajı gösterilir.  
- Konsolda Türkçe karakter sorunu olmaması için UTF-8 kullanılması önerilir.

## Lisans

Bu proje eğitim amaçlıdır.
