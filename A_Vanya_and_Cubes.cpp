#include <iostream>

int main() {
    int n;
    std::cin >> n; // Read the number of cubes

    int height = 0;
    long long cubes_used = 0; // Use long long in case n is large, though for n <= 10^4 int is fine
    int current_level_cubes_needed = 0;
    int level_number = 1;

    while (true) {
        // Calculate the number of cubes required for the current level
        current_level_cubes_needed += level_number;

        // Calculate the total number of cubes if this level is built
        long long total_cubes_if_this_level_built = cubes_used + current_level_cubes_needed;

        // Check if we have enough cubes to build this level
        if (total_cubes_if_this_level_built <= n) {
            cubes_used = total_cubes_if_this_level_built; // Update total cubes used
            height++;                                     // Increment height
            level_number++;                                   // Move to the next level
        } else {
            // If not enough cubes, we cannot build this level or any higher levels
            break; 
        }
    }

    std::cout << height << std::endl; // Print the maximum possible height

    return 0;
}