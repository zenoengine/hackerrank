#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    std::vector<int> way;
};

std::vector<Node> globalNodeInfo;

bool FindPath(int startPos, int finalDestPos)
{
    if (startPos == finalDestPos)
    {
        return true;
    }

    bool bFindPath = false;
    for (int i = 0 ; i < globalNodeInfo[startPos].way.size(); i++)
    {
        bFindPath |= FindPath( globalNodeInfo[startPos].way[i], finalDestPos);
    }
    
    return bFindPath;
}

int main()
{
    int T = 10;
    while(T--)
    {
        int num = 0;
        int pairCount = 0;
        cin >> num >> pairCount;
        
        globalNodeInfo.clear();
        globalNodeInfo.resize(100);

        for(int i = 0 ; i < pairCount; i++)
        {
            int start, dest;
            cin >> start >> dest;
            
            globalNodeInfo[start].way.push_back(dest);
        }

        cout << "#" << num << " " << FindPath(0, 99) << endl;
    }
    return 0;
}