class Solution {
public:
    int findComplement(int num) {
        int leng = (int)(log(num) / log(2)) + 1;
        int answer=0;
        for(int i=0;i<leng;i++){
            if((num>>i)%2==0)
                answer+=(1<<i);
        }
        return answer;

    }
};
