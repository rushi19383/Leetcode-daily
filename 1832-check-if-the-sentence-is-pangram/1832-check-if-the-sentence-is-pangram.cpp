class Solution {
public:
    bool checkIfPangram(string sentence) {
         int seen = 0;
        int rem = 26;
        for (char ch : sentence) {
            int mask = 1 << (ch - 'a');
            if (!(seen & mask)) {
                if (!--rem) return true;
                seen |= mask;
            }
        }
        return false;
    }
};