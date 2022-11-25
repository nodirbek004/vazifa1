#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    void rand_nums(int nums[], int A[], int k, int n){
        for(int i=0;i<n;i++){
            nums[i]=8+rand()%14;
            printf("%d ",nums[i]);
        }
        puts("");
        for(int i=0;i<k;i++){
            A[i]=nums[i];
        }
        for(int i=0;i<n-k;i++){
            nums[i]=nums[i+k];
            printf("%d ",nums[i]);
        }
        for(int i=0;i<k;i++){
            printf("%d ",A[i]);
        }
    }
int main(){
    srand(time(NULL));
    int n,k;
    printf("son kiriting n="); scanf("%d",&n);
    printf("k="); scanf("%d",&k);
    int nums[n];
    int A[k];
    rand_nums(nums,A,k,n);
}