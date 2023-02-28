#include <stdio.h>

void pfibo(int n);
int main() {
    int n;

    scanf("%d",&n);
    printf("0\t1\t");
    pfibo(n);

    return 0;
}

void pfibo(int n)
{
    static a=0,b=1,c;
    if(n!=2)
    {
        pfibo(n-1);
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
