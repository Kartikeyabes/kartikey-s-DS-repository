// // nth fibonnacci series function
// #include<stdio.h>
// int fib(int n){
//     if (n==1 || n==2){
//         return ;
//     }
//     else
//         {
//             return fib(n-1)+fib(n-2);
//         }
        
    
// }
//     int main(){
//         int a=100;
       
//         for (int i = 0; i < a; i++)
//         {
//             printf("%d ",fib(i));
//         }
        
        

//         return 0;
//     }

#include<stdio.h>
int fib(int n){
    int dat[100];
    if (n==1 || n==2)
    {
        dat[n]=n-1;
    }
    
    else{
       if (dat[n]==0)
    {
        dat[n]=(fib(n-1)+fib(n-2));
    return dat[n];
    }
    }
}
int main(){
    int a=100;
    for (int i = 0; i < a; i++)
    {
        printf("%d-%d \t",i,fib(i));
    }
    return 0;
    
}