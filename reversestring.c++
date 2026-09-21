#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "hello";
    stack<char> s;

    // Push characters into stack
    for (char ch : str)
    {
        s.push(ch);
    }

    // Pop characters to reverse
    cout << "Reverse: ";

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}