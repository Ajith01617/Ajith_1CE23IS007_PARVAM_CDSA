#include<stdio.h>

int main(){
    int n;
    printf("\nenter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("\nenter the array elements\n");
    for(int i =1;i<=n;scanf("%d",&a[i++]));
    printf("\narray elements::\n---------------\n");
    for(int i =1;i<=n;printf("%d ",a[i++]));
    printf("\n---------------\n");
    for(int i=1;i<=n;i++){
        if(a[i]%5==0) printf("%d ",a[i]);
    }
}