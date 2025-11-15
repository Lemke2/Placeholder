#include <stdio.h>
#include <stdlib.h>
#include "raylib.h"

#define global static

int main(void)
{
    global const int screenWidth = 960;
    global const int screenHeight = 540;

    InitWindow(screenWidth, screenHeight, "Placeholder - waiting for game name");

    while (!WindowShouldClose())
    {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    



            
    EndDrawing();
    }
    CloseWindow();
    return 0;
}