#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL,"Turkish");
	int i,j,dizi[7]={5,1,9,4,8,3,6},deger,N=6;
	printf("-----orjinal dizi-----\n");
	for(i=0;i<=6;i++){
		printf("%d ",dizi[i]);
	}
// boble sort
for (i=1;i<6;i++){
	 
	 for(j=0;j<6-i;j++){
	 
	 	if(dizi[i]>dizi[j]){
			deger=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=deger;
		}
	}
	printf ("\n----sýralý dizi-----\n %d ");
    for(i=0;i<N;i++)
        printf("%d   ",dizi[i]); 
	
	}
}
	
