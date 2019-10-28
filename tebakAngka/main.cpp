#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int n;
   int nyawa=3;
   int tebak;
   int num;
   char nama[20];
   char pilih;
   char opt;
   srand(time(NULL));
   start:
   system("cls");
   cout << "-----------------------------------------\n";
   cout << "    Selamat Datang di Game Tebak Angka   \n";
   cout << "-----------------------------------------\n";
   cout << "Input Nama : ";
   cin >> nama;
   cout << "\nSelamat bermain " << nama << "!!\n";
   cout << "Sekarang masukkan maksimal angka (10-100) : ";
   cin >> n;
   cout << ("\n-----------------------------------------------\n");
   num=rand()%(n+1);
   if(n<10)
   {
        cout << "Angka kamu terlalu kecil ni\n";
        cout << "Mau masukan angka lagi ? (y/n) : ";
        cin >> opt;
        if(opt=='y')
            goto start;
        else
            return 0;
   }
   else if(n>100)
   {
        cout << "Angka kamu terlalu besar\n";
        cout << "Mau masukan angka lagi ? (y/n) : ";
        cin >> opt;
        if(opt=='y')
            goto start;
        else
            return 0;
   }
   else
   {
       cout << "\nSilahkan tebak nilai antara 0 sampai " << n << "!!\n";
       cout << "(Cheat : ini adalah angka yang ditebak " << num << "\n";
       ulang:
       cout << "\nMasukkan tebakan kamu : ";
       cin >> tebak;
       cout << "\n-----------------------------------------------\n";
       if(tebak < num)
       {
           cout << "\nTebakan kamu terlalu kecil\n";
           cout << "Maaf tebakan kamu salah\n";
           nyawa--;
           cout << "Nyawa kamu tinggal : " << nyawa << "\n";
           if(nyawa==0)
           {
               cout << "Yahhh nyawa anda habis\n";
               cout << "Game over\n";
               cout << "Mau main lagi? (y/n) : ";
               cin >> pilih;
               if(pilih=='y')
               {
                   nyawa=3;
                   goto start;
               }
               else
                return 0;
           }
           else
           goto ulang;
       }
       else if(tebak > num)
       {
           cout << "\nTebakan kamu terlalu besar\n";
           cout << "Tebakan kamu salah\n";
           nyawa--;
           cout << "Nyawa kamu tinggal : " <<  nyawa << "\n";
           if(nyawa==0)
           {
               cout << "\n-----------------------------------------------\n\n";
               cout << "Yahhh nyawa anda habis\n";
               cout << "Game over\n";c
               cout << "\nMau main lagi? (y/n) : ";
               cin >> pilih;
               if(pilih=='y')
               {
                    nyawa=3;
                   goto start;
               }
               else
                return 0;
           }
           else
           goto ulang;
       }
       else
       {
               cout << "\nYeay tebakan mu benar!\n";
               cout << "Mau main lagi? (y/n) : ";
               cin >> pilih;
               if(pilih=='y')
               {
                   nyawa=3;
                    system("pause");
                   goto start;

               }
               else
                return 0;
       }
   }
    return 0;
}
