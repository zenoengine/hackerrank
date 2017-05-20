//Score 100
//TimeCoplexity O(1)

int solution(int X, int Y, int D) {
    int result = 0;
    
    int diff = Y - X;
    
    if(diff == 0)
    {
        return result;
    }
    
    if(diff % D == 0)
    {
        result = diff / D;
    }
    else
    {
        result = (diff / D) + 1;
    }
    
    return result;
}