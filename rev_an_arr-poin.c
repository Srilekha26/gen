#include<stdio.h>
int* revarr(int* a,int n){
        int temp;
        for( int i=0;i<n/2;i++){
            temp=a[i];
            a[i]=a[n-1-i];
            a[n-i-1]=temp;
        }
        return a;
}
int main(){
    int i, a[]={1,2,3,4,5};
    revarr(a,5);
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
    return 0;
}
