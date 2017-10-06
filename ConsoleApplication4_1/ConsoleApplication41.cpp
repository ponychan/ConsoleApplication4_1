// ConsoleApplication41.cpp: 定义控制台应用程序的入口点。
//4_1一个关于时钟的类

#include "stdafx.h"
#include<iostream>
using namespace std;

//时钟类
class clock {
public:
	void settime(int newh = 0, int newm = 0, int news = 0);
	void showtime();
private:
	int hour, minute, second;
};

//时钟类的具体函数实现
void clock::settime(int newh, int newm, int news) {
	hour = newh;
	minute = newm;
	second = news;
}
//时钟类具体函数实现这是一个内联函数
inline void clock::showtime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
	clock myclock;			//定义一个类的实体对象
	cout << "First time set and output:" << endl;
	myclock.settime();
	myclock.showtime();
	cout << "Second time set and output:" << endl;
	myclock.settime(8, 30, 30);
	myclock.showtime();
	return 0;
}

