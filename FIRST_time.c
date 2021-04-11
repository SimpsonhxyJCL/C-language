#define _CRT_SECURE_NO_WARNINGS 1
/* 
#include<stdio.h>
#define SPACE ' '
int main(void)
{
	char ch; //getchar() putchar()字符输入输出函数。
	// ch=getchar(); ==scanf("%c",&ch); 读取一个字符。putchar(ch);==printf("%c",&ch); 输出一个字符。
	
	printf("Please enter char!\n");
	ch=getchar();
	putchar(ch);
	printf("%c",SPACE);
	return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	long num;
	long sum = 0L;//0L的意思是把sum初始化为long类型的0值。
	int status;
	printf("Please enter some numbers\n");
	printf("enter quite to quite:  \n");

	status=scanf("%d",&num);

	system("calc"); //系统调用计算器
	system("cls");  //系统清屏

	while (status == 1) //==表示判断 是否相等。
	{
		sum += num;  //把NUM加上SUM的值重新赋给SUM。
		printf("enter next nubmer!(enter quite to end)\n");
		scanf("%d",&num);
	}
	printf("sumery is %d", num);

	return 0;
}
*/


//2021年2月25日15:47:34
/*
#include<stdio.h>

int main(void)
{
	char arr1[] = "ABC"; //把字符串ABC放入到数组中。自己末尾加入\0,结束。 
	char arr2[] = { 'A','B','C' };//给数组放入A,B,C,三个元素。
	printf("arr2=%s\n", arr1);
	printf("arr2=%s\n", arr2);

	return 0;

}
*/

// 创建能够打印****的函数
// 2021年2月25日20:08:18

//#include<stdio.h>
//#define width 40
//
//void starbar(void);//函数原型/
//int main(void)
//{
//	starbar();//函数使用
//	printf("%c\n", '\x61');//\x61是16进制数字对应的97 ASCII码 为小写字母a.
//	starbar();
//
//	return 0;
//}

//void starbar(void) { //函数定义
//
//	int count;
//	for (count = 1; count <= width; count++)
//		putchar('*'); //打印40个*字符
//	putchar('\n');
//}
//输出结果
//************************************
//a   
//************************************

//***2021年2月26日10:08:21
// if else 选择语句 <: 

//#include<stdio.h>
//int main(void)
//{
//	int input;
//	input = 0;
//	printf("你要好好学习吗？<:(0/1)\n");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("good boy!\n");
//	}
//	else
//	{
//		printf("mai_hong_shu!\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]); //arr【下标】，打印下标对应的元素。
//
//	return 0;
//}

//系统关机代码***
//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int a = 0;
//	printf("请输入关机指令！(输入一)\n");
//	scanf("%d", &a);
//  while(1){
//	      switch(a) {
//          case 1:
//		            system("shutdown -s -t 60");
//                  break;
//	        case !=1:
//		            system("shutdown -s -t 60");
//                  break;
//	       }
//     }
//	   return 0;
//}

//// 2021年2月27日12:52:50
////***调用外部变量 extern 的用法。*/
//#include<stdio.h>
//int main(void) {
//
//	extern int g_tell; //extern 申明调用MY_C.C的外部符号。
//	printf("g_tell=%d",g_tell);
//
//
//	return 0;
//}

///**指针是存放地址的变量**/
///*时间：2021年2月27日16:28:51*/
//#include<stdio.h>
//int main(void){
//
//	int a = 10;
//	int* p = &a; //p为指针，int* 类型 将a的地址赋给指针P。
//	*p = 200;//*p为解引用操作符。
//	printf("a的地址为%p\n",&a); //打印地址为%p.&a:是取地址符 ，取A的地址符。
//	printf("a=%d\n",a);//打印A的值，这里的地的值已经被200代替。
//	return 0;
//}


////判断一个数是奇数,还是偶数。
//#include<stdio.h>
//int main(void) {
//	int num;
//	printf("请输入一个数字，我能判断奇偶性！\n");
//	scanf("%d",&num);
//	if (num % 2 == 0)
//		printf("%d :为偶数!\n",num);
//	else
//		printf("%d:为奇数！\n",num);
//
//	return 0;
//}

//2021年3月1日12:03:23
//switch和break 
//switch是判断的意思，且表达式必须是整型，可实现多分支。—>case 入口—>break 中止（出口）。
// case 语句入口，必须是整数。
//#include<stdio.h>
//
//int main(void) {
//
//	int day = 0;
//	scanf("%d",&day);
//
//	switch (day)
//	{
//	case 1:
//			printf("周一!\n"); //case语句的结束，有break 作为中断结束。
//			break;
//	case 2:
	//		printf("周二!\n");
	//	    break;
	//case 3:
	//		printf("周三!\n");
	//		break;
	//case 4:
	//case 5:
	//case 6:
	//case 7:
	//		printf("休息日!\n");
	//		break;
	//default:  //default 为默认语句！可以控制范围。
	//	printf("输入的值不在范围内！请输入1-7之内的数字！");
	//		return 0;
	//}


//课堂随意书写，非有效代码！2021年3月1日2。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define constant 20
//#define SIZE 10
//int main(void) {
//
//	int a = 1;
//	int B = 0;
//	char ch='B';
//	int arr [constant] = { 0 };
//	int* p = &a;
//
//	printf("please entern a number!\n");
//	printf("a的长度为%d\n",strlen(a));
//	scanf("%s",&B);
//
//	*p = 5;
//
//		if (a == 1)
//		{
//			printf("a=%d\n",a);
//		}
//		else if(a==2)
//		{
//			printf("a是别的值！\n");
//		}                              //本以为时间扼杀了科学的信仰，但是灵魂深处的感触从未改变！
//		else if (a == 3)               //2021.3.1 翻阅旧时日记所感！
//		{
//			printf("a=%d\n",a);
//		}
//		
//        while (a = 5, a > 0 && a < 10, a++)
//		{
//			printf("%c\n",ch);
//		}
//		return 0;
//}

//2021年3月1日21:24:05
//while语句中的break终止例子。 
//#include<stdio.h>
//
//int main(void) {
//
//	int a = 1;
//	int sum = 0;
//	while (a <= 10)
//	{
//		if (a ==5 )//判断a是否多等于5 是的话终止打印。/
//			break;  //若while循环恒成立，if（i=5）是赋值语句，恒成立，陷入死循环。
//		sum += a;
//		printf("%d\n", a);
//		printf("%d\n",sum);
//	    a++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int a = 0;
//	while (a<=10)
//	{
//		a++;
//		printf("%d\n",a);
//		if (a=5)  //一个等号为赋值语句。
//		{
//			printf("%d\n",a);
//			break;  //break 中断了后面所有的程序。
//		}	
//	}
//	return 0;
//}
////输出结果1\n 5\n.
//
//2021年3月2日21:07:59
//模拟登录程序，三次登录机会，如果密码错误，则退出系统。
//#include<stdio.h>
//#include<string.h>
//#include<time.h>//s=rand(); srand((unsigned int)time(NULL));时间戳 产生随机数。
//#define length 40
//
//void stars (void);
//
//int main(void) {
//
//	char password ="ABC123456";
//	char a;
//	int count = 0;
//
//	stars();
//	printf("请输入登录密码！\n");
//	stars();
//	/*printf("%s\n\n",stars);printf("请输入登录密码！\n");printf("%s\n", stars);错误示例*/
//   
//	 scanf("%s", &a);
//	if (strcmp(password,a)==0) //string compare-strcmp(A,B)==0，判断字符串是否相等。
//	{
//		printf("登录成功！\n");
//	}
//	else
//	{
//		printf("您输入的密码错误，请重试！\n");
//		count++;
//	}
//		if (count>=3)
//		{
//			printf("您三次输入密码错误！系统将退出\n");
//			continue;
//		}
//	return 0;
//}
//void stars(void) 
//{
//	int count;
//	for ( count = 1; count <=length; count++)
//	{
//		putchar('*');  //char单字符用单引号！！
//	}
//	putchar('\n');
//}
//输出：有问题？？？？？？？？？？？？？？？？？？？？？？？？？？？？

