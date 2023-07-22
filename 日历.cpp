#include<iostream>
using namespace std;
int main(){
	int year;
	int month;
	int distance=0;
	int length;
	int day;
	int a;
	int b;
	int c;
	int d;
	cout<<"Please put in the year you want to search:";
	cin>>year;
	cout<<"Please put in the month you want to search:";
	cin>>month;
	cout<<year<<" year "<<month<<" month"<<endl;
	cout<<"Sun Mon Tue Wed Thu Fri Sat"<<endl;
	for(a=1;a<year;a++){
		for(b=1;b<=12;b++){
			if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
				length=31;
			}
			else if(b==4||b==6||b==9||b==11){
				length=30;
			}
			else if(b==2&&a%4==0&&a%100!=0){
				length=29;
			}
			else if(b==2&&a%400==0){
				length=29;
			}
			else{
				length=28;
			}
			distance=distance+length;
		}
	}
	for(b=1;b<=month;b++){
			if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
				length=31;
			}
			else if(b==4||b==6||b==9||b==11){
				length=30;
			}
			else if(b==2&&year%4==0&&year%100!=0){
				length=29;
			}
			else if(b==2&&year%400==0){
				length=29;
			}
			else{
				length=28;
			}
			distance=distance+length;
	}
	distance=distance-length;
	c=(distance+1)%7;
	for(d=1;d<=c;d++){
		cout<<"    ";
	}
	for(day=1;day<=length;day++){
		if(day<10){
			cout<<day<<"   ";
		}
		else{
			cout<<day<<"  ";
		}
		if((distance+2)%7==0){
			cout<<endl<<endl;
		}
		else{
		}
		distance++;
	}
	return 0;
}