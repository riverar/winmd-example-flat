extern "C" {
    NTSTATUS NTAPI _NtInitializeObjectFoo(IN POBJECT_ATTRIBUTES ObjectAttributes, OUT PHANDLE ObjectHandle);
    NTSTATUS NTAPI _NtUninitializeObjectFoo(IN PHANDLE ObjectHandle);
}