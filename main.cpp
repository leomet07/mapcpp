#include <iostream>
#include <iterator>
#include <map>
using namespace std;

void printMap(map<string, int> &mp){ // & so passes by reference

    map<int, int>::iterator itr;
    
    for (auto itr = mp.begin();
         itr != mp.end(); ++itr) {
        cout << itr->first << ": "
             << itr->second << endl;
    }

}

int main() {
	// empty map
    map<string, int> test;

	// insert elements 
    test.insert(pair<string, int>("Bobbie", 40));
    test.insert({"Maxie", 69});

	// my print function
	printMap(test);
	cout << "---------" << endl;

	
	int MaxieAge = test.at("Maxie"); // Retrieve value by key


	cout << "Retrieved age of Maxie: " << MaxieAge << endl;

	cout << "Changing Bobbie age..." << endl;
	test.find("Bobbie")->second = 40; // Assign value by key
	
	int newBobbieAge = test.at("Bobbie"); // Retrieve value by key

	cout << "(New) Retrieved Bobbie age: " << newBobbieAge << endl;

    return 0;
}