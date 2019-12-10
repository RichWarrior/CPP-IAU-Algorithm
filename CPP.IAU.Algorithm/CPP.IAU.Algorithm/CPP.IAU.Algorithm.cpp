#include <iostream>
#include <stdio.h>
#include <random>__msvc_all_public_headers.hpp

int main()
{
    int loc_x = 0, loc_y = 0,stepCount = 0;
    do
    {
        int temp_loc_x = loc_x;
        int temp_loc_y = loc_y;
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(0,2); 
        int value = dist6(rng);
        if (value == 0) {
            loc_x += 2;
        }
        else if (value == 1) {
            loc_y += 2;
        }
        else if (value == 2) {
            loc_x++;
            loc_y++;
        }
        if (loc_x > 50 || loc_y > 100) {
            printf("Engele Rastlandi!\n");
            if (loc_x > 50) {
                loc_x = temp_loc_x;
            }
            else {
                loc_y = temp_loc_y;
            }
        }
        else {  
            std::cout << "X:" << loc_x << " Y:"<<loc_y << "\n";          
        }
        stepCount++;
    } while (loc_x !=50 || loc_y !=100);
    std::cout << "X:50 Y:100 Koordinatina Ulasildi.\n";
    std::cout << "Cikisa " << stepCount << " Adimda Ulasildi!";
}

