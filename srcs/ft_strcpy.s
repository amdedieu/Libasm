section .text
		global _ft_strcpy
;char *strcpy(char *dest, const char *src)
_ft_strcpy:
		push rbp
		mov  rbp, rsp
		sub rsp, 16

		xor rcx, rcx
		sub rcx, 1

init:
	add rcx, 1
	cmp byte[rsi + rcx], 0
	jne copy
	mov byte[rdi + rcx], 0
	mov rax, rdi
	leave
	ret

copy:
	mov r8b, byte[rsi + rcx]
	mov byte[rdi + rcx], r8b
	jmp init
