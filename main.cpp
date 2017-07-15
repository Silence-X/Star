
#include"starinformation.h"
#include"menu.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{	
	Menu::showMainMenu();
	int inputMainMenu = 0;
	Star star;
	do
	{
		inputMainMenu=getch();
		switch(inputMainMenu)
		{
		case 48:
		{
			exit(0); //退出控制台应用程序
			return 0;
		}
		case 49:
		{
			system("cls");
			star.ShowAll();
			Menu::ReturnMainMenu();
			break;
		}
		case 50:
		{
			system("cls");
			string c_num;
			cout<<"\t\t\t\t\t\t※明星个人资料※\t\t\t\t\t\t"<<endl<<endl;
			cout<<"请输入正确编号："<<endl;
			cin>>c_num;							//输入想查找的明星编号
			cout<<endl;
			int i=star.SearchNum(c_num);		//在文本文件中查找明星编号并返回所在位置
			if(i!=-1)
				star.ShowA(i);						//显示查找到的明星资料
			else
				cout<<"无此编号的明星信息！"<<endl;
			Menu::ReturnMainMenu();
			break;
		}
		case 51:
		{
			system("cls");
			string c_name;
			cout<<"\t\t\t\t\t\t※明星个人资料※\t\t\t\t\t\t"<<endl<<endl;
			cout<<"请输入明星名字："<<endl;
			cin>>c_name;						//输入想查找的明星姓名
			int i=star.SearchName(c_name);		//在文本文件中查找明星姓名并返回所在位置
			if(i!=-1)
				star.ShowA(i);					//显示查找到的明星资料
			else
				cout<<"无此明星信息！"<<endl;
			Menu::ReturnMainMenu();
			break;
		}
		case 52:
		{
			system("cls");
			star.ShowAllStar();
			Menu::ReturnMainMenu();
			break;
		}
		case 53:
		{
			system("cls");
			Menu::getRandNum();
			Menu::ReturnMainMenu();
			break;
		}
		case 54:
		{
			system("cls");
			Menu::getXingZuo();
			Menu::ReturnMainMenu();
			break;
		}

		default:
			cout<<"请输入正确编号："<<endl;
		}
	}while(inputMainMenu!=48);
	return 0;
}
