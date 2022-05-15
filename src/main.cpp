#include <PlayerJumpStateHandler.h>
#include <functional>
#include <iostream>

void beginJump(int numRecordedJumpFrames) {
    std::cout << "STARTING JUMP WITH " << numRecordedJumpFrames
              << " RECORDED JUMP FRAMES!" << std::endl;
}

int main() {
    pjump::PlayerJumpStateHandler jumpStateHandler(&beginJump);
    jumpStateHandler.jumpButtonPressed();
    jumpStateHandler.jumpButtonPressed();
    jumpStateHandler.jumpButtonReleased();
}