//#include<stdio.h>
//int main(void) {
//	int i = 1;
//	double sum=0.0; //双精度浮点数初始化时0.0
//
//	for ( i = 1; i <=100; i++)
//	{
//		sum += 1.0 / i; //1.0结果是浮点数。
//	}
//	printf("%lf\n",sum);
//
//	return 0;
//}

//一组数中找最大值。
//#include<stdio.h>
//int main(void) {
//	int arr[] = { 1,2,3,4,5,6,5,6,7,8,9 };
//	int i = 0;
//	int max = arr[0];
//	//int max = 0;//将max赋为0；有问题。应该将元素中某个值赋给max。
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);//数组元素的个数是总/单子sizeof
//	for ( i = 0; i < sz; i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];//将数组元素中的最大值赋给max。
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

////在屏幕上写9*9乘法口诀表。
//#include<stdio.h>
//int main(void) {
//	int i = 0;
//	int j = 1;
//	
//	for ( i = 1; i <= 9; i++)//9行。
//	{
//		 //J 列
//		for (j = 1;j <= i; j++) 
//		{
//			printf("%d*%d=%-2d  ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	printf("%x\n",32767);// 0X7FFF 16十六进制数=32767
//	return 0;
//}
//猜数字游戏！
//2021年3月3日14:01:57
//#include<stdio.h>
//
//
//void menu(void) {
//
//	printf("****************************************\n");
//	printf("***** PLAY:enter 1    EXIT:entr 2 ******\n");
//	printf("****************************************\n");
//
//}
//int main(void) {
//	int a = 0;
//	menu();
//	do
//	{
//		printf("猜数字游戏，请选择！（0/1）\n");
//		scanf("%d", &a);
//
//		switch (a)
//		{
//		case 1:
//			printf("开始游戏！\n");
//			game();
//			break;
//		case 2:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("请重新输入！\n");
//			break;
//		}
//		//if (a==1)
//		//{
//		//	printf("游戏开始！\n");
//		//	game();//玩游戏！
//		//}
//		//else if (a == 0) {
//		//	printf("游戏退出！\n");
//		//	break;
//		//}
//	} while (1);       //do-while出口条件循环，循环体至少被执行一次。
//
//	return 0;
//}

