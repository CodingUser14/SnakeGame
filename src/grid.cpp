#include "grid.h"
#include <raylib.h>
#include <iostream>
using namespace std;

Grid::Grid() : numRows{30}, numCols{30}, cellSize{30} { Intialization(); }

void Grid::Intialization()
{
    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numCols; j++)
        {
            grid[i][j] = 0;
        }
    }
}

void Grid::Draw()
{
    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numCols; j++)
        {
            DrawRectangle(j * cellSize+1, i * cellSize+1, cellSize-1, cellSize-1, {39, 12, 12, 12}); 
        }
    }
}

void Grid::Print()
{
    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numCols; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

