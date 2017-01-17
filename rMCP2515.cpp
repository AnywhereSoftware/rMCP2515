
#include "B4RDefines.h"
namespace B4R {
	bool B4RMCP2515::InitCAN(Int BaudConst) {
		return MCP2515::initCAN(BaudConst);
	}
	bool B4RMCP2515::SetCANNormalMode(bool SingleShot) {
		return MCP2515::setCANNormalMode(SingleShot);
	}
	bool B4RMCP2515::SetCANReceiveOnlyMode() {
		return MCP2515::setCANReceiveonlyMode();
	}
	Long B4RMCP2515::QueryOBD(Byte Code) {
		return MCP2515::queryOBD(Code);
	}
}