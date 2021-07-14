#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string input;
    cin >> input;
    int max = 0;
    int cnt = 0;
    int target;
    int a[26] = {0,};
    transform(input.begin(), input.end(), input.begin(), (int(*)(int))toupper); //ㄷㅐ문자로 바꿈

    for(int i = 0; i < input.length(); i++)
    {
        a[input[i] - 'A']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(max < a[i])
        {
            max = a[i];
            cnt = 0;
            target = i;
        }
        if(max == a[i])
            cnt++;
    }
    if(cnt > 1)
        cout << "?";
    else
        cout << (char)(target+'A');
    return 0;
}