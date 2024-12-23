#include <iostream>  //kullanıcıdan veri almak ve çıktı yazdırmak için kullanılır.
#include <cstdlib>   //rand() ve srand() fonksiyonlarını kullanarak rastgele bir sayı üretmek için kullanacağız
#include <ctime>     //time() fonksiyonunu kullanabilmek için ekliyoruz.

using namespace std;

//Ana fonksiyonumuz
int main(){
    //Rastgele sayı üretmek için zaman değerini başlangış olarak baz alacağız
    srand(time(0));

    //Rastgele seçilecek sayıyı belirliyoruz.(Ben burada 1 ile 100 arasında olmasını tercih ediyorum.).
    int rastgeleSayi = rand() % 100 +1;

    int kullaniciTahmin; //Kullanıcının tahmini
    int tahminSayisi = 0; //bu değişkeni kullanarak kullanıcının kaçıncı denemesinde bulduğunu öğreneceğiz

    //Oyuna başlamadan ekrana Hoşgeldin mesajı ve oyunun kurallarını anlatan bir yazı yazdırıyoruz.
    cout << "Sayı Tahmin Oyununa Hoşgeldiniz! Oyunda Bolşans!" <<endl;
    cout << "Lütfen 1 ile 100 arasında bir sayi tahmin ediniz." << endl;

    // burada kullanıcı doğru tahmin edene kadar kullanıcıyı do-while döngüsüne hapsediyoruz.
    do {
        //kullanıcıya yapacağı işlemi söylüğyoruz.
        cout << "Tahmininizi giriniz: ";
        cin >> kullaniciTahmin; //Oyuncunun tahminini alıyoruz.

        tahminSayisi++; // Her denemede tahmin sayısını +1 arttırıyoruz.

        //kullanıcıdan alınan girdinin kontrolünü sağlıyoruz.
        if (kullaniciTahmin < rastgeleSayi)
        {
            cout << "Daha büyük bir sayi deneyin."<< endl;
        }
        else if (kullaniciTahmin > rastgeleSayi)
        {
            cout << "Daha küçük bir sayı deneyiniz." <<endl;
        }
        else
        {
            cout << "Tebrikler! Doğru tahmini " <<tahminSayisi<< " denemede buldunuz." <<endl;
        }
    } while (kullaniciTahmin != rastgeleSayi);

    return 0;
    

}
