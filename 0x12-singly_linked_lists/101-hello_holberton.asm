section .data
    message db "Hello, Holberton", 10, 0 ; 10 is the newline character, 0 is the null terminator

section .text
    extern printf ; declare the printf function from the C library

global _start

_start:
    ; Set up stack frame
    push rbp
    mov rbp, rsp

    ; Pass the address of the message string to printf
    lea rdi, [rel message]
    call printf

    ; Clean up and exit
    mov rsp, rbp
    pop rbp
    mov rax, 60 ; exit syscall number for x86_64
    xor edi, edi ; exit status 0
    syscall

