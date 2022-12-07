/*
Ad Soyad: Emre
Numara: Say
Şube: 1
*/
#include <stdio.h>
#define SAT 5
#define SUT 4

/*
Bu fonksiyonu herhangi bir büyüklükteki matrisi ekrana yazdıracak şekilde
kodlayınız. 
*/
void matris_yazdir(int matrisA[SAT][SUT],int matrisB[SAT][SUT],int matrisT[SAT][SUT],int a,int b){
	for(a=0;a<5;a++){
		for(b=0;b<4;b++){
			printf("%4d",matrisA[SAT][SUT]);
		}
			printf("\n");
	
}
for(a=0;a<5;a++){
		for(b=0;b<4;b++){
			printf("%4d",matrisB[SAT][SUT]);
		}
		    printf("\n");
	
}
	for(a=0;a<5;a++){
		for(b=0;b<4;b++){
			matrisT[SAT][SUT]=matrisA[SAT][SUT]+matrisB[SAT][SUT];
		}
	}
	for(a=0;a<5;a++){
		for(b=0;b<4;b++){
			printf("%4d",matrisT[SAT][SUT]);
		}
		printf("\n");
	}

}


int main()
{

    int matrisA[SAT][SUT], matrisB[SAT][SUT], matrisT[SAT][SUT];

    // Burada matrisA ve matrisB ye 0 ile 100 arasında rastgele değerler atayan kodu yazınız. 
    int a,b;
	for(a=0;a<5;a++){
		for(b=0;b<4;b++){
			scanf("%d",&matrisA[SAT][SUT]);
		}
	}
	for(a=0;a<5;a++){
		for(b=0;b<4;b++){
			scanf("%d",&matrisB[SAT][SUT]);
		}
	}


    // yukarıda tanımlı fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdırınız. 
    matris_yazdir(matrisA[SAT][SUT], matrisB[SAT][SUT],matrisT[SAT][SUT],a,b);
    

    // Burada iki matrisA ve matrisB yi toplayarak sonucunu matrisT ye atayınız. 

    return 0;
}