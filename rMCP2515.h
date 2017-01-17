#pragma once
#include "B4RDefines.h"
#include "MCP2515.h"
//~version: 1.00
//~dependson: <SPI.h>
namespace B4R {
	//~shortname: MCP2515
	class B4RMCP2515 {
		public:
			bool InitCAN(Int BaudConst);
			bool SetCANNormalMode(bool SingleShot);
			bool SetCANReceiveOnlyMode();
			Long QueryOBD(Byte Code);
	};

}