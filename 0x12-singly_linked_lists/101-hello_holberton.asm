section .data
	hello_holberton db "Hello, Holberton", 10, 0

section .text
	global main

extern printf

main:
	push rbp
	mov rdi, hello_holberton
	call printf
	pop rbp

	mov rax, 60
	xor rdi, rdi
	syscall

section .bss
	resb 1
