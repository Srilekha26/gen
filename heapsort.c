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
void heapsort(int*a,int n){
    int i=0;
     while(n-i>2){
   maxheap(a,1,n-i);
   printf("%d ",a[1]);
   a[1]=a[n-i];
   a[n-i]=-1;
   i++;
   }
}
int main(){
   int n;
   scanf("%d",&n);
   int i,a[n+1];
   for(i=1;i<n+1;i++){
       scanf("%d",&a[i]);
   }i=0;
 heapsort(a,n);
   
  return 0;
   
}
