#include<stdio.h>
void heapify(int a[], int n, int i)  {
     int j,largest;
      if(2*i+1>n-1) return;
      if(2*i+1==n-1){
           if(a[i]>a[2*i+1]){
               int temp;
               temp=a[i];
               a[i]=a[2*i+1];
               a[2*i+1]=temp;
               return ;
           }
      }if(a[i]<a[2*i+1]){
          if(a[2*i+1]<a[2*i+2]){
              largest=2*i+2;
               int temp;
               temp=a[i];
               a[i]=a[2*i+2];
               a[2*i+2]=temp;
          }else{ int temp;
               temp=a[i];
               a[i]=a[2*i+1];
               a[2*i+1]=temp;
          }}else if(a[i]<a[2*i+2]){
              largest=2*i+2;
               int temp;
               temp=a[i];
               a[i]=a[2*i+2];
               a[2*i+2]=temp;
          }if(largest!=i)
          heapify(a,n,largest);
          return ;
      
}
void buildHeap(int a[], int n)  { 
    int b[n+1],i;
    for(i=0;i<n;i++){
        b[i+1]=a[i];
    }for(i=n/2;i>=1;i--){
        heapify(b,n,i);
    }for(i=0;i<n;i++){
        a[i]=b[i+1];
    }
    
}void heapsort(int a[],int n){
    buildHeap(a,n);
    for(int i=n-1;i>=0;i--){
        int temp;
         temp=a[0];
       a[0]=a[i];
       a[i]=temp;
       heapify(a,i,0);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    heapsort(a,n);
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
    return 0;
}
        
