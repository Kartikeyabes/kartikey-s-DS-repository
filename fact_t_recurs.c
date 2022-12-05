#include<stdio.h>
int fact(int n1){
    if (n1==1||n1==0)
    {
        return 1;
    }
    else
    {
        return fact(n1);
    }
    

}
int main(){
    int a;
    printf("Enter the number for factorial:-");
    scanf("%d",&a);
    fact(a);


}