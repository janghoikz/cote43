#include <iostream>
#include <string>
#include <vector>

using namespace std;

int tenConvertTwo(int n)
{
    int result = 0;
    for (int i = 1; n > 0; i *= 10)
    {
        int binary = n % 2;
        result += binary * i;
        n /= 2;
    }
    

    int temp = 0;
    int num = result;
    while (num != 0)
    {
        temp += num % 10;
        num /= 10;
    }
    return temp;
}

int solution(int n) {
    int answer = 0;
    int temp1 = 0;
    int temp2 = 0;
    temp1 = tenConvertTwo(n);
    for (int i = n+1; i < 1000000; i++)
    {
        temp2 = tenConvertTwo(i);
        if (temp1 == temp2)
        {
            answer = i;
            break;
        }
    }
    cout << temp1 << endl;
    cout << temp2 << endl;
    cout << answer << endl;
    return answer;
}

int main()
{
    solution(78);
}