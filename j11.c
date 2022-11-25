#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void random_nums(int nums[], int n){
    for(int i=0;i<n;i++){
        nums[i]= 0+rand()%10;
    }
}
void output(int nums[], int n){
    for(int i=0;i<n;i++){
        printf("%d",nums[i]);
    }
}
void sort1(int nums[],int n){
    int temp;
    for(int i=0;i<n i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    printf("%d",nums[1]);
}
int main(){
    srand(time(0));
    int n;
    printf("son kirting"); scanf("%d",&n);
    int nums[n];
    random_nums(nums,n);
    output(nums,n);
    sort1(nums,n);






    return 0;
}