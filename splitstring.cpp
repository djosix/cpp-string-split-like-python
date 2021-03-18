#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> split(string s, string d) {
    int pos = 0, dpos;
    vector<string> result;
    while (pos < s.size()) {
        dpos = s.find(d, pos);
        if (dpos == string::npos) {
            result.push_back(s.substr(pos, s.size() - pos));
            break;
        } else {
            result.push_back(s.substr(pos, dpos - pos));
            pos = dpos + d.size();
        }
    }
    return result;
}

int main() {
    string str { "I just[] want to []split a stri[]ng!" };
    for (auto s : split(str, "[]")) {
        cout << s << endl;
    }
}