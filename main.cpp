//author: Zachary mixson
//Date: 1/17/22
//Description: search through an array of strings and delete the strings that is selected


#include <iostream>

void searchAndDelete(std::string name, std::string names[], int size);
void outArray(std::string names[], int size);

int main() {

	std::string names[5]{ "Tom", "Amy", "Sarah", "Mary", "Nick" };

	searchAndDelete("Sarah", names, 5);

	searchAndDelete("Nick", names, 5);


	outArray(names, 5);

	return 0;
}

//searches through an array and removes the selected string, shifts all the other strings forward and places "empty" at the end.
void searchAndDelete(std::string name, std::string names[], int size) {

	bool found = false;

	for (int i = 0; i < (size); i++) {//for the size of the array

		//if the name is equal to the name inputted then set found to true
		if (names[i] == name) {
			found = true;
		}
		
		//if it is not the last position in the array
		if (i < (size - 1)){
			// if found replace the position in the array with the position after
			if (found) {
				names[i] = names[i + 1];
			}
		}

	}
	//after all positions are moved if the name was found place empty at the end of the array
	if (found) {
		names[size - 1] = "empty";
	}

}


//output all the strings in the array
void outArray(std::string names[], int size) {

	for (int i = 0; i < (size); i++) {
	
		std::cout << names[i] << "\n";
	
	
	}
}