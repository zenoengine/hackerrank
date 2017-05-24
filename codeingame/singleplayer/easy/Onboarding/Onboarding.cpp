#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * CodinGame planet is being attacked by slimy insectoid aliens.
 * <---
 * Hint:To protect the planet, you can implement the pseudo-code provided in the statement, below the player.
 **/
struct Enemy
{
    Enemy(string name,int dist) : name(name), dist(dist) {};
    string name;
    int dist;
};

 bool comp(Enemy &a, Enemy &b) {
    return (a.dist < b.dist);
}

int main()
{
    vector<Enemy> targetList;
    // game loop
    while (1) {
        string enemy1; // name of enemy 1
        cin >> enemy1; cin.ignore();
        int dist1; // distance to enemy 1
        cin >> dist1; cin.ignore();
        string enemy2; // name of enemy 2
        cin >> enemy2; cin.ignore();
        int dist2; // distance to enemy 2
        cin >> dist2; cin.ignore();
        
        targetList.push_back(Enemy(enemy1, dist1));
        targetList.push_back(Enemy(enemy2, dist2));
        
        sort(targetList.begin(), targetList.end(), comp);
        
        vector<Enemy>::iterator front = targetList.begin();
        if(front != targetList.end())
        {
            cout << front->name << endl;
            
            targetList.erase(front);
        }
    }
}