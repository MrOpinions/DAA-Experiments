// 3-G-Burger Problem (Greedy)
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        int s=pow(n,i);
        sum+=(arr[i]*s);
    }
    printf("%d",sum);

}
