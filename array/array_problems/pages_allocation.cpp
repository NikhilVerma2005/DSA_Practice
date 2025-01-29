// Book allocation (revise it)
// https://www.youtube.com/watch?v=znIFTUyOQvI&list=PLQEaRBV9gAFsj0vi1VtpwqSeEfoIG_KSv&index=10
#include <iostream>
using namespace std;
int solution(int arr[], int n, int s, int max)
{
    int start = max;
    int end = s;
    int mid;
    int student = 4;
    int ans;
    while (start <= end)
    {
        mid = (start + end) / 2;
        int page = 0;
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            page = page + arr[i];
            if (page > mid)
            {
                page = arr[i];
                count++;
            }
        }
        if (count > student)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {19, 9, 30, 22, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)  // can use max function also
        {
            max = arr[i];
        }
    }
    int ans = solution(arr, n, sum, max);
    cout << ans;

    return 0;
}