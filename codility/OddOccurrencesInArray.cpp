//score: 100 of 100

#include <map>

int solution(vector<int> &A) {
    
    map<int, int> pairMap;
    for(auto iter = A.begin(); iter != A.end(); ++iter)
    {
        pairMap[*iter]++;
        
        if(pairMap[*iter]==2)
        {
            pairMap.erase(*iter);
        }
    }
    
    return pairMap.begin()->first;
}