#include <string>
#include <vector>

using namespace std;
//明星信息 
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
	vector<string> getStarInfoFromFile();	//将明星信息文本文件中的信息输入到一个向量容器中 
	vector<string> getNumInfoFromFile();	//将明星编号文本文件中的信息输入到一个向量容器中 
	void ShowAll();							//显示所有明星目录 
	int SearchNum(string num);				//输入明星编号查找该明星信息 
	int SearchName(string name);			//输入明星姓名查找该明星信息 
	void ShowA(int index);					//显示按编号查找到的信息
	void ShowAllStar();						//显示所有明星信息
};



