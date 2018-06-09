#include <stdio.h>
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
void maxheapify(int*a,int i,int n){
    int largest=i;
    if(2*i>n) return ;
    if(2*i==n){
        if(a[i]<a[2*i]) swap(&a[i],&a[2*i]);
        return ;
    }
    if(a[2*i]>a[i]){
         swap(&a[i],&a[2*i]);
         largest=2*i;
    }if(a[2*i+1]>a[i]){
        swap(&a[i],&a[2*i+1]);
         largest=2*i+1;
    }if(largest!=i){
        maxheapify(a,largest,n);
        
    }return ;
    
}
void heapsort(int *a,int n){
    maxheap(a,1,n);
    int b[n+1],i=0,k=1;
    while(n>i){
        maxheapify(a,1,n-i);
        b[1+i]=a[1];
        a[1]=a[n-i];
        a[n-i]=-1;
        i++;
        k=1;
    }if(k==1){
        for(i=1;i<n+1;i++) 
         a[i]=b[i];
    }
}
int main() {
	int n,i;
	scanf("%d",&n);
	int a[n+1];
	for(i=1;i<n+1;i++) {
	    scanf("%d",&a[i]);
	    heapsort(a,i);
	    if(i%2==0) printf("%d\n",(a[i/2]+a[i/2+1])/2);
	    else printf("%d\n",a[i/2+1]);
	}
	
	return 0;
	
}
