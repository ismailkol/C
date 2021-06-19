#include<stdio.h>
int main(){
	
	
	int vize,final;
	float okulortalama;
	float dersOrt;
	printf("vize notunu giriniz:");
	scanf("%d",&vize);
	printf("final notunu giriniz:");
	scanf("%d",&final);
	printf("üniversite ortalmasýný giriniz:");
	scanf("%d",&okulortalama);
	dersort = ((vize + final)/2);
	
	
	if (dersOrt>90){
		
		printf("HARF NOTUNUZ: AA ve ders ortalamanýz : %f",dersOrt);
	}
	else if(dersOrt>85 && 90>dersort){
		
		printf("HARF NOTUNUZ:BA ve ders ortalamanýz : %f",dersOrt);
	}
	else if(dersOrt>80 && 85>dersort){
		
		printf("HARF NOTUNUZ:BB ve ders ortalamanýz : %f",dersOrt);
	}
	else if(dersOrt>70 && 65>dersort){
		
		printf("HARF NOTUNUZ:CB ve ders ortalamanýz : %f",dersOrt);
	}
	else if(dersOrt>65 && 70>dersort){
		
		printf("HARF NOTUNUZ:CC ve ders ortalamanýz : %f",dersOrt);
	}
	else if(dersOrt>60 && 65>dersort){
		
		printf("HARF NOTUNUZ:DC ve ders ortalamanýz : %f",dersOrt);
	}
	else if(dersOrt>55 && 60>dersort){
		
		printf("HARF NOTUNUZ:DD ve ders ortalamanýz : %f",dersOrt);
	}
	else if(dersOrt>50 && 55>dersOrt){
		
		printf("HARF NOTUNUZ:FD ve ders ortalamanýz : %f",dersOrt);
	}
	else if(dersOrt>45){
		
		printf("HARF NOTUNUZ:FF ve ders ortalamanýz : %f",dersOrt);
	}
	
	return 0;
}
