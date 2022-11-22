class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        int count = 0;
        if (n!=0){
            while(m!=0){
                m = m >> 1 ;
                count = count + 1;
            }

            while(count!=0){
                mask  = mask << 1;
                mask  = mask | 1;
                count = count - 1;
            }

            int ans = (~n) & mask;

            return ans;
    }
    return 1;

        

    }
};