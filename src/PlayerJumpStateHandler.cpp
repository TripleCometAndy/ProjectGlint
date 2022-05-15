#include <PlayerJumpStateHandler.h>
#include <iostream>

namespace pjump {
PlayerJumpStateHandler::PlayerJumpStateHandler() { std::cout << "GOT HERE!"; }

/*
Given that the player presses the jump button
And they are in a state where they can record a jump
*/
void PlayerJumpStateHandler::handleStartJumpRecord() {
    // Enter the JUMP_RECORD state
    enterJumpRecordState();

    // And store the information that they are in frame 1 of JUMP_RECORD
    // somewhere
    iterateJumpRecordFrame();
}

void PlayerJumpStateHandler::enterJumpRecordState() {
    // Modify the JumpState to JUMP_RECORD
    jumpState.startJumpRecord();
}

/*
Given that the player is pressing or holding the jump button
And they are in the JUMP_RECORD state
*/
void PlayerJumpStateHandler::handleContinuingJumpRecord() {
    // Query whether they should exit JUMP_RECORD
    bool shouldExitJumpRecord = this->shouldExitJumpRecord();

    if (shouldExitJumpRecord) {
        startJump();
    } else {
        iterateJumpRecordFrame();
    }
}

bool PlayerJumpStateHandler::shouldExitJumpRecord() {
    // TODO
    // Return whether the current number of frames the player has been in
    // JUMP_RECORD is over the threshold

    int numberOfJumpRecordFrames = jumpState.getNumberOfJumpRecordFrames();

    return numberOfJumpRecordFrames > JUMP_RECORD_THRESHOLD;
}

void PlayerJumpStateHandler::startJump() {
    // TODO
    // Place a record somewhere that a jump should occur. Also hand the number
    // of frames the player was in JUMP_RECORD

    // Set the JumpState to JUMPING
    enterJumpingState();

    // Set the number of frames the player has been in JUMPING to 1
    iterateJumpingFrame();
}

void PlayerJumpStateHandler::iterateJumpRecordFrame() {
    // Iterate the number of frames the player has been in JUMP_RECORD
    jumpState.iterateNumberOfFrames();
}

void PlayerJumpStateHandler::enterJumpingState() {
    jumpState.startJumping();
}

void PlayerJumpStateHandler::iterateJumpingFrame() {
    jumpState.iterateNumberOfFrames();
}
}