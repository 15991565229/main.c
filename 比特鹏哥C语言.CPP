/*#include <stdio.h>
//打招呼-#include
int main ()//主函数-程序的入口 有且仅有一个
{
	
	//这里完成任务
	//在屏幕输出holle world 
	// 函数-printf-打印
	//库函数-C语言本身提供的
	
	printf("holle word\n");
	printf("holle word\n");
	printf("holle word\n");
	printf("holle word\n");
	printf("holle word\n");
	return 0;
}
//int 是整形的意思
//main前面的int 表示Mian函数调用返回一个整形值
void main() //可以已经过失

//char字符类型
#include <stdio.h>
int main()
{
    char ch = 'A';//内存
	printf("%c\n",ch);//-%c打印字符格式数据
    int age=20;
	printf("%d\n"，age);//-%d打印整型十进制数
    short //短整型
		long num=100;//长整型
	printf(" %d\n",num);
     float f=3.2;//浮点型
	 printf("%f\n",f);
	 double d=3.13;//双精度浮点型
	 printf("%lf\n",d);
    return 0;
}
#include <stdio.h>
int main()
{
	printf("%d\n",sizeof(char);//1
	printf("%d\n",sizeof(short);//2
	printf("%d\n",sizeof(int);//4
	printf("%d\n",sizeof(long)://4
	printf("%d\n",sizeof(long long);//8
	printf("%d\n",sizeof(float);//4
	printf("%d\n",sizeof(double);//8
return 0;
}
int main()
{
	short age=21;//向内存申请2个字节
}
int num2 = 20;//全局变量
int main()
{
	int num1 = 10;//局部变量
}
*/
/*#include<stdio.h>
int main()
{
 int num1 = 10;
 int num2 = 20;
 int sum = 0;
 //输入数据-使用输入函数scanf
 scanf(" %d %d",&num1,&num2);//取地址符号
 //c语言规定，变量要定义在当前代码快的最前面
    sum = num1 + num2;
	printf(" sum = %d\n",sum);

return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a = 2;
	int b = 5;
	if(a>b)
	printf("较大值是:%d\n",a);
	else
	printf("较大值是:%d\n",b);
	return 0;
}*/
/*#include<stdio.h>
#include <string.h>
  int Max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 3;
	int b = 8;
	int max = 0;
	max = Max( a , b );
	printf("max = %d\n");
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int a = 10;
	int arr [] = {1,2,3,4,5}；
		printf("%d\n",sizeof(a));
	return 0;
}*/
/*#include <stdio.h>
int main ()
{
	int a = 2;
	int b = 5;
	int sum = 0;
	sum = a+ b;
	printf("%d\n",sum);
	return 0;

}*/
/*#include <stdio.h>
int main ()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d",&a,&b);
	sum = a + b;
	printf("%d\n",sum);
	return 0;
}*/
/*#include <stdio.h>
int main ()
{
	//const-常属性
	//const修饰的常变量
    const int num = 7;
	printf("%d\n",num);
	num = 8;
	print("%d\n",num);
	return 0;
}
int n = 0;
int arr[n] = {0};//应输入常量
const int n=0;//n是变量，但又是常属性
*/
/*#define  MAX 10 //定义标识符常量
int main()
{
	int arr [MAX] = {0};
	printf("%d\n",MAX);
	return 0;
}*/
//字符串
/*#include <stdio.h>
int main ()
{
	char arr[]="abc";//数组
	//"abc" ---'a','b','c',\0字符串结束标语
	char arr1[]={'a','b','c',0};
	printf("%s\n",arr);
printf("%s\n",arr1);
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};
	printf("%d\n",strlen(arr1));//strlen计算字符串长度
	printf("%d\n",strlen(arr2));
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	printf("(are you ok\?\?)\n");//\?转义字符
		return 0;
}*/
/*#include <stdio.h>
int main()
{
printf("%c\n",'\'');
return 0;
}*/
/*#include <stdio.h>
#include <string.h>
int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("考研吗？（0/1)>:");
	scanf("%d",&input);
	if (input ==1)
	printf("给你硕士\n");
	else
		printf("失业\n");
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int line = 0;
	while(line<10)
	{
		printf("写代码%d\n",line);
		line++;
	}
	if(line>=10)
	printf("拿到offer");
	return 0;
}*/
/*#include<stdio.h>
int Add( int x,int y)
{
int z= x+y;
return z;
}
int main()
{
	int a = 100;
	int b =29;
	int sum = 0;
	sum = Add(a,b);
	printf("%d\n",sum);
		return 0;
}*/
/*#include <stdio.h>
int main ()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义数组
	//printf("%d\n",arr[5]);//用下标就可以访问元素
	int i = 0;
	while(i<10)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	return 0;
}*/