//猜数字
//#include<stdio.h>
//int main(void) {
//	int right_number = 10;
//	int input = 0;
//	do
//	{
//		printf("guess a number!\n");
//		scanf("%d",&input);
//
//	} while (right_number!=input);  //出口条件循环。条件为不等于，意思是当条件不等于的时候、循环。当条件
//	printf("Congratulations!\n");   // 等于的时候跳出循环。
//	 
//	return 0;
//}
//用程序直接打开文件。打开一个文件，并显示该文件。(C++_p193页)
//#include<stdio.h>
//#include<stdlib.h>
//int main(void) {
//
//	return 0;
//}
/*用自定义函数，求整型数的和或者求最大值*/
//2021年3月3日20:22:10
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//int main(void) {
//
//	int a = 10;
//	int b = 300;
//	int max = get_max(a, b);
//	printf("max=%d\n",max);
//
//
//	return 0;
//}
/*用指针变量的自定义函数交换两个数字的值*/
//#include<stdio.h>
//void exch(int* pa, int* pb) { //int* 的指针类型。
//	int cennter_nmu;
//	cennter_nmu = *pa;
//	*pa = *pb;
//	*pb = cennter_nmu;
//
//}
//int main(void) {
//
//	int a = 10;
//	int b = 30;
//	printf("a=%d,b=%d\n",a,b);
//	exch(&a, &b);//调用交换的自定义函数。
//	printf("a=%d,b=%d\n",a,b);
//
//	return 0;
//}
/*用一个函数判断一个数是否为素数*/
//#include<stdio.h>
//int judge_fun(int * p) {
//	
//	if (*p%2 == 1) {  //??????????????????????????????????????? B站P8-144.12点
//		
//		return 1;
//	}          //素数返回1，非素数返回0.
//	else
//		return 0;
//}
//int main(void) {
//	int a;
//	
//	
//	printf("enter a number,can judge!\n");
//	scanf("%d", &a);
//	int b = judge_fun(a);
//	
//	printf("返回值是%d（1是素数，0是非）\n",b);
//
//	return 0;
//}
// 函数统计字符串的字数。时间：2021年3月4日14:27:27
//#include<stdio.h>
//#include<string.h>
//#inclde<assert.h>
//int my_length(const char* p) {
//	assert(*p !=NULL); //确定*P不是空指针。
//  int count = 0;
//	while (*p !='\0') //自定义函数定义 计数器，来获取字符串的长度。
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main(void) {
//
//	char arr[] = "abcsde";
//	int length = 0;
//	//length= strlen(arr);
//	length = my_length(arr);
//	printf("%d\n", length);
//
//	return 0;
//}
//运行？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？
/*二维数组的知识*/
/*二维数组中，行和列一般不能省略！，初始化元素之后，行也可能省略。下标也是从0开始的！*/
/*二维数组和一维数组一样，在内*/
//#include<stdio.h>
//int main(void) {
//	int arr[4][5] = { {1,2,3},{2,3,4,5,5} };
//	int i = 0;
//	for ( i = 0; i <4; i++)
//	{
//		int j = 0;
//		for ( j = 0; j <5; j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
/*arr是数组，对于数组传参，传得是数组的首地址 &arr[0]*/
/*冒泡排序-----时间：2021年3月4日18:52:39*/
//构造一个冒泡函数，完成将一个数组中的两个数字依次大小比较。
// 一次冒泡排序会将一个元素放到它最终正确的位置上。
//#include<stdio.h>
//
//#define	ELEMENT 10;
//void bubble_sort(int arr[],int len)//优化代码的程序，可以设立flag 判断一趟如果未交换元素，
//                                   // 证明此数组的整型数已经是降序或者是升序。
//{
//	int i = 0;
//	for ( i = 0; i < len-1; i++)
//	{
//		int j = 0;
//		for (j= 0; j< len - i; j++)
//		{
//			                           //int flag = 1; //已经排序
//			if (arr[j] > arr[j + 1])
//			{
//			     int temp;
//			     temp = arr[j];
//			     arr[j] = arr[j + 1];
//			     arr[j + 1] = temp;
//				                        //int flag = 0;
//		    }
//			
//			
//		}
//	}
//}
//int main(void)
//{
//	int arr[10] = {5,9,6,7,8,3,4,2,1,0};
//	int i=0;
//	printf("Please enter 10 numbers!\n");
//
//	/*for ( i= 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//
//	}
//	printf("\n");*/
//	int len= sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,len);
//
//	for ( i = 0; i < len; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}
/*指针数组*/
/*指针数组是存放指针的数组，指针元素的类型是，地址变量*/
//#include<stdio.h>
//
//int main(void) {
//
//	int a = 1;
//	int	b = 2;
//	int c = 3;
//	int * arr[3] = { &a,&b,&c };
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	printf("%p,%d ,%d,%d\n",arr,*pa,*pb,*pc);//数组的地址一般是首元素的地址。
//
//	return 0;
//}

//时间：2021年3月6日13:01:10
/*结构体 structure*/
/*strucct tag(结构体名，结构体标签) ——声明结构体类型。
{
  member list;//结构体的成员列表。

}variable;//变量列表。
*/
//#include<stdio.h>
//typedef struct student  //typedef结构体类型重定义。stu为它重命名的名字。
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char number[5];
//}stu;       //s1,s2,s3; //创建三个全局的结构体变量。不建议使用过多的全局变量。
//struct stu 
//{ 
//	double a;
//	int b;
//	struct student;
//	char* pa;
//};
//
//void print1(struct stu ext) //接受原结构体类型。
//{
//	printf("%lf\n", ext.a);
//	printf("%d\n",ext.age);
//	printf("%s\n",ext.name);
//
//}
//int main(void) {
//
//	char arr[] = { 'a','b','c','\0'};
//	struct student s = { "张三",23,"男","0123" };//局部的一个结构体变量。
//	stu s2 = { "王小",32,"女","0124" }; //用重新定义的stu，结构体类型 定义S2变量。
//
//	struct stu stu1={ 3.14, 40, { "zhangsan",23,"man","1002" }, arr};
//
//	print1(stu1); //结构体传参，
//	printf("%s\n",s2.sex);
//	printf("%lf\n",stu1.a);
//	printf("%d\n",stu1.b);
//	printf("%s\n",stu1.pa);
//	return 0;
//}


///*BUG的调试，实用技巧。*/
////数组越界，死循环的例子（依据内存布局的原因）。
//#include<stdio.h>
//#include<windows.h>
//int main(void) 
//{
//	int a = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	for ( a = 0; a <=12; a++)
//	{
//		printf("hehe!\n"); //hehe死循环。在Linux编译器GCC下，<=11死循环。
//		arr[a] = 0;
//	}
///*局部变量在内存的栈区 进行创建，栈区默认先使用高地址，先创建了A，然后在内存中连续的创建了数组，
//地址由低到高，当数组越界之后，最后一个地址和A的地址重合，A 被改成了0，一直循环下去，陷入死循环*/
//
//	system("pause");
//	return 0;
//}

//时间：2021年3月8日09:55:11
//#include<stdio.h>
//void game() {
//
//
//}
//void menu(void)
//{
//	printf("***********************************************\n");
//	printf("*************  1:play   2:exit  ***************\n");
//	printf("***********************************************\n");
//
//}
//int main(void) {
//
//	printf("pwlase enter a number,to play game!\n"); 
//	printf("chose\<:");
//	menu();
//	  
//	do
//	{
//		int num1 = 0;
//		scanf("%d\n",&num1);
//		switch (num1) 
//		{
//		  case 1:
//			  game();//game 函数实现游戏的过程。
//			  break;
//		  case 2:
//			  printf(" Exit the game!\n");
//			  break;
//		//  default:
//			  printf("Please enter again!\n");
//		
//		}
//
//	} while (1);
//
//	return 0;
//}

/*定义的结构体类型->结构体变量*/
/*结构体用指针地址传参，节省内存空间*/
//函数传参的时候，参数需要压栈操作，在栈内创建一块内存，插入一个元素。
//压栈：插入一个元素，出栈操作:删除一个元素的操作。

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void prit1(stu * pc );
//void prit2(stu temp );
//char* my_strcopy(char* str1, char* str2);
//typedef struct
//{
//	char name[40];
//	short age;
//	char number;
//	char sex[10];
//
//}stu;
//int main(void) {
//
//	char arr1[] = { "######" };
//	char arr2[] = { "$$$" };
//	
//	printf("arr1=%s\n",arr1);
//	printf("arr2=%s\n",arr2);
//	my_strcopy(arr1, arr2);//strcpy 字符串拷贝。
//	/*stu pstu = { "zhangsan",23,010,"man" };*/
//
//	printf("arr1=%s\n", arr1);
//	printf("arr2=%s\n", arr2);
//
//	printf("%s\n",my_strcopy(arr1,arr2));
//	//prit1(&pstu);  //传递结构体的指针。
//	//prit2(pstu);
//	return 0;
//}
//void prit1(stu* pc)
//{
//	printf("name:%s\n", pc->name);
//	printf("age:%d\n", pc->age);
//	printf("number:%s\n", pc->number);
//	printf("sex:%s\n", pc->sex);
//
//}
//void prit2(stu temp)
//{
//	printf("name:%s\n", temp.name);
//	printf("age:%d\n", temp.age);
//	printf("number:%d\n", temp.number);
//	printf("sex:%s\n", temp.sex);
//
//}
/*方法二：使用const,使用assert断言，确保传过来的地址不是空指针，优化的方法*/
//char* my_strcopy(char* str1, const char* str2) //str2 源 不能被修改。
//{
//	char* ret = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);  //assert断言库中 确定断言语句。保证指针不为空指针。
//	//if ( str1!=NULL && str2 != NULL)  //判断两个指针均不为空指针。
//	{
//		while (*str1 = *str2)
//		{
//			;
//		}
//		return ret;
//	}
	/*方法一：低阶方法*/
	//while (*str2 != '\0') 
	//{
	//	*str1 = *str2;	
	//	*str2++;
	//	*str1++;  //strcpy(str1, str2); //不使用字符串拷贝函数，strcpy.
	//}
	//*str1 = *str2;
//}

//时间：2021年3月11日17:33:41
/*用代码实现，判断内存中存放的数据是，地址：低->高，小端字节序（01 00 00 00），1=0x00000001 ，还是大端字节序（00 00 00 01）*/
//#include<stdio.h>
//int main(void)
//{
//	int a = 1;
//	char* pa = (char *)&a;
//	if (*pa == 0)
//	{
//		printf("大端存储\n");
//	}
//	else
//		printf("小端存储\n");
//	return 0;
//}
/*一般PC的机器都是小端存储*/
/*用函数模块封装实现，大端，小端的功能*/
//#include<stdio.h>
//int check_sys(void)
//{
//	int a = 0;
//	printf("please enter a number!\n");
//	scanf("%d", &a);
//	char* pa = (char*)&a;//可直接简化 return *(char*)&a;
//	return *pa;          //指针类型决定了，指针解引用操作的时候能访问几个字节。char* 一个字节，int* 四个字节。
//	                     // 决定了，指针+1，—1，走几个字节。
//}
//
//int main(void)
//{
//	int state=check_sys();
//	if (state == 1) //输出1 是小端，输出0，是大端。
//	{
//		printf("xiao_duan!\n");
//	}
//	else
//		printf("da_duan!\n");
//}

//时间：2021年3月16日21:15:03 星期四
/*二维数组的访问*/
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr1[5][3] =
//	{
//		{56,71,24},
//		{25,23,65},
//		{32,56,98},
//		{42,56,98},
//		{15,45,65}
//	};
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%d\n",arr1[0][i]);
//	}
//	    printf("%d\n",arr1[0][0]);
//	return 0;
//
//}
//时间：2021年3月17日19:38:48
/*一维数组的依次访问功能*/
//#include<stdio.h>
//int main()
//{
//	int  a[10] = { 1,2,3,4,5,6,7,8,9,10 };//10个元素的整型组数。
//	int* pa = a; //数组的首元素取地址，为指针PA。int*类型。 
//	int i;
//	int sz;
//	sz = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < sz; i++) 
//	{
//		printf("a=%d\n",*pa); //*pa 是解引用操作符，把PA里的值取出来。
//		pa = pa + 1;
//		
//	}
//	return 0;
//}
/*结构体，书的类型和价格表*/
//#include<stdio.h>
//struct book  //创建book名的结构体，包含name，price信息。
//{
//	char name[20];
//	short price;
//
//};
//int main(void)
//{
//	struct book book1 = { "Clanguageprograming",50 };
//
//	printf("book name:%s\n",book1.name);
//	printf("book price:%d\n", book1.price);
//
//	book1.price = 38;  //更改后的价格。
//	printf("changed price=%d\n",book1.price);
//
//	return 0;
//}
//无符号数的unsigned int a的死循环。
/*无符号数，变量的值为负一时，就是全一，是一个超大得数*/
//#include<stdio.h>
//#include<Windows.h>
//int main(void)
//{
//	unsigned int a;
//	for ( a = 10; a >=0 ; a--) //从10减到0，负一时由于是无符号类型，故全一是个超大的数。
//	{
//		printf("%u %u %u %d %d\n",a,a,a,a,a);//打印啊A的值
//		Sleep(200);
//	}
//	return 0;
//}
/*无符号char类型的死循环，无符号数容易导致死循环，256就是0*/
//无符号数容易溢出，导致死循环。平时使用的时候需谨慎。
//#include<stdio.h>
//int main(viod)
//{
//	unsigned char i;
//	//有符号的char类型范围：-128-127 共256个数。
//	for (i = 0; i <= 255; i++) //无符号类型的取值范围0-255  256=0,hello world 死循环了。
//	{
//		printf("hello world!\n");
//	}
//	return 0;
//}    

/*字符指针*/
//#include<stdio.h>
//int main(void)
//{
//	char a = 'W';
//	char *pa=&a;
//	printf("a=%p\n",pa);
//	printf("a=%c\n", *pa);
//
//	printf("a=%c\n",a);
//
//	return 0;
//}

//指针维护字符串
//#include<stdio.h>
//int main(void)
//{
//	char* pa = "asdfg"; //"asdfg"是一个常量字符串。
//	printf("%s\n", pa);// 把字符串的首地址放到char* 类型中，指针P来维护字符串。
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	 const char* pa = "abcdef";//用const 修饰字符串常量。
//	 printf("%s\n", pa);
//		
//	return 0;
//}

/*打印呵呵 还是哈哈！*/
//#include<stdio.h>
//int main(void)
//{
//	char arr1 = "abcdef"; 
//	char arr2 = "abcdef"; 
//	if (arr1 == arr2)   //比较的是两个字符串是否一致。
//	{
//		printf("hehe!\n");
//	}                      // 打印结果呵呵。
//	else
//		printf("haha!\n");  
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";//常量字符串。P1和P2 存放在同一个地址。
//	//char arr1[] = "abcdef"; //arr1 存放首元素的地址。
//	//char arr2[] = "abcdef"; //arr2 的地址内存单元。
//	if (p1 == p2)  
//	{
//		printf("hehe!\n");// 两者的地址的位置在内存中肯定不一样。
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//
//}
/*指针数组*/
//#include<stdio.h>
//int main(void)
//{
//	//int a[10] = { 0 }; //整型数组
//	char ch[5] = { 0 }; //字符数组。
//	char* pch[5];//存放字符指针的数组。
//	int* pa[5];  //存放整型指针的数组。
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* abc[4] = { &a,&b,&c,&d };
//
//	int sz = sizeof(abc) / sizeof(abc[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d\n",*abc[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* a123[] = { arr1,arr2,arr3 }; //这才是正真的指针数组。
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int sz = sizeof(arr1) / sizeof(arr1[0]);
//		int j = 0;
//		for (  j= 0;  j< sz; j++)
//		{
//			printf("%d", *(a123[i] + j)); //打印了这个三行五列的数组表。
//		}
//		printf("\n");
//	}
//	return 0;
//}

//时间:2021年3月20日10:35:14
//#include<stdio.h>
//int main(void)
//{
//	int* pa= NULL;//PA是整型指针，指向整型的指针，可以存放整型的地址。
//	char* cha= NULL; //cha是字符指针，指向字符的指针，可以存放字符的地址。
//	
//	int arr[10] = { 0 }; //数组指针，指向数组的指针，可以存放数组的地址。
//	int(*p)[10] = &arr;  //P就是一个数组指针。
//	//arr--首元素地址。
//	//arr[0]--首元素地址。
//	//&arr--整个数组的地址。
//	//区分数组指针和指针数组 int * pa[10]; int (*pa) [10];前者是指针数组，后者星号和PA结合，为数组指针。
//	char* arr[10] = NULL;
//	char* (*parr)[10] = &arr; //parr是指向10个元素数组的指针，char*类型的指针。
//	return 0;
//}
/*打印一个二维数组，用自定义函数实现*/
//#include<stdio.h>
////参数是数组的形式。
//void printf_arr(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for ( i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是指针的形式。数组指针，
//void printf_arr2(int(*arrp)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(arrp+i)+j));// *(arrp+i)取出每一行，在此基础上访问每一列。*（*(arrp+i)）
//			printf("%d ",(*(arrp+i))[j]);  //这样写效果也一样。
//			printf("%d ", arrp[i][j]); //也是一样的效果。
//		}
//		printf("\n");
//	}
//}
//
//int main(void)
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6}, {3,4,5,6,7} };
//	printf_arr(arr,3,5);
//	printf_arr2(arr, 3,5);
//	return 0;
//}
/*二级指针传参数*/
//#include<stdio.h>
//void text(int** p) //二级指针接收。
//{
//	printf("\n");
//}
//int main(void)
//{
//	int n = 0;
//	int* ptr = &n;
//	int** pp = &ptr;//二级指针。一级指针的地址。
//	text(&ptr);// OK 
//	text(pp);//OK
//	int* arr[10];
//	text(arr);// OK
//
//	return 0;
//}
/*函数指针概念*/
//ADD函数求加法。
//#include<stdio.h>
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main(void)
//{
//	/*int a = 10;
//	int b = 20;
//
//	ADD(a, b);
//	printf("%d\n", ADD(a,b));
//	printf("%p\n",&ADD);
//	printf("%p\n", ADD);*///&ADD==ADD,&函数名 函数名都是函数的地址。
//
//	int  (*p)(int, int) = ADD;//函数指针，是一个指针，存放函数的地址。存放函数地址的指针。
//  printf("%d",p(3,5)); ////函数本身就是地址，前面解不解应用都不重要。P和ADD相等，效果和下面*P都一样。
//	printf("%d",(*p)(3,5));
//	return 0;
//}
//#include<stdio.h>
//void Print(char* p)
//{
//	printf("%s\n",p);
//}
//int main(void)
//{
//	void (*P)(char*) = Print; //函数指针，char* 类型的参数
//	(*P)("hello!");
//}
/* 函数指针的数组=函数指针数组，将多个函数指针存放到数组里面*/
//#include<stdio.h>
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int SUB(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//int EXL(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//int DIV(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}
//int main(void)
//{
//	int (* p[4])(int,int)= { ADD,SUB,EXL,DIV }; // 函数指针数组(*P[4])是一个整体。
//	int i = 0;                                  //函数指针类型就是上述代码去掉p[4],剩下来的代码。
//	for ( i = 0; i < 4; i++)
//	{
//		printf("%d  ",p[i](10,5));
//	}
//	return 0;
//}
//写一个函数指针pf，能够指向my_strcpy,拷贝字符串
//my_strcpy(char * des,const char * src);
// char * (*p_my_strcpy)(char * ,const char *);
//#include<stdio.h>
//void my_strcpy (char* dest, char* scr)
//{
//	int temp;
//	temp = * dest;
//	* scr = dest;
//	* dest = temp;
//
//}
//int main(void) 
//{
//	void (*pf)(char, char) = my_strcpy;
//	my_strcpy("abc", "defg");
//
//	printf("%s", pf);
//	return 0;
//}

//#include<stdio.h>
//void my_strcpy(char* dest, const char* scr)
//{
//	char temp;
//	temp = dest;
//	dest = scr;
//	scr = temp;
//
//}
//int main(void)
//{
//	//char* my_strcpy(char* dest, const char* scr);
//	char (*pf)(char, char) = my_strcpy;
//	printf("%s\n", pf("abc", "def"));
//	return 0;
//}
//写一个函数指针数组，pfarr,能够存放4个my_strcpy函数的地址。
//  char * (*pfarr[4])(char * ,connst char*);

//时间：2021年3月23日13:07:11
/*计算器小程序代码练习*/
//#include<stdio.h>
//void menu() //枚举，打印表头
//{
//	printf("*************************************\n");
//	printf("******** 1.ADD    2.SUB  ************\n");
//	printf("******** 3.MUL    4.DIV  ************\n");
//	printf("******** 0.eixt          ************\n");
//	printf("*************************************\n");
//}
//int ADD(int x, int y)//加、减、乘、除自定义函数的利用。
//{
//	return x + y;
//}
//int SUB(int x, int y)
//{
//	return x - y;
//}
//int MUL(int x, int y)
//{
//	return x * y;
//}
//int DIV(int x, int y)
//{
//	return x / y;
//}
//int main(void)
//{
//	int x, y;
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择要计算的类型！\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case (1):
//			printf("请输入两个相加的数！\n");
//			scanf("%d %d", &x, &y);
//			printf("结果是：%d\n", ADD(x, y));
//
//			break;
//		case (2):
//			printf("请输入两个相减的数！\n");
//			scanf("%d %d", &x, &y);
//			printf("结果是：%d\n", SUB(x, y));
//
//			break;
//		case(3):
//			printf("请输入两个相乘的数\n");          //冗余的问题在怎么解决？
//			scanf("%d %d", &x, &y);                   //可以利用回调函数。
//			printf("结果是：%d\n", MUL(x, y));
//
//			break;
//		case(4):
//			printf("请输入两个相除的数\n");
//			scanf("%d %d", &x, &y);
//			printf("结果是：%d\n", DIV(x, y));
//
//			break;
//		case(0):
//			printf("退出计算 \n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//		}
//	} while (input);//除了input 之外，其余都是非零值，条件为真，while语句循环。
//	return 0;
//}

//上述程序还可以用函数指针数组来实现！思考如何实现，写出如下代码？？？？？
//#include<stdio.h>
//void menu() //枚举，打印表头
//{
//	printf("*************************************\n");
//	printf("******** 1.ADD    2.SUB  ************\n");
//	printf("******** 3.MUL    4.DIV  ************\n");
//	printf("******** 0.eixt          ************\n");
//	printf("*************************************\n");
//}
//int ADD(int x, int y)//加、减、乘、除自定义函数的利用。
//{
//	return x + y;
//}
//int SUB(int x, int y)
//{
//	return x - y;
//}
//int MUL(int x, int y)
//{
//	return x * y;
//}
//int DIV(int x, int y)
//{
//	return x / y;
//}
//int main(void)
//{
//	int input;
//	int x = 0;
//	int y = 0;
//	int (*pfArry[5])(int,int) = { 0,ADD,SUB,MUL,DIV };//用函数指针数组存放每个计算类型函数的地址。
//	                                                   //可以添加别的类型，如异或运算，
//	do
//	{
//		menu();//打印表头。
//		printf("请选择计算类型！<:\n");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：> \n");
//			scanf("%d %d", &x, &y);
//			int ret = pfArry[input](x, y);
//			printf("结果是：%d\n", ret);
//			/*switch (input)
//			{
//			case 1:
//				(*pfArry[intput]);
//				break;
//			case 2:
//				SUB(x,y);
//				break;
//			case 3:
//				MUL(x,y);
//				break;
//			case 4:
//				DIV(x,y);
//				break;
//			}*/
//		}
//		else if (input == 0)
//		{
//			printf("退出计算！\n");
//		}
//		else 
//		{
//			printf("选择错误！请重新选择！\n");
//		}
//	} while (input);
//	return 0;
//}

//时间：2021年3月25日20:14:08
/*简单的回调函数代码实现*/
/*回调函数：通过函数指针调用的函数，把函数指针作为参数传给另一个函数*/
//#include<stdio.h>
//void fp(char* str)
//{
//	printf("%s",str);
//}
//void print(void fp(char*))
//{
//	printf("wed\n");
//	fp("hello");
//}
//int main(void)
//{
//	print(fp);
//
//	return 0;
//}
//****************************************************************************************************************
/*
  1.指针数组：存放指针的数组，如：int* arr[3]={&a,&b,&c};//找一个数组，发各种类型的指针地址放入到数组中，元素是地址。
  2.数组指针：指向数组的指针。如：int* (*parr)[3]=&arr;  //就是把数组的地址放到一个指针变量里面。
  3.函数指针：指向函数的指针，定义一个指针指向一个函数。//把函数名存在一个地址里，就变成了一个新的指针。
   int ADD(int x,int y)
   {
		return x+y;
   }
   int main()
   {
		 int (*PADD)(int,int)=ADD; // &ADD 也可以。//这就是函数指针。 有函数类型，函数的参数类型，和指向的函数名。
         return 0;
   }
  */
//函数指针的使用
//#include<stdio.h>
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	int a, b;
//	printf("please enter two number to addition!\n");
//	scanf("%d %d", &a, &b);
//	   int * pa = &a;
//	   int *pb = &b;
//	//定义一个加法函数，ADD。
//	int  (*padd)(int, int) = &ADD;
//	int sum=(*padd)(*pa,* pb);
//	printf("%d \n", sum);//打印padd传的3，和4 两个参数的求和运算的值。
//
//	return 0;
//
//}
//函数指针的数组：存放函数指针的数组，多个函数指针的地址是数组的元素。
//如： ADD函数，SUB函数，将这两个函数指针放到一个有两个元素的数组里面。
//#include<stdio.h>
//int ADD(int x,int y)
//{
//	return x + y;
//}
//int SUB(int x, int y)
//{
//	return x - y;
//}
//int main(void)
//{
//	
//	int z=ADD(1,0); 
//	int x=SUB(2,1);
//	int (*parr1)(int, int) = &ADD;
//	int (*parr2)(int, int) = &SUB;
//	int (*arr[2])(int, int) = { parr1(1,0), parr2(2,1) };//函数指针数组。存放了两个函数指针元素的数组arr。
//
//	printf("SUM=%d \n",z);
//	printf("SUB=%d \n", x);
//	printf("arr0=%d arr1=%d\n",arr[0],arr[1]);
//
//    /*
//	//若再将函数指针数组的数组名取地址操作，则得到指向函数指针数组的指针。
//	int (*(*parr)[1])(int, int) = &arr; //指向arr这个函数指针数组的指针。
//    //回调函数：通过函数指针调用的函数。
//	*/
//	return 0;
//}
//时间：2021年3月30日13:22:42
//冒泡排序
//qsort 库函数的调用，实现通用的元素比较（排序）。
//#include<stdio.h>
//#include<stdlib.h>
//void BUBLE_sort(int arr[], int sz)//只能实现整型数组的排序，排序算法不够通用。
//{
//	int i;
//	for (size_t i = 0; i <sz-1; i++) //每一趟排序。供sz-1次，10个元素的话排9趟，最后一个元素自动归位，不用排。
//	{
//		int j;
//		for (size_t j = 0; j < sz-1-i; j++)//每一趟排的元素对数，刚开始sz-1,每一趟少一个。可以用-i表示。
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//struct stu
//{
//	char name[20];
//	short age;
//};
//void cmp_int(const void* e1, const void* e2) // void *类型的指针可以结束任意类型的地址。 
//                                             // void * 类型的指针不能进行+-整数的运算，不知道访问几个字节。
//{                                            // void* 类型的指针不能进行解引用操作。不知道访问几个字节。     
//	return *(int*)e1 - *(int*)e2;
//}
//void Test()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//qsort-库函数 用于各种排序，思想：快速排序的算法.引头文件<stdlib.h>
//	 //库函数 void qsort(void* base, size_t num, size_t width, int (*cmp)(const void* e1, const void* e2))
//	for (size_t i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//排序之前的顺序。
//	}
//	printf("\n");//换行操作。
//
//}
//int main(viod)
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	// struct stu s[3] = { {"zhang_san",20},{"wang_wei",24},{"he_zi",20} }; 怎么排？？？？？？？？
//
//	 for (size_t i = 0; i < sz; i++)
//	 {
//		 printf("%d ", arr[i]);//排序之前的顺序。
//	 }
//	 printf("\n");//换行操作。
//
//	 Test();//用test函数实现qsort,库函数。
//
//	 BUBLE_sort(arr, sz);//arr是整型的，排序算法不够通用。
//
//	for (size_t i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);//冒泡排序之后的数组。
//	}
//	printf("\n");
//	return 0;
//}
/// 浮点数排序 float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
//#include<stdio.h>
//#include<stdlib.h>
//int float_cmp(const void* e1, const void* e2)
//{
//	return ((int)*(float*)e1 - *(float*)e2);
//}
//int main(void)
//{
//	float ff[9] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(ff) / sizeof(ff[0]);
//	qsort(ff, sz, sizeof(ff[0]), float_cmp);//qsort库函数，四项参数，最后一项参数是函数功能。
//	
//	for (size_t i = 0; i < sz; i++)
//	{
//		printf("%f ", ff[i]);
//	}
//	
//	return 0;
//}

// struct stu s[3] = { {"zhang_san",20},{"wang_wei",24},{"he_zi",20} }; 怎么排？？？？？？？？
// 结构体依然可以用qsort来比较大小。但是只能用结构体包含的内容，如用年龄(cmp_stu_by_age)函数来比较。或名字来比较。
//#include<stdio.h>
//#include<stdlib.h>
//struct stu
//{
//	char name[20];
//	int  age;
//};
//int cmp_stu_by_age(const void* e1,const void* e2)//结构体排序通过年龄。传的参数是两个空指针。
//{
//	return ((struct  stu*)e1)->age-((struct stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp((struct stu*)e1, (struct stu*)e2); //strcmp函数，字符串的比较 按字母顺序表排序。
//}
//int main(void)
//{
//	struct stu s[3] = { {"zhang_san",24},{"li_si",22},{"wang_wu",21} };//比较结构体的大小
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);//调用qsort 函数通过年龄来比较结构体。
//	//第一个参数：待排序数组的首元素的地址。
//	//第二个参数: 待排序数组的元素个数。
//	//第三个参数：待排序元素的每个元素的大小，单位是字节。
//	//第四个参数：函数指针，比较两个元素大小所用的函数地址-这个函数要自己实现。
//	//            函数指针的两个参数是，带比较两个元素的地址。
//	for (size_t i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//	printf("\n");
//	
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//调用qsort函数，通过结构体的元素（姓名）来给结构体排序。
//
//	for (size_t i = 0; i < sz; i++)
//	{
//		printf("%s ",s[i].name);
//	}
//	printf("\n");
//
//	return 0;
//}
//时间：2021年3月31日09:05:51

