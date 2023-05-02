#include<iostream>
#include<math.h>
#include<ctime>
using namespace std;
void exit();
void perhitungan();
void login();
class tabel
{
    public:
    void daftar()
    {
        cout<<"\n===================== Daftar Harga =================\n";
        int daftar [9][2]={{1,12000},{2,10000},{3,10000},{4,10000},{5,10000},{6,10000},{7,10000},{8,10000},{9,10000}};
        cout<<"|| No ||\t||  Nama Barang  ||\t|| Harga ||\n";
        cout<<"===================================================\n";
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<"|| "<<daftar[i][j]<<" ||\t";
                if(i==0 &&j==0)
                {
                    cout<<"        || Sop Buah      ||\t";
                }
                if(i==1 &&j==0)
                {
                    cout<<"        || Jus Alpukat   ||\t";
                } 
                if(i==2 &&j==0)
                { 
                    cout<<"        || Jus Mangga    ||\t";
                }
                if(i==3 &&j==0)
                {
                    cout<<"        || Jus Melon     ||\t";
                }
                if(i==4 &&j==0)
                {  
                    cout<<"        || Jus Jeruk     ||\t";
                }
                if(i==5 &&j==0)
                {
                    cout<<"        || Jus Buah Naga ||\t";
                }
                if(i==6&&j==0)
                {
                    cout<<"        || Jus Jambu     ||\t";
                }
                if(i==7 &&j==0)
                {
                    cout<<"        || Jus Strawberry||\t";
                }
                if(i==8 &&j==0)
                {
                    cout<<"        || Jus Pepaya    ||\t";
                }
            }
            cout<<endl;
        }
        cout<<"===================================================\n";
    }
};
int main()
{
    login();
}
void login()
{
    string user,pass;
    awal:
    system("cls");
    cout<<"-------------------- Login Kasir ---------------\n";
    cout<<"username: ";
    cin>>user;
    cout<<"password: ";
    cin>>pass;
    if(user=="ilham"&&pass=="ilham123")
    {
        cout<<"login anda Berhasil\n";
        system("pause");
        cout<<"\n";
        system("cls");
        perhitungan();

    }
    else
    {
        system("cls");
        cout<<"\nUsername atau Password yang anda masukkan salah\n";
        goto awal;
    }
}
void perhitungan()
{
    int beli,kode[1000],harga[200],jumlah_barang[200],total_semuanya,total_awal[200],diskon,bayar,page;
    string nama[100];
    string pelanggan;
    time_t now = time(0);
    char* date =ctime(&now);
    system("cls");
    cout<<"====================================================\n";
    cout<<"kasir: Ilham Maulana\n";
    cout<<"No Handphone: 083917394713\n";
    cout<<date;
    tabel awal;
    awal.daftar();
    cout<<"masukkan nama pelanggan: ";
    cin>>pelanggan;
    cout<<"\n=============== Inputkan Barang =================\n";
    cout<<"masukkan jumlah jenis: ";
    cin>>beli;
    for(int a=0;a<beli;a++)
    {
        cout<<"\nBarang ke "<<a+1<<"\n";
        cout<<"Masukkan kode barang: ";
        cin>>kode[a];
        if(kode[a]==1)
        {
            nama[a]="Sop_Buah";
            harga[a]=12000;
        }
        if(kode[a]==2)
        {
            nama[a]="Jus_Alpukat";
            harga[a]=10000;
        }
        if(kode[a]==3)
        {
            nama[a]="Jus_Mangga";
            harga[a]=10000;
        }
        if(kode[a]==4)
        {
            nama[a]="Jus_Melon";
            harga[a]=10000;
        }
        if(kode[a]==5)
        {
            nama[a]="Jus_Jeruk";
            harga[a]=10000;
        }
        if(kode[a]==6)
        {
            nama[a]="Jus_Buah_Naga";
            harga[a]=10000;
        }
        if(kode[a]==7)
        {
            nama[a]="Jus_Jambu";
            harga[a]=10000;
        }
        if(kode[a]==8)
        {
            nama[a]="Jus_strawberry";
            harga[a]=10000;
        }
        if(kode[a]==9)
        {
            nama[a]="Jus_Pepaya";
            harga[a]=10000;
        }
        cout<<"jumlah barang: ";
        cin>>jumlah_barang[a];
        total_awal[a]=jumlah_barang[a]*harga[a];
        total_semuanya+=total_awal[a];
    }
    system("cls");
    cout<<"\n><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><\n";
    cout<<"                        Instana Juice                         \n";
    cout<<"           jln. karang Jalak, Kesambi, Cirebon                \n";
    cout<<"--------------------------------------------------------------\n";
    cout<<"kasir: Ilham Maulana\n";
    cout<<"No Handphone: 083917394713\n";
    cout<<"member: "<<pelanggan<<endl;
    cout<<date;
    cout<<"--------------------------------------------------------------\n";
    for(int i=0;i<beli;i++)
    {
        cout<<nama[i]<<"\t "<<jumlah_barang[i]<<"  "<<harga[i]<<"\t"<<total_awal[i]<<endl;
    }
    if(total_semuanya>=150000)
    {
        diskon=0.40*total_semuanya;
    }
    if(total_semuanya>=100000)
    {
        diskon=0.30*total_semuanya;
    }
    if(total_semuanya>=50000)
    {
        diskon=0.20*total_semuanya;
    }
    else
    {
        diskon=0;
    }
    cout<<"==============================================================\n";
    cout<<"subtotal: "<<total_semuanya<<endl;
    cout<<"diskon: "<<diskon<<endl;
    cout<<"total: "<<total_semuanya-diskon<<endl;
    cout<<"bayar: ";
    cin>>bayar;
    cout<<"==============================================================\n";
    cout<<"kembalian: "<<(bayar-(total_semuanya-diskon))<<endl;
    cout<<"                 Terimakasih\n";
    system("pause");
    cout<<"1. Pemrogramman kasir\n";
    cout<<"2. logout\n";
    cout<<"3. exit\n";
    cout<<"page: ";
    cin>>page;
    if(page==1)
    {
        perhitungan();
    }
    if(page==2)
    {
        login();
    }
    if(page==3)
    {
        exit();
    }
}
void exit()
{
    system("cls");
    cout<<"\n\n\n\nsee you later\n\n\n\n";
}