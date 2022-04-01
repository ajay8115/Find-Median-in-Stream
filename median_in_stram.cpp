// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    priority_queue<int> q1;
    priority_queue<int, vector<int>, greater<int>> q2;
    // Function to insert heap.
    void insertHeap(int &x)
    {
        if (q1.empty() || x <= q1.top())
        {
            q1.push(x);
        }
        else
        {
            q2.push(x);
        }
        balanceHeaps();
    }

    // Function to balance heaps.
    void balanceHeaps()
    {
        if (q2.size() - q1.size() == 1)
        {
            q1.push(q2.top());
            q2.pop();
        }

        else if (q1.size() - q2.size() == 2)
        {
            q2.push(q1.top());
            q1.pop();
        }
    }

    // Function to return Median.
    double getMedian()
    {
        if (q1.size() == q2.size())
        {
            return (q1.top() + q2.top()) / (2.0);
        }

        return q1.top();
    }
};
