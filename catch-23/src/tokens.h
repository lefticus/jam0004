#ifndef TOKENS_H
#define TOKENS_H

typedef enum {
    
    // types
    THING32,
    THING64,
    BOOLEAN,
    
    // operators
    INT_ADD,
    INT_MINUS,
    INT_MULT,   // integer multiplication
    INT_DIV,    // integer division
    INT_MOD,    // modulo
    INT_BOR,    // bitwise or
    INT_BAND,   // bitwise and
    INT_RSHIFT, // right shift
    INT_LSHIFT, // left shift
    INT_COMP,   // complement 1
    INT_NEG,    // integer unary minus
    INT_LOWER,
    INT_GREATER,
    INT_EQUAL,
    INT_DIFFERENT,
    CAST_FLOAT,
    CAST_INT,
    FLOAT_ADD,
    FLOAT_MINUS,
    FLOAT_MULT,  // float multiplication
    FLOAT_DIV,   // float division
    FLOAT_NEG,   // float unary minus
    FLOAT_LOWER,
    FLOAT_GREATER,
    FLOAT_EQUAL,
    FLOAT_DIFFERENT,
    OR,
    AND,
    NOT,
    ASSIGN,
    
    // statements
    RETURN,
    BREAK,
    GOTO,
    NEVER,
    DONT,
    UNTIL,
    UNLESS,
    AGAINST,
    
    // literals
    NUMBER,
    NUMBER_GROUP,
    BOOLEAN_VAL,
    BOOLEAN_GROUP,
    IDENTIFIER,
    
    // other glyphs
    COLON,
    AT,
    DOLLAR,
    RIGHT_PAREN,
    LEFT_PAREN,
    RIGHT_BRACKET,
    LEFT_BRACKET,
    RIGHT_BRACE,
    LEFT_BRACE,
    COMMA,
    DOT
}
token_type;

typedef struct {
    
    token_type type;
    
    union {
        
        int i32_value;
        long i64_value;
        float f32_value;
        double f64_value;
        
        struct {
          
            int i32_length;
            int i32_values[];
        };
        
        struct {
          
            float f32_length;
            float f32_values[];
        };
        
        struct {
          
            long i64_length;
            long i64_values[];
        };
        
        struct {
          
            double f64_length;
            double f64_values[];
        };
    };
}
token;
#endif
