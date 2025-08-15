/*
 * File: main.cpp
 * Author: Ragib Asif
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 */

#include "third_party/dbg.h"

#include <iostream>

enum TokenKind {
    ASTRA_UNKNOWN,
    ASTRA_EOF, // '\0'
    ASTRA_NULL,
    ASTRA_END, // attach at the end of list of tokens

    // "[_a-zA-Z][_a-zA-Z0-9]*"
    ASTRA_IDENTIFIER,

    // decimal int: "0|[1-9][0-9]*"
    ASTRA_INTEGER,

    // decimal floats: "[0-9]*(.[0-9]*([eE][-+]?[0-9]+)?)"
    ASTRA_FLOAT,

    // ""
    ASTRA_STRING,
    // ''
    ASTRA_CHAR,

    ASTRA_COMMENT, // "// comment to end of line\n"

    ASTRA_ASSIGNMENT, // "="
    ASTRA_PLUS,       // "+"

    ASTRA_EQUAL_EQUAL,
    ASTRA_PLUS_PLUS,
    ASTRA_MINUS_MINUS,
    ASTRA_NOT_EQUAL,
    ASTRA_PLUS_EQUAL,
    ASTRA_MINUS_EQUAL,
    ASTRA_LESS_EQUAL,
    ASTRA_GREATER_EQUAL,
    ASTRA_AND_AND,
    ASTRA_OR_OR,
    ASTRA_SHIFT_LEFT,
    ASTRA_SHIFT_RIGHT,
    ASTRA_AND_EQUAL,
    ASTRA_OR_EQUAL,
    ASTRA_XOR,
    ASTRA_XOR_EQUAL,
    ASTRA_MULTIPLY,
    ASTRA_DIVIDE,
    ASTRA_MULTIPLY_EQUAL,
    ASTRA_DIVIDE_EQUAL,
    ASTRA_AND,
    ASTRA_OR,
    ASTRA_MOD,
    ASTRA_MOD_EQUAL,
    ASTRA_LESS,
    ASTRA_GREATER,
    ASTRA_SHIFT_RIGHT_EQUAL,
    ASTRA_SHIFT_LEFT_EQUAL,

    ASTRA_COMMA,
    ASTRA_SEMICOLON,

    ASTRA_FUNCTION,
    ASTRA_VARIABLE,

    ASTRA_COUNT
};

class Token {
  private:
    enum TokenKind kind;
    std::string    literal;
};

int main( void ) {
    dbg( ASTRA_COUNT );
    return EXIT_SUCCESS;
}
