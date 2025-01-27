#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string input;
    getline(cin, input);
    input += ' ';
    bool found = false;
    size_t pos = 0;
    while ((pos = input.find("Jessica", pos)) != -1) 
    {
      
        if ((pos == 0 || input[pos - 1] == ' ') && 
            (pos + 7 == input.size() || input[pos + 7] == ' ')) 
            {
            found = true;
            break;
            }
        pos += 7; 
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}