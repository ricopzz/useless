#include <iostream>
#include "Time.hpp"
using namespace std;

int main(){
	Time time;
	int hour,minute,second;
	bool flag=true,flag2=true,flag3=true;
	while(flag==true){
		cout<<"Enter hour : ";
		cin>>hour;
		if(hour<24&&hour>=0){
			flag=false;
		}
	}
	while(flag2==true){
		cout<<"Enter minute : ";
		cin>>minute;
		if(minute<60&&minute>=0){
			flag2=false;
		}
	}
	while(flag3==true&&second>=0){
		cout<<"Enter second : ";
		cin>>second;
		if(second<60){
			flag3=false;
		}
	}
	time.setHour(hour);
	time.setMinute(minute);
	time.setSecond(second);
	cout<<endl;
	time.previousSecond();
	cout<<"A second before "<<time.toString()<<endl;
	time.nextSecond();
	cout<<"Input "<<time.toString()<<endl; // or cout<<hour<<":"<<minute<<":"<<second;
	time.nextSecond();
	cout<<"A second after "<<time.toString();
	return 0;
}
