#include<stdio.h>
int main(){
	int eingabe=0;
	int vartemp_1=0;
	while(0==0){
		printf("Please enter a value:\n");
		scanf("%d", &eingabe);
		if(eingabe==0){
			break;
		}
	printf("You entered:%d\n",eingabe);
	while(eingabe!=0){
		vartemp_1 += eingabe%10;
		eingabe -= eingabe%10;
		eingabe /= 10;
	}
	printf("The digitsum of said value is:%d\n",vartemp_1);
}
}
