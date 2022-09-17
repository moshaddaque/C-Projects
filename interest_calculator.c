#include<stdio.h>
int main(){
    int year, period;
    float amount, inrate, value;

    printf("Input Amount, Interest Rate & Period\n\n");
    scanf("%f %f %d", &amount,&inrate, &period);
    printf("\n\n");
    year = 1;

    while(year <= period)
    {
        value = amount + amount * inrate;
        printf("%2d == %8.2f\n", year, value);
        amount = value;
        year = year + 1;
    }
}