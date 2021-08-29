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
### 1.求链式线性表的倒数第K项
```c 
#include <stdio.h>
typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}Node,*pzz;
int main(){
    pzz p,q,z;
    int x,i,k;
    scanf("%d",&k);
    scanf("%d",&x);
    while(x>=0){
        p=(pzz)malloc(sizeof(Node));
        p->data=x;
        p->next=q;
        q=p;
        scanf("%d",&x);
    }
    z=q;
    for(i=0;i<k-1;i++){
        z=z->next;
    }
    if (z==NULL) {
        printf("NULL");
    }
    if(z!=NULL)
    {
          printf("%d",z->data);
    }

}
```
### 2.建立与遍历二叉树
```c 
#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	char Data;
	struct BiTNode *Left, *Right;
}BiTNode, *BiTree;

void CreatBiTree(BiTree *T)              
{
	char a;
	scanf("%c",&a);
	if(a=='#')  
	*T=NULL;
	else 
	{
		*T=(BiTree)malloc(sizeof(BiTNode)); 
		(*T)->Data=a;
		CreatBiTree(&(*T)->Left);
		CreatBiTree(&(*T)->Right);
	}
}

void Middle(BiTree T)                
{
	if(T)
	{
		Middle(T->Left);
		printf("%c",T->Data);
		Middle(T->Right);
	} 
}

int main()
{
	BiTree T;
	CreatBiTree(&T);
	Middle(T);
	
	return 0;
}
```
### 3.搜索树判断
```c 
#include <stdio.h>
#include<stdlib.h>
typedef struct node *Node;
struct node {
    int Num;
    Node Left;
    Node Right;
};
int a[10005];
int flag;
int result;
Node Insert(Node,Node);
Node Read();
void DLR(Node H) {
    if(H&&result) {

        if(H->Num!=a[flag++])
		result=0;
        DLR(H->Left);
        DLR(H->Right);
    }
}
void LRD(Node H) {
    if(H) {
        LRD(H->Left);
        LRD(H->Right);
        if(!result)printf(" ");
        else result=0;
        printf("%d",H->Num);
    }
}
void Swap(Node H) {
    if(H) {
        Swap(H->Left);
        Swap(H->Right);
        Node temp=H->Left;
        H->Left=H->Right;
        H->Right=temp;
    }
}
 
 Node Insert(Node H,Node M) {
    if(!H) {
        return M;
    }
    if(M->Num<H->Num) {
        H->Left=Insert(H->Left,M);
    } 
    else 
    H->Right=Insert(H->Right,M);
    return H;
}
 
Node Read() {
    Node temp=(Node)malloc(sizeof(struct node));
    scanf("%d",&temp->Num);
    temp->Left=NULL;
    temp->Right=NULL;
    return temp;
}
int main() {
    int n,i;
    scanf("%d",&n);
    Node Head=NULL;
    for(i=0; i<n; i++) {
        Node temp=Read();
        a[i]=temp->Num;
        Head=Insert(Head,temp);
    }
    flag=0;
    result=1;
    DLR(Head);
    if(!result) {
        Swap(Head);
        result=1;
        flag=0;
        DLR(Head);
    }
    if(result!=0) {
        printf("YES\n");
        LRD(Head);
    }
    else 
        printf("NO");
 
    return 0;
}
```
## 3.查找排序
### 1.二分查找
```c 
#include <stdio.h>
int main(){
	int n;
    int i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    int k;
    scanf("%d",&k);
    int count=0;
    int low=0,mid=(n-1)/2,high=n-1;
    int found;
    for(i=0;low<=high;i++){
        
        if(a[mid]==k){
            count++;
            found=mid;
            break;
        }
        if((low==high)&&(a[mid]!=k)){
            found=-1;
            count++;
            break;
        }
        else if(a[mid]>k){
            high=mid-1;
            mid=(low+high)/2;
            count++;
        }
        else {
            low=mid+1;
             mid=(low+high)/2;
            count++;
        }
        
    }
    printf("%d\n",found);
    printf("%d",count);
}
```
### 2.冒泡排序
```c 
#include <stdio.h>
int main(){
    int n,k,i;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j,t;
    for(j=0;j<k;j++){
        
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        else
        printf("%d ",a[i]);
    }
}
```
### 3. 插入排序法
```c 
#include <stdio.h>
void insert(int a[],int n){
    int key=a[n];
    int i=n;
    while (a[i-1]>key){
        a[i]=a[i-1];
        i--;
        if(i==0){
            break;
        }
    }
    a[i]=key;
}
void insertsort(int a[],int n){
    int i;
    for(i=1;i<n;i++){
        insert(a,i);
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]); 
	}
    insertsort(a,n);
    for(i=0;i<n;i++){
        if(i<n-1){
            printf("%d ",a[i]);
    }
        else{
            printf("%d",a[i]);
        }
        }
        
}
```
## 4.字符串
### 1.删除重复字符
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
### 2.单词排序(按长度）7-2(518)
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
### 3.还是统计单词
```c 
#include <stdio.h>
#include<string.h>
int main(){
    char a[100][100]={'\0'},b;
    int i=0,count=0,j;
    do
	{
		gets(a[i]);
		i++;
	 }while(strlen(a[i-1])!=0);
    
    for(j=0;a[j][0]!='\0';j++)
    {
    	count=0;
		for(i=0;a[j][i]!='\0';i++){
	        if(a[j][i]==' '&&a[j][i+1]!=' '&&a[j][i+1]!='\0'){
	            count++;
	        }

	    }
	    if(a[j][0]!=' '){
	        count++;
	    }

	    printf("%d\n",count);

	}
	return 0;
	}
```
### 4. 翻转单词顺序
```c 
#include <stdio.h>
#include <string.h>

int main()
{
    char a[5002];
    char b[600][30];
    
      while (gets(a)!=NULL) {
        
        char *p=strtok(a," ");
        int z=0;
        while(p)
        {  
            strcpy(b[z],p);
            p=strtok(NULL," ");  
            z++;
        }
        
        for(int n=z-1;n>=0;n--){
            if (n==z-1)
                printf("%s",b[n]);
            else 
                printf(" %s",b[n]);
            if(n==0)
                printf("\n");
        }
    }
}
```
### 5. 字母频率统计
```c 
#include <stdio.h>
#include <string.h>

int main(){
    char a[200];
    gets(a);
    int i,count;
    double z[4]={0};
    
    count=strlen(a);
    for(i=0;a[i]!='\0';i++){
    	if(a[i]=='A'||a[i]=='a'){
    		z[0]++;
		}
		if(a[i]=='B'||a[i]=='b'){
    		z[1]++;
		}
		if(a[i]=='C'||a[i]=='c'){
    		z[2]++;
		}
		if(a[i]=='D'||a[i]=='d'){
    		z[3]++;
		}
	}
	for(i=0;i<4;i++){
		z[i]=z[i]*1.0/count;
		
        if(i<3){
        	if(z[i]<0.01){
			z[i]=0;
			printf("0 ");
		}
		
        
		else{
		
           
                printf("%0.2lf ",z[i]);
            }
	    }

		if(i==3){
			if(z[i]<0.01){
			z[i]=0;
			printf("0");
		}
		
        
		else{
		
       
        

			printf("%0.2lf",z[i]);
		}
		}
		
	}
	
}
```
### 6. 判断回文字符串
```c 
#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}
bool palindrome( char *s ){

    int i=0,j=0;
    while(s[i]!='\0'){
        i++;
    }
      
  while(j<i-1){
      if(s[j]!=s[i-1]){
          return false;
          break;
      }
      i--;
      j++;
  }
    if(j>=i-1){
        return true;
    }
}
```
### 7. 字符串的连接
```c 
#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t ){
    int i=0,j=0;
    while(s[i]!='\0'){
       i++; 
    }
    for(j=0;t[j]!='\0';j++){
        s[i]=t[j];
        i++;
    }
    s[i]='\0';
    return s;
}
int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}
```
### 8. 查找星期
```c 
#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s )int getindex( char *s ){
    const char *day[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int i,flag=0,k=0;
    for(i=0;i<7;i++){
        if(strcmp(s,day[i])==0){
            flag=1;
            k=i;
            break;
        }
    }
    if(flag==0){
       
        return -1;
    }
    else if(flag==1){
        return k;
    }
}


int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}
```
## 5.基本算法
## 6.图论
## 7.计算几何

