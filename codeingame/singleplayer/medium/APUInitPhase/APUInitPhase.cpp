#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Don't let the machines win. You are humanity's last hope...
 **/
 
 bool isEmptyNode(char node)
 {
     if(node == '0')
     {
         return false;
     }
     
     return true;
 }
 
 bool isInnerGrid(int x, int y, int width, int height)
 {
     if(width > x && height > y)
     {
         return true;
     }
     
     return false;
 }
 
 string MakeCoordinateStringFromNode(char node, int x, int y)
 {
     string ret;
     if(node == '0')
     {
         ret.append(to_string(x));
         ret += " ";
         ret.append(to_string(y));
         return ret;
     }
     
     return "-1 -1";
 }
 
int main()
{
    int width; // the number of cells on the X axis
    cin >> width; cin.ignore();
    int height; // the number of cells on the Y axis
    cin >> height; cin.ignore();
    
    string grid;
    
    int maxSize = width*height;
    
    for (int i = 0; i < height; i++) {
        string line; // width characters, each either 0 or .
        getline(cin, line);
        grid += line;
    }
    
    for(int y = 0 ; y < height; y++)
    {
        for(int x = 0; x < width; x++)
        {
            string output;
            char node = grid[y*width + x];
            
            if(node !='0')
            {
                continue;
            }
            
            output += MakeCoordinateStringFromNode(node, x, y) + " ";
            
            char rightNode = '.';
            int x2 = x+1;
            for(x2; x2 < width; x2++)
            {
                if(isInnerGrid(x2, y, width, height))
                {
                    rightNode = grid[y*width + x2];
                    if(rightNode == '0')
                    {
                        break;
                    }
                }
            }
            output += MakeCoordinateStringFromNode(node, x2, y) + " ";
            
            char bottomNode = '.';
            int y3 = y+1;
            for(y3; y3 < height; y3++)
            {
                if(isInnerGrid(x, y3, width, height))
                {
                    bottomNode = grid[(y3)*width + x];
                    if(bottomNode == '0')
                    {
                        break;
                    }
                }
            }
            output += MakeCoordinateStringFromNode(node, x, y3) + " ";
            cout << output << endl;
        }
    }
}