// B站 指针7 后半段的内容，实现冒泡函数的通用调用。
// 还需要看一次，此次内容是指针的重点内容。


//时间：2021年3月31日20:14:58
/* 数组名是首元素的地址
   1.sizeof（数组名）-表示整个数组的字节数大小
   2.&数组名-数组名表示整个数组
*/
//一维整型数组
//#include<stdio.h>
//int main(void)
//{
//	int a[4] = { 1,2,3,4 }; //int 类型是4个字节。
//	
//	printf("%d\n", sizeof(a + 0));//4 首元素的字节大小，int为4个字节。
//	printf("%d\n",sizeof(a+1)); //4 第二个元素的字节大小
//	printf("%d\n", sizeof(&a));//4  地址的字节为4/8,32位平台是4,64位平台是8.
//	printf("%d\n", sizeof(&a + 1));//4 跳过一整个数组的地址，依然是4个字节。
//	printf("%d\n", sizeof(a));// 16  a 代表整个数组的大小，数组有四个元素，每个是4个字节，故16个字节。
//	printf("%d\n", sizeof(a[1]));//4  第二个元素的字节。
//	printf("%d\n",sizeof(*a));//4  数组第一个元素解引用的大小。
//	printf("%d\n",sizeof(*&a));//16  先去地址，后解引用，相互抵消，故就是整个数组的大小
//	printf("%d\n", sizeof(&a[0]));//4 32位平台 地址为4个字节
//	printf("%d\n", sizeof(&a[0] + 1));//4  32为平台，第一个元素取地址+1 是 跨过一位，是第二个元素的地址。
//}
//字符数组
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char arr[] = { 'a','b','c','d','e','f' }; //char 类型是 1个字节。
//
//	printf("%c\n",arr[3]);// d
//	printf("%d\n",sizeof(arr));//6 1*6(元素)=6  整个数组的大小，sizeof(arr)-arr代表整个数组。
//	printf("%d\n",sizeof(arr+0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n",sizeof(&arr));//4  32位平台，则地址的字节数是4。64位则是8.
//	printf("%d\n",sizeof(*&arr));//6
//	printf("%d\n",sizeof(arr[0]));//1
//	printf("%d\n",sizeof(arr[0]+1));//1 正确的应该是4 字节。arr[0]+1===&rr[0]+1 两者表示的意思是一样的。
//	printf("%d\n",sizeof(&arr+1));//4
//	printf("%d\n",sizeof(&arr[0]+1));//4
//
//	//求字符串长度，strlen .
//	printf("%d\n",strlen(arr));//6 错误  找“/0”，六个字母之后，有没有/0，不知道，故是大于6的随机值。
//	printf("%d\n",strlen(arr+0));// 大于6 的随机值
//	printf("%d\n",strlen(&arr));// 大于6的随机值
//	printf("%d \n",strlen(&arr+1));//随机值
//
//	printf("%d\n",strlen(&arr)-strlen(&arr+1)); //6 低地址-高地址才是正6.差6个字符，故值是6。
//	printf("%d\n",strlen(* &arr));//大于6随机值
//	printf("%d\n",strlen(&arr+1)-strlen(&arr)); //-6 
	 //  printf("%d\n",strlen(arr[0]));//a-97 数字97 不是地址 ，err 错误代码。
	 //  printf("%d\n",strlen(arr[0]+1)); //b-98  错误代码。strlen 求字符串长度，到斜杠零的停止。不能计算单个字母的大小。
	                                      // 单个字母对应着相应的阿思科玛值，是一个数组，不能计算长度。	 
