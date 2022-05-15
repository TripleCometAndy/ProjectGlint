#include <PlayerJumpStateHandler.h>
#include <functional>
#include <iostream>

void beginJump(int numRecordedJumpFrames) {
    std::cout << "STARTING JUMP WITH " << numRecordedJumpFrames
              << " RECORDED JUMP FRAMES!" << std::endl;
}

int main() {
    std::function<void(int)> func = [](int numRecordedJumpFrames) {
        beginJump(numRecordedJumpFrames);
    };

    pjump::PlayerJumpStateHandler jumpStateHandler(std::move(func));
    jumpStateHandler.jumpButtonPressed();
    jumpStateHandler.jumpButtonPressed();
    jumpStateHandler.jumpButtonReleased();
}