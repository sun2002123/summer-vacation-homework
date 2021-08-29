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
### 2. 7-4
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
### 3. 求最大值及其下标
```c
#include <stdio.h>
int main(){
    int a[10];
    int n;
    scanf("%d",&n);
    int i;
   
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i]; 
        }
    }
    printf("%d ",max);
    for(i=0;i<n;i++){
        if(a[i]==max){
            printf("%d",i);
            break;
        }
    }
}
```
### 4. 找出最小值
```c
#include <stdio.h>
int main(){
	int n,i=0,t;
	scanf("%d",&n);
	int a[n];
	while(i<n){
		scanf("%d",&a[i]);
		i++; 
	}
	for(i=0;i<n-1;i++){
		if(a[i+1]>a[i]){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}

}
	printf("min = %d",a[n-1]);
	 
}
```
### 5. 特殊a串数列求和
```c
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int n;
    int sum=0;
    int i;
    scanf("%d %d",&a,&n);
    int b[n];
    b[0]=a;
    for(i=1;i<n;i++){
        b[i]=a*pow(10,i)+b[i-1];
    }
    for(i=0;i<n;i++){
        sum=sum+b[i];
    }
    printf("s = %d",sum);
}
```
### 6. 统计一行文本的单词个数 
```c
#include <stdio.h>
int main(){
	char a[100000];
	
	int i=0,cnt=0,temp;
	while((a[i]=getchar())!='\n'){
		i++;
	}
	a[i]='\0';
	temp=i-1;
	for(i=0;i<temp;i++){
		if((a[i]==' ')&&(a[i+1]!=' ')){
			cnt++;
		}	
	}
	if(a[0]==' '){//如果前面是空格 但是没有进入循环中去cnt+1的原因是因为 这只是填写字母时的空格
	printf("%d",cnt);
	}
	else{
		cnt++;
		printf("%d",cnt);
	}
	
}
```
### 7. 矩阵的运算 
```c
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    int sum=0;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            sum=sum+a[i][j];
        }
    }
    i=1;
    j=n-2;
    while(j!=0){
        sum=sum-a[i][j];
        i++;
        j--;
    }
    printf("%d",sum); 
}
```
### 8. 计算天数 
```c
#include <stdio.h>
int main(){
	int a,b,c,day1,day2,i,t,flag=0;
	day1=0;
	scanf("%d/%d/%d",&a,&b,&c);
	int mouth[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	for(i=0;i<b-1;i++){
		t=mouth[i];
		day1=day1+t;
	} 
	day2=day1+c;

	if((a%4==0&&a%100!=0)||(a%400==0)){
        flag=1;
    }
   
    
	if(flag==1&&b>2){
	
        day2++; 
        printf("%d",day2);
	}
	else
        printf("%d",day2);
}
```
### 9. 查找指定字符 
```c
#include <stdio.h>
int main(){
    char a[80];
    char c;
    scanf("%c",&c);
    int i=0;
    int cnt=0;
    int t;
    while(a[i]=getchar()!='\n'){
        i++;
    }
    a[i]='\0';
    for(j=0;j<k;j++){
        if(a[j]==c){
            cnt=1;
            t=j;
        }
        if(cnt=1){
            printf("index = %d",t);
        }
        else{
            printf("Not Found");
        }
    }
}
```
### 10. 字符串逆序
```c
#include<stdio.h>
int main()
{
    char a[100],b[100];
    int j,i=0;
    
    gets(a);
        
    
    for(j=strlen(a)-1;j>=0;j--)
    {
            b[i++]=a[j];
        
    }
    b[strlen(a)]='\0';
    for(i=0;i<=strlen(a)-1;i++){
            printf("%c",b[i]);
    }
    return 0;
}
```
### 11. 选择法排序
```c
#include <stdio.h>
//选择排序 
int main(){
	int i,j,t,k;
	int n;
	int cnt=0;
	scanf("%d",&n);
	int a[n];
	int max;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		max=a[i];
		cnt=0;
		
		for(j=i+1;j<n;j++){
			if(a[j]>max){
				max=a[j];
				cnt=1;
				k=j;
			}
		}
			if(cnt==1){
			t=a[i];
			a[i]=max;
			a[k]=t; 
		}
	
	}
	for(i=0;i<n;i++){
        if(i!=n-1){
		printf("%d ",a[i]);
        }
        else
            printf("%d",a[i]);
	}
	return 0;
}
```
### 12. 求矩阵各行元素之和
```c
#include <stdio.h> 
int main(){
	int m,n;
	int i,j;
	int k=0;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]); 
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		k=a[i][j]+k;	
		}
		
		printf("%d",k);
		printf("\n");
		k=0;
	}

}
```
### 13. 统计大写辅音字母 
```c
#include <stdio.h>
int main(){

    char a[80];
    int i=0;
    int j,cnt=0;
    scanf("%c",&a[i]);
    while(a[i]!='\n'){
    	i++;
        a[i]=getchar();
       
    }
    a[i+1]='\0';
   
        
    for(j=0;j<i;j++){
        if((a[j]>='A'&&a[j]<='Z')){
            if((a[j]!='A')&&(a[j]!='E')&&(a[j]!='I')&&(a[j]!='O')&&(a[j]!='U')){
                cnt++;
            }
        }
    
	}
	printf("%d",cnt);
}
```
### 15. 字符串替换
```c
#include <stdio.h>
//ascii码值是A-Z=65-90,a-z=97-122; 
int main(){
    char a[81];
    int n;
    gets(a);
    char b[26]={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
    int i; 
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='A'&&a[i]<='Z'){
            n=a[i]-'A';
            
            printf("%c",b[n]);
        }
        else{
            printf("%c",a[i]);
        }
    
}
}
```
### 16. 输出学生成绩
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
### 17. 删除重复字符
```c   
#include<stdio.h>
#include<string.h>
int main()
{
	char a[80];
	gets(a);
    int i,length,j;
	length = strlen(a);
    char trans;
    for(i=0;i<length-1;i++)
    {
    	for(j=0;j<length-1-i;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			trans=a[j];
    			a[j]=a[j+1];
    			a[j+1]=trans;
			}
		}
	}
	for(i=0;i<length;i++)
	{
		if(a[i]!=a[i+1]){
			printf("%c",a[i]);
		}
	}
}
```
### 18. 字符串对称
```c   
#include <stdio.h>
int main(){
    char a[100000];
    gets(a);
    int i,count=0,k=0;
    for(i=0;a[i]!='\0';i++){
        k++;
    }
    k=k-1;
   
    for(i=0;i<=(k-1)/2;i++){
        if(a[i]!=a[k]){
            printf("no");
            break;
        }
        k--;
    }
    if((i==k)||(i+1)==k){
        printf("yes");
    }
}
```
### 19.单词排序
```c  
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20][10],c[10]={'\0'};
	char b;
	int i=0,j,h;
	while(1)
	{
		scanf("%s",a[i]);
		if(a[i][0]=='#')
		break;
		i++;
	}
   for(j=0;j<i;j++)
   {
		for(h=0;h<i-j-1;h++)
		{
			if(strlen(a[h])>strlen(a[h+1]))
			{
			strcpy(c,a[h]);
			a[h][0]='\0';
			strcpy(a[h],a[h+1]);
			a[h+1][0]='\0';
			strcpy(a[h+1],c);
		}
		}
   }
   for(j=0;j<i;j++)
   printf("%s ",a[j]);
} 
```
### 20.装箱问题
```c 
#include <stdio.h>
#define N 1005

int main(){
    int n;
    int i;
    scanf("%d",&n);
    int a[N];
    int b[N];
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=1;i<N;i++){
        b[i]=100;
    }
    
    int j=0,k,exit=0;
    for(j=0;j<n;j++){
        k=1;
        if(a[j]<=b[k]){
            b[k]=b[k]-a[j];
            printf("%d %d\n",a[j],k);
//             j++;
        }
        else{
            while(a[j]>b[k]){
                k++;
            }
            b[k]=b[k]-a[j];
            printf("%d %d\n",a[j],k);
        }
    }
    
//     for(int j=0 ; j<10; j++){
//         printf("%d ", b[j]);
//     }
//     printf("\n");
    
    for(i=1;i<=n+1;i++){
        if(b[i]==100){
            exit=i-1;
            break;
        }
    }
   printf("%d",exit);
}
```
## 2.链表
## 3.查找排序
## 4.字符串
## 5.基本算法
## 6.图论
## 7.计算几何

