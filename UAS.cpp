#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int menu();
void tampilan(int pil);
void program(int pil);
void sequential();
void binary();
void bubble();
void selection();
void insertion();

// CLEAR SCREEN
void clear()
{
#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    system("clear");
#endif

#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#endif
}

// COVER PROGRAM
void cover()
{
    clear();
    textcolor(10);
    cout << "+=======================================================================+" << endl;
    cout << "|               UAS PRAKTIKUM ALGORITMA DAN STRUKTUR DATA               |" << endl;
    cout << "+-----------------------------------------------------------------------+" << endl;
    cout << "|                        Nama  : Ibnu Dzumirrotin                       |" << endl;
    cout << "|                        NIM   : 220010178                              |" << endl;
    cout << "|                        Prodi : Sistem Komputer                        |" << endl;
    cout << "+=======================================================================+" << endl;
    cout << "Press enter to continue..." << endl;
    getchar();
}

// MENU PROGRAM
int menu()
{
    int pil;
    string ulang, utama;

    do
    {
        clear();
        textcolor(4);
        cout << "+=======================================================================+" << endl;
        cout << "|                       =#=#=  Menu Utama  =#=#=                        |" << endl;
        cout << "+-----------------------------------------------------------------------+" << endl;
        cout << "|                         # |  SEARCHING  | #                           |" << endl;
        cout << "| 1 |  SEQUENTIAL SEARCH                                                |" << endl;
        cout << "| 2 |  BINARY SEARCH                                                    |" << endl;
        cout << "+=======================================================================+" << endl;
        cout << "|                          # |  SORTING  | #                            |" << endl;
        cout << "| 3 |  BUBBLE SORT                                                      |" << endl;
        cout << "| 4 |  SELECTION SORT                                                   |" << endl;
        cout << "| 5 |  INSERTION SORT                                                   |" << endl;
        cout << "+=======================================================================+" << endl;

        cout << "Masukan pilihan >> ";
        cin >> pil;

        while (pil > 5)
        {
            cout << "Pilihan tidak tersedia, silahkan pilih kembali" << endl;
            cout << "Masukan pilihan >> ";
            cin >> pil;
        }
        do
        {
            if (pil == 1)
            {
                tampilan(pil);
                program(pil);
            }
            else if (pil == 2)
            {
                tampilan(pil);
                program(pil);
            }
            else if (pil == 3)
            {
                tampilan(pil);
                program(pil);
            }
            else if (pil == 4)
            {
                tampilan(pil);
                program(pil);
            }
            else if (pil == 5)
            {
                tampilan(pil);
                program(pil);
            }
            else
            {
                cout << "Program tidak ditemukan" << endl;
            }

            cout << "\nIngin mengulang? (y/n) >> ";
            cin >> ulang;

            while (ulang != "y" && ulang != "n")
            {
                cout << "\nPilihan tidak tersedia, silahkan coba lagi" << endl;
                cout << "Ingin mengulang? (y/n) >> ";
                cin >> ulang;
            }
        } while (ulang == "y");

        cout << "kembali ke menu utama? (y/n) >> ";
        cin >> utama;
        while (utama != "y" && utama != "n")
        {
            cout << "Pilihan tidak tersedia, silahkan coba lagi" << endl;
            cout << "kembali ke menu utama? (y/n) >> ";
            cin >> utama;
        }

    } while (utama == "y");

    cout << "Program selesai..." << endl;
    textcolor(7);
    
    getchar();
    return 0;
}

// TAMPILAN
void tampilan(int pil)
{

    if (pil == 1)
    {
        clear();
        textcolor(1);
        cout << "======================================" << endl;
        cout << "|      -== SEQUENTIAL SEARCH ==-     |" << endl;
        cout << "======================================" << endl;
    }
    else if (pil == 2)
    {
        clear();
        textcolor(1);
        cout << "======================================" << endl;
        cout << "|        -== BINARY SEARCH ==-       |" << endl;
        cout << "======================================" << endl;
    }
    else if (pil == 3)
    {
        clear();
        textcolor(1);
        cout << "======================================" << endl;
        cout << "|         -== BUBBLE SORT ==-        |" << endl;
        cout << "======================================" << endl;
    }
    else if (pil == 4)
    {
        clear();
        textcolor(1);
        cout << "======================================" << endl;
        cout << "|       -== SELECTION SORT ==-       |" << endl;
        cout << "======================================" << endl;
    }
    else if (pil == 5)
    {
        clear();
        textcolor(1);
        cout << "======================================" << endl;
        cout << "|       -== INSERTION SORT ==-       |" << endl;
        cout << "======================================" << endl;
    }
    else
    {
        cout << "======================================" << endl;
        cout << "|      -== TIDAK DITEMUKAN ==-       |" << endl;
        cout << "======================================" << endl;
    }
}

