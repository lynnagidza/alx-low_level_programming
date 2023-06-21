section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global _start

_start:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, hello

    ; Call printf
    xor eax, eax  ; Clear eax register
    call printf

    ; Exit the program
    xor eax, eax  ; Clear eax register
    mov ebx, 0    ; Exit status code 0
    int 0x80      ; Invoke the system call to exit
