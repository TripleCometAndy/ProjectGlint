#include <PlayerJumpScript.h>

#include <iostream>

namespace pjump {
/*
Given that the player presses the jump button
And they are not already recording a jump
*/
void handleStartJumpRecord() {
    // Enter the JUMP_RECORD state
    enterJumpRecordState();

    // And store the information that they are in frame 1 of JUMP_RECORD
    // somewhere
    storeJumpRecordFrame(1);
}

void enterJumpRecordState() {
    // TODO
}

void storeJumpRecordFrame(int jumpRecordFrame) {
    // TODO
}

/*
Given that the player is pressing or holding the jump button
And they are in the JUMP_RECORD state
*/
void handleContinuingJumpRecord() {
    // Query whether they should exit JUMP_RECORD
    bool shouldExitJumpRecord = pjump::shouldExitJumpRecord();

    if (shouldExitJumpRecord) {
        jump();
    } else {
        updateJumpRecordFrame();
    }
}

bool shouldExitJumpRecord() {
    // TODO
    return false;
}

void jump() {
    // TODO
}

void updateJumpRecordFrame() {
    // TODO
}    
}



    


