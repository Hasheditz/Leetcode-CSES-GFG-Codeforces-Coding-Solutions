class Solution {
public:
    int countOnes(const string& s) {
        int count = 0;
        for (char ch : s) {
            if (ch == '1') {
                count++;
            }
        }
        return count;
    }

    int numSteps(string s) {
        int steps = 0;
        while (s != "1") {
            if (s.back() == '0') {
                s.pop_back();
            } else {
                if (countOnes(s) == s.size()) {
                    s = string(s.size(), '0');
                    s.insert(s.begin(), '1');
                } else {
                    for (int i = s.size() - 1; i >= 0; --i) {
                        if (s[i] == '1') {
                            s[i] = '0';
                        } else {
                            s[i] = '1';
                            break;
                        }
                    }
                }
            }
            steps++;
        }
        return steps;
    }
};
