#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void maxheap(int*a,int i,int n){
    if(2*i>n) return ;
    else if(2*i==n) {
        if(a[i]<a[2*i]) swap(&a[i],&a[2*i]);
        return ;
    }
    else{
        maxheap(a,2*i,n);
        maxheap(a,2*i+1,n);
    }if(a[i]<a[2*i]){
        if(a[2*i]<a[2*i+1]) swap(&a[i],&a[2*i+1]);
        else swap(&a[i],&a[2*i]);
    }else if(a[i]<a[2*i+1]) swap(&a[i],&a[2*i+1]);
    else return ;
}
int main(){
   int n;
   scanf("%d",&n);
   int i,a[n+1];
   for(i=1;i<n+1;i++){
       scanf("%d",&a[i]);
   }
   maxheap(a,1,7);
   for(i=1;i<n+1;i++)
   printf(" %d",a[i]);
   
}
