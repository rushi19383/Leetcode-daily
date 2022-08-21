class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> orig(n);
        bitset<32> num;
        for (int j = 31, i = 0; j >= 0; j--)
            num[i++] = orig[j];
        return num.to_ulong();
    }
};