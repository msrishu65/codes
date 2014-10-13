#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include <string>
#include <tuple>
#include <set>

using namespace std;

string FindLongestSubquence(string seq)
{
    int maxLen(0);
    int maxStart(0);
    int start(0);
    int len(0);

    for(int i = 0; i < seq.size(); ++i){
        set<char> s;
        int j;
        for(j = i; j >= 0 && s.size() <= 3; j--){
            s.insert(seq[j]);
        }

        start = (s.size() > 3) ? j + 2 : 0;
        len = i - start + 1;
        maxLen = max(maxLen, len);

        if(len == maxLen){
            maxStart = start;
        }
    }

    cout << "Output : " << maxLen;
    cout << " (" << seq.substr(maxStart, maxLen) << ")" << endl;
    return seq.substr(maxStart, maxLen);

}

void DoTest(string str)
{
    cout << "Input : " << str <<endl;
    FindLongestSubquence(str);
    cout << "------------------------" << endl;
}

int main(int argc, char* argv[])
{
    DoTest("123143412");    // Expect 6 (314341)
    DoTest("1231231231");   // Expect 10 (1231231231)
    DoTest("0");            // Expect 1 (0);
    DoTest("111111");       // Expect 6 (111111)
 return 0;
}
