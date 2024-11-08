#include<stdio.h>

int main(){
    int n,s=0;
    float avg=0;
    printf("\nenter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("\nenter the array elements\n");
    for(int i =1;i<=n;scanf("%d",&a[i++]));
    for(int i =1;i<=n;s=s+a[i++]);
    avg = s/n;
    printf("\naverage:%f",avg);
    return 0;
    
}