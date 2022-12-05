#include<stdio.h>
int binarysearch(int a[],int h,int l,int x)
{
    

    while(l<=h)
      {
        int mid=(l+h)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]<x)     
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
        
      }
      return -1;
}
      int main()
      {
        int a[10]={1,3,4,5,6,7,9,10,12,14};
        int n,h,l=0,key;
        n= sizeof(a)/sizeof(int);
        printf("%d\n",n);
        h=n-1;

        printf("Enter the element to be searched:");
        scanf("%d",&key);

        //int search=binarysearch(a,l,h,key);
        printf("%d ",binarysearch(a,h,l,key));
        //printf("%d is at %d index.",key,search);

        return 0;

      }
