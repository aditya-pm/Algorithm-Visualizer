#include <vector>

#include "ArrayVisualizer.h"
#include "Step.h"
#include "raylib.h"

std::vector<Step> generate_merge_sort_steps(std::vector<int> arr);

int main() {
    InitWindow(1200, 800, "Algorithm Visualizer");
    SetTargetFPS(60);

    std::vector<int> arr = {8, 3, 5, 2, 9, 1, 4};

    std::vector<Step> steps = generate_merge_sort_steps(arr);

    int stepIndex = 0;

    while (!WindowShouldClose()) {
        if (IsKeyPressed(KEY_SPACE)) {
            if (stepIndex < steps.size() - 1)
                stepIndex++;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        draw_array(steps[stepIndex]);

        DrawText("SPACE → next step", 20, 20, 20, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
}