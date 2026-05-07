# Soru 1: Sıralama Algoritmaları ve Süre Ölçümü

Bu proje, C dilinde rastgele üretilen 500 adet tam sayıyı (0-1000 arası) iki farklı algoritma ile sıralar ve performanslarını karşılaştırır.

## Kullanılan Algoritmalar
1. **Insertion Sort (Araya Yerleştirme Sıralaması):** Dizinin her elemanını önündeki sıralı kısma uygun yere yerleştirir.
2. **Selection Sort (Seçmeli Sıralama):** Dizideki en küçük elemanı bulup en başa alarak ilerler.

## Çalışma Mantığı
- `rand()` fonksiyonu ile dizi doldurulur.
- `time.h` kütüphanesindeki `clock()` fonksiyonu kullanılarak sıralama işleminin ne kadar sürdüğü ölçülür.
- Sonuçlar saniye cinsinden ekrana yazdırılır.