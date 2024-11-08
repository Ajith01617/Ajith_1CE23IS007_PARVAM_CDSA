#include<stdio.h>
#include<math.h>

int rc(int a,int b);

int main(){
    int n;
    printf("\nenter the size of array\n");
    scanf("%d",&n);
    int a[n];
    long long int b[2000];
    printf("\nenter the array elements\n");
    for(int i =1;i<=n;scanf("%d",&a[i++]));
    printf("\narray elements::\n---------------\n");
    for(int i =1;i<=n;printf("%d ",a[i++]));
    printf("\n---------------\n");
    for(int j=1;j<=13;j++){
            b[j]=rc(5,j);
    }
//    for(int j=1;j<=13;printf("%d ",b[j]));
            
    printf("\n\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=13&&a[i]>=b[j];j++){
            if(b[j]==a[i]){
                printf("%d ",b[j]);
                break;
            }
        }

    }
}
int rc(int a,int b){
    if(b<1)return 1;
    if(a==0)return 0;
    return a*rc(a,b-1);
}