#include "Time.hpp"

Time::~Time(){}

Time::Time(){}

Time::Time(int hour, int minute, int second){
	this->hour=hour;
	this->minute=minute;
	this->second=second;
}

void Time::setHour(int hour){
	this->hour=hour;
}

void Time::setMinute(int minute){
	this->minute=minute;
}

void Time::setSecond(int second){
	this->second=second;
}

void Time::setTime(int hour, int minute, int second){
	this->hour=hour;
	this->minute=minute;
	this->second=second;
}

int Time::getHour(){
	return hour;
}

int Time::getMinute(){
	return minute;
}

int Time::getSecond(){
	return second;
}

string Time::toString(){
	return to_string(hour)+":"+to_string(minute)+":"+to_string(second);
}

Time Time::nextSecond(){
	this->second+=1;
}

Time Time::previousSecond(){
	this->second-=1;
}
