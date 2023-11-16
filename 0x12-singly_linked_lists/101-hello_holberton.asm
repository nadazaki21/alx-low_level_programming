section .data
hello_message db 'Hello, Holberton', 0xA, 0
format db '%s', 0

section .text
global main
extern printf

main:
    ; Save the value of the rsp register before the function call
    push rsp

    ; First argument (format string)
    lea rdi, [rel format]

    ; Second argument (address of hello_message string)
    lea rsi, [rel hello_message]

    ; Call printf
    call printf

    ; Restore the value of the rsp register
    pop rsp

    ; Return 0 from main
    xor eax, eax
    ret