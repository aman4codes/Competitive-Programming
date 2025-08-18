#include <bits/stdc++.h>
using namespace std;

// Function to find maximum number of consecutive 1s or 0s
int max_consecutive_chars(const string &str) 
{
    int max_count = 1;
    int current_count = 1;
    for (int i = 1; i < str.length(); i++) 
    {
        if (str[i] == str[i - 1]) 
        {
            current_count++;
            max_count = max(max_count, current_count);
        } 
        else
        {
            current_count = 1;
        }
    }
    return max_count;
}

// Function to print result based on the max streak
void print_result(const string &str, int count_1, int count_0, int max_streak) 
{   
    if(count_1==0 || count_0==0)
    {
        if(count_1==1 || count_0==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<max(count_1,count_0)-1<<endl;
        }
    }
    else if(max_streak==2)
    {
        cout<<"1"<<endl;
    }
    else if (max_streak > (str.length() / 2)) 
    {
        cout << max(count_1, count_0) << endl;
    } 
    else 
    {
        cout << abs(count_1 - count_0) << endl;
    }
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string str;
        cin >> str;

        int count_1 = count(str.begin(), str.end(), '1');
        int count_0 = str.length() - count_1;

        if (count_1 == count_0) 
        {
            cout << 0 << endl;
        } 
        else 
        {
            int max_streak = max_consecutive_chars(str);
            print_result(str, count_1, count_0, max_streak);
        }
    }
    return 0;
}
