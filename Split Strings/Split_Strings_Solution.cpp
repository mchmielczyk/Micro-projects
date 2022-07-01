#include <string>
#include <vector>
using namespace std;
vector<string> solution(const string& s)
{
    int size = s.size();
    string pre;
    pre.append(s);//Substring
    if (size % 2 != 0)//Check if number of chars in string is even
    {
        pre.append("_");
    }
    vector<string> answer;
    for (int i = 0; i < size; i += 2)//Divide final string to array of 2 chars per value
    {
        string str = pre.substr(i, 2);
        answer.push_back(str);
    }
    return answer;
}
int main()
{
    solution("abcdef"); //Example Input
}
//Example Output ["ab", "cd", "ef"]