class Solution {
public:
    int reverse(int x) {
        long rev = 0; // Use long to catch overflow temporarily
        
        while (x != 0) {
            int rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        
        // Check if it goes outside the 32-bit signed integer range
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }
        
        return rev;
    }
};