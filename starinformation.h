#include <string>
#include <vector>

using namespace std;
//������Ϣ 
class Star
{
private:
	string num;
	string name;
	string sex;
	string high;
	string weight;
	string year,month,day;
	string birthplace[20];
	string a_name[10];
	string fan_name[10];
	string jab[30];
public: 
	vector<string> getStarInfoFromFile();	//��������Ϣ�ı��ļ��е���Ϣ���뵽һ������������ 
	vector<string> getNumInfoFromFile();	//�����Ǳ���ı��ļ��е���Ϣ���뵽һ������������ 
	void ShowAll();							//��ʾ��������Ŀ¼ 
	int SearchNum(string num);				//�������Ǳ�Ų��Ҹ�������Ϣ 
	int SearchName(string name);			//���������������Ҹ�������Ϣ 
	void ShowA(int index);					//��ʾ����Ų��ҵ�����Ϣ
	void ShowAllStar();						//��ʾ����������Ϣ
};



