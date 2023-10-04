//cpp program to count words from file.

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  ifstream inputFile("test.txt"); // Open the text file

  if (inputFile.is_open()) {
    string line;
    int wordCount = 0;

    while (std::getline(inputFile, line)) {
      stringstream ss(line);
      string word;

      while (ss >> word) {
        wordCount++;
      }
    }

    inputFile.close();

    cout << "Number of words in the said file: " << wordCount << std::endl;
  } else {
    cout << "Failed to open the file." << std::endl;
  }

}
