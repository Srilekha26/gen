
#include<stdio.h>
    
 void swap(int *ar,int i,int j){
  int temp;
   temp=ar[i];
    ar[i]=ar[j];
    ar[j]=temp;
}
void quicksort(int *ar,int st,int en){
    int i, j=st,pa=en;
    if(st!=en){
    for(i=st;i<en+1;i++){
        if(ar[i]<ar[en]){
            swap(ar,i,j);
            j++;
        }
    }
    swap(ar,j,i-1);
    if (j>0)
    quicksort(ar,st,j-1);
if(j+1<en)
  quicksort(ar,j+1,en);
}}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    partition(a,0,n-1);
     for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}
