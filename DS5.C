#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,x=0,p=0; 
    
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    
    for(i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    
    for (i=0;i<n;i++){
        if(arr[i] > x){
            x=arr[i];
        }
    }
    
    for (i=0;i<n;i++){
        if(x == arr[i])
        p++;
    }
    
    printf("%d",p);
}
