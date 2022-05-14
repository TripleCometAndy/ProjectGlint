#pragma once

namespace pjump {
	void handleStartJumpRecord();
	void enterJumpRecordState();
	void storeJumpRecordFrame(int jumpRecordFrame);
	void handleContinuingJumpRecord();
	bool shouldExitJumpRecord();
	void jump();
	void updateJumpRecordFrame();
}
