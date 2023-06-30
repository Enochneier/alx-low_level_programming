section .data
	hello db "Hello, Holberton", 0
	format db "%s", 10, 0

section .text
	global main
	extern printf

main:
	; Save base pointer and set up stack frame
	push	rbp
	mov	rbp, rsp

	; Load the address of the hello string into rdi (first argument to printf)
	mov rdi, hello

	; Load the format string into rsi (second argument to printf)
	mov rsi, format

	; Call printf
	xor eax, eax
	call printf

	; Clean up stack frame
	mov rsp, rbp
	pop	rbp

	; Exit the program
	mov eax, 0
	ret
