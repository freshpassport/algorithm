// build with clang++ Apple LLVM version 10.0.0 (clang-1000.10.44.2)
// clang++ -o solution solution.cxx

#include <map>
#include <iostream>

using namespace std;

int FirstNotRepeatingChar(string str)
{
    map<char, int> mp;
    
    for (int i=0; i<str.size(); ++i) {
        mp[str[i]]++;
    }

    for (int i=0; i<str.size(); ++i) {
        if (mp[str[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main()
{
    string test_str = "abadbcf";
    cout << "test str:" << test_str << endl;
    cout << "first pos:" << FirstNotRepeatingChar(test_str) << endl;
    return 0;
}