//	return 0;
//}
///* mising number */
//Time:2021年4月1日09:55:55
//#include<stdio.h>
//int miss_number(int * arr,int number_size)//misin_number函数接受两个参数，一个是数组首元素的地址，另一个元素的个数。
//{
//	int x = 0;
//	int i;
//	for (size_t i = 0; i < number_size; i++)
//	{
//		x ^= arr[i];//a^=b是a 与B的按位异或运算。
//	}
//	for (size_t i = 0; i <number_size; i++)
//	{
//		x ^= i;
//	}
//	return x;
//}
//int main(void)
//{
//	int ret;
//	int arr1[] = { 0,1,2,3,4,5,6,7,9 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	
//	miss_number(&arr1,sz);//自定义的函数。
//	ret = miss_number(&arr1,sz);
//	printf("%d\n",ret);
//	for (size_t i = 0; i < sz; i++)
//	{
//		printf("%d ",arr1[i]);//依次输出数组的每个元素。
//	}
//	printf("\n");
//	
//	return 0;
//}
/*  运行结果
  1    // 这一行结果出问题了， 要进行调试，Fn+F10 逐语句进行调试。？？？？？？？？？？？？？？？？？？？？？？？？？
  0 1 2 3 4 5 6 7 9  //正确。

E:\C语言学习\NEW Project\Debug\NEW Project.exe (进程 1740)已退出，代码为 0。
按任意键关闭此窗口. . .
*/
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	char sex[5];
//	char tel[20];
//	int age;
//};//s1,s2,s3这是定义的全局变量。
//struct   //链表结构，结构体的自引用。
//{
//	int s[10];  //sizeof:4*10=40
//	struct stu* next;//sizeof=4
//}sw;//匿名结构体类型创建。
//typedef struct stu2
//{
//	char s[10];
//	int a;
//}stu; //结构体类型重命名。
//
//struct
//{
//	int a[12];
//	char as[10];
//}* pas;//匿名结构体指针类型，pas 是匿名结构体指针类型。
//void ss()
//{
//	printf("%s %s %s %d\n",s4.name,s4.sex,s4.tel,s4.age);
//}
//   struct stu s4 = {"wang_w","woman","12344",23};//s4全局变量。
//
//int main(void)
//{
//	struct stu s5 = { "ZHANG_SAN","man","1322442",21 };//结构体类型命名。
//	struct stu s6 = {"li_si","woman","123456",23};
//	struct stu s4 = { "zhang_san","woman","121233",21};
//
//	printf("%s %s %s %d\n",s4.name,s4.sex,s4.tel,s4.age);
//	printf("%s %s %s %d\n", s5.name, s5.sex, s5.tel, s5.age);
//	printf("%s %s %s %d\n", s6.name, s6.sex, s6.tel, s6.age);
//	struct stu2 s7 = { "haha",1000 };
//	struct stu2 s8 = { "hehe",2000 };
//	printf("%s %d\n",s7.s,s7.a);
//	printf("%s %d\n",s8.s,s8.a);
//	printf("%d \n", sizeof(struct stu)); //52  20+20+5+4=49 4*13=52>49 故结构体大小为52.
//	
//	return 0;
//}
//时间：2021年4月4日20:48:26
//#include<stdio.h>
//struct stu1
//{
//	char c1;   // 1 
//	int b;    //4
//	char c2;
//};
//struct stu2
//{
//	char a;
//	char b;
//	int c;
//};
//// 练习
//struct stu3
//{
//	double a;
//	char b;
//	int c;
//};
////嵌套类型
//struct s4
//{
//	char c;
//	struct stu3 s3;
//	double d;
//};
//int main(void)
//{
//	struct stu1 s1 = { 0 };
//	struct stu2 s2 = { 0 };
//	struct stu3 s3 = { 0 };
//	struct s4 ss= { 0 };
//
//	printf("%d\n",sizeof(s1)); // 12
//	printf("%d\n",sizeof(s2));// 8
//	
//	printf("%d\n", sizeof(s3));//16
//	printf("%d\n",sizeof(ss));// 32
//	return 0;
//} 

