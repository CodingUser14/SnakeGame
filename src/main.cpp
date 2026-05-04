#include <raylib.h>
#include "grid.h"


int main() 
{
    InitWindow(600, 600, "SnakeGame");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();


    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        grid.Draw();
        EndDrawing();
    }
    CloseWindow();
}