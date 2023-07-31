	extern printf			;C function to call

	section .data			;Data section, initializing variables
msg:	db "Hello, Holberton",0		;C string, needs 0 at end
fmt:	db "%s", 10, 0			;Printf format

	section .text			;Code section

	global main			;Standard gcc entry point

main:					;Program label entry for entry pint
	push rbp			;set up stack frame

	mov rdi,fmt
	mov rsi,msg
	mov rax,0			;Can be  xor  rax,rax

	call printf			;Call C function

	pop rbp				;Restore stack

	mov rax,0			;Normal, no error, return alue
	ret				;Return
