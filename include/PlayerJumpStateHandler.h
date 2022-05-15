#pragma once

#include <JumpState.h>

namespace pjump{
class PlayerJumpStateHandler {
  private:
    JumpState jumpState;
    const int JUMP_RECORD_THRESHOLD = 4;
    void handleStartJumpRecord();
    void enterJumpRecordState();
    void handleContinuingJumpRecord();
    bool shouldExitJumpRecord();
    void startJump();
    void iterateJumpRecordFrame();
    void enterJumpingState();
    void iterateJumpingFrame();


  public:
    PlayerJumpStateHandler();
};
} // namespace pjump