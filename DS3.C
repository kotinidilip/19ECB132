#include<stdio.h>

/*int arrsum(int a[], int n){
    int sum=0;
    for (int i=0; i<n; i++){
        sum+= a[i];
    }
    return sum;
}*/

int main(){
    int a[1000], n, x;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    //x=arrsum(a, n);
    for(int i=0; i<n; i++){
        x+= a[i];
    }
    printf("%d", x);
}
