#include<stdio.h>

int main(){
    int n,l,e;
    printf("\nenter the size of array\n");
    scanf("%d",&n);
    int a[n];
    
    printf("\nenter the array elements\n");
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>l) l=a[i];
    }
    printf("\nenter the ele to search\n");
    scanf("%d",&e);
    l=-1;

    for(int i =0;i<n;i++){
        if(e == a[i]){l=a[i];printf("ele %d is found in location: %d",e,i+1); return 0;;}
    }
    printf("ele is not found");
    return 0;

}