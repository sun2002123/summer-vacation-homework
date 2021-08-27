#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    t=n/2;
    int k=n-1;
    int z;
    for(i=0;i<t;i++){
        z=a[i];
        a[i]=a[k];
        a[k]=z;
        k--;
    }
      for(i=0;i<n;i++){
          if(i!=n-1){
        printf("%d ",a[i]);
          }
          else
          {
        printf("%d",a[i]);
          }
      }
  
    return 0;
}
