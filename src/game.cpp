#include "game.h"

namespace Application
{
    class Game
    {
    public:
        void Run()
        {
            InitWindow(1024, 720, "Solitaire");
            Texture2D txt = LoadTexture("./img/C1.png");

            while (!WindowShouldClose())
            {
                BeginDrawing();
                    ClearBackground(RAYWHITE);
                    DrawTextureEx(txt, {100, 100}, 0, 0.25, WHITE);
                EndDrawing();
            }

            UnloadTexture(txt);
            CloseWindow();
        }
    };
}