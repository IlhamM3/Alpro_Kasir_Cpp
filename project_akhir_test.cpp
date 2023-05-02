#include<iostream>
#include<math.h>
#include<ctime>
using namespace std;
void exit();
void login();
void perhitungan();
class tabel
{
    public:
    void daftar()
    {
        string pilih;
        cout<<"\n=================== DAFTAR HARGA =====================\n";
        int daftar[9][2]={{1,12000},{2,10000},{3,10000},{4,10000},{5,10000},{6,10000},{7,10000},{8,10000},{9,10000}};
        cout<<"|| NO ||\t||   Nama Barang   ||\t  || Harga  ||\n";
        cout<<"======================================================\n";
        for(int i=0;i<9;i++)
        {
            for(int a=0;a<2;a++)
            {
                cout<<"|| "<<daftar[i][a]<<"  ||"<<"\t";
                if(i==0 &&a==0)
                {
                    cout<<"|| Sop_Buah        ||\t  "; 
                }
                if(i==1 &&a==0)
                {
                    cout<<"|| Jus_Alpukat     ||\t  "; 
                }
                if(i==2 &&a==0)
                {
                    cout<<"|| Jus_Mangga      ||\t  "; 
                }
                if(i==3 &&a==0)
                {
                    cout<<"|| Jus_Melon       ||\t  "; 
                }
                if(i==4 &&a==0)
                {
                    cout<<"|| Jus_Jeruk       ||\t  "; 
                }
                if(i==5 &&a==0)
                {
                    cout<<"|| Jus_Buah_Naga   ||\t  "; 
                }
                if(i==6 &&a==0)
                {
                    cout<<"|| Jus_jambu       ||\t  "; 
                }
                if(i==7 &&a==0)
                {
                    cout<<"|| Jus_strawberry  ||\t  "; 
                }
                if(i==8 &&a==0)
                {
                    cout<<"|| Jus_Pepaya      ||\t  "; 
                }
            }
            cout<<endl;
        }
        cout<<"======================================================\n"; 
    }
};
int main()
{
    login();
}
void perhitungan()
{
    double beli,bayar,diskon,jumlah_barang[100],harga[200],total_awal[100],total_semuanya;
    int kode[1000],page;
    string nama[50];
    string pelanggan;
    time_t now = time(0);
    char* dt = ctime(&now);
    system("cls");
    cout<<"======================================================\n";
    cout<<"cashier: Ilham Maulana \n";
    cout<<"No Handphone: 087330148462\n";
    cout<<dt;
    tabel awal;
    awal.daftar();
    cout<<"Masukkan Nama Pelanggan: ";
    cin>>pelanggan;
    cout<<"\n========= inputkan barang yang anda beli =============\n";
    cout<<"masukan jumlah jenis barang yang anda beli: ";
    cin>>beli;
    for(int a=0;a<beli;a++)
    {
        cout<<"\nBarang ke "<<a+1<<"\n";
        cout<<"Nama kode barang : ";
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
            nama[a]="Jus_Strawberry";
            harga[a]=10000;
                
        }
        if(kode[a]==9)
        {
            nama[a]="Jus_Pepaya";
            harga[a]=10000;
        }
        cout<<"jumlah yang dibeli: ";
        cin>>jumlah_barang[a];
        total_awal[a]=jumlah_barang[a]*harga[a];
        total_semuanya+=total_awal[a];
    }
    system("cls");
    cout<<"\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><\n";
    cout<<"                      Istana juice                        \n";
    cout<<"      Aneka Juice & Sop Buah Punya Rasa, Karang Jalak      \n";
    cout<<"            Jln. Karang jalak, Kesambi, Cirebon            \n";
    cout<<"                    0319 1042 2609                         \n";
    cout<<"-------------------------------------------------------\n";
    cout<<"cashier: Ilham Maulana \n";
    cout<<"No Handphone: 087330148462\n";
    cout<<"member: "<<pelanggan<<"\n";
    cout<<dt;
    cout<<"-------------------------------------------------------\n";
    for (int i=0; i<beli; i++ )
    {
        cout<<nama[i]<<"\t  "<<jumlah_barang[i]<<"    "<<harga[i]<<"\t"<<total_awal[i]<<endl;
    }
    if(total_semuanya>=150000)
    {
        diskon=0.40*total_semuanya;
    }
    if(total_semuanya>= 100000)
    {
        diskon=0.30*total_semuanya;
    }
    if(total_semuanya>= 50000)
    {
        diskon=0.20*total_semuanya;
    }
    else 
    {
        diskon=0;
    }
    cout<<"=======================================================\n";
    cout<<"subtotal : \t"<<total_semuanya<<endl;
    cout<<"Diskon   : \t"<<diskon<<endl;
    cout<<"Total    : \t"<<total_semuanya - diskon<<endl;
    cout<<"cash     : \t";
    cin>>bayar;
    cout<<"=======================================================\n";
    cout<<"change : \t"<<(bayar-(total_semuanya-diskon))<<endl;
    cout<<"-------------------------------------------------------\n";
    cout<<"                     Thank You\n";
    cout<<"                 Please Come Again\n";
    cout<<"Layanan Aneka Juice & Sop Buah Punya Rasa, Karang Jalak\n";
    cout<<"         semoga anda puas dengan layanan kami          \n";
    cout<<"             sopbuahpunyarasa01@gmail.com              \n";
    cout<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><\n";
    system("pause");
    cout<<"\n";
    cout<<"1. pemrograman kasir\n";
    cout<<"2. logout and login\n";
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
        system("cls");
        exit();
    }
}
void login()
{
	string user,pass;
    wal:
    system("cls");
    cout<<"\n\n";
    cout<<"--------------------- login Kasir --------------------\n";
    cout << "Username : "; 
    cin>>user;
    cout << "Password : ";
    cin >>pass;
    system("cls");
    if (user=="ilham"&&pass=="ilham123")
    {
        cout<<"login anda berhasil\n";
        system("pause");
        cout<<"\n";
        system("cls");
        perhitungan();
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\nusername atau password mungkin salah            ";
        goto wal;
    }
}
void exit()
{
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"           sampai jumpa lagi besok dengan semangat yang baru  \n";
    cout<<"                              see you later                      \n";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

}