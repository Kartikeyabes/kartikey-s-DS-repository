#include<stdio.h>
int gcf(int n1, int n2) {
    if (n2 != 0)
        return gcf(n2, n1 % n2);   
    else
        return n1;
}
int main(){
    int a,b;
    printf("Enter two numbers:-");
    scanf("%d %d",&a,&b);
    printf("Hcf for number:-%d ",gcf(a,b));
    return 0;
}