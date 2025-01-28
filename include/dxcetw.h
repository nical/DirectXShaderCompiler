// Stubbed out tracing functions to remove ETW dependency from the build.

#ifndef DXC_ETW_H
#define DXC_ETW_H

inline void EventRegisterMicrosoft_Windows_DXCompiler_API() {}
inline void EventUnregisterMicrosoft_Windows_DXCompiler_API() {}

inline void DxcEtw_DXCompilerInitialization_Start() {}
inline void DxcEtw_DXCompilerInitialization_Stop(HRESULT hr) {}

inline void DxcEtw_DXCompilerShutdown_Start() {}
inline void DxcEtw_DXCompilerShutdown_Stop(HRESULT hr) {}

inline void DxcEtw_DXCompilerCreateInstance_Start() {}
inline void DxcEtw_DXCompilerCreateInstance_Stop(HRESULT hr) {}

inline void DxcEtw_DXCompilerDisassemble_Start() {}
inline void DxcEtw_DXCompilerDisassemble_Stop(HRESULT hr) {}

inline void DxcEtw_DXCompilerPreprocess_Start() {}
inline void DxcEtw_DXCompilerPreprocess_Stop(HRESULT hr) {}

inline void DxcEtw_DXCompilerCompile_Start() {}
inline void DxcEtw_DXCompilerCompile_Stop(HRESULT hr) {}

inline void DxcEtw_DxcValidation_Start() {}
inline void DxcEtw_DxcValidation_Stop(HRESULT hr) {}

#endif
