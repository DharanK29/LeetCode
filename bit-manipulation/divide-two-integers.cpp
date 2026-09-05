class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }

        bool isNegative = (dividend<0) ^ (divisor<0);

        int negDividend = dividend < 0 ? dividend : -dividend;
        int negDivisor =  divisor < 0 ? divisor : -divisor;

        int quotient = 0;

        while(negDividend <= negDivisor){
            int tempDivisor = negDivisor;
            int multiple = -1;

            while(tempDivisor >= (INT_MIN >> 1) && negDividend <= (tempDivisor << 1)){
                tempDivisor <<= 1;
                multiple <<= 1;
            }
            negDividend -= tempDivisor;
            quotient += multiple; 
        }
        return isNegative ? quotient : -quotient ;
    }
};