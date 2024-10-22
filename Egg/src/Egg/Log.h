#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Egg {

	class EGG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define EG_CORE_TRACE(...) ::Egg::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EG_CORE_INFO(...)  ::Egg::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EG_CORE_WARN(...)  ::Egg::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EG_CORE_ERROR(...) ::Egg::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EG_CORE_FATAL(...) ::Egg::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros

#define EG_TRACE(...) ::Egg::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EG_INFO(...)  ::Egg::Log::GetClientLogger()->info(__VA_ARGS__)
#define EG_WARN(...)  ::Egg::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EG_ERROR(...) ::Egg::Log::GetClientLogger()->error(__VA_ARGS__)
#define EG_FATAL(...) ::Egg::Log::GetClientLogger()->fatal(__VA_ARGS__)