#include <gb/gb.h>
#include <gb/drawing.h>
#include <stdio.h>

void main()
{
    uint8_t xpos = 0;
    uint8_t ypos = 0;
    //line(0,144,160,144);
    while (1)
    {
        box(xpos, ypos, xpos + 1, ypos + 1, M_FILL);
        uint8_t input = joypad();

        if (input & J_UP)
        {
            color(WHITE, WHITE, SOLID);
            box(xpos, ypos, xpos + 1, ypos + 1, M_FILL);
            color(BLACK, WHITE, SOLID);
            if (ypos > 0)
            {
                ypos -= 1;
            }
        }
        if (input & J_DOWN)
        {
            color(WHITE, WHITE, SOLID);
            box(xpos, ypos, xpos + 1, ypos + 1, M_FILL);
            color(BLACK, WHITE, SOLID);
            if (ypos < GRAPHICS_HEIGHT)
            {
                ypos += 1;
            }
        }
        if (input & J_LEFT)
        {
            color(WHITE, WHITE, SOLID);
            box(xpos, ypos, xpos + 1, ypos + 1, M_FILL);
            color(BLACK, WHITE, SOLID);
            if (xpos > 0)
            {
                xpos -= 1;
            }
        }
        if (input & J_RIGHT)
        {
            color(WHITE, WHITE, SOLID);
            box(xpos, ypos, xpos + 1, ypos + 1, M_FILL);
            color(BLACK, WHITE, SOLID);
            if (xpos < GRAPHICS_WIDTH)
            {
                xpos += 1;
            }
        }
        vsync();
    }
}