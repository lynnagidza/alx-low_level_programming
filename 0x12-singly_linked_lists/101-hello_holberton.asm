section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global _start

_start:
    ; Prepare arguments for printf
    mov edi, format
    mov esi, hello
    xor eax, eax  ; Clear eax register

    ; Call printf
    push eax     ; Push 0 as the first argument
    push esi     ; Push hello as the second argument
    push edi     ; Push format as the third argument
    call printf

    ; Clean up the stack
    add esp, 12

    ; Exit the program
    xor eax, eax  ; Clear eax register
    xor ebx, ebx  ; Exit status code 0
    inc eax       ; Invoke the system call to exit
    int 0x80      ; Perform the system call
