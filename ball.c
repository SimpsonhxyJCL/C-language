/*
#include<stdio.h>  //小球反弹源代码2021.1.2
#include<stdlib.h>//标准库头文件（包含sleep函数）
#include<windows.h>//计算机Windows系统头文件 调用system函数

void ball() {

	printf("\t\t\t\t  ● \t\t\t\t");

}
int main(void) {

//	printf("\t\t\t\t *\t");
	//printf("\t\t\t\t ●\t");小球实物代码

	int high=20;
	int state=1; //state=1 小球下落，state=0 小球上升。
	int start_point,ball_station;

	//printf("entrt a high of ball!\n");
	//scanf("%d",&high);
	
	while (high > 0)
	{
		if (state == 1)//球下落
		{
			for (start_point = 20 - high; start_point < high; start_point++) {
			
				system("cls");
				   for (ball_station = 0; ball_station < start_point; ball_station++) {
				
					   printf("\n");
				    }
			
				   ball();
				   Sleep(5);//延迟5毫秒==动态效果。
			}
			state = 0;
		}
		else//球体上升
		{
			high = high * 8 / 9;//h=5
			for (start_point= 20; start_point >= 20 - high; start_point--)//确定起点 、终点 
			{
				system("cls");//清空
				for (ball_station= 0; ball_station <= start_point; ball_station++)//确定球位置
				{
					printf("\n");
				}
				ball();
				Sleep(5);//延迟5毫秒==动态效果                
			}
			state = 1;//设置为下落状态
		}
	}
	return 0;


}
*/


/*2021年2月24日22:32:26*/
//***C语言选择题笔记***
// 1.C语言是典型的结构化设计语言。
// 2.结构化程序设计的基本原则包括：自顶向下，逐步求精，模块化。
// 3.goto语句是将程序转向 goto的标号的位置，应谨慎使用goto语句，避免滥用。
// 4.在数据库系统中，考虑数据库实现的的数据模型是：逻辑数据模型。
// 5.结构化程序由顺序、分支、循环、三种基本结构组成。结构化程序设计提倡模块化设计方法。
// 6./**/此类注释不可以嵌套，函数可以嵌套。函数体由左括号{ 开始。
// 7.用户标识符首位不能用数字开头，但是可以用下划线和字母（区分大小写）。也避免使用C语言关键字。
// 8.科学计数法可以用e表示，AEB=A乘以10的B次方，B为整数。
// 9.整数的在C中的常用表示为;8进制(o%)，10进制（d%），16进制（OX%）数字33-8进制=41 16进制=21。
// 10.不等于表示为：！= ，<>是非法符号。
// 11.





