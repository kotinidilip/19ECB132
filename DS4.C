#include<stdio.h>
#include<stdlib.h>

int main(){
  int a[100][100], x=0, y=0, z=0, n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(int i=0; i<n; i++){
    x += a[i][i];
  }
  for(int i=0; i<n; i++){
    y += a[i][n-1-i];
  }
  //printf("%d ", x);
  //printf("%d ", y);
  z = x - y;
  printf("%d", abs(z));
}
