#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 初始string
	// 在编码过程中使用频率高的数据类型，
	// 简单的有：int,double,char,float,bool，
	// 复杂的有：char[]数组，即字符串数组操作函数，如：strlen,strcat,strcpy,strcmp,strncpy,strncmp,strstr，
	// 但是有string可以将复杂的组合

	// string name = "RenZihua";
	// string hobby("football");
	// cout << name << "," << hobby << endl;


	// 初始化string方式
	// string s1; //s1为空值
	// string s2("asdkjsdlfjl"); //s2为字符串
	// string s3(s2); //s3为s2的字符串
	// string s4(1, 'c'); //s4为n个为c的字符串，n当前为1
	//
	// string s;
	// s.empty(); // 若为空返回true,否则false
	// s.size(); // 返回字符串的个数
	// s[1]; //返回字符串的第n个字符，n当前为1
	// s1 + s2; //组合字符串
	// s1 = s2; //s1的内容替换为s2的内容
	// s1 == s2; //判断s1等于s2
	// s1 != s2; //判断s1不等于s2


	// 字符串的连接（拼接）
	// string s1 = "hello";
	// string s2("world");
	// string s3 = s1 + s2;
	// string s4 = "hello" + s2;
	// string s5 = "hello" + s2 + "world";
	// string s6 = "hello" + "world";//不合法


	/* 1提示用户输入姓名
	 * 2接收用户的输入
	 * 3向用户问好，hello xxx
	 * 4告诉用户名字的长度
	 * 5告诉用户首字母
	 * 6如果用户直接输入回车，告诉用户输入为空
	 * 7如果用户输入imooc，告诉用户为管理员
	 */

	string name;
	cout << "Login：Please input your userName：";
	getline(cin, name);
	if (name.empty())
	{
		cout << "input is null..." << endl;
		return 0;
	}
	if (name == "imooc" || name == "admin")
	{
		cout << "you are a administrator" << endl;
	}

	cout << "hello " + name << endl;
	cout << "your name length：" << name.size() << endl;
	cout << "your name first letter is：" << name[0] << endl; //因为name[0]获取到的是ascii类型的字符，所以不用+号连接

	return 0;
}
