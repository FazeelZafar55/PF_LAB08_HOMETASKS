#include <stdio.h>

int main(){
    float prices[10];
    float discount[10];
    int i;
    float total=0;
    
    for ( i=0;i<10;i++){
        printf("enter the price of product: ");
        scanf("%f",&prices[i]);
    }
    for (i=0;i<10;i++){
        if (prices[i]< 1000){
            discount[i]= prices[i] * 0.95;
        }
        else if (prices[i] <= 5000) {
            discount[i]= prices[i]* 0.90;
        }
        else {
            discount[i]= prices[i] * 0.85;
        }
        total += discount[i];
    }
    printf("Item\tOriginal\tDiscounted\n");
    printf("-----------------------------------\n");
    for (i=0; i<10; i++){
        printf("%2d\t%10.2f\t%14.2f\n", i+1,prices[i],discount[i]);
    }
    printf("total after discount: Rs. %0.2f\n", total);
    if (total > 25000){
        printf("Congratulations you got GOLD VOUCHER!\n");
    }
    return 0;
}