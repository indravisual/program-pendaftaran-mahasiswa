#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include<stdlib.h>

int main() {
int kode;

	{struct identitas
	{

	char nam[20],np[20],no[20],almt[20],jur[15],telah[20],pen[3];
	int id[100], lahir[8];

	int kode,a,ku;


};
 int a=-1;
 identitas id[100];
 char jawab, lagi, pass[6]; // variabel untuk pengulangan
char na[20], nma[20], nim[15], nh[25], ket[25], nama [20], kelas [8], abs[10], jursn[5];
int kode, m, i, k, kk, ns, kls, n, spp, up, tb, nm, nu, nq, n_aktif, n_hadir, dnr, total, rata, tmp, data[5];;
float ak, nb, mid, uas, quis, aktif, hadir;

 char mad;
mad ='Y';
while (mad=='Y' || mad=='y')
    {{system("cls");}
	  int m,i;

     for(m=1;m<20;m++)
 {
  delay(120);
  gotoxy(m-1,0);cout<<' ';
  gotoxy(m,0);cout<<" SELAMAT DATANG DIPROGRAM PENDAFTARAN MAHASISWA AMIKOM";

  cout<<endl;
 }
{kp:
   cout<<setw(60); cout <<"----------------------------------------"<<endl;

cout<<setw(38); cout <<"LAYANAN YANG ADA :"<<endl;
cout<<setw(33); cout <<"1. PENDAFTARAN"<<endl;
cout<<setw(35); cout <<"2. LIST PENDAFTAR"<<endl;
cout<<setw(27); cout <<"3. UPDATE DATA PENDAFTAR"<<endl;
cout<<setw(47); cout <<"4. HAPUS PENDAFTARAN"<<endl;

cout<<setw(52); cout <<"Silahkan pilih menu [1...2...3...4]:"; cin>>kode;
}
switch(kode) {{system("cls");}

	 case 1 :
	 	{{system("cls");}


 { //awal menu 1
       ku: //label
       a++; //untuk pengisian dan penambahan jika data yang pertama sudah di isi maka akan lanjut ke data selanjutnya
       system("cls"); //untuk menghapus screen fungsinya sama dengan clrscr()
       cout<<"\t|+==================================+\n";
       cout<<"\t|           PENDAFTARAN             |\n";
       cout<<"\t|+==================================+\n";
       cout<<"\t|No Peserta : ";cin>>id[a].np;
       cout<<"\t|Nama       : ";cin>>id[a].nam;
       cout<<"\t|Alamat     : ";cin>>id[a].almt;
       cout<<"\t|No.Hp      : ";cin>>id[a].no;
       cout<<"\t|Tempat Lahir     : ";cin>>id[a].telah;
       cout<<"\t|Tanggal Lahir     : ";cin>>id[a].lahir;
       cout<<"\t|Jenjang Pendidikan    : ";cin>>id[a].pend;
       cout<<"\t|jurusan    : ";cin>>id[a].jur;
       cout<<"\n";
       cout<<"\t|+==================================+\n";
       cout<<"\t|           INPUTAN NILAI             |\n";
       cout<<"\t|+==================================+\n";
       cout<<"Nilai MID       : ";cin>>nm;
       cout<<"Nilai UAS       : ";cin>>nu;
       cout<<"Nilai QUIS      : ";cin>>nq;
       cout<<"Nilai KEAKTIFAN : ";cin>>n_aktif;
       cout<<"Nilai KEHADIRAN : ";cin>>n_hadir;
       cout <<"================================"<<endl;
       cout<<"+=================================+\n";
       cout<<"|     Data berhasil diproses      |\n";
       cout<<"|                                 |\n";
       cout<<"|           Terima kasih          |\n";
       cout<<"+=================================+\n";
       ask: //label
       cout<<"Input Data Pengunjung Selanjutnya ? (y/t) : ";cin>>lagi;
if (lagi=='y' || lagi=='Y')
        {
         goto ku; //goto berfungsi untuk membuat lompatan pada program
        }
       else if (lagi=='t' || lagi=='T')
        {
         goto kp;
        }
       else
        {
         cout<<"Input salah !!! \n";
         goto ask;
        }
    }}
break;
