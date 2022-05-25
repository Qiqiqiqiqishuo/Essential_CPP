#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv)
{
    string first_name;
    string last_name;

    cout << "Please enter your first and last name:";
    cin >> first_name >> last_name;
    cout << "\n"
         << "Hello "
         << first_name
         << " "
         << last_name
         << " ... and goodbye!\n";

    // 保留这个 Hello world 提醒自己换行
    cout << "Hello world" << endl;
    return 0;
}
