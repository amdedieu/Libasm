section .text
		global _ft_strcmp

;int strcmp(const char *s1, const char *s2)

_ft_strcmp:
		push rbp
		mov rbp, rsp
		sub rsp, 16

		mov rcx, -1

compare:
		add rcx, 1
		mov r8b, byte[rdi + rcx]
		cmp r8b, 0
		je nega
		cmp byte[rsi + rcx], 0
		je pos
		cmp r8b, byte[rsi + rcx]
		je compare
		jg  pos
		jnge  nega
egal:
	mov eax, 0 
	leave 
	ret
pos:
	mov eax, 1
	leave
	ret
nega:
	cmp byte[rsi + rcx], 0
	je egal
	mov eax, -1
	leave
	ret
