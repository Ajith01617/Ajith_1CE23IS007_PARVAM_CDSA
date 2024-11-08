#include<stdio.h>

int main(){
    int n,l;
    printf("\nenter the size of array\n");
    scanf("%d",&n);
    int a[10];
    a[0]=0;
    l=a[0];
    printf("\nenter the array elements\n");
    for(int i =1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]>l) l=a[i];
    }
    printf("\narray elements::\n---------------\n");
    for(int i =1;i<=n;printf("%d ",a[i++]));
    printf("\n---------------\nlargest number in array= %d\n",l);
}