class Solution{
public:	
    bool sameFreq(string s)
    {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
        unordered_map<int, int> countFreq;
        for (auto& pair : freq) {
            countFreq[pair.second]++;
        }
        
        if (countFreq.size() == 1) {
            return true;
        } else if (countFreq.size() == 2) {
            auto it = countFreq.begin();
            int firstFreq = it->first;
            int secondFreq = (++it)->first;
            int firstCount = countFreq[firstFreq];
            int secondCount = countFreq[secondFreq];
            
            if ((firstCount == 1 && firstFreq == 1) || (secondCount == 1 && secondFreq == 1) ||
                (firstCount == 1 && firstFreq == secondFreq + 1) || (secondCount == 1 && secondFreq == firstFreq + 1)) {
                return true;
            }
        }
        
        return false;
    }
};
