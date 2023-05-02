#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
void menu_ind();
void menu_ing();
void saldo_ing();
void saldo_ind();
void transfer_ing();
void transfer_ind();
void tunai_ind();
void tunai_ing();
void exit();
void keluar();
void indo();
void bing();
int main()
{
    int pilih,pilihan;
    char kembali,back;
    system("cls");
    cout<<"\n\n\t\tSilakan Pilih Bahasa Anda\n";
    cout<<"\t\t-------------------------\n";
    cout<<"\t\tPlease Select Your language\n";
    cout<<"\t\t\t1. Indonesia\n";
    cout<<"\t\t\t2. English\n";
    cout<<"\t\tlanguage: ";
    cin>>pilih;
    if(pilih==1)
    {
        system("cls");
        indo();
        mulai:
        cout<<"\n\nApakah anda ingin kembali ke manu(y/t): ";
        cin>>kembali;
        if(kembali=='y'||kembali=='Y')
        {
            system("cls");
            menu_ind();
            goto mulai;
        }
        if(kembali=='t'||kembali=='T')
        {
            keluar();
        }
    }
    if(pilih==2)
    {
        system("cls");
        bing();
        start:
        cout<<"\n\nDo you want to go back to manu(y/n): ";
        cin>>back;
        if(back=='y'||back=='Y')
        {
            system("cls");
            menu_ing();
            goto start;
        }
        if(back=='t'||back=='T')
        {
            exit();
        }
    }
}
void indo()
{
    int pin;
    pin:
    cout<<"Silakan Masukkan Pin Anda: ";
    cin>>pin;
    if(pin==300520)
    {
        system("cls");
        cout<<"Anda berhasil login\n";
        system("pause");
        system("cls");
        menu_ind();
    }
    else
    {
        system("cls");
        cout<<"pin yang anda masukkan salah\n";
        goto pin;
    }
}
void menu_ind()
{
    int pilihan;
    cout<<"1. Informasi Saldo\n";
    cout<<"2. Penarikan Tunai\n";
    cout<<"3. Transfer\n";
    cout<<"page: ";
    cin>>pilihan;
    if (pilihan==1)
    {
        saldo_ind();
    }
    if (pilihan==2)
    {
        tunai_ind();
    }
    if (pilihan==3)
    {
        transfer_ind();
    }
}
void bing()
{
    int pin;
    pin:
    cout<<"Please Input Your pin: ";
    cin>>pin;
    if(pin==300520)
    {
        system("cls");
        cout<<"login successfully\n";
        system("pause");
        system("cls");
        menu_ing();
    }
    else
    {
        system("cls");
        cout<<"the pin you entered is wrong\n";
        goto pin;
    }
}
void menu_ing()
{
    int pilihan;
    cout<<"1. Balance Information\n";
    cout<<"2. Cash withdraw\n";
    cout<<"3. Transfer\n";
    cout<<"choose: ";
    cin>>pilihan;
    if (pilihan==1)
    {
        saldo_ing();
    }
    if (pilihan==2)
    {
        tunai_ing();
    }
    if (pilihan==3)
    {
        transfer_ing();
    }
}
void saldo_ind()
{
    int saldo=2000000;
    cout<<"saldo anda : " << saldo;
}
void saldo_ing()
{
    int saldo=2000000;
    cout<<"your saldo: " << saldo;
}
void tunai_ind()
{
    int saldo;
    cout<<"silakan pilih saldo yang ingin anda tarik\n";
    cout<<"1. 50000\n";
    cout<<"2. 100000\n";
    cout<<"3. 200000\n";
    cout<<"4. 300000\n";
    cout<<"5. 500000\n";
    cout<<"6. 1000000\n";
    cout<<"7. 2000000\n";
    cout<<"8. 5000000\n";
    cout<<"pilih: ";
    cin>>saldo;
}
void tunai_ing()
{
    int saldo;
    cout<<"please select the balance you want to withdraw\n";
    cout<<"1. 50000\n";
    cout<<"2. 100000\n";
    cout<<"3. 200000\n";
    cout<<"4. 300000\n";
    cout<<"5. 500000\n";
    cout<<"6. 1000000\n";
    cout<<"7. 2000000\n";
    cout<<"8. 5000000\n";
    cout<<"pilih: ";
    cin>>saldo;
}
void transfer_ing()
{
    double jumlah,transfer;
    cout<<"please enter the account number you want to go to: ";
    cin>>transfer;
    cout<<"\nthe amount you want to transfer: ";
    cin>>jumlah;
}
void transfer_ind()
{
    double transfer,jumlah;
    cout<<"silakan masukan nomor rekening yang ingin anda tuju: ";
    cin>>transfer;
    cout<<"\njumlah yang ingin anda tranfer: ";
    cin>>jumlah;
}
void keluar()
{
    system("cls");
    cout<<"\n\n\nterimakasih sudah menggunakan jasa kami\n\n\n";
}
void exit()
{
    system("cls");
    cout<<"\n\n\n\nthank you for using our service\n\n\n";
}