//输出结果：？？？？12，？？？？？8，为什么？ 结构体对齐存储规律。	
/*
12
8
E:\C语言学习\NEW Project\Debug\NEW Project.exe(进程 20892)已退出，代码为 0。
按任意键关闭此窗口. . .
*/
// 结果对应的知识点：结构体内存存储对齐。
// 结构体对齐的规律：
// 1.第一个成员在与结构体变量偏移量为0的地址处，就是第一个变量放在结构体的分配的起始地址处。
// 2.其他成员变量要对齐到对对齐数的整数倍的地址处。对齐数：默认值与成员大小的较小值。VS默认值为8.
// 3.结构体总大小：为最大对齐数的整数倍。        GCC 没有默认对齐数。成员大小就是对齐数。
/*
为什么存在内存对齐：
1.平台原因：某些硬件平台只能从特定的的地址处取数据，int 在4 的整数倍处读取数据。
2.性能原因：数据结构（尤其是栈），应该尽可能的在自然边界上对齐，对齐内存仅需访问一次。
3.以空间换时间，获取优异的程序性能。
 
 可以修改系统的默认对齐数：
 #pragma pack(4); //将系统的默认对齐数改成4.
 若修改默认对齐数为1:则代表直接挨着放。
 #pragma pack(1);
可以取消默认对齐数：
#pragma pack()

*/
//  offsetof(结构体名，成员名) 表示结构体的偏移量 需要引头文件，<stddef.h>
//#include<stdio.h>
//#include<stddef.h> //offsetof 不是函数 是宏。可以传类型。
//struct stu
//{
//	char c;
//	int a;
//	double d;
//};
//void Inint(struct stu* ps)// 传址函数，结构体成员的初始化。
//{
//	ps->c = 'a';
//	ps->a = 100;
//	ps->d = 2.0;
//}
//void print1(struct stu tep)// 传值函数
//{
//	printf("%c %d %lf \n", tep.c, tep.a, tep.d);
//}
//void print2(struct stu* ps)
//{
//	printf("%c %d %lf \n",ps->c,ps->a,ps->d);
//}
//int main(void)
//{
//	struct stu stu ;
//	//初始化结构体 函数实现
//	Inint(&stu); // 结构体传参，可以传地址。
//	print1(stu);// 结构体传参数，可以传值。
//	print2(&stu); //*************  传址打印 更优于传值打印,地址只占4 个字节的大小 **************
//
//	printf("%d\n",offsetof(struct stu, c));//	C成员对于结构的偏移量 0
//	printf("%d\n", offsetof(struct stu, a));// 4
//	printf("%d\n",offsetof(struct stu,d));// 8
//
//	return 0;
//}
/*** 结论***
  结构体传参的时候，要传结构体的地址。可提高压栈出栈的效率，提高程序的性能。
 ***    ****/
