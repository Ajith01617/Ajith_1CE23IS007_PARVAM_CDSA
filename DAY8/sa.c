#include<stdio.h>
#include<stdlib.h>

int push();
int pop();
int display();

int t=-1;
int main(){
    int c=0,n=0;
    
    printf("\nenter number of ele in stack");
    scanf("%d",&n);
    int a[n];
    while(1){
        int x=0;
        printf("\nPress 1 to insert 2 to delete 3 to display");
        scanf("%d",&c);
        switch(c)
        {
            case 1: scanf("%d",&x);
                    push();
                    break;
            case 2:pop();
                   break;
            case 3: display();
                    break;
            default: return 0;
        }
    }
    
    return 0;
}

int push(){
    if(t+1==n){
        printf("\nstack overflow\n");
        exit(1);
        }
    else{
        t++;
        printf("\npushed %d to stack\n",x);
        a[t]=x;
        }
}

int pop(){
    if(t<0){
        printf("stack underflow");
        exit(2);
    }
    else{
        int temp;
        temp = a[t];
        t--;
        printf("popped %d",temp);
    }
}

int display(){
    if(t<0){
        printf("\nstack is empty\n");
    }
    else if(t+1==n){
        printf("\nstack overflow\n");
        }
    else{
        for(int i=t;i>=0;i--){
        printf("\n%d",a[i]);
    }
    }
}