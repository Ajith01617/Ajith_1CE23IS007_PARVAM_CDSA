/*operators are tokens pre defined operation/function/task
3 types of operators
unary-()
binary-()
ternary- (?,:)

type of operation
arthematic-(+,-,*,/,%)
logical-(and[&&],or[||],not[!])
bitwise
relational
conditional
complex assgn operator
*/
#include<stdio.h>
#include<math.h>

int ad(int a, int b);
int su(int a, int b);
int di(int a, int b);
int mu(int a, int b);
int mo(int a, int b);
int po(int a, int b);

int main()
{
    int a,b,s;
    char o;
    printf("enter value for a and b and the operator:\n");
    scanf("%d %c %d",&a,&o,&b);
    
    switch (o) {
        case '+':
            printf("Sum = %d",ad(a,b));
            break;
        case '-':
            printf("Diff = %d",su(a,b));
            break;
        case '*':
            printf("Prod = %d",mu(a,b));
            break;
        case '/':
            printf("Quot = %lf",di(a,b));
            break;
        case '%':
            printf("Mod = %d",mo(a,b));
            break;
        case '^':
            printf("Power = %d",po(a,b));
            break;
        default: 
            printf("enter vaild operator");
    }
}

int ad(int a, int b){
        int s;
        s = a+b;
        return s;
    }
int su(int a, int b){
        int d;
        d = a-b;
        return d;
    }
int di(int a, int b){
        int q;
        q = a/b;
        return q;
    }
int mu(int a, int b){
        int p;
        p = a*b;
        return p;
    }
int mo(int a, int b){
        int r;
        r = a%b;
        return r;
    }
int po(int a, int b){
        int p;
        p = pow(a,b);
        return p;
}


