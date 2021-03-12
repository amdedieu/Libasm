	global	_ft_write
	extern	___error
	extern _ft_strlen
section .text

;sys_write	unsigned int fd	const char * buf	size_t count

_ft_write:
		enter 0, 0
		;sub rsp, 16

		mov rax, 1

 init:
 	syscall
	mov rax, rdx
 	leave
 	ret
; ;  error:
; ; 	neg  rax
; ; 	mov rdx, rax
; ; 	call error
; ; 	mov rax, -1
; ; 	leave 
; ; 	ret

; set:
; 	mov rax, 9
; 	leave 
; 	ret
