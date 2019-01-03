#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include<stdlib.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(unsigned int mseconds)
{
clock_t goal=mseconds+clock();
while(goal>clock());
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
{ system ("color 70");}
	int kode;

	{struct identitas
	{

	char nam[20],np[20],no[20],almt[20],jur[15];
	int id[100];

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
  gotoxy(m,0);cout<<" SELAMAT DATANG DIPROGRAM SEKOLAH SMA DNR ";

  cout<<endl;
 }

{kp:

cout<<setw(60); cout <<"----------------------------------------"<<endl;

cout<<setw(38); cout <<"LAYANAN YANG ADA :"<<endl;
cout<<setw(33); cout <<"1 PENDAFTARAN"<<endl;
cout<<setw(35); cout <<"2 BIAYA SEKOLAH"<<endl;
cout<<setw(27); cout <<"3 NILAI"<<endl;
cout<<setw(47); cout <<"4 NAMA SISWA YANG MENDAFTAR"<<endl;

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
       cout<<"\t|Nama       : ";cin>>id[a].nam;
       cout<<"\t|No Peserta : ";cin>>id[a].np;
       cout<<"\t|No.Hp      : ";cin>>id[a].no;
       cout<<"\t|jurusan    : ";cin>>id[a].jur;
       cout<<"\t|Alamat     : ";cin>>id[a].almt;
       cout<<"\n";
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

case 2 :
	{{system("cls");}
	cout <<"|---------------------------------------|"<<endl;
cout <<"|	DAFTAR BIAYA SMA DNR  		|"<<endl;
cout <<"|---------------------------------------|"<<endl;
cout <<"| Kelas | SPP		| Uang Bangunan |"<<endl;
cout <<"| 1	| Rp.20000	| Rp.800000	|"<<endl;
cout <<"| 2	| Rp.15000	| Rp.500000	|"<<endl;
cout <<"| 3	| Rp.10000	| Rp.200000	|"<<endl;
cout <<"|---------------------------------------|"<<endl<<endl;

	cout<<"Nama		= ";cin>>na;
	cout<<"Nis 		= ";cin>>n;
	cout<<"Kelas [1/2/3]	= ";cin>>k;

	if (k == 1){ //Tingkatan kelas, beda kelas beda biayaya
	spp=20000;
	up=800000;
	}
	else if (k==2){
	spp=15000;
	up=500000;
	}
	else if (k==3){
	spp=10000;
	up=200000;
	}
	tb=up+spp; //proses penjumlahan biayaya sekolah
	cout <<"--------------------------"<<endl<<endl;
	cout<<"Uang SPP	="<<spp<<endl;
	cout<<"Uang pembangunan="<<up<<endl;
	cout<<"Total Biaya	="<<tb<<endl;
	cout <<"--------------------------"<<endl<<endl;
	}
	break;

	case 3 : {
{system("cls");}
 cout <<"DAFTAR NILAI SISWA :"<<endl;
 cout <<"==================="<<endl<<endl;

  cout<<"Nama Siswa/Siswi: "; ;cin>>na;;
  cout<<"Nis             : ";cin>>n;;
  cout<<"jurusan         : ";cin>>jursn;;
  cout<<"Kelas           : ";cin>>k;
  cout <<"================================"<<endl;
  cout<<"Nilai MID       : ";cin>>nm;
  cout<<"Nilai UAS       : ";cin>>nu;
  cout<<"Nilai QUIS      : ";cin>>nq;
  cout<<"Nilai KEAKTIFAN : ";cin>>n_aktif;
  cout<<"Nilai KEHADIRAN : ";cin>>n_hadir;
  cout <<"================================"<<endl;

  mid = nm*0.30;
  uas = nu*0.35;
  quis = nq*0.20;
  aktif = n_aktif*0.05;
  hadir = n_hadir*0.10;
  ak = mid+uas+quis+aktif+hadir;
 cout<<"Nilai AKHIR  : "<<ak<<endl;
  if (ak >=80 && ak <=100)
   {
		strcpy(nh,"A");
		nb = 4;
		strcpy(ket,"Excellent");
		}
 else if (ak >=81 && ak<=85){
        strcpy(nh,"A-");
        nb = 3,75;
        strcpy (ket,"ALMOST EXCELLENT");
		}
else if (ak >=76 && ak<=80){
        strcpy(nh,"B+");
        nb = 3,5;
        strcpy (ket,"BETTER");
		}
else if (ak >=71 && ak<=75){
        strcpy(nh,"B");
        nb = 3,25;
        strcpy (ket,"GOOD");
		}
else if (ak >=66 && ak<=70){
        strcpy(nh,"B-");
        nb = 3,0;
        strcpy (ket,"NEARLY BETTER");
		}
else if (ak >=64 && ak<=65){
        strcpy(nh,"C+");
        nb = 2,75;
        strcpy (ket,"MORE THAN ENOUGH");
		}
else if (ak >=56 && ak<=60){
        strcpy(nh,"C");
        nb = 2,5;
        strcpy (ket,"ENOUGH");
	}
else if (ak >=46 && ak<=55){
        strcpy(nh,"D");
        nb = 2;
        strcpy (ket,"POOR");
		}
else {
	strcpy(nh,"E");
	nb = 0;
	strcpy (ket,"VERRY POOR"); }
 cout<<"Nilai Huruf : "<<nh<<endl;
 cout<<"Nilai Bobot : "<<nb<<endl;
 cout<<"Keterangan  : "<<ket<<endl;

}
break;

case 4 : {
	 {
       system("cls");
    	cout<<"+==================================+\n";
       cout<<"|      SISWA YANG MENDAFTAR         |\n";
       cout<<"+==================================+\n";
       for (n=0;n<=a;n++){
       cout<<"Nama	   : "   <<id[n].nam<<endl;
       cout<<"No Peserta : "<<id[n].np<<endl;
       cout<<"No.Hp	   : "<<id[n].no<<endl;
       cout<<"jurusan    : "<<id[n].jur<<endl;
       cout<<"Alamat     : " <<id[n].almt<<endl;
       cout<<"\n";

        }

break;
}



default:{
cout<<"Menu pilihan Salah!!"<<endl;
break;}

}}
cout<<"Masih Ada Data(y/t) = ";cin>>mad;
cout<<endl;
}}}
