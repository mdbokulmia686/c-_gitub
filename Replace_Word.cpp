#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s, x;
        cin >> s >> x;

        size_t pos = s.find(x);
        while (pos != -1) 
        {
            s.replace(pos, x.length(), "#");
            pos = s.find(x, pos + 1);
        }

        cout << s << endl;
    }

    return 0;
}