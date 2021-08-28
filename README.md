# summer-vacation-homework
Author: [孙艺](https://github.com/sun2002123)

**目录**

| 序号 |   主题   |      跳转链接       |
| :--: | :------: | :-----------------: |
|  0   | 查漏补缺 | [click](#1经典算法) |
|  1    |    数组      | [click](#2经典算法) |
|  2    |    链表      |                     |
|  3    |    查找排序      |                     |
|  4     |   字符串       |                     |
|  5    |   基本算法       |                     |
|  6    |    图论      |                     |
|  7    |    计算几何      |                     |





## 0.查漏补缺
## 1.数组
代码块
### 1. 统计学生成绩
```c
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   int max=a[0];
    int sum=a[0];
    for(i=1;i<n;i++){
        sum=sum+a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
       int min=a[0];
    for(i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    double average;
    average=sum*1.0/n;
    printf("average = %0.2lf\n",average);
    printf("max = %d.00\n",max);
    printf("min = %d.00",min);
    }
 ```  
### 2. 找出不是两个数组中的共同元素
```c
#include <stdio.h>
int main(){
    int m,n;
    int i,j;
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int c[m];
    c[0]=a[0];
    int k=0,flag=0;
    for(i=1;i<m;i++){
        flag=0;
        for(j=0;j<=k;j++){
            if(a[i]==c[j]){
                flag=1;
            }
        }
        if(flag==0){
            k++;
            c[k]=a[i];
        }
    }
    int d[n];
    d[0]=b[0];
    int z=0;
        for(i=1;i<n;i++){
        flag=0;
        for(j=0;j<=z;j++){
            if(b[i]==d[j]){
                flag=1;
            }
        }
        if(flag==0){
            z++;
            d[z]=b[i];
        }
    }
    flag=0;
   for(i=0;i<=k;i++){
   	flag=0;
       for(j=0;j<=z;j++){
           if(c[i]==d[j]){
               flag=1;
           }
       }
      if(flag==0){
           printf("%d ",c[i]);
       }
   }
    
   for(i=0;i<=z;i++){
   	flag=0;
       for(j=0;j<=k;j++){
           if(d[i]==c[j]){
               flag=1;
           }
       }
       if(flag==0&&i==z){
           printf("%d",d[i]);
       }
       else if(flag==0){
           printf("%d ",d[i]);
       }
   }
}
```
## 2.链表
## 3.查找排序
## 4.字符串
## 5.基本算法
## 6.图论
## 7.计算几何