#include <stdio.h>
int main ()
{
     
//	int a =10;
//	int b = a++;//后置++，先使用后再++
 
//	int a = 10;
//	int b = a--;//9 10
	//printf("a=%d\n b=%d\n",a,b);//11.10
//	int a =10;
//	int b = ++a;//前置++，先++后使用
//	int a =10;
//	int b =--a;//9 9
//	printf("a=%d\n b=%d\n",a,b);//11,11
	
	
	
	
	//int a = 0;//4个字节31个比特位
	 //int b= ~a;//有符号的整型
	 //按位(2进制)取反
//	printf("%d\n",b);//打印的是这个数的原码	      
		 //1010
	     //0101
         //原码 反码 补码
	//负数在内存中，存储是二进制补码
    //0100
	//0011




	//int arr[10] = {0};
	//int sz = 0;
	//计算10个整型元素的数组 10*sizeof(int)=40
	//printf("%d\n",sizeof (arr));
	//计算数组元素大小
	//个数=数组总大小/每个元素大小
	//sz = sizeof(arr)/sizeof(arr[0]);
    //printf("sz = %d\n",sizeof (sz));

   
	
	
	// int a = 10;
	//seiof计算的是变量所占存储空间大小
	//printf("%d\n",sizeof(a));
	//printf("%d\n",sizeof(int));
    //printf("%d\n",sizeof a);
	
	
	
	
	
	
	
	// 复合赋值符 +=，-=
     //int a =10;
	 //a = 20;//赋值 ==判断相等
    //	a = a+10;
    // a +=10;

	//单目操作符
	//int a =1;
	//int a =-1;
	//!把真变成假
	//printf("%d\n",a);
	//printf("%d\n",!a);
 







	//int a = 3;
	//int b = 5;
	// （2进制）位操作
	//&按位与 int c = a&b;
	//  011
	//  101
	//  001
	//|按位或 int c = a|b;
	//  011
	//  101
	//  111
	//^按位异或 对应二进制位相同，则为0  相异为1
	//  011
	//  101
	//  110 
	
	
	
	//移位操作符 << 左移  >>右移
	//int a= 1;
	//a<<1;
	//int b = a<<1;
	//printf("%d\n",b);

	
	
	//int a = 5/2;//商数  5%2//取模得1
	//	printf("%d\n",a);



//auto
//	typedef //类型重定义
//	typedef unsigned int u_int;
  //unsigned int num = 20;



//static 修饰局部变量，当static时生命周期变长。修饰全局变量
//只能在源文件内部使用

//void test 
	//{
//	static 	int a =1;//静态局部变量
	//	a++;
	//	printf("a = %d\n",a);
//}

//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}



//#define 定义标识符常量
#define MAX 100
//#define 可以定义宏一带参数
//  函数实现
int (int x,int y)
{
	if (x>y)
		return x;
	else 
		return y;
}
//宏的定义
#define MAX(x,y)|(x>y?x:y)

int main()
{
	int a = MAX;
	int a = 10;
	int b = 20;
	int max = MAX(a,b);
	printf("max=%d\n",max);
	//宏的方法
	max = MAX(a,b);
	//max = (a>b?a:b);
	printf("max =%d\n",max);






	return 0;
}