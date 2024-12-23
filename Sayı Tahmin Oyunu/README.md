C/C++ ile sayı tahmin oyunu açıklaması / Tekrar

#include <iostream>: Bu kütüphane, kullanıcıdan veri almayı ve ekrana çıktı yazdırmayı sağlar.

#include <cstdlib>: Rastgele sayı üretmek için gerekli kütüphanedir.

#include <ctime>: time(0) fonksiyonu, bilgisayarın saatini alarak rastgele sayı üretimini başlatmak için kullanılır.

int main(): C++ programlarında her şeyin başladığı ana fonksiyondur.

srand(time(0)): Bu fonksiyon, rastgele sayı üretiminin farklı sonuçlar vermesi için her seferinde farklı bir başlangıç değeri (seed) kullanır. time(0) bilgisayarın saatini alır, böylece her çalıştırmada farklı bir rastgele sayı üretilebilir.

rand() % 100 + 1: Bu ifade, rand() fonksiyonundan alınan rastgele sayıyı 1 ile 100 arasına getirmek için kullanılır. rand() fonksiyonu çok büyük bir sayı üretir, bu yüzden % 100 ile 100'e bölüp, +1 ile sayıyı 1 ile 100 arasında bir değere dönüştürürüz.

do-while döngüsü: Bu döngü, oyuncu doğru tahmin yapana kadar devam eder. İçeriye girilen her tahminde, bilgisayar tahminin küçük mü yoksa büyük mü olduğunu belirler. Eğer doğru tahmin yapılırsa, döngü sonlanır.

cin ve cout: cin, kullanıcıdan veri almak için kullanılırken, cout ekrana veri yazdırmak için kullanılır.