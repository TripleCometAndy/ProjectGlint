#include <JumpState.h>

namespace pjump {

JumpState::JumpState() {
    setState(State::ON_GROUND);
    resetFrameCount();
}

void JumpState::startJumpRecord() {
    setState(State::JUMP_RECORD);
    resetFrameCount();
}

int JumpState::getNumberOfJumpRecordFrames() const {
    int numberOfJumpRecordFrames = 0;

    if (currentState == State::JUMP_RECORD) {
        numberOfJumpRecordFrames = numberOfFramesInCurrentState;
    }

    return numberOfJumpRecordFrames;
}

void JumpState::iterateNumberOfFrames() {
    numberOfFramesInCurrentState++;
}

void JumpState::startJumping() {
    setState(State::JUMPING);
    resetFrameCount();
}

bool JumpState::canRecordJump() const {
    return currentState == State::ON_GROUND;
}

bool JumpState::isRecordingJump() const {
    return currentState == State::JUMP_RECORD;
}

void JumpState::setState(State state) {
    currentState = state;
}

void JumpState::resetFrameCount() {
    numberOfFramesInCurrentState = 0;
}
} // namespace pjump