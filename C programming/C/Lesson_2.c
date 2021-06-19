


#include<stdio.h>
int main()   {
	
	int a=5;
	char b=66;
	char c='B';
	float d=4.21;
	double e=6.73263223633;
	
	
	printf("%d %c %9d\t %.1f %.2f %s\n" ,a,b,c,d,e,"İSMAİL KOL");
	/*burdakı d yanı int basımında %(girmek istedigimiz sayı)d ıslemınde ne kadar bosluk bırakmak ıstedıgımızdır %.(girmek istedigimiz sayı)f ıslemı ıse vırgulden sonra kac basamak gırmek 
	ıstedıgımızdır*/
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	/*burda kullanıdıgımız %d neden kullandıgınız dıceksınız bunun sebebı byte bır tam sayı oldugundan yanı bır ınt oldugundan bunu tanımlarken %d kullanmak zorunda kalıyoruz.
	Ardında burda kullandıgımız sizeof ıle hangı degıskenın kac byte oldugunu bulmak ıcın kullanırız.*/
	return 0;
}
