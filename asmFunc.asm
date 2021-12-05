global _errMessage1
global _errMessage2

section .data
    err1 db "incorrect command line!",10 
    err2 db "incorrect qualifier value!",10
    exp  db "Waited:",10,"     command -f infile outfile01 outfile02",10,"  Or:",10,"     command -n number outfile01 outfile02",10

_errMessage1:
    mov rax, 1
    mov rdi, 1
    mov rsi, err1
    mov rdx, 24
    syscall
    jmp _explanation
_errMessage2:
    mov rax, 1
    mov rdi, 1
    mov rsi, err2
    mov rdx, 27
    syscall
_explanation:    
    mov rax, 1
    mov rdi, 1
    mov rsi, exp
    mov rdx, 100
    syscall
    ret