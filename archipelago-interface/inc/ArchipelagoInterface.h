#pragma once

#include "Core.h"
#include "GameHook.h"
#include "apclient.hpp"
#include "apuuid.hpp"

using nlohmann::json;

class CArchipelago {
public:
	BOOL Initialise(std::string URI);
	VOID say(std::string message);
	BOOLEAN isConnected();
	VOID update();
	VOID gameFinished();
	VOID sendDeathLink();
};
