
#include<stdio.h>
#define SIZE 5
int main()
{
  const  int arr[SIZE];
    int i,n,l,s;
   // printf("enter the size");
    //scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
    i=0,s=0;
    for(i=0;i<SIZE;i++){
        if(arr[i]>l){
        s=l;
        l=arr[i];
    }
    else if(arr[i]>s){
        s=arr[i];
    }
}
printf("second largest=%d\n",s);
}
