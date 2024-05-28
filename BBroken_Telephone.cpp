#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    int count_1, count_2, count_3 = 0;
    if (arr[0] == arr[1])
    {
      count_1 = 0;
    }
    else
    {
      count_1 = 1;
    }
    if (arr[n - 1] == arr[n - 2])
    {
      count_2 = 0;
    }
    else
    {
      count_2 = 1;
    }
    for (int i = 1; i < n - 1; i++)
    {
      if (arr[i] != arr[i + 1] || arr[i] != arr[i - 1])
      {
        count_3 = count_3 + 1;
      }
    }
    int final_count = count_1 + count_2 + count_3;
    cout << final_count << endl;
  }
  return 0;
}


