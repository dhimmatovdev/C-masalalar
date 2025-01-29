#include <stdio.h>

int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1;  // Ko'rsatkichlar
    int max_water = 0;  // Maksimal suv miqdori

    while (left < right) {
        // Suv miqdori hisoblanadi
        int width = right - left;
        int current_water = (height[left] < height[right] ? height[left] * width : height[right]) * width;
        
        // Maksimal suv miqdorini yangilaymiz
        if (current_water > max_water) {
            max_water = current_water;
        }
        
        // Kichik balandlikni harakatlantirish
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_water;
}

int main() {
    int height[] = {1,8,6,2,5,4,8,3,7};
    int heightSize = sizeof(height) / sizeof(height[0]);
    
    int result = maxArea(height, heightSize);
    printf("Eng ko'p suv miqdori: %d\n", result);
    return 0;
}

