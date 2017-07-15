
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
			exit(0); //�˳�����̨Ӧ�ó���
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
			cout<<"\t\t\t\t\t\t�����Ǹ������ϡ�\t\t\t\t\t\t"<<endl<<endl;
			cout<<"��������ȷ��ţ�"<<endl;
			cin>>c_num;							//��������ҵ����Ǳ��
			cout<<endl;
			int i=star.SearchNum(c_num);		//���ı��ļ��в������Ǳ�Ų���������λ��
			if(i!=-1)
				star.ShowA(i);						//��ʾ���ҵ�����������
			else
				cout<<"�޴˱�ŵ�������Ϣ��"<<endl;
			Menu::ReturnMainMenu();
			break;
		}
		case 51:
		{
			system("cls");
			string c_name;
			cout<<"\t\t\t\t\t\t�����Ǹ������ϡ�\t\t\t\t\t\t"<<endl<<endl;
			cout<<"�������������֣�"<<endl;
			cin>>c_name;						//��������ҵ���������
			int i=star.SearchName(c_name);		//���ı��ļ��в���������������������λ��
			if(i!=-1)
				star.ShowA(i);					//��ʾ���ҵ�����������
			else
				cout<<"�޴�������Ϣ��"<<endl;
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
			cout<<"��������ȷ��ţ�"<<endl;
		}
	}while(inputMainMenu!=48);
	return 0;
}
