#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i;
    int j;
    int k;
    int a;
    bool check;
    int batas=0;
    int nyawa=3;
    char lagi;
    string kata;
    string tebak;
    input:
    cout <<"----------------------------------------------------\n";
    cout << "           SELAMAT DATANG DI GAME TEBAK KATA       \n";
    cout <<"----------------------------------------------------\n\n";
    cout <<"Selamat Datang di Game Tebak Kata!! Silahkan inputkan kata\n\n";
    cout << "Input Kata: ";
    cin >> kata;
    system("cls");
    cout << "huruf sudah di acak \nsilahkan tebak kata yang sudah ditentukan!";
    cout << "\tnyawa = " << nyawa << "\n\n";
    srand(static_cast<unsigned int>(time(0))); ///mengacak kata
    int n = kata.size(); ///jumlah huruf
    int indeks[n];
    for(i=0;i<n;i++)
    {
        if(i == 0)
        {
            j = rand() % n;
            indeks[i] = j;
            batas++;
        }
        else
        {
            check = true;
            j = rand() % n;
            k = 0;
            while(k<batas)
            {
                if(j==indeks[k])
                {
                    check = false;
                }
                if (check == false)
                {
                    k = 0;
                    j = rand() % n;
                    check = true;
                }
                else
                {
                    k++;
                }

            }
            indeks[i] =  j;
            batas++;

        }

    }
    for(a=0;a<n;a++)
    {
        cout << kata[indeks[a]] << " ";
    }
    cout << "\n\n(hint = "<< kata << ")\n\n";
    tebak:
    cout << "Masukan tebakan anda: ";
    cin >> tebak;
    if(tebak == kata)
    {
        cout << "\nYeay tebakan kamu benar !!\n";
        cout << "Main lagi?(y/n): ";
        cin >> lagi;
        if(lagi == 'y')
        {
            system("cls");
            batas = 0;
            nyawa = 3;
            goto input;
        }
        else if(lagi == 'n')
        {
            cout << "\nTerimakasih sudah bermain !!\n";
            system("pause");
        }
    }
    else
    {
        nyawa--;
        if(nyawa!= 0)
        {
            cout << "\nYah... tebakan kamu salah :( coba tebak lagi\t nyawa = " << nyawa << "\n\n";
            goto tebak;
        }
    }
    if(nyawa == 0)
        {
            cout << "\nYah... nyawa kamu sudah habis ni :(\t nyawa = " << nyawa << "\n\n";
            cout << "Main lagi?(y/n): ";
            cin >> lagi;
            if(lagi == 'y')
            {
                system("cls");
                nyawa = 3;
                batas = 0;
                goto input;
            }
            else if(lagi == 'n')
            {
                cout << "\nTerimakasih sudah bermain !!\n";
                system("pause");
            }
        }

    return 0;
}
