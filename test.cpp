#include <iostream>
#include "Time.h"

using namespace std;

int main(){

	Time teaTime(10, 15, 0);   //create an object to represent tea time at 10:15
	Time midnight;             //create time object with default time,ie.midnight 00:00:00

	teaTime.print();           //testing our new time objects 
	cout << endl;
	midnight.print();
	cout << endl;

	teaTime.setTime(11, 0, 0);
	teaTime.print();
	cout << endl;

	teaTime.getTime(int hours, int mins, int secs);
	cout << "hours" << hours << "minutes " << mins << " seconds";
}