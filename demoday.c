#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

typedef enum{false,true} boolean;

// const char* f1(){
// 	const char* sehir ="sakarya";
// 	return sehir;
// }

int DegerArttir(){
 static int sayac=0; // Statik bellek bölgesinde
 return ++sayac;
}
int topla(int a,int b){
 int sonuc = a+b; // Çalışma anı yığınında
 return sonuc;
}
int main(){
	int x=1,y;
	y=++x*12;
	printf("%d\n",y);
	int e=1,r;
	r=e++*12;
	printf("%d\n",r);
}


// printf("\n");
// int t = 1;
// printf("%d  \n",++t);
// int m = 1;
// printf("%d  %d \n",++m,m++);
// int r = 1;
// printf("%d  %d  %d \n",++r,r++,r);
// int e = 1;
// printf("%d  %d  %d  %d \n",++e,e++,e,++e);

//   int a = 1;
//   int b = ++a; // b = 2, a = 2
//   int c = a++; // c = 2, a = 3
//   printf("%d %d %d\n", a, b, c);


	// int s[] = {10,2,3,5,7,2,7};
	// int sayi;
	// printf("aranan" );	
	// scanf("%d",&sayi);
	// for(int index = 0; index <5 ; index++){
	// 	if(s[index]==sayi){
	// 		printf("aranan %d" ,s[index]);
	// 	}
	// }





	//scanf("%d",&deger);
	//printf("deger %d" , deger);
//	boolean a = true;
//	if (a == true){
//	printf("sakarya %d",a);
//	}
//	//scanf
// char name1[] = {'S','A'};
// printf("%c",name1[1]);
// const char* name2 = "Mehmet";
// printf("%s",name2);
// printf("%s",f1());
// void* object ;//object gibi
// object = "ert";
// int* s1;
// s1 = (int*)malloc(sizeof(int));
// *s1 = 2233;
// printf("%d",*s1);
// free(s1);
