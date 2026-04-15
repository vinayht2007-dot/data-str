#include<stdio.h>
int main(){
    int arr[100],n,pos,element,i;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("eneter position:");
scanf("%d",&pos);
printf("enetr element:");
scanf("%d",&element);
for(i=n;i>=pos;i--)
arr[i]=arr[i-1];
arr[pos-1]=element;
printf("enter element:");
scanf("%d",&element);
for(i=n;i>=pos;i--);
arr[i]=arr[i-1];
arr[pos-1]=element;
n++;
printf("update array:\n");
for(i=0;i<n;i++)
printf("%d",arr[i]);
return 0;
}