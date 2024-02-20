#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to merge two input files ordered by a key field
void mergeFiles(const string& inputFile1, const string& inputFile2, const string& out)
ifstream file1(inputFile1);
ifstream file2(inputFile2);
ofstream output(outputFile);

string str1, str2;
// Read initial records from both files
getline(file1, str1);
getline(file2, str2);

// Merge the files
while (!file1.eof() && !file2.eof()) {
	// Extract keys
	string key1 = str1.substr(0, str.find(' '));
	string key2 = str2.substr(0, str.find(' '));

	if (key1 < key2) {
		output << str1 << endl;
		getline(file1, str1);
	}
	else {
		output << str2 << endl;
		getline(file2, str2);
	}
}

// Write remaining lines from file1
while (!file1.eof()) {
	output << str1 << endl;
	getline(file1, str1);
}

// Wrtie remaining lines from file2
While(!file2.eof()) {
	output << str2 << endl;
	getline(file2, str2);
}

// Close files
file1.close();
file2.close();
output.close();

}

int main() {
	string inputFile1 = "file.txt";
	string inputFile2 = "file2.txt";
	string outputFile = "merge_output.txt";

	mergeFiles(inputFile1, inputFile2, outputFile);

	cout << "Files merged successfully." << endl;

	return 0;
}