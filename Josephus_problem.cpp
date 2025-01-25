// Also known as Josephus Problem
#include <iostream>
#include <vector>
using namespace std;

int winner(vector<int> person, int index, int n, int person_left, int k)
{
    if (person_left == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (person[i] == 0)
            {
                return i;
            }
        }
    }

    int kill = (k - 1) % person_left;    // k-1 is index
    while (kill)
    {
        index = (index + 1) % n;
        kill--;

        // skip the killed persons
        while (person[index] == 1)
        {
            index = (index + 1) % n;   
        }
    }
    person[index] = 1;

    // next alive person
    while (person[index] == 1)
    {
        index = (index + 1) % n;
    }
    return winner(person, index, n, (person_left - 1), k);
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int n = arr.size();
    vector<int> person(n, 0);
    int k = 4;   // index to be killed in every turn
    int ans = winner(person, 0, n, 6, k);
    cout << "Winner is " << arr[ans] << endl;

    return 0;
}

// Time complexity = (n+n+n+n+....) => O(n^2)
// Space complexity = (n+n) = (array + recursion ) ==> O(n)