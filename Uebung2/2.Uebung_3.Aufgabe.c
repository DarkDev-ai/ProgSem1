#include<stdio.h>
int i=0;
int n=0;
int b=0;
int z=0;
int is_ugly(unsigned int n){
	z=n;
	if(z==0){
		b=1;
		return 1;
	}
	while (z!=1)
	{
		if (z%5==0)
		{
			z/= 5;
		}
		else if (z%3==0)
		{
			z/= 3;
		}
		else if (z%2==0)
		{
			z/= 2;
		}
		else
		{
		break;
		}
		if(z==1){
			return 1;}
		}
	return 0;
}
int main(){
	while(i<=999){
		b = is_ugly(n);
		if(b==1){
			i++;
			b=0;
		}
		n++;
	}
	printf("Ugly number #1000 =%d",n-1);
}
