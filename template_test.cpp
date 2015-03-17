#include "Seq.h"
#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Seq<int> s; 
	Seq<string> l;
	Seq<float> m;
	// int sequence 
	cout << "Here is the int sequence" << endl;
	s.add(5);
	s.add(7);
	s.add(9);
	s.add(10);
	s.add(13);
	s.display();
	   
	cout << endl;

	s.insertAt(100, 3);
	s.display();
	   
	cout << endl;
	s.remove(5);
	s.display();
	
	cout << endl; 
	cout << endl;
	
	
	cout << "Here is the float sequence" << endl;
	m.add(5.49);
	m.add(7.55);
	m.add(9.78);
	m.add(10.21);
	m.add(13.15);
	m.display();
	   
	cout << endl;

	m.insertAt(100.369, 4);
	m.display();
	   
	cout << endl;
	m.remove(7.55);
	m.display();
	
	cout << endl; 
	cout << endl;
	
	
	cout << "Here is the string sequence" << endl;
	l.add("science ");	
	l.add("computer ");
	l.add("love ");
	l.add(" I ");
	l.add("Hello");
	
	

	l.display();
	cout << endl;
	
	l.remove("computer ");
	l.display();
	cout << endl;

	l.insertAt(" math and ", 3);
	l.display();
	cout << endl;

	return 0;
}

