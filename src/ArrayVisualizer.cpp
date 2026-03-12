#include "ArrayVisualizer.h"

#include "raylib.h"

void draw_array(const Step& step) {
    int barWidth = 50;

    for (int i = 0; i < step.array.size(); i++) {
        Color color = BLUE;

        if (i == step.highlight1 || i == step.highlight2)
            color = RED;

        DrawRectangle(
            100 + i * barWidth,
            600 - step.array[i] * 20,
            barWidth - 5,
            step.array[i] * 20,
            color);
    }

    DrawText(step.description.c_str(), 100, 650, 20, BLACK);
}