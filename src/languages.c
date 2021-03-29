#include "languages.h"
#include <stdlib.h>

// C
char *C_HL_extensions[] = {".c", ".h", ".cpp", NULL};
char *C_HL_keywords[] = {"switch", "if", "while", "for", "break", "continue",
                         "return", "else", "struct", "union", "typedef",
                         "static", "enum", "class", "case",

                         // Types end with `|`
                         "int|", "long|", "double|", "float|", "char|",
                         "unsigned|", "signed|", "void|", NULL};

// Rust
char *RUST_HL_extensions[] = {".rs", NULL};
char *RUST_HL_keywords[] = {
    "as", "break", "const", "continue", "crate", "else", "enum", "extern",
    "false", "fn", "for", "if", "impl", "in", "let", "loop", "match", "mod",
    "move", "mut", "pub", "ref", "return", "self", "Self", "static", "struct",
    "super", "trait", "true", "type", "unsafe", "use", "where", "while",

    // Types end with `|`
    "bool|", "char|", "f32|", "f64|", "i8|", "i16|", "i32|", "i64|", "i128|",
    "isize|", "str|", "u8|", "u16|", "u32|", "u64|", "u128|", "()|", "usize|",
    "vec|", NULL};

// Python
char *PYTHON_HL_extensions[] = {".py", ".py3", NULL};
char *PYTHON_HL_keywords[] = {
    "False", "None", "True", "and", "as", "assert", "async", "await", "break",
    "class", "continue", "def", "del", "elif", "else", "except", "finally",
    "for", "from", "global", "if", "import", "in", "is", "lambda", "nonlocal",
    "not", "or", "pass", "raise", "return", "try", "while", "with", "yield",

    // Types end with `|`
    "int|", "long|", "float|", "complex|", "bool|", "str|", "unicode|",
    "basestring|", "list|", "tuple|", "xrange|", "dict|", "set|", "frozenset|",
    NULL};

// JavaScript
char *JS_HL_extensions[] = {".js", ".mjs", ".cjs", NULL};
char *JS_HL_keywords[] = {
    "abstract", "arguments", "await", "boolean", "break", "byte", "case",
    "catch", "char", "class", "const", "continue", "debugger", "default",
    "delete", "do", "double", "else", "enum", "eval", "export", "extends",
    "false", "final", "finally", "float", "for", "function", "goto", "if",
    "implements", "import", "in", "instanceof", "int", "interface", "let",
    "long", "native", "new", "null", "package", "private", "protected",
    "public", "return", "short", "static", "super", "switch", "synchronized",
    "this", "throw", "throws", "transient", "true", "try", "typeof", "var",
    "void", "volatile", "while", "with", "yield",

    // Types end with `|`
    "Array|", "Date|", "Infinity|", "Math|", "NaN|", "Number|", "Object|",
    "String|", "undefined|", "Boolean|", "BigInt|", "Map|", "Set|", "WeakMap|",
    "WeakSet|", "Function|", "Int8Array", "Uint8Array", "Uint8ClampedArray",
    "Int16Array", "Uint16Array", "Int32Array", "Uint32Array", "Float32Array",
    "Float64Array", "BigInt64Array", "BigUint64Array", NULL};

struct editorSyntax HLDB[] = {
    {"c", C_HL_extensions, C_HL_keywords, "//", "/*", "*/",
     HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS | HL_AUTO_INDENT},

    {"rust", RUST_HL_extensions, RUST_HL_keywords, "//", "/*", "*/",
     HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS | HL_AUTO_INDENT},

    {"python", PYTHON_HL_extensions, PYTHON_HL_keywords, "#", "\"\"\"",
     "\"\"\"", HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS | HL_AUTO_INDENT},

    {"javascript", JS_HL_extensions, JS_HL_keywords, "//", "/*", "*/",
     HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS | HL_AUTO_INDENT}};

#define HLDB_ENTRIES (sizeof(HLDB) / sizeof(HLDB[0]))
