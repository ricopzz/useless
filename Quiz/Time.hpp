#ifndef TIME_HPP
#define TIME_HPP
#include <iostream>
#include <string>
using namespace std;

class Time{
private:
	int hour, minute, second;
public:
	~Time();
	Time();
	Time(int hour, int minute, int second);
	
	void setHour(int hour);
	void setMinute(int minute);
	void setSecond(int second);
	void setTime(int hour, int minute, int second);
	
	int getHour();
	int getMinute();
	int getSecond();
	
	string toString();
	Time nextSecond();
	Time previousSecond();
	
};

#endif
