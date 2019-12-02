#include<stdio.h>
double convert(double money1,double exchange_rate){
    return money1*exchange_rate;

}
int main(){
    const double exchange_rate=1.28;
    double money1=30.34;
    double money2 = convert(money1,exchange_rate);
    printf("%.2f of currency abc at an exchange rate of %.2f xyz for abc, equal %.2f xzy\n",money1,exchange_rate,money2);
    return 0;

}
