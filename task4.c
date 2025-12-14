#include <stdio.h>

int main(){
    int usage[10];
    float bill[10];
    float total=0;
    int i,count=0;

    printf("Enter electricity usage for 10 households\n");
    for (i=0;i<10;i++){
        printf("House %d units: ",i+1);
        scanf("%d",&usage[i]);
    }
    for (i=0;i<10;i++){
        if (usage[i]<=200){
            bill[i]=usage[i]*15;
        } else if (usage[i]<=500){
            bill[i]=usage[i]*20;
        } else {
            bill[i]=usage[i]*25;
        }
        if (usage[i]>700){
            count++;
        }
        total+=bill[i];
    }
    printf("House\tUnits\tBill\tRemarks\n");
    printf("-----------------------------------\n");

    for (i=0;i<10;i++){
        printf("%d\t%d\t%.2f",i+1,usage[i],bill[i]);
        if (usage[i]>700)
            printf("   High Consumption");
        printf("\n");
    } 
    printf("------------------------------------------\n");
    printf("Total Revenue collected: Rs. %.2f\n",total);
    printf("Total no. of High Consumption Houses: %d\n",count);
    return 0;
}