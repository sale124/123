#include<stdio.h>
#include<stdlib.h>
 
 int main()
 {
 	float ban_dau=100;
 	int so_nam=10;
 	float ve_sau=ban_dau;
 	for (int i=0;i<so_nam;i++)
 	{
 		float lai=ve_sau * (8.0 / 100.0);
 		ve_sau += lai;
 		printf("lai=%.3f,\tTien hien tai=%.3f,sau %d nam\n",lai,ve_sau,i+1);
	 }
	 printf("Tien ban dau=%.3f, Tien ve sau=%.3f, gap %.3f lan\n", ban_dau, ve_sau, ve_sau / ban_dau);
	 return 0;
 }
