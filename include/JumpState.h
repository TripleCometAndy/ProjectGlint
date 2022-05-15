#pragma once

#include <functional>

namespace pjump {
class JumpState {
  private:
    enum class State {JUMPING, JUMP_RECORD, ON_GROUND};
    State currentState;
    int numberOfFramesInCurrentState;

    void setState(State state);
    void resetFrameCount();
  public:
    JumpState();

    void startJumpRecord();
    void startJumping();
    void iterateNumberOfFrames();
    bool isRecordingJump() const;
    int getNumberOfJumpRecordFrames() const;
    bool canRecordJump() const;
};
}
