#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
 
 string prevDir;
 
 struct Vector2D
 {
     Vector2D(int x, int y) : x(x), y(y) {}
     int x;
     int y;
 };
 
 map<string, Vector2D> dBehavior;
 
int main()
{
    
    dBehavior.insert(make_pair("U", Vector2D(0,-1)));
    dBehavior.insert(make_pair("UR", Vector2D(1,-1)));
    dBehavior.insert(make_pair("R", Vector2D(1,0)));
    dBehavior.insert(make_pair("DR", Vector2D(1,1)));
    dBehavior.insert(make_pair("D", Vector2D(0,1)));
    dBehavior.insert(make_pair("DL", Vector2D(-1,1)));
    dBehavior.insert(make_pair("L", Vector2D(-1,0)));
    dBehavior.insert(make_pair("UL", Vector2D(-1,-1)));
    
 
 
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();

    int X = X0;
    int Y = Y0;
    int minX = 0, maxX = W;
    int minY = 0, maxY = H;
    // game loop
    while (1) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();
        Vector2D behavior = dBehavior.find(bombDir)->second;
        
        if(behavior.x > 0)
        {
            minX = X;
            X = (X + maxX) / 2;
        }
        else if(behavior.x < 0)
        {
            maxX = X;
            X = (minX + X) / 2;
        }
        
        if (behavior.y > 0)
        {
            minY = Y;
            Y = (Y + maxY) / 2;
        }
        else if(behavior.y < 0)
        {
            maxY = Y;
            Y = (Y + minY) / 2;
        }
        
        if (X < 0) 
        { 
            X = 0;
        }
        
        if (Y < 0)
        {
            Y = 0;
        }
        
        if (X >= W)
        {
            X = W;
        }
        
        if (Y >= H)
        {
            Y = H;
        }
        
        cout << X << " " << Y << endl;
    }
}