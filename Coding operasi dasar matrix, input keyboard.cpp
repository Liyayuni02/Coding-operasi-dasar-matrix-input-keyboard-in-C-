/* Liya Yuni Astutik */

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main(){ 
int x, y, p,q, k,detA, detB, baris, kolom, baris1, kolom1;
int A[2][2], B[2][2], C[2][2], D[2][2], E[2][2], F[2][2], G[2][2], H[2][2], I[2][2], J[2][2];
printf("TUGAS I MATEMATIKA LANJUT\n");
printf("Liya Yuni Astutik\n");
char status;
do
{
printf("\nInput A[Baris][Kolom]: \n");
printf("Baris= ");
scanf("%d", &baris);
printf("Kolom= ");
scanf("%d", &kolom);
printf("\nInput B[Baris][Kolom]: \n");
printf("Baris= ");
scanf("%d", &baris1);
printf("Kolom= ");
scanf("%d", &kolom1);

printf("\nInput Matriks A : \n");
for (x=0;x<baris;x++){ 
for(y=0;y<kolom;y++){
	printf(" A[%d,%d] = ",x,y);
	scanf(" %d", &A[x][y]);
	}
}
printf("\nInput Matriks B : \n");
for (p=0;p<baris1;p++){ 
for(q=0;q<kolom1;q++){
	printf(" B[%d,%d] = ",p,q);
	scanf(" %d", &B[p][q]);
	}
}
printf("\nInput Konstanta Skalar: ");
printf("\n k = ");
scanf("%d", &k);

if(baris1==3 && kolom1==2){
	printf("\n Matriks A = |%d %d|\n", A[0][0],A[0][1]);
	printf("           = |%d %d|\n",A[1][0],A[1][1]);
	printf("           = |%d %d|\n",A[2][0],A[2][1]);
	printf("\n Matriks B = |%d %d|\n", B[0][0],B[0][1]);
	printf("           = |%d %d|\n",B[1][0],B[1][1]);

	printf("\n Maaf, Operasi Matriks Gagal, Karena Tidak Berordo n x n !!! \n");
	
	printf("\n Determinan A Error, Karena Matrix A Tidak Berordo n x n \n");
	detB=(B[0][0]*B[1][1])-(B[0][1]*B[1][0]);
	printf(" \n Determinan B = %d \n", detB);
	
	F[0][0]=A[0][0],
	F[0][1]=A[0][1];
	F[1][0]=A[1][0];
	F[1][1]=A[1][1];
	F[2][0]=A[2][0];
	F[2][1]=A[2][1];
	printf("\n Skalar A = %d x |%d %d| = |%d %d|",k,F[0][0],F[0][1], k*A[0][0], k*A[0][1]);
	printf("\n            %d x |%d %d| = |%d %d|",k,F[1][0],F[1][1], k*A[1][0], k*A[1][1]);
	printf("\n            %d x |%d %d| = |%d %d|\n",k,F[2][0],F[2][1], k*A[2][0], k*A[2][1]);
	J[0][0]=B[0][0],
	J[0][1]=B[0][1];
	J[1][0]=B[1][0];
	J[1][1]=B[1][1];
	printf("\n Skalar B = %d x |%d %d| = |%d %d|",k,J[0][0],J[0][1], k*B[0][0], k*B[0][1]);
	printf("\n            %d x |%d %d| = |%d %d|\n",k,J[1][0],J[1][1], k*B[1][0], k*B[1][1]);
}
else if(baris==2 && kolom==2){
	printf("\n Matriks A = |%d %d|\n", A[0][0],A[0][1]);
	printf("           = |%d %d|\n",A[1][0],A[1][1]);
	printf("\n Matriks B = |%d %d|\n", B[0][0],B[0][1]);
	printf("           = |%d %d|\n",B[1][0],B[1][1]);
	
	C[0][0]=(A[0][0]*B[0][0])+(A[0][1]*B[1][0]);
	C[0][1]=(A[0][0]*B[0][1])+(A[0][1]*B[1][1]);
	C[1][0]=(A[1][0]*B[0][0])+(A[1][1]*B[1][0]);
	C[1][1]=(A[1][0]*B[0][1])+(A[1][1]*B[1][1]);
	
	D[0][0]=A[0][0]+B[0][0];
	D[0][1]=A[0][1]+B[0][1];
	D[1][0]=A[1][0]+B[1][0];
	D[1][1]=A[1][1]+B[1][1];
	
	E[0][0]=A[0][0]-B[0][0];
	E[0][1]=A[0][1]-B[0][1];
	E[1][0]=A[1][0]-B[1][0];
	E[1][1]=A[1][1]-B[1][1];
	
	F[0][0]=(B[0][0]*A[0][0])+(B[0][1]*A[1][0]);
	F[0][1]=(B[0][0]*A[0][1])+(B[0][1]*A[1][1]);
	F[1][0]=(B[1][0]*A[0][0])+(B[1][1]*A[1][0]);
	F[1][1]=(B[1][0]*A[0][1])+(B[1][1]*A[1][1]);

	G[0][0]=B[0][0]+A[0][0];
	G[0][1]=B[0][1]+A[0][1];
	G[1][0]=B[1][0]+A[1][0];
	G[1][1]=B[1][1]+A[1][1];

	H[0][0]=B[0][0]-A[0][0];
	H[0][1]=B[0][1]-A[0][1];
	H[1][0]=B[1][0]-A[1][0];
	H[1][1]=B[1][1]-A[1][1];

	printf("\n A x B = |%d %d| x |%d %d| = |%d %d|\n", A[0][0],A[0][1],B[0][0],B[0][1],C[0][0],C[0][1]);
	printf("         |%d %d| x |%d %d| = |%d %d|\n", A[1][0],A[1][1],B[1][0],B[1][1],C[1][0],C[1][1]);
	printf("\n A + B = |%d %d| + |%d %d| = |%d %d|\n", A[0][0],A[0][1],B[0][0],B[0][1],D[0][0],D[0][1]);
	printf("         |%d %d| + |%d %d| = |%d %d|\n", A[1][0],A[1][1],B[1][0],B[1][1],D[1][0],D[1][1]);
	printf("\n A - B = |%d %d| - |%d %d| = |%d %d|\n", A[0][0],A[0][1],B[0][0],B[0][1],E[0][0],E[0][1]);
	printf("         |%d %d| - |%d %d| = |%d %d|\n", A[1][0],A[1][1],B[1][0],B[1][1],E[1][0],E[1][1]);
	printf("\n B x A = |%d %d| x |%d %d| = |%d %d|\n", B[0][0],B[0][1],A[0][0],A[0][1],F[0][0],F[0][1]);
	printf("         |%d %d| x |%d %d| = |%d %d|\n", B[1][0],B[1][1],A[1][0],A[1][1],F[1][0],F[1][1]);
	printf("\n B + A = |%d %d| + |%d %d| = |%d %d|\n", B[0][0],B[0][1],A[0][0],A[0][1],G[0][0],G[0][1]);
	printf("         |%d %d| + |%d %d| = |%d %d|\n", B[1][0],B[1][1],A[1][0],A[1][1],G[1][0],G[1][1]);
	printf("\n B - A = |%d %d| - |%d %d| = |%d %d|\n", B[0][0],B[0][1],A[0][0],A[0][1],H[0][0],H[0][1]);
	printf("         |%d %d| - |%d %d| = |%d %d|\n", B[1][0],B[1][1],A[1][0],A[1][1],H[1][0],H[1][1]);

	detA=(A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
	printf(" \n Determinan A = %d \n", detA);
	detB=(B[0][0]*B[1][1])-(B[0][1]*B[1][0]);
	printf(" \n Determinan B = %d \n", detB);
	
	I[0][0]=A[0][0],
	I[0][1]=A[0][1];
	I[1][0]=A[1][0];
	I[1][1]=A[1][1];
	printf("\n Skalar A = %d x |%d %d| = |%d %d|",k,I[0][0],I[0][1], k*A[0][0], k*A[0][1]);
	printf("\n            %d x |%d %d| = |%d %d|\n",k,I[1][0],I[1][1], k*A[1][0], k*A[1][1]);
	J[0][0]=B[0][0],
	J[0][1]=B[0][1];
	J[1][0]=B[1][0];
	J[1][1]=B[1][1];
	printf("\n Skalar B = %d x |%d %d| = |%d %d|",k,J[0][0],J[0][1], k*B[0][0], k*B[0][1]);
	printf("\n            %d x |%d %d| = |%d %d|\n",k,J[1][0],J[1][1], k*B[1][0], k*B[1][1]);
}
	else{
	printf("\nMaaf, Ordo Matriks Diluar Yang Dikehendaki !!!");
	printf("\nOperasi Matriks Tidak Dapat Dikerjakan !!!\n");
}
	cout<<"\nApakah Ingin Menghitung Matriks Kembali [Y/N]? ";
	cin>> status;
}
while(status=='Y'||status=='y');
cout<<"Selesai !!! "<<endl;
return(0);
getch();
}