// 结构体 位段。结构体实现位段的能力。
//#include<stdio.h>
//struct stu
//{
//	int a : 3;
//	int b : 4;
//	int c : 5;
//	int d : 4;
//};
//int main(void)
//{
//	struct stu s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%p\n",&s);
//	printf("%x\n", s);// %X 是以十六进制的形式输出。
//
//	return 0;
//}
//位段不支持跨平台，位段在内存中存储形式复杂。在跨平台的程序中，应尽量避免使用位段。
// 位段的应用：位段在网络数据传输时 比较实用。可以压缩32位的IP地址，节省传输的字节数大小。

/*////////   枚举     //////////*/
// 枚举类型，就是列举，一一列举。
//#include<stdio.h>
//enum sex  //创建枚举类型，命名枚举变量，赋初始化值，
//{
//	man = 2,//初始值可以改变。
//	woman=1,
//	unknow=3
//};
//enum color  //枚举类型定义。且可能的取值是常量，
//{
//	RED, // 0 枚举常量默认从0开始。
//    GREEN, // 1
//    BLUE // 2
//};
//int main(void)
//{
//	enum color s = BLUE;
//	printf("%d  %d %d \n",RED,GREEN,BLUE);//结果是 0 1 2 。
//	printf("%d  %d  %d \n",man,woman,unknow);
//	return 0;
//}
// 机器是大端字节序还是小端字节序。
/*
int a=1  0000001(高—>低)
    低地址--------------------改地址
  .......[][][][01][00][00][00][][][].......... 小端字节序
  .......[][][][00][00][00][01][][][]..........  大端字节序
                ->用char* 指针判断第一个字节的大小是不是1 ，就可以得出机器的大小端字节序。
*/
//#include<stdio.h>
//int check_sys()
//{
//	union un //联合体（共用体）
//	{
//		char c;
//		int a;
//	}u1;
//	u1.c = 1;//C 和a 共用地址，A 占4个字节，C占前一个字节。
//	return u1.c; 
//}
//union ss
//{
//	int aa; // sizeof int 4 
//	char bb[6]; // 1*6=6
//};
//int main(void)
//{
//	int a = 1;
//	if (1 == *(char*)&a)//除了这种方式还可以用 联合体实现。（char c , int a）
//	{
//		printf("xioaduan!\n");
//	}
//	else
//	{
//		printf("da_duan\n");
//	}

	//用联合体实现。
//	int ret=check_sys();// 返回 1 小端，返回0 大端。
//	if (ret == 1)
//	{
//		printf("xiao_daun!\n");
//	}
//	else
//	{
//		printf("da_duan\n");
//	}
//	//联合体的大小
//	union ss sa = { 0 };
//	printf("%d\n",sizeof(sa));
//	return 0;
//}
//   
/*************  工程项目练习：：通讯录代码实现   *************/
// 新建项目文件实现。

//动态内存分配：
//内存区域划分与分配
/* 
   1.内存区域划分：栈区（stack）、堆区（heap）、静态区（全局区）static、文字常量区、程序代码区。
   2.分配：栈区：存放函数的形式参数，局部变量的值。由编译器自动分配和释放。
	       堆区：动态内存分配。
	       静态区：全局变量、静态变量。static int a=10;
	       文字常量区：存放常量字符串，由操作系统（OS）释放。
	       程序代码区：存放函数体的二进制代码。
*/
//时间：2021年4月8日12:56:31
// 动态内存分配函数：malloc \ free \ calloc \ realloc
/* malloc 是申请一块动态连续可用的内存空间，并返回指向这块空间的指针，如果开辟失败，则返回空指针。free 是释放和回收内存空间。
    malloc 的返回值一定要做检查，申请完的空间，要用free 函数释放掉，它俩成对使用。否则影响后面的程序使用该内存空间。
*/
//常见的动态内存错误。
//#include<string.h>
//打印错误的方式 printf("%s \n",strerror(errno));

