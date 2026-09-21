#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // Enqueue
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;

    // Dequeue
    q.pop();

    cout << "After dequeue: " << q.front() << endl;

    return 0;
}