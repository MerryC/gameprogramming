#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string nama_item; ///variabel untuk menampung nama item
    string item_sblm; ///variabel untuk menmpung item sebelumnya
    string item_terlemah; ///variabel untuk menampung item terlemah
    string item_terhebat; ///variabel untuk menampung item terhebat
    char lagi; ///variabel untuk menampung huruf untuk mimilih bermain lagi atau tidak
    unsigned int stat = 0; ///variabel untuk menampung stat
    unsigned int stat_sblm = 0; ///variabel untuk menampung stat sebelum
    unsigned int stat_terhebat = 0; ///variabel untuk menampung stat terhebat
    unsigned int stat_terlemah = 0; ///variabel untuk menampung stat terlemah
    bool first = true;

    cout << "============================\n";
    cout << "       SELAMAT DATANG      \n";
    cout << "============================\n";
    start:
    cout << "\nMasukan nama item : ";
    cin >> nama_item;
    cout << "Masukan stat : ";
    cin >> stat;
    cout << "Item Anda adalah " << nama_item;
    cout << "\nStat : " << stat;

    if(first==true) ///kondisi jika pertama kali memasukan item
    {
        item_sblm = "Nothing";
        item_terhebat = nama_item;
        item_terlemah = nama_item;
        stat_terhebat = stat;
        stat_terlemah = stat;
    }
    else if(stat >= stat_terhebat) ///kondisi menentukan item terhebat
    {
        stat_terhebat = stat;
        item_terhebat = nama_item;
    }
    else if(stat <= stat_terlemah) ///kondisi menentukan item terlemah
    {
        stat_terlemah = stat;
        item_terlemah = nama_item;
    }

    cout << "\nItem sebelumnya : " << item_sblm;
    cout << "\nItem terhebat : " << item_terhebat;
    cout << "\nItem terlemah : " << item_terlemah;
    item_sblm = nama_item;
    stat_sblm = stat;
    first = false;
    input:
    cout << "\n\nInput item lagi? (y/n) : ";
    cin >> lagi;
    if(lagi=='y') ///kondisi jika ingin bermain lagi akan menuju ke start
    {
        goto start;
    }
    else if (lagi=='n') ///kondisi jika tidak ingin bermain lagi
    {
        cout << "\nTerima kasih sudah bermain\n";
        system("pause");

    }
    else ///kondisi jika salah input
    {
        cout << "\nSalah input";
        goto input;
    }

    return 0;
}
