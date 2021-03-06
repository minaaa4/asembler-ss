#pragma once
enum Directives {
    NOTFOUND,
    GLOBAL,
    EQU,
    SECTION,
    EXTERN,
    BYTE,
    WORD,
    SKIP,
    END
};
enum Instructions {
    HALT,
    IRET,
    RET,
    INT,
    CALL,
    JMP,
    JEQ,
    JNE,
    JGT,
    PUSH,
    POP,
    XCHG,
    MOV,
    ADD,
    SUB,
    MUL,
    DIV,
    CMP,
    NOT,
    AND,
    OR,
    XOR,
    TEST,
    SHL,
    SHR,
    ILLEGALINSTRUCTION
};