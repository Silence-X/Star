#include "menu.h"
#include"starinformation.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

//显示系统主界面
void Menu::showMainMenu()
{
	system("color 0B");
	system("mode con cols=130 lines=30");
	cout<<"\t\t\t\t\t【欢迎来到Slience明星小助手】"<<endl;
	cout<<"\t\t\t\t▁▁▂▂▃▃▄▄▅▅▅▅▅▅▄▄▃▃▂▂▁▁" <<endl;
	cout<<"\t\t\t\t★                                         ★"<<endl;
	cout<<"\t\t\t\t★          1 明星库                       ★"<<endl;	
	cout<<"\t\t\t\t★          2 查询明星编号                 ★"<<endl;	
	cout<<"\t\t\t\t★          3 查询明星名字                 ★"<<endl;
	cout<<"\t\t\t\t★          4 明星资料大全                 ★"<<endl;	
	cout<<"\t\t\t\t★          5 心有灵犀(game)               ★"<<endl;
	cout<<"\t\t\t\t★          6 我们的星座奇缘               ★"<<endl;
	cout<<"\t\t\t\t★                                         ★"<<endl;
	cout<<"\t\t\t\t★                                         ★"<<endl;
	cout<<"\t\t\t\t*********************************************"<<endl;
	cout<<"\n请输入编号：" <<endl; 
}

void Menu::ReturnMainMenu()
{
	cout << "\n返回主界面，请按回车键(Enter)：";
	int key;
	key=getch();
	if(key==13)
	{
		system("cls");
		Menu::showMainMenu();
	}
}


void Menu::getRandNum()
{
	int x,i=-1,j=0;
	int next=1;
	srand((unsigned)time(NULL));
	while(next==1)
	{
		cout<<"\t\t\t\t\t\t※心有灵犀※\t\t\t\t\t\t"<<endl;
		x=rand()%100;						//产生随机数，模拟为明星心中的数字
		j=0;								 //cout<<"x="<<x<<endl;//显示产生的随机数	
		while(i!=x)							//用户输入数字 ，与明星心中的数字进行比较 
		{
			cout<<"请输入一个100以内的数字"<<endl;
			cin>>i;
			if(x<i && i>=0 && i<=100)
			{
				cout<<"╮(╯_╰)╭ 你输入的数字大了一点点哦"<<endl<<endl;
				j++;
			}
			else if(x>i && i>=0 && i<=100)
			{
				cout<<"╮(╯_╰)╭ 你输入的数字小了一点点哦"<<endl<<endl;
				j++;
			}
			else if(i>100 || i<0) 
				cout<<"输入的数字不在指定范围内，请重新输入！"<<endl<<endl;
		}
		if(j<=3)
			cout<<"恭喜你，你和你心中的偶像心有灵犀哦(∩_∩)" <<endl<<endl;
		else if(j<=6)
			cout<<"恭喜你，你和你心中的偶像默契不错哦(∩_∩)" <<endl<<endl;
		else if(j<=10)
			cout<<"恭喜你，你猜对了，不过你和你的偶像默契有待加强哦(∩_∩)" <<endl<<endl;
		else
			cout<<"恭喜你，你猜对了，不过你和你的偶像真的毫无默契╮(╯﹏╰）╭" <<endl<<endl;
		cout<<"敢不敢再来测试你与偶像之间的默契度呢?(Yes输入1，No输入0)"<<endl;
		cin>>next;
		system("cls");
	}
}


void Menu::getXingZuo()
{
	int y_m,y_d,s_m,s_d;
	cout<<"\t\t\t\t\t\t※我们的星座奇缘※\t\t\t\t\t\t"<<endl<<endl;
	cout<<"输入你的生日(月/日)："<<endl;
	cin>>y_m>>y_d;
	cout<<"输入偶像的生日(月/日)："<<endl;
	cin>>s_m>>s_d;
	cout<<endl<<endl;
	cout<<"你的生日："<<y_m<<"/"<<y_d<<endl;
	cout<<"偶像的生日："<<s_m<<"/"<<s_d<<endl;
	cout<<"你的星座：";
	Menu::showXingZuo(y_m,y_d);
	cout<<"偶像的星座：";
	Menu::showXingZuo(s_m,s_d);
	system("pause");
	system("cls");
	system("color 3F");
	cout<<"\n\n\n\n    想知道更多你与偶像星座之间的秘密和关系吗？请打开baidu.com，开启你们的星座奇缘吧！！！(∩_∩)"<<endl;
	cout<<"                        **           **        "<<endl;
    cout<<"                    *       *     *       *    "<<endl;        
    cout<<"                  *            *            *  "<<endl;
    cout<<"                 *                           * "<<endl;
    cout<<"                 *                           * "<<endl;
    cout<<"                 *                           * "<<endl;
    cout<<"                 *                           * "<<endl;
    cout<<"                  *                         *  "<<endl;
    cout<<"                   *                       *   "<<endl;
    cout<<"                    *                     *    "<<endl;
    cout<<"                      *                 *      "<<endl;
    cout<<"                        *             *        "<<endl;
    cout<<"                          *         *          "<<endl;
    cout<<"                             *   *             "<<endl;
    cout<<"                               *               "<<endl;
}


void Menu::showXingZuo(int m,int d)
{
	if((m==3 && d>=21 && d<=31) || (m==4 && d<=19 && d>=1))
		cout<<"白羊座"<<endl;
	else if((m==4 && d>=20 && d<=30) || (m==5 && d<=20 && d>=1))
		cout<<"金牛座"<<endl;
	else if((m==5 && d>=21 && d<=31) || (m==6 && d<=21 && d>=1))
		cout<<"双子座"<<endl;
	else if((m==6 && d>=22 && d<=30) || (m==7 && d<=22 && d>=1))
		cout<<"巨蟹座"<<endl;
	else if((m==7 && d>=23 && d<=31) || (m==8 && d<=22 && d>=1))
		cout<<"狮子座"<<endl;
	else if((m==8 && d>=23 && d<=31) || (m==9 && d<=22 && d>=1))
		cout<<"处女座"<<endl;
	else if((m==9 && d>=23 && d<=30) || (m==10 && d<=23 && d>=1))
		cout<<"天秤座"<<endl;
	else if((m==10 && d>=24 && d<=31) || (m==11 && d<=22 && d>=1))
		cout<<"天蝎座"<<endl;
	else if((m==11 && d>=23 && d<=30) || (m==12 && d<=21 && d>=1))
		cout<<"射手座"<<endl;
	else if((m==12 && d>=22 && d<=31) || (m==1 && d<=19 && d>=1))
		cout<<"摩羯座"<<endl;
	else if((m==1 && d>=20 && d<=31) || (m==2 && d<=18 && d>=1))
		cout<<"水瓶座"<<endl;
	else if((m==2 && d>=19 && d<=29) || (m==3 && d<=20 && d>=1))
		cout<<"双鱼座"<<endl;
}