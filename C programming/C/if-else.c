#include<stdio.h>
int main(){
	
	
	int vize,final;
	float okulortalama;
	float dersort;
	printf("vize notunu giriniz:");
	scanf("%d",&vize);
	printf("final notunu giriniz:");
	scanf("%d",&final);
	printf("üniversite ortalmasını giriniz:");
	scanf("%d",&okulortalama);
	dersort = ((vize + final)/2);
	
	
	if (dersort>90){
		
		printf("HARF NOTUNUZ: AA ve ders ortalamanız : %f",dersort);
	}
	else if(dersort>85 && 90>dersort){
		
		printf("HARF NOTUNUZ:BA ve ders ortalamanız : %f",dersort);
	}
	else if(dersort>80 && 85>dersort){
		
		printf("HARF NOTUNUZ:BB ve ders ortalamanız : %f",dersort);
	}
	else if(dersort>70 && 65>dersort){
		
		printf("HARF NOTUNUZ:CB ve ders ortalamanız : %f",dersort);
	}
	else if(dersort>65 && 70>dersort){
		
		printf("HARF NOTUNUZ:CC ve ders ortalamanız : %f",dersort);
	}
	else if(dersort>60 && 65>dersort){
		
		printf("HARF NOTUNUZ:DC ve ders ortalamanız : %f",dersort);
	}
	else if(dersort>55 && 60>dersort){
		
		printf("HARF NOTUNUZ:DD ve ders ortalamanız : %f",dersort);
	}
	else if(dersort>50 && 55>dersort){
		
		printf("HARF NOTUNUZ:FD ve ders ortalamanız : %f",dersort);
	}
	else if(dersort>45){
		
		printf("HARF NOTUNUZ:FF ve ders ortalamanız : %f",dersort);
	}
	
	return 0;
}
