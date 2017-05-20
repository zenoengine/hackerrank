#include <list>

vector<int> solution(vector<int> &A, int K) {
    vector<int> result;
    
    if(A.empty())
    {
        return result;
    }
    
    list<int> copiedList(A.begin(), A.end());
    
    while(K--)
    {
        int lastValue = copiedList.back();
	    copiedList.pop_back();
	    copiedList.push_front(lastValue);
    }
    
    // #include <algorithm>
    // #include <iterator>
    
    // #include <vector>
    // #include <list>

    for(auto value : copiedList)
    {
        result.push_back(value);
    }

    std::copy(A.begin(), A.end(), std::back_inserter(copiedList));
    
    return result;
}