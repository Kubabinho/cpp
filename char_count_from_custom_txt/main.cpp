#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    char letter;
    int charCount = 0;
    string fileName;

    // Prompt the user to enter the file name
    cout << "Enter file name" << endl;
    cin >> fileName;

    // Prompt the user to enter the character to search for
    cout << "Enter char" << endl;
    cin >> letter;

    // Open the file for reading
    ifstream read(fileName);

    // Create a stringstream to store the contents of the file
    stringstream strStream;
    strStream << read.rdbuf();
    string str = strStream.str();

    // Check if the file was successfully opened
    if (!read.is_open()) 
    {
        cout << "something wrong";
    }
    else 
    {
        // Iterate over each character in the string
        for (int i = 0; i < str.size(); i++)
        {
            // Check if the current character matches the desired character
            if (str[i] == letter)
            {
                // Increment the character count if a match is found
                ++charCount;
            }
        }
    }

    // Print the final character count
    cout << charCount;

    return 0;
}