#include<stdio.h>

int main(){
    int n,s=0,l=0,d=0,k;
    float avg=0;
    printf("\nenter the size of array\n");
    scanf("%d",&n);
    int a[n];
    unsigned int b[n];
    printf("\nenter the array elements\n");
    for(int i =1;i<=n;scanf("%d",&a[i++]));
    for(int i =1;i<=n;s=s+a[i++]);
    avg = s/n;
    for(int i=1;i<=n;i++){
        if(a[i]>avg) b[i]=a[i]-avg;
        else b[i]=avg-a[i];
    }
    l=b[1];
    for(int i =1;i<=n;i++){
        if(b[i]<l) l=b[i], k=i;
    }
    printf("\naverage:%f",avg);
    printf("\nnumber in array= %d\n",a[k]);
    return 0;
    
}