// calloc 内存初始化为0，calloc（元素个数，每个元素的大小。）
// 与maclloc相比calloc 的参数结构不同 还有就是 malloc不会给初始化值
// realloc 调整动态内存开辟空间的大小。若原指针指向内存空间不够存放数据，realloc 可以追加空间大小。 
/*
  realloc 函数使用注意事项：
  1.如果P指向空间之后又足够空间，则直接扩，不够，则重新找需要大小的内存空间，拷贝原有数据，释放旧的内存。最后开辟新的足够大小的内存。
  2.用新的变量来接受 realloc 函数的返回值。
  3. 若realloc 的代码如下：int *p=realloc(NULL,40) 则等价于功能 malloc(40),返回指针是 没有初始化。

*/
//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//
//int main(void)
//{
	// 使用malloc 开辟空间
	//int* p = malloc(10 * sizeof(int));
	// 使用calloc 开辟空间
	//int* p = (int *)calloc(10, sizeof(int)); //malloc\calloc的区别在初始化。calloc为NUM个大小为 size 的元素开辟一块空间，并把每个字节初始化为0.
	//if (NULL==p)//使用malloc 函数一定要检查返回值是否为空指针。不为空指针才开辟了内存空间。
	//{
	//	printf("%s \n",strerror(errno));// 打印提示的错误。
	//}
	//else
	//{
	//	int i = 0;
	//	for ( i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i;// 给每个动态空间赋值
	//	}
	//	for (size_t i = 0; i < 10; i++)
	//	{
	//		printf("%d \n", *(p + i));  //打印分配内存空间的内容。
	//	}

	//}
	//  free(p);// free 为释放内存空间函数。
	//  p = NULL;  //释放完，p 置为空指针。
	//注意事项：
	//      1.malloc 使用时检查是否为空指针。
	//      2. 对动态内存越界访问，开辟几个空间，就访问几个空间。
	//      3.对非动态开辟内存的 free.不要对非动态内存 free。
//	int* ptr = realloc(p, 300);
//	if (ptr!=NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (size_t i = 0; i < 300; i++)
//		{
//			*(p + i) = i;
//			printf("%d \n",*(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
// 示例1：传参malloc  
//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//void GetMemery(char** p)
//{
//	* p = (char*)malloc(40); //还可以return P 找一个变量接受函数的返回值。
//}
//void test()
//{
//	char * tpr = NULL;
//	GetMemery(&tpr);//若传tpr 则是传值给P ，P是局部变量，出了局部范围则无效，故tpr 还是空指针，则程序崩溃。
//	strcpy(tpr, "hello world!");
//	printf(tpr);
//
//	free(tpr);
//	tpr = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//错误示例2：返回栈空间地址的问题。局部变量和函数的形参的存储是放在栈区的。
//#include<stdio.h>
//char* GetMemory()
//{
//	char p[] = "hello world!";
//	return p;  //返回了P的地址，但是地址上存储的哈喽世界的内容丢了。可能会被别的程序使用，所以产生随机值。
//}
//void test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf("str");
//}
//int main(void)
//{
//	test();
//	return 0;
//}
// 代码输出结果 ：乱码，随机值。
// 代码改进：
//#include<stdio.h>
//int * GetMemory()
//{
//	//static char p[] = "hello world";
//	//return p;
//	 static int a = 10;
//	 return &a;
//}
//void test(void)
//{
//	int * str = NULL;
//	str = GetMemory();
//	*str = 90;
//	printf("%d \n",*str);
//}
//int main(void)
//{
//	test();
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<malloc.h>
//void Test()
//{
//	char* str = (char*)malloc(100 * sizeof(char));
//	strcpy(str, "hello");
//	free(str);//free 释放动态内存str指向的动态开辟空间后，并不会把str 置空 NULL。 
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");//str 动态开辟的内存已经释放，此时非法访问动态内存。
//		printf(str);
//	}
//}
//int main(void)
//{
//	Test();
//
//	return 0;
//
//}
// 时间：2021年4月10日20:15:59
// 柔性数组成员：在结构体中，最后数组成员未指定大小。数组的大小可以调整，这个数组就称为柔性数组成员。
//#include<stdio.h>
//#include<malloc.h>
//struct s
//{
//	int a;   
//	char arr[];// 柔性数组成员：在结构体中，最后数组成员未指定大小。数组的大小可以调整，这个数组就称为柔性数组成员
//};             // char arr[0];  方块零--这样写也可以。
//int main(void)  // malloc 次数越多，内存碎片越多，柔性数组碎片更少。
//{
//	struct s* ps= (struct s *)malloc(sizeof(struct s) + 5 * sizeof(char));//动态开辟结构体大小。内存连续 访问效率高
//	ps->a = 100;
//	int i = 0;
//	printf("%d \n",sizeof(struct s));//4 不计算柔性数组的大小。
//	if (ps != NULL) //动态开辟的内存一定要检查是否为空指针。
//	{
//		for (size_t i = 0; i < 5; i++)
//		{
//			ps->arr[i] = i;
//			printf("%d \n", ps->arr[i]);
//		}
//	}
//	//动态追加内存arr。
//	struct s* ptr = (struct s*)realloc(ps,20);
//	if (ptr!=NULL)
//	{
//		ps = ptr;
//	}
//	for (size_t i = 0; i <15; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d \n",ps->arr[i]);	
//	}
//	printf("%d \n", ps->a);
//	free(ps);//释放内存
//	ps = NULL;
//
//	return 0;
//}
/***  文件操作 ***/
//时间：2021年4月11日13:46:09
//文件时在磁盘上已经命名的存储区，C把文件看作是一系列连续的字节，每个字节都能够被单独的读取。
//程序文件（.c .obj .exe）对保存在磁盘上的数据文件（.txt）进行读取或写入。
//这个功能一般交由数据库提供的接口用SQL来对数据进行读写或增删改查等操作，提高自身开发程序的复用和效率。
//文件重定向：程序与文件的交互形式。
//文件存储的两种形式:1.文本文件(以ASC II码形式转换存储) 2.二进制（binary）文件（展示还是用16进制）。
//文件操作函数  fopen(), fclose(), size_t fwrite(), size_t fread().
// 文件I/O函数，fprintf() fscanf() fgets() fputs()
// 随机访问：ftell() 和 fseek() 
//#include<stdio.h>
//int main(void)
//{
//	int a = 1000;
//	FILE* fp; // 通过FILE的指针来维护这个FILE结构的变量，fp能够指向文件信息区，使用起来更加方便。
//	fp = fopen("text.txt", "wb");//以二进制写的模式打开文本。
//	fwrite(&a, 4, 1, fp);// 给fp写入1个4个字节的数==&a.
//	fclose(fp);// 关闭文件。
//	fp = NULL;// 置空指针。
//
//	return 0;
//}
//只读文件。
//#include<stdio.h>
//#include<string.h>
//#include<errno.h> //为errno 声明头文件
//int main(void)
//{
//	FILE* pf = fopen("..\\test.txt", "r");//..\为相对路径。还可以是绝对路径。
//	if (pf==NULL)                   // r 若文件不存在，报错，若 w 则新建一个文件。
//	{
//		printf("%s \n",strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
// 把字符写进文件里面。
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main(void)
{
	FILE *fp_write=fopen("TEXT.txt", "w");
	if (fp_write == NULL)
	{
		printf("%s \n", strerror(errno));
		return 0;
	}
	fputc('h',fp_write);// write
	fputc('x', fp_write);
	fputc('y', fp_write);

	fclose(fp_write);// close
	fp_write = NULL;

	//从键盘读入字符stdin，打印到屏幕上stdout。
	char buf[200] = { 0 };
	fgets(buf, 200, stdin);
	fputs(buf,stdout);
     //相同的效果。
	gets(buf);
	puts(buf);
	return 0;
}







