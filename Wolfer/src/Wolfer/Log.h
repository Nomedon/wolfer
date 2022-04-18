#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Wolfer {

	class WOLFER_API Log
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
#define WF_CORE_TRACE(...) ::Wolfer::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define WF_CORE_INFO(...)  ::Wolfer::Log::GetCoreLogger()->info(__VA_ARGS__)
#define WF_CORE_WARN(...)  ::Wolfer::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define WF_CORE_ERROR(...) ::Wolfer::Log::GetCoreLogger()->error(__VA_ARGS__)
#define WF_CORE_FATAL(...) ::Wolfer::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define WF_TRACE(...)		::Wolfer::Log::GetClientLogger()->trace(__VA_ARGS__)
#define WF_INFO(...)		::Wolfer::Log::GetClientLogger()->info(__VA_ARGS__)
#define WF_WARN(...)		::Wolfer::Log::GetClientLogger()->warn(__VA_ARGS__)
#define WF_ERROR(...)		::Wolfer::Log::GetClientLogger()->error(__VA_ARGS__)
#define WF_FATAL(...)		::Wolfer::Log::GetClientLogger()->fatal(__VA_ARGS__)

//if dist build
#define WF_CORE_INFO