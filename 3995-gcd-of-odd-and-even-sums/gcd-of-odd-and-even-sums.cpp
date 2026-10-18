class Solution {
public:
    int gcdOfOddEvenSums(int nums) {
        

        int sumOdd=0;
        int sumEven=0;
        //  for sumodd
        for(int i=1; i<=2*nums-1; i=i+2)
        {
            sumOdd=sumOdd+i;
        }
        // for sumeven
        for(int i=2; i<=2*nums; i=i+2)
        {
            sumEven=sumEven+i;
        }

    return  gcd(sumOdd , sumEven);
    }
};