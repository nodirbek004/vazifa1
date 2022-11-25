#include<stdio.h>
int main(){
    void random_nums(int nums[], int n){
        fot(int i=0;i<n;i++){
            nums[i]=8+rand()%14;
        }
    }
    srand(time(NULL));
    int n;
    printf("son kiriting"); scanf("%d",&n);
    int nums[n];







    return 0;
}