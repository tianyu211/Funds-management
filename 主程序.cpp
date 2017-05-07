
#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"windows.h"
#include <string.h>
#define M 36
#define N 5//定义数组存储的数据组数
void erweima()//二维码函数
{	
	
	int i,j,k;
	int x,y,z;
	char a[M][M];
	srand((unsigned)time(0));
	for (j = 0; j < M; j++)
	{
		if (j == 1||j==7)
		{
			for (i = 0; i < 7; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M-16; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("  ");
			for (i = 0; i < 7; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("\n");
		}
		if (j == 2||j==6)
		{
			printf("%c%c", 0xa8, 0x80);
			printf("          ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 16; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("          ");
			printf("%c%c", 0xa8, 0x80);
			printf("\n");
		}
		if (j == 3||j==5)
		{
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < 3;i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 16; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < 3; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("\n");
		}
		if (j == 4)
		{
			for (i = 0; i < 4; i++)
			{
				printf("%c%c", 0xa8, 0x80);
				printf("  ");
			}
			for (i = 0; i < M - 15; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			//printf("\n");
			for (i = 0; i < 3; i++)
			{
				printf("%c%c", 0xa8, 0x80);
				printf("  ");
			}
			printf("%c%c", 0xa8, 0x80);
			printf("\n");
		}
		if (j == 8)
		{
			for (i = 0; i < 8; i++)
				printf("  ");
			for (i = 0; i < M - 16; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			for (i = 0; i < 8; i++)
				printf("  ");
			printf("\n");
		}
		if (j == 22)
		{
			for (i = 0; i < 8;i++)
				printf("  ");
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		if(j==23||j==29)
		{
			for (i = 0; i < 7; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		if (j == 24 || j == 28)
		{
			printf("%c%c", 0xa8, 0x80);
			printf("          ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		if (j == 25 || j == 27)
		{
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < 3; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		if (j == 26)
		{
			for (i = 0; i < 4; i++)
			{
				printf("%c%c", 0xa8, 0x80);
				printf("  ");
			}
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		for (x = 9; x < 22; x++)
		{
			if (j == x)
			{
				for (i = 0; i < M; i++)
				{
					k = rand() % 3;
					if (k == 1)
						printf("%c%c", 0xa8, 0x80);
					else
						printf("  ");
				}
				printf("\n");
			}
		}
	}
}
 void text()//此次定义验证码函数 
{
	int x;	int t[4];
	int dec, letter, num;
	char a1, b1, c1, d1;
	srand((unsigned)time(NULL)); 
	char n;
Y:	printf("\t请输入验证码（");
		for (x = 0; x<4; x++)

		{
		
		/*	dec = rand() % 2;   //验证码可能为：数字、大写字母.
			if (dec == 0)
			{
				num = rand() % 10 + 48; printf("%c", num); t[x] = num;
			}  *///数字 
			//if (dec == 1)       //大写字母 
		//	{
				letter = rand() % 26 + 65; printf("%c", letter); t[x] = letter;
		//	}
		}
		printf(" ）\n");
		printf("\t\t      ");
		scanf(" %c%c%c%c", &a1, &b1, &c1, &d1);
		//输入验证码 
		if (a1 !=t[0] || b1 != t[1] || c1 != t[2] || d1!= t[3])
		{ 	
		printf("验证码错误,请再次输入\n");
			goto Y;
		}	 
}
 /////////////////光标函数////////////////
 void gotoxy(int x, int y) //定位到第y行的第x列
{
int xx=0x0b;
 HANDLE hOutput;
 COORD loc;
 loc.X =x;
 loc.Y=y;
 hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleCursorPosition(hOutput, loc);
 return;
}
void time(int a,int b)//在此次定义等待时间函数 
{     int time1;
		for (time1 = a; time1 >= 0; time1--)
	{
		printf("%d", time1);
		Sleep(b);
		printf("\b");
	}
}
void printfchar(int b,int n,char m)
{	
	int a;
	for(a=1;a<=b;a++)
	{
		printf("\t");
	}
	for(a=1;a<=n;a++)
	{
		printf("%c",m);
	}
}
int main()
{

	system("title 资金管理系统");
	int time1;//等待时间
	int a, b, c, d;//在case里用来临时赋值//
	int i, j, k;//for循环里用到//
	int x;//用不到就删了//
	int r = 1, r1;//定义使用的人数，存放在不同的数组里
	int mima[N], mima2;//定义已改//
	double shouji[N], shouji2;//定义已改//				//有效数据16位
	char mingzi[N][5];
	//body 
	srand((unsigned)time(NULL)); //产生随机数
	float yue[N] = { 0, 0, 0, 0, 0 }, a2 = 0, b2 = 0;//
	double kahao[N] = { 0, 0, 0, 0, 0 }, kahao1 = 0;//
	
	int t[4];
	system("mode con cols=66 lines=15");
	system("color 6F"); //白字，绿色的底
	
	printf("\n\n\t\t欢迎使用我们制作的资金管理系统\n\n \t我们的系统可以实现录入多个账号，基本资金流通功能\n\n");//该部分为欢迎界面
	printf("\t（包括 与银行卡链接、转帐、充值、直接支付等功能）\n\n");
	printf("\t信息存储功能、信息查询功能、安全可靠、如果您觉\n\n");
	printf("\t得还行，给个赞呗！\n\n");
	printf("  ENTER  ");
	for (time1=10;time1>=2;time1--)
	{
	printf("%d",time1);//打印等待时间
	Sleep(500);
	printf("\b\b");

	printf("******");
	}
	printf("\b\b\b\b NOW");
	Sleep(800);/**/ 
		//////////////////定义结构体，存储性别、地方、昵称

	
	struct message{char sex[10];
		char where[10];
		char mini[10];
	}	men[5],temp={"先生","珠海","trubo"};
	
		
H:	system("cls");
	printf("\n\n\n\n");
	printfchar(3,4,22);
	printf("\4开始界面\4");
	printfchar(0,4,22);
	printf("\n\n\t\t\t1 *创建一个新的账号\n");					//起始界面	H
	printf("\t\t\t2 *使用已有账号登陆\n");
	printf("\t\t\t0 *退出\n");
	printfchar(3,18,22);
	printf("\n\t\t\t 请您选择一项:");
	scanf("%d", &k);//接收输入
	system("cls");
	if (k == 1)	//创建一个账号
	{	
	B1:	printfchar(0,29,22);
		printf("\4注册\4");
		printfchar(0,31,22);
		printf("\n\n");
		printfchar(2,33,22);
		printf("\n\t\t| 请输入您的名字:   		|\n");
		printfchar(2,33,22);
		printf("\n\t\t| 请输入您的手机号: 		|\n");
		printfchar(2,33,22);
		printf("\n\t\t| 请输入您的密码:               |\n");
		printfchar(2,33,22);//设置密码界面
		gotoxy(33,4);
		scanf("%s", &mingzi[r]);
		gotoxy(35,6);
		scanf("%lf", &shouji[r]);
		gotoxy(33,8);
		scanf("%d", &mima[r]);
		printf("\n\t\t  请确认您的密码:");
		scanf("%d", &mima2);//已修改//
		if (mima2 == mima[r])//已修改//
		{
			system("cls");
			printf("\n");
			printfchar(1,50,22);
			printf("\n\t\t 尊敬的%s,恭喜您已经注册成功！\n\n", mingzi[r]);//已修改//
			printf("\t\t 您的账号为%.0f,密码为%d,请牢记您的密码\n\n\t\t 不要告知他人!\n\n", shouji[r], mima[r]);//提示注册成功
			printf("\t\t 现在，您可以尽情使用了!\n");
			printfchar(1,50,22);
			r++;
			r1 = r;
			//已修改//
			//每创建一个新用户 ，将个人信息初始化
			strcpy (men[r1].sex,temp.sex);
			strcpy (men[r1].where,temp.where);
			strcpy (men[r1].mini,temp.mini);
			printf("\n\n\t\t\t5秒后退出 ");
			time(5,800);
			system("cls");
		}
		else
		{
			printf("\n\t您两次输入密码不一致，请重新输入!\n");
			Sleep(850);
			system("cls");
			goto B1;//两次密码不一致，回到设置密码界面
		}

	}
	else if (k == 2)
	{
	B2:	printf("\n\t\t请输入您的账号:");//标识、此处为有账号登陆
		scanf("%lf", &shouji2);
		r1 = r;
		for (; r1 > 0; r1--)//已修改//
		{
			if (shouji2 == shouji[r1])
			{
				goto B;
			}
		}
	B3:	printfchar(0,40,22);
		printf("\n您输入的账号不存在!是否现在注册一个?\n");
		printfchar(0,40,22);
		printf("\n1.我没有账号要注册\n2.否!我有账号\n");
		printfchar(0,40,22);
		printf("\n请选择:");//用户选择是否注册界面
		scanf("%d", &x);
		system("cls");
		if (x == 1)
			goto H;//回到起始界面
		else if (x == 2)
			goto B2;//回到输入账号界面
		else
		{
			system("cls");
			printf("\n输入有误，请重新输入!\n");
			goto B3;//回到选择是否注册界面
		}
	}
	else if (k == 0)

		goto E;
	//输入0，程序界面，跳转end界面
	else
	{
		system("cls");
		printf("输入有误，请重新输入!\n");
		goto H;//开始界面选择错误，显示输入有误
	}
	//开始界面结束////进入服务界面////////

	printfchar(0,30,22);
	printf("\4登陆\4");
	printfchar(0,30,22);
	printf("\n\t\t请输入您的账号:");
	scanf("%lf", &shouji2);
	r1 = r;
	for (; r1> 0; r1--)
	{
		if (shouji2 == shouji[r1])
		{
			goto B;
		}
	}
	printfchar(0,19,22);
	printf("\n您输入的账号不存在!\n是否现在注册一个?\n");
	printfchar(0,19,22);
	printf("\n1.我没有账号，要注册\n2.否，我有账号\n");
	printfchar(0,19,22);
	printf("\n请选择:");//用户选择是否注册界面
	scanf("%d", &x);
	system("cls");
	if (x == 1)
		goto H;//回到起始界面
	else if (x == 2)
		goto B2;//回到输入账号界面
	else
	{
		printf("\n输入有误，请重新输入!\n");
		goto B3;	//回到选择是否注册界面
	}

B:	printf("\n\t\t请输入您的密码:");//他妈的！终于跳过来了！
	scanf("%d", &mima2);//已修改//
	if (mima2 == mima[r1])
	{
		goto A;
	}
	for (i = 2; i > 0; i--)
	{	printfchar(0,36,22);
		printf("\n密码输入错误，你还剩%d次机会，请重新输入:", i);
		scanf("%d", &mima2);
		if (mima2 == mima[r1])
		{
			goto A;
		}
	}
	goto H;//已修改//

A:	system("cls");
	system("color 3F");
	system("mode con cols=66 lines=15");
	printfchar(1,50,22);
	printf("\n\t尊敬的%s%s!",mingzi[r1],men[r].sex);
	printf(" 欢迎来到资金管理中心，很高兴为您服务!\n");
	printfchar(1,50,22);
	printf("\n\t\t\t您当前余额为￥%.2f\n\n", yue[r1]);
	printfchar(0,30,22);
	printf("\1菜单\2");printfchar(0,30,22);
	printf("\n\t\t1.充值\t");
	printf("\t2.转账\n");
	printf("\t\t3.我的银行\t");
	printf("4.个人信息\n");
	printf("\t\t5.安全中心\t");
	printf("6.关于我们\n");
	printf("\t\t0.退出\n");
	printfchar(0,66,22);
	printf("请选择要执行的选项:");
	scanf("%d", &i);
	if (i != 0)
	{
		switch (i)
		{
		case 1:													//充值
			if (kahao[r1] != 0)
			{
				system("cls");
				printfchar(0,30,22);
				printf("\5充值\5");
				printfchar(0,30,22);
				printf("\n\t\t您的银行账户为%.0lf\n", kahao[r1]);
				printf("\n\t\t请输入要充值的数目:￥\n");
				printfchar(0,66,22);
				gotoxy(37,4);
				scanf("%f", &a2);
				gotoxy(32,3);
				printfchar(0,20,22);
				printf("\n\t\t\t\t|1.确定充值￥%.2f\n", a2);
				printf("\t\t\t\t|2.取消\t\t\t\t\n");
				printfchar(4,20,22);
				printf("\n\t\t\t\t|请选择:\n");
				printfchar(4,20,22);
				gotoxy(40,7);
				scanf("%d", &b);
				
				if (b == 1){
					yue[r1] = yue[r1] + a2;
					printfchar(0,66,22);
					printf("\t\t恭喜充值成功!\n");
				 	printf("\t\t 3秒后跳转\t");//功能跳转
					time(3,1000); 
					goto A;
				}
				else{
					printfchar(0,66,22);
					printf("\n\t\t交易取消，感谢您的使用!\n");
					Sleep(1000);
					goto A;
				}

			}
			else {
				system("cls");
				printf("\t\t\t请您先绑定银行卡\n");
				goto YH;
			}
		case 2:												//转账
			if (kahao[r1] != 0)
			{
C2:				system("cls");
				printfchar(0,30,22);
				printf("\5转账\5");
				printfchar(0,30,22);
				printf("\t\t尊敬的%s%s,您的银行账户为%.0lf\n",mingzi[r1],men[r].sex,kahao[r1]);
				printfchar(3,6,22);
				printf("\5菜单\5");
				printfchar(0,6,22);
				printf("\n\t\t\t1.转账到我的银行卡\n");			//充当提现，主界面提现功能取消
				printf("\t\t\t2.转账到其他账户\n");			//这里给账户起个名字//已修改	3
				printf("\t\t\t3.国际汇款\n");
				printf("\t\t\t0.返回主界面\n");
				printfchar(3,18,22);
				printf("\n\t\t\t请选择要执行的操作:");
				scanf("%d", &b);
				system("cls");
				switch (b)
				{
				case 0:
					goto A;
				case 1:
				BB2 :
					system("cls");
					printfchar(0,30,22);
					printf("\5转账\5");
					printfchar(0,30,22);
					printf("您将要转账到您的银行卡\n请输入要转账的额金额\n");//转账到自己的银行卡，那么卡号是什么//已修改	3
					scanf("%d", &a);
					printfchar(0,30,22);
					printf("\n您将要给您的银行卡转账%d元，是否继续\n", a);
					printfchar(0,12,22);
					printf("\n1.确定\n");
					printf("2.取消\n");
					printf("0.返回\n");
					printfchar(0,12,22);
					printf("\n\n请选择:");
					scanf("%d", &c);
					if (c == 1){
						if (a>yue[r1])
						{
						  printf("对不起!您的余额不足!\n");
						  Sleep(2000);
						  goto BB2;
						}
						yue[r1] = yue[r1] - a;
						system("cls");
						printf("正在转账，请稍后...\n");
						for (i = 1; i <= 3; i++)
						{
							for (j = 1; j <= 3; j++)
							{
								Sleep(300);					//等待界面//已修改	3
								printf(".");
							}
							Sleep(300);
							printf("\n");
						}
						system("cls");
						printf("转账成功!\n");
						printf("1.继续转账\t");
						printf("2.返回\n");
						scanf("%d", &d);
						if (d == 1)
							goto BB2;
						else
							goto C2;					//转账完毕的选择//已修改	3	
						system("cls");
					}
					else if (c == 0)
						goto C2;
					else
					{
						printf("交易取消，感谢您的使用!\n");
						goto BB2;
					}
				case 2:
					printfchar(0,25,22);
					printf("\n请在下框中输入要转账账户:\n");
					printfchar(0,25,22);
					printf("\n|\t\t\t|\n");
					printfchar(0,25,22);
					gotoxy(2,3);
					scanf("%lf", &kahao1);
					gotoxy(20,6);
					printf("\n请输入要转账的数目:￥");
					scanf("%f", &a2);
					printfchar(0,66,22);
					printf("转账给卡号(%.0lf)\t￥%.2f\n1.确定", kahao1, a2);
					printf("\n2.取消\n");
					scanf("%d", &b);
					if (b == 1)
					{
						if (a2 > yue[r1])
						{
							printfchar(0,12,22);
							printf("\n抱歉余额不够\n");
							printf("3秒后跳转\t");//功能跳转
							time(3,1000); 
							goto C2;
						}
						else
						{
							yue[r1] = yue[r1] - a2;
							system("cls");
							printf("正在转账，请稍后...\n");
							for (i = 1; i <= 3; i++)
							{
								for (j = 1; j <= 3; j++)
								{
									Sleep(300);					//已修改	3
									printf(".");
								}
								Sleep(300);
								printf("\n");
							}
							printf("转账成功!\n");
							goto C2;
						}
					}
					else
					{
						printf("交易取消，感谢您的使用!\n");
						printf("3秒后跳转\t");//功能跳转
						time(3,1000); 
						goto C2;
					}
				case 3:
					printfchar(0,30,22);
					printf("\5汇款\5");
					printfchar(0,30,22);
					printf("国际银行是由我们联合银行共同为用户提供的跨境汇款服务。\n");
					printf("汇款流程：\n");
					printf("您的账户-->境内及境外银行-->海外银行账户\n");
					printf("*境内及境外银行会收取一定的手续费\n");
					printf("汇款到账时间约1-5个工作日\n");	
					printf("\n(*!抱歉,该功能还未开通*)");
					Sleep(2000);
					goto C2;//这个又要定义，先暂时搁置,//可以砍掉//

				}//case 2中的switch结束

			}
			else
			{
				system("cls");
				printf("请您先绑定银行卡\n");
				goto YH;
			}
		
		case 3:	//我的银行	
			if (kahao[r1] != 0)	
			{		
		C3:		system("cls");
				system("color 4F");
				system("mode con cols=66 lines=15");
				printfchar(0,24,22);
				printf("\5欢迎来到我的银行\5");
				printfchar(0,24,22);
				printf("\t\t尊敬的%s%s,您的银行账户为%.0lf\n",mingzi[r1],men[r].sex,kahao[r1]);
				printfchar(0,30,22);
				printf("\1菜单\2");
				printfchar(0,30,22);
				printf("\n\t\t1.转账\t");
				printf("\t2.解绑银行卡\n");
				printf("\t\t3.安全防伪码\t");
				printf("0.退出\n");
				printfchar(0,66,22);
				printf("请选择要执行的选项:");
				scanf("%d", &b);
				if(b!=0)
				{
					switch (b){
					
					
					case 1:	
							system("cls");
							printfchar(0,30,22);
							printf("\5转账\5");
							printfchar(0,30,22);
							printf("\n请输入要转账账户:");
							scanf("%lf", &kahao1);
							printf("\n请输入要转账的数目:￥");
							scanf("%f", &a2);
							printfchar(0,66,22);
							printf("转账给卡号(%.0lf)\t￥%.2f\n1.确定", kahao1, a2);
							printf("\n2.取消\n");
							scanf("%d", &b);
							if (b == 1)
							{
								system("cls");
								printf("正在转账，请稍后...\n");
								for (i = 1; i <= 3; i++)
									{
										for (j = 1; j <= 3; j++)
										{
											Sleep(300);				
											printf(".");
										}
										Sleep(300);
										printf("\n");
									}
									printf("转账成功!\n");
									goto C3;
								
							}
							else
							{
								printf("交易取消，感谢您的使用!\n");
								printf("3秒后跳转\t");
								time(3,1000); 
								goto C3;
							}
						
C32:			case 2:		system("cls");
							printfchar(0,66,22);
							printf("您当前绑定的银行卡为%.0lf\n",&kahao[r]);
							printfchar(0,66,22);
							printf("\n1.确定解绑!");
							printf("\n2.取消解绑!\n");
							printfchar(0,12,22);
							printf("\n请选择");
							scanf("%d",&b);
							if (b==1)
							{
								printf("成功解绑!");
								kahao[r1]=0;
								printf("\n抱歉您现在使用不了我的银行该功能!");
								printf("请绑定后再进入!\n");
								printf("3秒后跳转\t");
								time(3,800); 
								goto A;
							}
							else if(b==2)
							{
								printf("取消成功!");
								Sleep(1000);
								goto C3;
							}
							else 
							{
								printf("输入有误，请再输入!");
								goto C32;
							}
					
					case 3:			system("cls");
								system("color 0F");
								system("mode con cols=73 lines=38");
								printfchar(0,31,22);
								printf("\5防伪标码\5");
								printfchar(0,32,22);
								printf("\n\t\t\t移动设备扫描该码才可使用网上银行\n");
								printfchar(0,32,22);
								printf("\5二维码\5");
								printfchar(0,32,22);
								erweima();
								printf("\t\t\t任意键退出");
								scanf("%d",&b);
								if(b=0)
									goto C3;
								else 
									goto C3;
						default:
							printf("输入有误，请再输入\n");
							Sleep(2000);
							goto C3;	
					}//case 3 switch 结束	
				}
				else 
					goto A;
			}		
			else 
			
				system("cls");
				printf("请您先绑定银行卡\n");
				goto YH;	
			/**/
		case 4://个人信息
			
			printf("尊敬的 %s %s\n", mingzi[r1],men[r].sex);
			printf("您当前的账号余额为：%.2f\n",yue[r1]);
			printfchar(0,28,22);
			printf("\5个人信息\5");
			printfchar(0,28,22);
			printf("\n姓名:%s\n账户(手机):%.0lf\n",mingzi[r1],shouji[r1]);
			printf("昵称(%s)\n性别(%s)\n地区(%s)\n",men[r].mini,men[r].sex,men[r].where);
			printfchar(0,66,22);
			printf("\n建设现代生活。\n");
			printf("按任意键退出\n");
			scanf("%d",&b);
			if(b==0)
			goto A;
			else
				goto A;
			
		case 5:	//安全中心
C5:			system("cls");
			printfchar(0,28,22);
			printf("\5安全中心\5");
			printfchar(0,28,22);
			printfchar(3,14,22);
			printf("\n\t\t\t    \5菜单\5\n");
			printfchar(3,14,22);
			printf("\n\t\t\t1.修改密码\n");
			printf("\t\t\t2.修改绑定手机\n");	
			printf("\t\t\t3.修改个人信息\n");
			printf("\t\t\t0.退出\n");
			printfchar(3,14,22);
			printf("\n\t\t\t请选择:");
			scanf("%d", &b);
			if (b == 1)
			{	
		C51:		system("cls");
					printfchar(0,66,22);
				printf("请输入原密码：\n");	
				scanf("%d", &b);
				if (b == mima[r1])
				{
		M1:			printf("请输入新密码：\n");
					scanf("%6d", &c);
					printf("请确认新密码：\n");
					scanf("%6d", &d);
					if (c == d)
					{
						printf("密码修改成功！\n");
						mima[r1] = d;
						goto C5;//回到安全中心
					}
					else
					{
						printf("两次输入密码不一致，请重新输入：\n");
						goto M1;//再次输入要修改的密码
					}
				}
				else
				{
					printf("密码不正确!请重新输入!\n");
					Sleep(800);
					goto C51;
				}
			}
			else if(b==2)
			{	
				printfchar(0,66,22);
				printf("尊敬的客户！您原先绑定的手机号为(%.0lf)\n",shouji[r1]);
				printfchar(0,66,22);
				printf("请输入您要更换的手机号码:");
				scanf("%lf",&shouji2);
				printf("1.确认\n0.返回\n");
				scanf("%d",&b);
				if("b==1")
				{
					shouji[r1]=shouji2;
					text();
					printf("\n恭喜!修改成功\n");
						Sleep(1000);
						goto C5; 
		        }
		    }
		    else if(b==3)
		    {
		   C53:	system("cls");
				printfchar(0,28,22);
				printf("\5可修改项\5");
				printfchar(0,28,22);
				printf("\n1.名字(%s)\t2.地区(%s)\n3.性别(%s)\t4.昵称(%s)\n",mingzi[r1],men[r].where,men[r].sex,men[r].mini);
				printfchar(0,66,22);
				printf("0.退出\n");
				printf("\n请选择：");
				scanf("%d",&b);
				printfchar(0,66,22);
				if(b!=0)
				{	
					switch(b){
				
								case 1:
									printf("尊敬的用户，请输入名字:\t");
									scanf("%s",&mingzi[r1]);
									
											goto C53; 
					        	case 2:
									printf("尊敬的用户，请输入地区:\t");
									scanf("%s",&men[r].where);
									goto C53; 
								case 3:
									printf("尊敬的用户，请输入性别");
									scanf("%s",&men[r].sex);
									goto C53; 
								case 4:
									printf("尊敬的用户，请输入昵称:");
									scanf("%s",&men[r].mini);
									goto C53; 
								default:
									printf("输入有误，请再输入\n");
									Sleep(1000);
									goto C53;
						    	}
					
					
				}
				else 
				goto C5;
		    } 
			else 
			goto A;
		case 6: ////////////关于我们
				system("cls");
				system("color 0F");
				system("mode con cols=73 lines=38");
				printfchar(0,31,22);
				printf("\5关于我们\5");
				printfchar(0,32,22);
				printf("\n\t\t\t产品名:资金管理系统\n");
				printf("\n\t\t\t我们:Trubo msx(人铭/李森/绍栩)\n");
				printfchar(0,32,22);
				printf("\5二维码\5");
				printfchar(0,32,22);
				erweima();
				printf("\t\t\t任意键退出");
				scanf("%d",&b);
				if(b=0)
					goto A;
				else 
					goto A;
		default:
			printf("请输入正确选项!");
			Sleep(1000);
			goto A;
   		} //主界面switch的结束

	}
	else
	goto H; 
	
////////////////////////////////////////////////////////////////////////////
YH:		printfchar(0,66,22);
		printf("\t\t请在下框中输入银行卡号\n");
		printfchar(2,25,22);
		printf("\n\t\t|\t\t\t|\n");
		printfchar(2,25,22);
		gotoxy(17,4);
		scanf("%lf", &kahao[r1]); 
		gotoxy(0,7);
		text (); 
		printfchar(0,66,22);
		printf("\n\t绑定银行卡成功\n\t5秒后跳转\t");
		for (time1 = 5; time1 >= 0; time1--)
		{
				printf("%d", time1);
				Sleep(1000);
				printf("\b");
		}
		 goto A;
	
E:      printf("感谢您的使用！\n");
				
} 