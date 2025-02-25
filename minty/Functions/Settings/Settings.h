﻿#pragma once

#include "../FunctionIncludes.h"
#include "../../themes/Themes.h"

namespace cheat {
	class Settings : public Function {
	public:
		ConfigField<bool> f_DisableProtection;
		ConfigField<bool> f_DisableLog;
		ConfigField<bool> f_SpoofACResult;
		ConfigField<bool> f_UseSignature; 
		ConfigField<bool> f_ShowFps;
		ConfigField<bool> f_ShowRpc;
		ConfigField<int> f_InitDelay;
		ConfigField<int> f_Language;
		ConfigField<bool> f_mobileMode;
		ConfigField<std::string> f_StartupArguments;
		ConfigField<float> f_AnimationDuration;
		Hotkey f_HotkeyConsole;
		Hotkey f_Hotkey;

		bool f_ShowMenu;
		bool f_ShowConsole;
		void GUI() override;
		void Outer() override;

		std::string getModule() override;

		static Settings& getInstance();

		Settings();
	};
}
