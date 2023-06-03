		extern	printf

	        section .data
msg:		db "Hello, Holberton", 0
format:	    	db "%s", 10, 0

	        section .text

	        global main
main:
		mov	rdi,format
		mov	rsi,msg
		mov	rax,0
	        call    printf

		mov	rax,0
		ret
