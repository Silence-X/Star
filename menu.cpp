#include "menu.h"
#include"starinformation.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

//��ʾϵͳ������
void Menu::showMainMenu()
{
	system("color 0B");
	system("mode con cols=130 lines=30");
	cout<<"\t\t\t\t\t����ӭ����Slience����С���֡�"<<endl;
	cout<<"\t\t\t\t�x�x�y�y�z�z�{�{�|�|�|�|�|�|�{�{�z�z�y�y�x�x" <<endl;
	cout<<"\t\t\t\t��                                         ��"<<endl;
	cout<<"\t\t\t\t��          1 ���ǿ�                       ��"<<endl;	
	cout<<"\t\t\t\t��          2 ��ѯ���Ǳ��                 ��"<<endl;	
	cout<<"\t\t\t\t��          3 ��ѯ��������                 ��"<<endl;
	cout<<"\t\t\t\t��          4 �������ϴ�ȫ                 ��"<<endl;	
	cout<<"\t\t\t\t��          5 ������Ϭ(game)               ��"<<endl;
	cout<<"\t\t\t\t��          6 ���ǵ�������Ե               ��"<<endl;
	cout<<"\t\t\t\t��                                         ��"<<endl;
	cout<<"\t\t\t\t��                                         ��"<<endl;
	cout<<"\t\t\t\t*********************************************"<<endl;
	cout<<"\n�������ţ�" <<endl; 
}

void Menu::ReturnMainMenu()
{
	cout << "\n���������棬�밴�س���(Enter)��";
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
		cout<<"\t\t\t\t\t\t��������Ϭ��\t\t\t\t\t\t"<<endl;
		x=rand()%100;						//�����������ģ��Ϊ�������е�����
		j=0;								 //cout<<"x="<<x<<endl;//��ʾ�����������	
		while(i!=x)							//�û��������� �����������е����ֽ��бȽ� 
		{
			cout<<"������һ��100���ڵ�����"<<endl;
			cin>>i;
			if(x<i && i>=0 && i<=100)
			{
				cout<<"�r(�s_�t)�q ����������ִ���һ���Ŷ"<<endl<<endl;
				j++;
			}
			else if(x>i && i>=0 && i<=100)
			{
				cout<<"�r(�s_�t)�q �����������С��һ���Ŷ"<<endl<<endl;
				j++;
			}
			else if(i>100 || i<0) 
				cout<<"��������ֲ���ָ����Χ�ڣ����������룡"<<endl<<endl;
		}
		if(j<=3)
			cout<<"��ϲ�㣬��������е�ż��������ϬŶ(��_��)" <<endl<<endl;
		else if(j<=6)
			cout<<"��ϲ�㣬��������е�ż��Ĭ������Ŷ(��_��)" <<endl<<endl;
		else if(j<=10)
			cout<<"��ϲ�㣬��¶��ˣ�����������ż��Ĭ���д���ǿŶ(��_��)" <<endl<<endl;
		else
			cout<<"��ϲ�㣬��¶��ˣ�����������ż����ĺ���Ĭ���r(�s�n�t���q" <<endl<<endl;
		cout<<"�Ҳ���������������ż��֮���Ĭ������?(Yes����1��No����0)"<<endl;
		cin>>next;
		system("cls");
	}
}


void Menu::getXingZuo()
{
	int y_m,y_d,s_m,s_d;
	cout<<"\t\t\t\t\t\t�����ǵ�������Ե��\t\t\t\t\t\t"<<endl<<endl;
	cout<<"�����������(��/��)��"<<endl;
	cin>>y_m>>y_d;
	cout<<"����ż�������(��/��)��"<<endl;
	cin>>s_m>>s_d;
	cout<<endl<<endl;
	cout<<"������գ�"<<y_m<<"/"<<y_d<<endl;
	cout<<"ż������գ�"<<s_m<<"/"<<s_d<<endl;
	cout<<"���������";
	Menu::showXingZuo(y_m,y_d);
	cout<<"ż���������";
	Menu::showXingZuo(s_m,s_d);
	system("pause");
	system("cls");
	system("color 3F");
	cout<<"\n\n\n\n    ��֪����������ż������֮������ܺ͹�ϵ�����baidu.com���������ǵ�������Ե�ɣ�����(��_��)"<<endl;
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
		cout<<"������"<<endl;
	else if((m==4 && d>=20 && d<=30) || (m==5 && d<=20 && d>=1))
		cout<<"��ţ��"<<endl;
	else if((m==5 && d>=21 && d<=31) || (m==6 && d<=21 && d>=1))
		cout<<"˫����"<<endl;
	else if((m==6 && d>=22 && d<=30) || (m==7 && d<=22 && d>=1))
		cout<<"��з��"<<endl;
	else if((m==7 && d>=23 && d<=31) || (m==8 && d<=22 && d>=1))
		cout<<"ʨ����"<<endl;
	else if((m==8 && d>=23 && d<=31) || (m==9 && d<=22 && d>=1))
		cout<<"��Ů��"<<endl;
	else if((m==9 && d>=23 && d<=30) || (m==10 && d<=23 && d>=1))
		cout<<"�����"<<endl;
	else if((m==10 && d>=24 && d<=31) || (m==11 && d<=22 && d>=1))
		cout<<"��Ы��"<<endl;
	else if((m==11 && d>=23 && d<=30) || (m==12 && d<=21 && d>=1))
		cout<<"������"<<endl;
	else if((m==12 && d>=22 && d<=31) || (m==1 && d<=19 && d>=1))
		cout<<"Ħ����"<<endl;
	else if((m==1 && d>=20 && d<=31) || (m==2 && d<=18 && d>=1))
		cout<<"ˮƿ��"<<endl;
	else if((m==2 && d>=19 && d<=29) || (m==3 && d<=20 && d>=1))
		cout<<"˫����"<<endl;
}