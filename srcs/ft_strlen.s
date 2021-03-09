section .text
		global _ft_strlen

_ft_strlen:
		push rbp
		mov rbp, rsp
		sub rsp, 16

		xor rax, rax
		sub rax, 1

compare:
		add rax, 1
		cmp byte [rdi + rax], 0
		jne compare 
		leave
		ret
