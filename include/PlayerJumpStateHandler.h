#pragma once

#include <JumpState.h>
#include <functional>

namespace pjump{
class PlayerJumpStateHandler {
  private:
    JumpState jumpState;
    const int JUMP_RECORD_THRESHOLD = 4;
    std::function<void(int)> notifyJumpBegin;

    void handleStartJumpRecord();
    void enterJumpRecordState();
    void handleContinuingJumpRecord();
    bool shouldExitJumpRecord();
    void startJump();
    void iterateJumpRecordFrame();
    void enterJumpingState();
    void iterateJumpingFrame();
    void recordThatJumpBegan();
    void jumpButtonReleasedDuringRecord();
    bool canRecordJump();
    bool isRecordingJump();

  public:
    PlayerJumpStateHandler(std::function<void(int)> notifyJumpBegin);

    void jumpButtonPressed();
    void jumpButtonReleased();
};
} // namespace pjump