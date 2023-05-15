#include <stdio.h>
#include <stdlib.h>


void elemanara(int dizi[], int boyut, int eleman) {
    int endusuk = 0, ortadeger, enbuyuk = boyut - 1;

    while (endusuk <= enbuyuk) {
        ortadeger = (enbuyuk + endusuk) / 2;
        if (dizi[ortadeger] == eleman) {
            printf("Eleman dizide var\n");
            return;
        } else if (dizi[ortadeger] < eleman) {
            endusuk = ortadeger + 1;
        } else {
            enbuyuk = ortadeger - 1;
        }
    }
    printf("Eleman dizide degil\n");
}


void dizisirala(int dizi[], int n){
	int i, eleman,j;
    for (i=1; i<n;i++){
	eleman=dizi[i];
	j= i -1;
	
	while (j>=0 && dizi[j]>eleman){
		dizi[j+1] = dizi[j];
		j=j-1;
	}
	dizi[j+1]=eleman;
	}
}
int main(int argc, char *argv[]) {
	int dizi[]={4,8,3,84,47,76,9,24,68};
	int index,arananeleman,diziboyutu=sizeof(dizi)/sizeof(dizi[0]);//diziyi siz verdiginizden direkt diziboyutu=9 da denebilirdi.
	
	
	dizisirala(dizi,diziboyutu);//binarysearch yaparken listenin sýralý olmasý gerekiyor o yüzden diziyi sýraladým. 
	for(index=0;index < diziboyutu; index++){
	printf("%d ",dizi[index]);	
	}
	
	printf("dizisinde aradiginiz eleman hangisidir?");
	scanf("%d",&arananeleman);
	
	elemanara(dizi,diziboyutu,arananeleman);
	
	
	return 0;
}
