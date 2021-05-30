segment .text
    global main

main:
    mov edx,11
    mov ecx,text
    mov ebx,1
    mov eax,4
    int 0x80

    mov eax,1
    int 0x80

segment .data
text db 'I am Pierr',0xa