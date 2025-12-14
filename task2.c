#include <stdio.h>

int main(){
    int occupancy[7];
    int i, total=0;

    for (i=0;i<7;i++){
        printf("Enter number of patients in ward %d: ",i+1);
        scanf("%d",&occupancy[i]);
        total+= occupancy[i];
    }
    printf("Ward\tPatients\tStatus\n");
    printf("---------------------------------------------\n");

    for (i=0;i<7;i++){
        if (occupancy[i] < 6){
            printf("%2d\t%8d\tUnderutilized\n",i+1,occupancy[i]);
        } else if(occupancy[i] >= 6 && occupancy[i] <= 10) {
            printf("%2d\t%8d\tStable\n",i+1,occupancy[i]);
        } else {
            printf("%2d\t%8d\tOvercrowded\n",i+1,occupancy[i]);
        }
    }
    printf("------------------------------------\n");
    printf("total patients in hospital are %d\n",total);

    int found=0;
    for (i=0;i<7;i++){
        if (occupancy[i] < 6 || occupancy[i] > 10){
            printf("Ward %d needs administrative  review with %d pateints\n",i+1,occupancy[i]);
            found=1;
        }
    }
    if (!found){
        printf("all wards are stable\n");
    }
    return 0;
}