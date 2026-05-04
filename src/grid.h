#pragma once


class Grid
{
public:
    Grid();
    int grid[30][30];
    void Intialization();
    void Print();
    void Draw();

private:
    int numRows;
    int numCols;
    int cellSize;
};