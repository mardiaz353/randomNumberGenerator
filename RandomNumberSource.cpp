#include<iostream>
#include<ctime>//<-- Time is included to tell the program to
//                   generate a random number every second
#include<cstdlib>//<--This is where the function rand() comes from
using namespace std;

int main() {

	//declarations

	int max;
	int randomNum;
	int i;

	//get user information

	//After coding the random number generator
	//create a for loop to loop program 5 times
	//to refresh on for loops in c++

	for (i = 0; i <= 5; i = i + 1) {
	cout << "Please input a maximum integer";
	cin >> max;

	//calculation


	//now let's pull up srand
	srand(time(0));//<-- This says to set a random number
	//                   every second of the program
	//                   This is why we included the ctime library

	//define the random number. Give it its randomness 
	//rand() just randomizes the number
	//the number after the percent is the threshold
	//of the number range
	randomNum = (rand() % max) + 1;//<--The + 1 part allows the randomizer to
	//                                  start at 1 not 0

	//output

	cout << randomNum << endl;
}

	system("pause");
	return 0;
}