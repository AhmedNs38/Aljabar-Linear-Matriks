#include <iostream.h>
#include <conio.h>

#define Nmaks 25

typedef int matriks[Nmaks][Nmaks];
void main()
{
 int colA,rowA,i,j,x;
 matriks A,B;
 char answer;

 do
 {
  clrscr();
  cout<<"PERKALIAN SKALAR MATRIKS"<<endl<<endl;
  cout<<"MATRIKS A : "<<endl;
  cout<<"Masukkan Jumlah Baris Matriks A : ";
  cin>>rowA;
  cout<<"Masukkan Jumlah Kolom Matriks A : ";
  cin>>colA;

 clrscr();
 cout<<"Masukkan Nilai Matriks A : "<<endl;
 for(i=1;i<=rowA;i++)
 {
  for(j=1;j<=colA;j++)
  {
   cout<<"A["<<i<<","<<j<<"] = ";
   cin>>A[i][j];
  }
 }
 cout<<endl<<endl;
 cout<<"Masukkan Bilangan Pengali = "; cin>>x;

 clrscr();
 cout<<endl;
 //Proses Penjumlahan Matriks
 for(i=1;i<=rowA;i++)
 {
  for(j=1;j<=colA;j++)
  {
   B[i][j] = A[i][j] * x;
  }
 }

 clrscr();
 //Output Matriks A
 gotoxy(1,5);
 cout<<"A = ";
 for(i=1;i<=rowA;i++)
 {
  for(j=1;j<=colA;j++)
  {
   gotoxy(2+4*j,2+2*i);
   cout<<A[i][j];
  }
 }

 //Output Matriks B
 gotoxy(1,15);
 cout<<"B = ";
 for(i=1;i<=rowA;i++)
 {
  for(j=1;j<=colA;j++)
  {
   gotoxy(2+4*j,12+2*i);
   cout<<B[i][j];
  }
 }

 getch();
 clrscr();
 cout<<"== PROGRAM SELESAI =="<<endl<<endl;
 cout<<"Mau Melakukan Perhitungan Lagi?? [Y/T] "; cin>>answer;
 }
 while ((answer == 'y') || (answer == 'Y'));
}

