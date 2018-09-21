class Solution {
public:
    int getSum(int a, int b) {
        int carry = a & b;  // specify which digits will going to carry out
        int result = a ^ b; // specify which digits result is '1'(which doesn't carry out)
        while (carry != 0){
            int shiftcarry = carry << 1;    // shift the carry right one bit to add with the result in a right place
            carry = shiftcarry & result;    // if carry > 0, it means that it still have some digits to be carry out
            result ^= shiftcarry;
        }
        return result;
    }
};