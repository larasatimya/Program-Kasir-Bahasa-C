#include <stdio.h>

int main()
{
   int nasigoreng, ayamgeprek, sotoayam, teh, jeruk;
   int uang, kembalian, total;
   char repetition = 'y';
   int counter;

   printf("-----SELAMAT DATANG DI RUMAH MAKAN SEMANGGI-----");

   printf("\n\nDaftar Menu");
   printf("\n1. Nasi Goreng Rp14.000");
   printf("\n2. Ayam Geprek Rp11.000");
   printf("\n3. Soto Ayam Rp15.000");
   printf("\n4. Es Teh Rp7.000");
   printf("\n5. Es Jeruk Rp10.000");


    while(repetition == 'y'){
   printf("\n\nMasukkan jumlah Nasi Goreng yang dibeli: ");
   scanf("%d",&nasigoreng);

   printf("Masukkan jumlah Ayam Geprek yang dibeli: ");
   scanf("%d",&ayamgeprek);

   printf("Masukkan jumlah Soto Ayam yang dibeli: ");
   scanf("%d",&sotoayam);

   printf("Masukkan jumlah Es Teh yang dibeli: ");
   scanf("%d",&teh);

   printf("Masukkan jumlah Es Jeruk yang dibeli: ");
   scanf("%d",&jeruk);


   printf("\ndo you want to repeat?\n");
        printf("answer (y/n): ");
        scanf(" %c", &repetition);
        counter++;
    }

   total=(nasigoreng*14000)+(ayamgeprek*11000)+(sotoayam*15000)+(teh*7000)+(jeruk*10000);
   printf("\nTotal: Rp%d\n",total);
   printf("Masukkan Uang Tunai: Rp");
   scanf("%d",&uang);


   printf("\n-----Struk-----\n");

   printf("Uang: Rp%d\n",uang);
   printf("Total: Rp%d\n",total);
   kembalian=uang-total;
   printf("Kembalian: Rp%d\n",kembalian);

   printf("---------------");


   return 0;

}
