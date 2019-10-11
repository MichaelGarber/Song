#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main() {

	srand(time(NULL));
	char x = rand() % 26 + 95;
	int charsum = 0;
	float charavg;
	const int MAX = 8;
	string song[MAX] = { "Here is my song","I have no bong","This won't take long","I am actually wrong","It is my time"
		,"to sit and rhyme","I have no thyme","I'm doing just fine" };

	for (int i = 0; i < MAX; i++) {
		cout << song[i] << endl;
	}
	
	


	for (int i = 0; i < MAX; i++) {
		cout <<"There are " << song[i].length() <<" characters line " << i + 1 << "." << endl;

		charsum += song[i].length();

	}

	cout << "The total number of characters in this song is " << charsum << endl;
	charavg = charsum / 8.0;
	cout << "There are " << MAX << " lines in the song" << endl;
	cout << "The average character amount per line is " << charavg << endl;

	cout << "The randomly chosen letter is " << x << endl;

	for (int i = 0; i < MAX; i++) {
		cout << "There character " << x << " for line  " << i + 1 <<" is in position " << song[i].find(x) << "." << endl;
	}

	 
	for (int i = 0; i < MAX; i++) {
		cout << song[i].replace(song[i].length() , song[i].length() + 1,"!") << endl;

	}
}


