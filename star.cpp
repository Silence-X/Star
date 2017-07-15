#include "starinformation.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <string>

vector<string> Star::getStarInfoFromFile()
{
	vector<string> star;		//创建一个容器存储信息 
	char buf[256];				//创建一个数组读取文本文件中的信息 
	ifstream ifs;
	//ifs.open("E:\\c++课程设计\\xiaoyating\\allstar.txt", ios::in);
	ifs.open(".\\allstar.txt", ios::in);	//访问相对路径下的文本文件 
	while(!ifs.eof())
	{
		ifs.getline(buf,256,'\n');			//信息读取 
		star.push_back(buf);				//添加进容器 
	}
	ifs.close();
	return star;
}


vector<string> Star::getNumInfoFromFile()
{
	vector<string> starnum;		//创建一个容器存储信息 
	char buf[256];				//创建一个数组读取文本文件中的信息 
	ifstream ifs;
	//ifs.open("E:\\c++课程设计\\xiaoyating\\star.txt", ios::in);
	ifs.open(".\\star.txt", ios::in);		//访问相对路径下的文本文件 
	while(!ifs.eof())
	{
		ifs.getline(buf,256,'\n');			//信息读取 
		starnum.push_back(buf);				//添加进容器 
	}
	ifs.close();
	return starnum;
}


void Star::ShowAll()		//显示明星清单
{
	vector<string> starnum;
	starnum=getNumInfoFromFile();
	cout<<"\t\t\t\t\t\t※明星库※\t\t\t\t\t\t"<<endl;
	cout<<"编号\t\t"<<"姓名"<<endl;
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
	cout<<"\t\t\t\t\t\t※明星资料大全※\t\t\t\t\t\t"<<endl;
	cout<<"编号\t"<<"姓名\t"<<"性别\t"<<"身高（cm）   "<<"体重（kg）   "<<"出生地\t"<<"出生日期\t"<<"别名\t\t"<<"粉丝团\t\t""职业"<<endl;
	int j=0;
	for(int i=0; i<starall.size(); i++)
	{
		cout<<starall[i]<<endl;
		j++;
		if(j%10==0)
			system("pause");
	}
}

void Star::ShowA(int index)		//显示查找明星的个人资料
{
	vector<string> star;
	star=getStarInfoFromFile();
	cout<<"您想查找的明星资料如下："<<endl<<endl;
	cout<<"编号\t"<<"姓名\t"<<"性别\t"<<"身高（cm）   "<<"体重（kg）   "<<"出生地\t"<<"出生日期\t"<<"别名\t\t"<<"粉丝团\t\t""职业"<<endl;
	cout<<star[index];
}


int Star::SearchNum(string num)
{
	vector<string> starnum;
	starnum=getStarInfoFromFile();
	char index=-1;
	for(int i=0;i<starnum.size();i++)
	{
		if(starnum[i].find(num,0)!=string::npos)	//表示npos一个不存在的常数starnum[i].find(num,0)
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
		if(starname[i].find(name,0)!=string::npos)	//表示npos一个不存在的常数
		{
			index=i;
			break;	
		}	
	}
	return	index;
} 


	

