#include "starinformation.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <string>

vector<string> Star::getStarInfoFromFile()
{
	vector<string> star;		//����һ�������洢��Ϣ 
	char buf[256];				//����һ�������ȡ�ı��ļ��е���Ϣ 
	ifstream ifs;
	//ifs.open("E:\\c++�γ����\\xiaoyating\\allstar.txt", ios::in);
	ifs.open(".\\allstar.txt", ios::in);	//�������·���µ��ı��ļ� 
	while(!ifs.eof())
	{
		ifs.getline(buf,256,'\n');			//��Ϣ��ȡ 
		star.push_back(buf);				//��ӽ����� 
	}
	ifs.close();
	return star;
}


vector<string> Star::getNumInfoFromFile()
{
	vector<string> starnum;		//����һ�������洢��Ϣ 
	char buf[256];				//����һ�������ȡ�ı��ļ��е���Ϣ 
	ifstream ifs;
	//ifs.open("E:\\c++�γ����\\xiaoyating\\star.txt", ios::in);
	ifs.open(".\\star.txt", ios::in);		//�������·���µ��ı��ļ� 
	while(!ifs.eof())
	{
		ifs.getline(buf,256,'\n');			//��Ϣ��ȡ 
		starnum.push_back(buf);				//��ӽ����� 
	}
	ifs.close();
	return starnum;
}


void Star::ShowAll()		//��ʾ�����嵥
{
	vector<string> starnum;
	starnum=getNumInfoFromFile();
	cout<<"\t\t\t\t\t\t�����ǿ��\t\t\t\t\t\t"<<endl;
	cout<<"���\t\t"<<"����"<<endl;
	int j=0;
	for(int i=0; i<starnum.size(); i++)
	{
		cout<<starnum[i]<<endl;
		j++;
		if(j%10==0)
			system("pause");
	} 
}


void Star::ShowAllStar()
{
	vector<string> starall;
	starall=getStarInfoFromFile();
	cout<<"\t\t\t\t\t\t���������ϴ�ȫ��\t\t\t\t\t\t"<<endl;
	cout<<"���\t"<<"����\t"<<"�Ա�\t"<<"��ߣ�cm��   "<<"���أ�kg��   "<<"������\t"<<"��������\t"<<"����\t\t"<<"��˿��\t\t""ְҵ"<<endl;
	int j=0;
	for(int i=0; i<starall.size(); i++)
	{
		cout<<starall[i]<<endl;
		j++;
		if(j%10==0)
			system("pause");
	}
}

void Star::ShowA(int index)		//��ʾ�������ǵĸ�������
{
	vector<string> star;
	star=getStarInfoFromFile();
	cout<<"������ҵ������������£�"<<endl<<endl;
	cout<<"���\t"<<"����\t"<<"�Ա�\t"<<"��ߣ�cm��   "<<"���أ�kg��   "<<"������\t"<<"��������\t"<<"����\t\t"<<"��˿��\t\t""ְҵ"<<endl;
	cout<<star[index];
}


int Star::SearchNum(string num)
{
	vector<string> starnum;
	starnum=getStarInfoFromFile();
	char index=-1;
	for(int i=0;i<starnum.size();i++)
	{
		if(starnum[i].find(num,0)!=string::npos)	//��ʾnposһ�������ڵĳ���starnum[i].find(num,0)
		{
			index=i;
			break;	
		}	
	}
	return	index;
}


int Star::SearchName(string name)
{
	vector<string> starname;
	starname=getStarInfoFromFile();
	int index=-1;
	for(int i=0;i<starname.size();i++)
	{
		if(starname[i].find(name,0)!=string::npos)	//��ʾnposһ�������ڵĳ���
		{
			index=i;
			break;	
		}	
	}
	return	index;
} 


	

