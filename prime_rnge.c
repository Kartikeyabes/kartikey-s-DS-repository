//sieve of eratosthenes#
//Prime numbers between intervals
#include<stdio.h>
#include<math.h>
int SoF(int arr[],int n ){

    for(int i=2;i<=sqrt(n);i++){
        for (int j = i+1; j < n; j++)
        {
            if (j%i==0)
            {
                arr[j]++;
            }    
        }
    }
    // for (int i = 2; i < n; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    printf("\n");
    printf("Prime numbers till %d:-",n);
    for (int k = 2; k < n; k++)
    {
        if (arr[k]==0)
        {
            printf("%d ",k);
        }
    }
    
}
int main(){
    int arr[40]={0};
    int n;
    printf("Enter the last number till you want prime number:-");
    scanf("%d",&n);
    SoF(arr,n);
    return 0;
   

}