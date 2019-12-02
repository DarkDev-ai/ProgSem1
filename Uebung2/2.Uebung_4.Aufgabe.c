#include<stdio.h>
#include<time.h>
int i=0;
int n=0;
time_t startzeit, endzeit;
int ist_schaltjahr1(int jahr){
	if(n%4==0&&!(n%100==0&&!n%400==0)){
		i++;
	}
	return 0;
}
int ist_schaltjahr2(int jahr){
	if((n%400==0||!n%100==0)&&n%4==0){
		i++;
	}
	return 0;
}
int main(){
	time(&startzeit);
	while(n<=1000000000){
		ist_schaltjahr1(n);
		n++;
	}
	time(&endzeit);
	printf("%d Schaltjahre zwischen Jahr 10^0 und 10^9,Runtime:%f\n",i,difftime(endzeit,startzeit));
	startzeit=0;
	endzeit=0;
	time(&startzeit);
	n=0;
	i=0;
	while(n<=1000000000){
		ist_schaltjahr2(n);
		n++;
	}
	time(&endzeit);
	printf("%d Schaltjahre zwischen Jahr 10^0 und 10^9,Runtime:%f\n",i,difftime(endzeit,startzeit));
}
