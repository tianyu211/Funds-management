#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"windows.h"
#define N 5			//定义数组存储的数据组数
void  main()
{
	int a, b, c, d;
	int i, j,k;
	int x,y,z;
	int r=1;//定义使用的人数，存放在不同的数组里
	int mima[N],mima2[N];
	double shouji[N],shouji2[N];				//有效数据16位
	char mingzi[N],mingzi2[N];
H:	printf("1.创建一个账号\n");					//起始界面	H
	printf("2.使用已有账号登陆\n");
	printf("0.退出\n");
	scanf("%d",&k);//接收输入
	if(k==1)	//创建一个账号
	{
		printf("请输入您的名字：\n");
		scanf("%s",mingzi);
		printf("请输入您的手机号：\n");	
		scanf("%lf",&shouji[r]);
B1:		printf("请输入您的密码：\n");//设置密码界面
		scanf("%d",&mima[r]);
		printf("请确认您的密码：\n");
		scanf("%d",&mima2[r]);
		if (mima[r] == mima2[r])
			{
				system("cls");
				printf("尊敬的%s,恭喜您已经注册成功！\n",mingzi);
				printf("您的账号为%.0f,密码为%d,请牢记您的密码，不要告知他人！\n",shouji[r],mima[r]);//提示注册成功
				printf("现在，您可以尽情使用了！\n");
			}
			else
			{
				printf("两次输入密码不一致，请重新输入：\n");
				goto B1;//两次密码不一致，回到设置密码界面
			}

	}
	else if(k==2)
	{
B2:		printf("请输入您的账号：\n");
		scanf("%lf",&shouji2[r]);
		if(shouji2[r]!=shouji[r])
		{
			printf("您输入的账号不存在！是否现在注册一个？\n");
B3:			printf("1.我没有账号，要注册\n2.否，我有账号\n");//用户选择是否注册界面
			scanf("%d",&x);
			system("cls");
			if(x==1)
				goto H;//回到起始界面
			else if(x==2)
				goto B2;//回到输入账号界面
			else
			{
				system("cls");
				printf("输入有误，请重新输入！\n");
				goto B3;//回到选择是否注册界面
			}
		}
		else
			goto B;
	}
	else if(k==0)
		goto E;			//输入0，程序界面，跳转end界面
	else
	{
		system("cls");
		printf("输入有误，请重新输入！\n");
		goto H;//开始界面选择错误，显示输入有误
	}			
		/*开始界面结束*/
		/*进入服务界面*/
		printf("请输入您的账号：\n");
		scanf("%lf",&shouji2[r]);
		if(shouji2[r]!=shouji[r])
		{
			printf("您输入的账号不存在！是否现在注册一个？\n");
			printf("1.我没有账号，要注册\n2.否，我有账号\n");//用户选择是否注册界面
			scanf("%d",&x);
			system("cls");
			if(x==1)
				goto H;//回到起始界面
			else if(x==2)
				goto B2;//回到输入账号界面
			else
			{
				printf("输入有误，请重新输入！\n");
				goto B3;	//回到选择是否注册界面
			}
		}
		else
			goto B;
B:	printf("请输入您的密码：\n");//他妈的！终于跳过来了！
	scanf("%d", &mima2[r]);
	if (mima2[r] == mima[r])
	{
		system("cls");
		printf("欢迎来到XX银行，很高兴为您服务！\n");
	A:	printf("请选择要执行的步骤：\n\n");
		printf("1.查询余额\t");
		printf("2.取款\n");
		printf("3.转账\t\t");
		printf("4.修改密码\n");
		printf("0.退出");
		printf("\n");
		scanf("%d", &i);
		if (i != 0)
		{
			switch (i)
			{
			case 1:																	/*产生随机金额100~10000*/
				srand(time(0));
				a = rand() % (10000 - 100 + 1) + 100;
				printf("您的余额为：\n%6d元\n", a);
				printf("\n请选择继续或者取消交易：\n");
				printf("1.继续交易\n");
				printf("2.取消交易\n");
				scanf("%d", &b);
				if (b == 1)
					goto A;
				else
					printf("交易取消，感谢您的使用，再见！\n");
				break;
			case 2:																		/*查询余额*/
				srand(time(0));
				a = rand() % (10000 - 100 + 1) + 100;
				printf("您的余额为%d元,请输入要取的金额：\n", a);
				scanf("%d", &b);
				while (b % 100 != 0)
				{
					printf("输入错误！只能输入100的整数倍：\n");
					scanf("%d", &b);
				}
				printf("请确认以下信息:\n");
				printf("您要取得金额为%d元，确认请按 1 ,取消请按 2  \n", b);
				scanf("%d", &c);
				if (c == 1)
				{
					printf("正在交易，请稍后...\n");
					for (i = 0; i < 5; i++)
						printf("...\n");
					printf("交易完成，是否继续？\n");
					printf("1.继续交易\t2.退卡\n");
					scanf("%d", &d);
					if (d == 2)
						goto E;
					else
						goto A;
				}
				else
					printf("交易已取消\n");
				goto A;
			case 3:																			/*转账*/
				printf("请不要给陌生人汇款！谨防上当受骗！\n");
				printf("请输入对方的账号：\n");
				scanf("%d", &a);
				printf("请输入要转账的金额:\n");
				scanf("%d", &b);
				printf("您将要向账户%d转账%d元，确认请按1,取消请按0：\n", a, b);
				scanf("%d", &c);
				if (c == 1)
				{
					printf("转账成功！\n");
					printf("1.打印凭条\t");
					printf("2.退卡\n");
					scanf("%d", &d);
					if (d == 1){
						printf("正在打印凭条，请稍后...\n");
						for (i = 0; i < 5; i++)
							printf("...\n");
						printf("打印成功！\n");
					}
					else
						printf("感谢您的使用，再见！\n");

				}
				else
					printf("交易已取消！\n");
				goto A;//回到选择步骤界面
			case 4:													/*修改密码*/
			D : printf("请输入原密码：\n");
				scanf("%d", &a);
				if (a == mima)
				{
				C:printf("请输入新密码：\n");
					scanf("%6d", &b);
					printf("请确认新密码：\n");
					scanf("%6d", &c);
					if (b == c)
					{
						printf("密码修改成功！\n");
						mima[2] = c;
						goto A;//回到选择步骤界面
					}
					else
					{
						printf("两次输入密码不一致，请重新输入：\n");
						goto C;//再次输入要修改的密码
					}
				}
				else
				{
					printf("密码不正确！请重新输入：\n");
					goto D;//回到case 4
				}
			default :
				break;
			}//整个switch的结束
		}
		else
			printf(" ");
	}
	else
	{
			for (i = 2; i > 0; i--)
			{
				printf("密码输入错误，你还有%d次机会，请重新输入：\n", i);
				scanf("%d", &j);
				for (; j == mima;)
					goto A;
			}
	}
E: 	printf("感谢您的使用，再见！\n");
}

