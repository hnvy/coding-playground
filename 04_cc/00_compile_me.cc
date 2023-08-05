#include <iostream>
#include <windows.h>
#include <conio.h>

int main()
{
    HWND hwnd = GetDesktopWindow();
    HDC hdc = GetDC(hwnd);
    int x = 100, y = 100; // Set the position of the text
    bool blink = true;

    while (true)
    {
        if (blink)
        {
            TextOut(hdc, x, y, "Blinking text!", 14); // Display the text
        }
        else
        {
            Rectangle(hdc, x - 5, y - 5, x + 125, y + 25); // Erase the text using a rectangle
        }
        blink = !blink;
        Sleep(500); // Wait for 500 milliseconds
        if (_kbhit()) // Check if a key has been pressed
        {
            break; // Exit the loop if a key has been pressed
        }
    }

    ReleaseDC(hwnd, hdc);
    return 0;
}

