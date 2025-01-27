#include <iostream>
#include <string>
using namespace std;
class Student 
{
    public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
void compare_marks() 
    {
        total_marks = math_marks + eng_marks;
    }
};

int main() 
{
    int N;
    cin >> N;
    Student students[N];
    for (int i = 0; i < N; ++i) 
    {
        cin >> students[i].name >> students[i].cls >> students[i].s >> students[i].id
            >> students[i].math_marks >> students[i].eng_marks;
        students[i].compare_marks();
    }
   for (int i = 0; i < N - 1; ++i) 
   {
        for (int j = 0; j < N - i - 1; ++j) 
        {
            if (students[j].total_marks < students[j + 1].total_marks) 
            {
                swap(students[j], students[j + 1]);
            } 
            else if (students[j].total_marks == students[j + 1].total_marks &&
                       students[j].id > students[j + 1].id) 
            {
              swap(students[j], students[j + 1]);
            }
        }
    }
   for (int i = 0; i < N; ++i) 
   {
        cout << students[i].name << " " << students[i].cls << " " << students[i].s << " "
             << students[i].id << " " << students[i].math_marks << " " 
             << students[i].eng_marks << endl;
    }

    return 0;
}