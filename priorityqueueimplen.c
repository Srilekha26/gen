#include<stdio.h>
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void maxheapify(int *a,int i,int n){
    int largest;
    if(2*i>n) return ;
    if(2*i==n) { 
        if(a[i]<a[2*i]) 
            swap(&a[i],&a[2*i]);
            return ;
    }
    if(a[i]<a[2*i]){
        swap(&a[i],&a[2*i]);
        largest=2*i;
    }if(a[i]<a[2*i+1]) {
        swap(&a[i],&a[2*i]);
        largest=2*i+1;
    }
        maxheapify(a,2*i,n);
    
}
void extractmax(int* a,int n){
    if(n<=0) return;
    printf("%d\n",a[1]);
    a[1]=a[n];
    a[n]=-1;
    maxheapify(a,1,n-1);
    
}
void increaseval(int *a,int val,int i,int n){
   int k;
    if(a[i]>val) return ;
    a[i]=val;
    swap(&a[1],&a[i]);
    for(k=i;k>1;k/=2){
        if(a[k]>a[k/2]) swap(&a[k],&a[k/2]);
    }
    
} void insertval(int *a,int val,int n){
    int k;
    a[n]=val;
    swap(&a[1],&a[n]);
   for(k=n;k>1;k/=2){
        if(a[k]>a[k/2]) swap(&a[k],&a[k/2]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1],i;
    for(i=1;i<n+1;i++) scanf("%d",&a[i]);
    extractmax(a,n);
    increaseval(a,34,5,n-1);
   insertval(a,43,n);
    for(i=1;i<n+1;i++) printf(" %d",a[i]);
}
