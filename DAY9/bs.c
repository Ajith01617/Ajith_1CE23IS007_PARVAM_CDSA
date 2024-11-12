#include<stdio.h>

int main(){
    int n,l,e,h,m;
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
    l=0;
    h=n-1;
    

    while(l<=h){
        m=(l+h)/2;
        if(a[m]==e){printf("ele is found at loc: %d",m+1);return 0;}
        else if(a[m]>e){
            h=m-1;
        }
        else{
            l=m+1;
        }}
        if(l>h){printf("ele is not found\n");}return 0;
    }

