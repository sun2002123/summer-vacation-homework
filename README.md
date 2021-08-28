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
 
## 2.链表
## 3.查找排序
## 4.字符串
## 5.基本算法
## 6.图论
## 7.计算几何