// MENAMPILKAN PROGRAM
void program(int pil)
{

    if (pil == 1)
    {
        sequential();
    }
    else if (pil == 2)
    {
        binary();
    }
    else if (pil == 3)
    {
        bubble();
    }
    else if (pil == 4)
    {
        selection();
    }
    else if (pil == 5)
    {
        insertion();
    }
}

// BINARY SEARCH
void sequential()
{
    int n, angka, banyak = 0;
    bool ketemu;
    int data[20];
    int posisi[20];

    cout << "Masukan banyak data = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan data ke " << i + 1 << " = ";
        cin >> data[i];
    }

    cout << "\nangka yang di input = ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }

    cout << "\nMasukan angka yang dicari = ";
    cin >> angka;

    for (int i = 0; i < n; i++)
    {
        if (data[i] == angka)
        {
            ketemu = true;
            posisi[banyak] = i;
            banyak++;
        }
    }
    if (ketemu)
    {
        cout << "angka : " << angka << " ada : " << banyak;
        cout << "\npada posisi ke : ";
        for (int i = 0; i < banyak; i++)
        {
            cout << posisi[i] + 1 << " ";
        }
    }
    else
    {
        cout << "angka" << angka << " tidak ditemukan";
    }
}

// BINARY SEARCH
void binary()
{
    int n, angka, awal, akhir, tengah;
    int data[20];

    cout << "Masukan banyak data = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan data ke " << i + 1 << " = ";
        cin >> data[i];
    }

    cout << "\nangka yang di input = ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }

    awal = 0;
    akhir = n - 1;
    tengah = (awal + akhir) / 2;

    cout << "\nMasukan angka yang dicari = ";
    cin >> angka;

    while (awal <= akhir)
    {
        if (data[tengah] == angka)
        {
            cout << "angka : " << angka << " ada pada posisi: " << tengah + 1;
            break;
        }
        else if (data[tengah] > angka)
        {
            akhir = tengah - 1;
        }
        else
        {
            awal = tengah + 1;
        }

        tengah = (awal + akhir) / 2;
    }

    if (awal > akhir)
    {
        cout << "angka : " << angka << " tidak ditemukan";
    }
}

// BUBBLE SORT
void bubble()
{
    int n, y, param;
    int data[100];
    
    cout << "Masukan banyak data = ";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan data ke " << i + 1 << " = ";
        cin >> data[i];
    }
    
    cout << "\nangka yang di input >> ";
    y = n - 2;

    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    
    cout << "\nmulai proses sorting" << endl;

    while (y >= 0)
    {
        int index = 0;
        while (index <= y)
        {
            if (data[index] > data[index + 1])
            {
                param = data[index];
                data[index] = data[index + 1];
                data[index + 1] = param;
            }
            index++;
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
        y--;
    }
    
    cout << "\nhasil sortingnya adalah : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
}

// SELECTION SORT
void selection()
{
    int n, temp, min;
    int data[20];

    cout << "Masukan banyak data = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan data ke " << i + 1 << " = ";
        cin >> data[i];
    }

    cout << "\nangka yang di input >> ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }

    cout << "\nmulai proses sorting";
    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (data[min] > data[j])
            {
                min = j;
            }
        }

        temp = data[i];
        data[i] = data[min];
        data[min] = temp;

        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << data[i] << " ";
        }
    }

    cout << "\nhasil sortingnya adalah : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
}

// INSERTION SORT
void insertion()
{
    int n, j, key;
    int data[20];

    cout << "Masukan banyak data = ";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan data ke " << i + 1 << " = ";
        cin >> data[i];
    }

    cout << "\nangka yang di input >> ";
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    
    cout << "\nmulai proses sorting";
    for (int i = 1; i < n; i++)
    {
        key = data[i];
        j = i - 1;
        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
        
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << data[i] << " ";
        }
    }
    cout << "\nhasil sortingnya adalah : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
}

// MAIN PROGRAM
int main()
{
    cover();
    menu();
}
