#include <iostream>
#include <string>
// grid size 5x5 sq.
const int GRID_SIZE = 5;
class Robot {
public:
    Robot() : x(0), y(0) {}
    // moveUp
	void moveUp() {
        if (y > 0) {
            y--;
        } else {
            std::cout << "No movement. Robot is at the top edge.\n";
        }
    }
    // moveDown
    void moveDown() {
        if (y < GRID_SIZE - 1) {
            y++;
        } else {
            std::cout << "No movement. Robot is at the bottom edge.\n";
        }
    }
    // moveLeft
    void moveLeft() {
        if (x > 0) {
            x--;
        } else {
            std::cout << "No movement. Robot is at the left edge.\n";
        }
    }
    // moveRight
    void moveRight() {
        if (x < GRID_SIZE - 1) {
            x++;
        } else {
            std::cout << "No movement. Robot is at the right edge.\n";
        }
    }
    // display current position
    void displayPosition() const {
        std::cout << "Robot's current position: (" << x << ", " << y << ")\n";
    }
private:
    int x, y;
};
// instructions on how to command the robot to move
void displayInstructions() {
    std::cout << "Enter commands to move the robot:\n";
    std::cout << "U - Move Up\n";
    std::cout << "D - Move Down\n";
    std::cout << "L - Move Left\n";
    std::cout << "R - Move Right\n";
    std::cout << "Q - Quit\n";
}
int main() {
    Robot robot;
    char command;
    bool running = true;

    displayInstructions();
// commands
    while (running) {
        std::cout << "Enter command: ";
        std::cin >> command;
        switch (command) {
        case 'U':
        case 'u':
            robot.moveUp();
            break;
        case 'D':
        case 'd':
            robot.moveDown();
            break;
        case 'L':
        case 'l':
            robot.moveLeft();
            break;
        case 'R':
        case 'r':
            robot.moveRight();
            break;
        case 'Q':
        case 'q':
            running = false;
            break;
        default:
            std::cout << "Invalid command. Please enter U, D, L, R, or Q.\n";
            break;
        }
        robot.displayPosition();
    }
    std::cout << "Program has been terminated. Thank you!\n";
    return 0;
}
