#include<stdio.h>

int main(){
    int n,so=0,se=0,k=0;
    printf("\nenter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("\nenter the array elements\n");
    for(int i =0;i<n;scanf("%d",&a[i++]));
    printf("\narray elements::\n---------------\n");
    for(int i =1;i<=n;printf("%d ",a[i++]));
    printf("\n---------------\n");
    for(int i=0;i<n;i++){
        if(i%2==0) se=se+a[i];
        else so=so+a[i];
    }
    printf("\nsum odd index:%d",so);
    printf("\nsum even index:%d",se);
}