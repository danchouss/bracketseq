#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector <char> vector;
    string str;
    cin >> str;
    int i;
    for (i=0;i<str.size();i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[' || str[i] == '<')
        {
            vector.push_back(str[i]);
        }
        if (vector.empty() && ((str[i] == ')') || (str[i] == '}') || (str[i] == ']') || (str[i] == '>')))
        {
            cout << "NO";
            return 0;
        }
        if ((str[i] == ')') && (!vector.empty()) && (vector.back() == '('))
        {
            vector.pop_back();
        }
        if ((str[i] == '}') && (!vector.empty()) && (vector.back() == '{'))
        {
            vector.pop_back();
        }
        if ((str[i] == ']') && (!vector.empty()) && (vector.back() == '['))
        {
        vector.pop_back();
        }
        if ((str[i] == '>') && (!vector.empty()) && (vector.back() == '<'))
        {
            vector.pop_back();
        }
    }
    if (!vector.empty())
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}