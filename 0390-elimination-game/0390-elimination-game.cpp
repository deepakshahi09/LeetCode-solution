class Solution {
public:
    int lastRemaining(int n) {
        int head = 1;          // 'head' stores the first number in the current list
        int step = 1;          // 'step' is the distance between consecutive numbers
        bool left = true;      // 'left' = direction flag (true → left to right, false → right to left)

        // Continue until only one number remains
        while (n > 1) {

            // If we are moving left→right OR if n is odd during right→left pass,
            // the head will always move forward by one step
            if (left || n % 2 == 1) {
                head += step;   // move head forward by step distance
            }

            // After each round, half of the numbers are removed
            n /= 2;            // total numbers are reduced to half
            step *= 2;         // distance between remaining numbers doubles
            left = !left;      // toggle direction (left→right → right→left → left→right...)
        }

        return head;           // final remaining number
    }
};
