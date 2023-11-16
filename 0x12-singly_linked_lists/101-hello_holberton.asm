section .data
	hello_message db "Hello, Holberton", 0   ; Null-terminated string

section .text
	global main
	extern printf

main:
	sub rsp, 8   ; Align stack to 16 bytes boundary

	; Call printf with the format string
	mov rdi, hello_message
	call printf

	add rsp, 8   ; Restore stack pointer
	ret
