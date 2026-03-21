class Solution {
public:
    int hIndex(vector<int>& citations) {
        //citations must me same or above as h index
        //just like we take max of 5 but 5 books hav'nt 5 citations or above 
        //so if we take 3 the three books have 3 or more citations & it is the maximum
        int n = citations.size();
        vector<int> freq(n+1);
        for(int i=0; i<citations.size(); i++){
            if(citations[i] > n) freq[n]++;
            else freq[citations[i]]++;
        }
        int Hindex = n;
        int num = freq[n];
        while(num < Hindex){
            Hindex--;
            num+=freq[Hindex];
        }
        return Hindex;
    }
};