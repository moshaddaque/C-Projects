#include<stdio.h>
int main(){
    int N, count;
    float sum, average, number;
    sum = 0;
    count = 1;
    printf("Enter total Number:");
    scanf("%d", &N);

    while(count <= N){
        printf("%dst Number: ", count);
        scanf("%f", &number);

        sum = sum + number;
        count += 1;
    }

    average = sum / N;

    printf("N = %d & Sum = %f", N, sum);
    printf(" && Average = %f", average);

    return 0;
}