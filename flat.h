extern "C" {
    NTSTATUS NTAPI NtInitializeObjectFoo(IN POBJECT_ATTRIBUTES ObjectAttributes, OUT PHANDLE ObjectHandle);
    NTSTATUS NTAPI NtUninitializeObjectFoo(IN PHANDLE ObjectHandle);
}