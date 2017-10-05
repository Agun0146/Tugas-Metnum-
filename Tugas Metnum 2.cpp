#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	//input
	float x[10],y[10],h,g,jumlah;
	//other
	int q,p,k;
	//temp
	float x2[10],y2[10],xy[10];
	float error[10],y1[10];
	//Jumlah
	float Ex=0,Ey=0,Ex2=0,Ey2=0,Exy=0;
	float Eerror=0,Ey1=0;
	
	printf("\t\tREGRESI LINIER\n \t\n N max = 10\n\n");
	printf("Masukan Nilai N:"); scanf("%d",&k);
	for (q=1;q<=k;q++){
	printf("Masukan Nilai X %d:",q); scanf("%f",&x[q]);
	printf("Masukan Nilai Y %d:",q); scanf("%f",&y[q]);
	}
	
	
	
	system("cls");
	
	printf("|no|\tx\t|\t y \t |\t x^2\t |\t y^2\t |\t xy\t |\t error\t|\t y^1\t|\n");
	for (p=1;p<=k;p++){
		
		
		// isi nilai var iterasi
		x2[p]		=x[p]*x[p];
		y2[p]		=y[p]*y[p];
		xy[p]		=x[p]*y[p];
		// isi jumlah keseluruhan
		Ex= Ex+x[p];
		Ey= Ey+y[p];
		Exy= Exy+xy[p];
		Ex2= Ex2+x2[p];
		Ey2= Ey2+y2[p];
		//hitungan m dan c
		h= ((k*Exy)-(Ex*Ey))/((k*Ex2)-(Ex*Ex));
		g= ((Ey*Ex2)-(Ex*Exy))/((k*Ex2)-(Ex*Ex));
		
		y1[p]= h*x[p]+g;
		error[p]= y[p]-y1[p];	
		Eerror= Eerror+error[p];
		Ey1= Ey1+y1[p];
		//cek agar absolut
		if
		(g<=0){
			g=g*(-1);
		}
		if(y1[p]<0){
			y1[p]=y1[p]*(-1);
		}
		if(error[p]<0){
			error[p]=error[p]*(-1);
			
		}
		//cetak Nilai
		printf (" %d\t",p);
		printf ("%f\t",x[p]);
		printf ("%f\t",y[p]);
		printf ("%f\t",x2[p]);
		printf ("%f\t",y2[p]);
		printf ("%f\t",xy[p]);
		printf ("%f\t",error[p]);
		printf ("%f\n",y1[p]);
	
	}
	
	printf("Jumlah x=%f\t",Ex);
	printf("y=%f\t",Ey);
	printf("x^2=%f\t",Ex2);
	printf("y^2=%f\t",Ey2);
	printf("xy=%f\t",Exy);
	printf("error=%f\t",Eerror);
	printf("y^1=%f\t",Ey1);
	printf("\n\nFungsi Utamanya\n F(x)=%f(x)+%f",h,g);
	printf("\nmaka untuk F(%d)=%f(%d)+%f",k,h,k,g);
	jumlah=(h*k)+g;
	printf("\nHasilnya adalah : +- %f",jumlah);
		
	
	getch();
	
	return 0;
}
