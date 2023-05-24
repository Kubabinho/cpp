#include<iostream>
#include<algorithm>
#include<string.h> 
#include<fstream>
#include<string>

using namespace std;

int main() {
    string line = "", lineRev = "", fileName = "";
    
    //prompt user to enter the file name
    cout << "Enter file name" << endl;
    cin >> fileName;
    
    ifstream infile;
    infile.open(fileName);
    
    int paliLenght=0;
    string longestPali;
    
    do {
        //read a line from the file
        infile >> line;
        
        lineRev = line;
        
        //reverse line
        reverse(lineRev.begin(), lineRev.end());
        
        //check if the line is a palindrome
        if (line == lineRev) {
            int charCount = lineRev.length();
            
            //update the longest palindrome if the current line is longer
            if (paliLenght < charCount) {
                paliLenght = charCount;
                longestPali = lineRev;
            }
        }

    } while (getline(infile, line));  //continue reading lines until the end of the file
    
    //print longest palindrome and its length
    cout << longestPali << " length: " << paliLenght << endl;

    return 0;
}