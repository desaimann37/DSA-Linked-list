#include<stdio.h>
#define SIZE 5


int main(){

    int a[SIZE]={5,4,3,2,1};
    int i,j,temp,x,count=1;

    //print

    printf("\nArray Before Sorting\n");
    for(i=0;i<SIZE;i++){

        printf("  %d",a[i]);

    }

    //bubble Sorting

    for(i=0;i<SIZE-1 && count==1 ;i++){

        printf("\nPass %d : \n",i+1);
        count=0;
        for(j=0;j<SIZE-1-i;j++){

            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                count = 1;

            }



        }
        for(x=0;x<SIZE;x++){
            printf("  %d",a[x]);

        }


    }
    printf("\nArray After Sorting\n");
    for(i=0;i<SIZE;i++){
        printf("  %d",a[i]);

    }






return 0;
}
