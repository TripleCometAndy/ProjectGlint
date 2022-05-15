#pragma once

namespace pjump {
class JumpState {
  private:
    enum class State {JUMPING, JUMP_RECORD};
  public:
    JumpState();

    void startJumpRecord();
    int getNumberOfJumpRecordFrames();
    void iterateNumberOfFrames();
    void startJumping();
};
}
