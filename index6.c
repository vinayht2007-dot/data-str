#include<stdio.h>
int main(){
    int arr[100],n,i,j,mim,temp;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Selection sort
    for(i=0;i<n-1;i++){
        mim=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[mim]){
                mim=j;
            }
        }
        //Swap
        temp=arr[i];
        arr[i]=arr[mim];
        arr[mim]=temp;
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
