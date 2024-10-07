extern "C" {
    HANDLE  __stdcall InitializeSubsystem(INT flags);
    VOID    __stdcall UninitializeSubsystem(HANDLE handle);
}