# Gramática Formal de JavaLang

## Introducción

JavaLang es un lenguaje de programación que implementa un subconjunto de funcionalidades de Java, desarrollado como un compilador/intérprete usando las herramientas Flex y Bison. Este documento describe la gramática formal del lenguaje y la arquitectura general del proyecto.

## 1. Gramática Formal en BNF

### 1.1 Estructura del Programa

```bnf
<program> ::= <sentences>
            | <sentences> "public" "static" "void" "main" "(" ")" "{" <sentences> "}"

<sentences> ::= <sentences> <sentence>
              | ε

<sentence> ::= <instruction> <separator>
             | <separator>
             | error <separator>

<separator> ::= '\n' | ';'
```

### 1.2 Instrucciones

```bnf
<instruction> ::= "{" <sentences> "}"
                | <id> "(" ")"
                | <declaration>
                | "System.out.println" "(" <expression> ")"
                | "System.out.println" "(" ")"
                | <assignment>
                | <if_statement>
                | <switch_statement>
                | <while_statement>
                | <for_statement>
                | <foreach_statement>
                | "break"
                | "continue"
                | "return" <expression>
```

### 1.3 Declaraciones

```bnf
<declaration> ::= <primitive_types> <id> "=" <expression>
                | <primitive_types> <id>
                | "final" <primitive_types> <id> "=" <expression>
                | <primitive_types> "[" "]" <id> "=" "{" <vector_list> "}"
                | <primitive_types> "[" "]" <id> "=" "new" <primitive_types> "[" <num> "]"
                | <primitive_types> "[" "]" "[" "]" <id> "=" "{" <matrix_list> "}"
                | <primitive_types> "[" "]" "[" "]" <id> "=" "new" <primitive_types> "[" <num> "]" "[" <num> "]"
                | <primitive_types> <id> "(" <params_list> ")" "{" <sentences> "}"
                | "void" <id> "(" ")" "{" <sentences> "}"
                | <primitive_types> <id> <dimensions> "=" <dimension_expression>
                | <primitive_types> <id> <dimensions> "=" "new" <primitive_types> <dimensions_value_list>

<primitive_types> ::= "int" | "String" | "double" | "float" | "boolean" | "char"

<params_list> ::= ε
                | <primitive_types> <id>
                | <primitive_types> "[" "]" <id>
                | <params_list> "," <primitive_types> <id>
                | <params_list> "," <primitive_types> "[" "]" <id>
```

### 1.4 Asignaciones

```bnf
<assignment> ::= <id> "=" <expression>
               | <id> <dimensions_expressions> "=" <expression>
               | <assignment_expression> "+=" <expression>
               | <assignment_expression> "-=" <expression>
               | <assignment_expression> "*=" <expression>
               | <assignment_expression> "/=" <expression>
               | <assignment_expression> "%=" <expression>
               | <assignment_expression> "&=" <expression>
               | <assignment_expression> "|=" <expression>
               | <assignment_expression> "^=" <expression>
               | <assignment_expression> "<<=" <expression>
               | <assignment_expression> ">>=" <expression>
               | <assignment_expression> "++"

<assignment_expression> ::= <id>
                          | <id> "[" <expression> "]"
```

### 1.5 Expresiones

```bnf
<expression> ::= <primitive_values>
               | <id>
               | "-" <expression>
               | <expression> "+" <expression>
               | <expression> "-" <expression>
               | <expression> "*" <expression>
               | <expression> "/" <expression>
               | <expression> "%" <expression>
               | "(" <expression> ")"
               | "(" <primitive_types> ")" <expression>
               | <expression> "&" <expression>
               | <expression> "|" <expression>
               | <expression> "^" <expression>
               | <expression> "<<" <expression>
               | <expression> ">>" <expression>
               | <id> ".equals" "(" <expression> ")"
               | <expression> "==" <expression>
               | <expression> "!=" <expression>
               | <expression> ">" <expression>
               | <expression> "<" <expression>
               | <expression> ">=" <expression>
               | <expression> "<=" <expression>
               | <expression> "&&" <expression>
               | <expression> "||" <expression>
               | "!" <expression>
               | "Integer.parseInt" "(" <expression> ")"
               | "Double.parseDouble" "(" <expression> ")"
               | "Float.parseFloat" "(" <expression> ")"
               | "String.valueOf" "(" <expression> ")"
               | "String.join" "(" <expr_list> ")"
               | "Arrays.indexOf" "(" <id> "," <expression> ")"
               | <id> ".length"
               | <id> ".add" "(" <expression> ")"
               | <id> <dimensions_expressions>
               | <id> "(" <expr_list> ")"

<primitive_values> ::= <num> | <string> | <decimal> | <decimal_float> 
                     | <boolean> | <char> | "null"

<expr_list> ::= ε
              | <expression>
              | <expr_list> "," <expression>
```

### 1.6 Estructuras de Control

#### 1.6.1 Condicionales

```bnf
<if_statement> ::= "if" "(" <expression> ")" "{" <sentences> "}" <if_list> <else_statement>

<if_list> ::= ε
            | <if_list> "else" "if" "(" <expression> ")" "{" <sentences> "}"

<else_statement> ::= ε
                   | "else" "{" <sentences> "}"

<switch_statement> ::= "switch" "(" <id> ")" "{" <cases> <default_case> "}"

<cases> ::= ε
          | <cases> "case" <primitive_values> ":" <sentences> "break" ";"

<default_case> ::= ε
                 | "default" ":" <sentences>
```

#### 1.6.2 Bucles

```bnf
<while_statement> ::= "while" "(" <expression> ")" "{" <sentences> "}"

<for_statement> ::= "for" "(" <declaration> ";" <expression> ";" <id> "++" ")" "{" <sentences> "}"

<foreach_statement> ::= "for" "(" <primitive_types> <id> ":" <id> ")" "{" <sentences> "}"
```

### 1.7 Manejo de Arrays

```bnf
<dimensions> ::= ε
               | <dimensions> "[" "]"

<dimensions_expressions> ::= "[" <expression> "]"
                           | <dimensions_expressions> "[" <expression> "]"

<dimensions_value_list> ::= "[" <num> "]"
                          | <dimensions_value_list> "[" <num> "]"

<vector_list> ::= ε
                | <expression>
                | <vector_list> "," <expression>

<matrix_list> ::= ε
                | "{" <vector_list> "}"
                | <matrix_list> "," "{" <vector_list> "}"

<dimension_expression> ::= "{" <dimension_values_list> "}"

<dimension_values_list> ::= ε
                          | <dimension_value>
                          | <dimension_values_list> "," <dimension_value>

<dimension_value> ::= <expression>
                    | <dimension_expression>
```

## 2. Tokens y Análisis Léxico

### 2.1 Palabras Reservadas

```text
int, float, double, String, boolean, char, null, final
if, else, switch, case, break, continue, default
while, for, new, return, void
public, static, main
System.out.println, .equals
Integer, parseInt, Double, parseDouble, Float, parseFloat, valueOf, join
Arrays, indexOf, length, add
true, false
```

### 2.2 Operadores

```text
Aritméticos: +, -, *, /, %, ++
Asignación: =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=
Relacionales: ==, !=, <, >, <=, >=
Lógicos: &&, ||, !
Bitwise: &, |, ^, <<, >>
```

### 2.3 Delimitadores y Símbolos

```text
Paréntesis: (, )
Llaves: {, }
Corchetes: [, ]
Separadores: ;, :, ,, .
```

### 2.4 Literales

```bnf
<num> ::= [0-9]+
<decimal> ::= [0-9]+"."[0-9]+
<decimal_float> ::= [0-9]+"."[0-9]+"f"
<id> ::= [A-Za-z][A-Za-z0-9_]*
<string> ::= "([^\\"]|\\.)*"
<char> ::= '([^\\']|\\.)*'
<boolean> ::= "true" | "false"
```

## 3. Precedencia de Operadores

De mayor a menor precedencia:

1. **Acceso a arrays**: `[`, `]`
2. **Unarios**: `!`, `++` (prefijo), `-` (unario)
3. **Multiplicativos**: `*`, `/`, `%`
4. **Aditivos**: `+`, `-`
5. **Shifts**: `<<`, `>>`
6. **Relacionales**: `<`, `>`, `<=`, `>=`
7. **Igualdad**: `==`, `!=`
8. **AND Bitwise**: `&`
9. **XOR Bitwise**: `^`
10. **OR Bitwise**: `|`
11. **AND Lógico**: `&&`
12. **OR Lógico**: `||`
13. **Asignación**: `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `&=`, `|=`, `^=`, `<<=`, `>>=`

## 4. Arquitectura General del Proyecto

### 4.1 Estructura de Directorios

```text
OLC2_2S_2025_202300638/
├── src/
│   ├── main.c                    # Punto de entrada del programa
│   ├── parser/
│   │   ├── lexer.l              # Analizador léxico (Flex)
│   │   ├── parser.y             # Analizador sintáctico (Bison)
│   │   └── semantic/            # Análisis semántico
│   │       ├── semantic.h
│   │       ├── semantic.c
│   │       ├── evaluate.c       # Evaluación de expresiones
│   │       ├── execute.c        # Ejecución de instrucciones
│   │       ├── ast_builder.c    # Construcción del AST
│   │       └── utils.c          # Utilidades semánticas
│   ├── structures/              # Estructuras de datos
│   │   ├── parser.h
│   │   ├── Instruction.c
│   │   ├── Expression_list.c
│   │   ├── SymbolTable.c
│   │   ├── Errors.c
│   │   └── ...
│   ├── reports/                 # Generación de reportes
│   │   ├── ast_generator.c
│   │   ├── ast_generator.h
│   │   ├── ast_evaluate.c
│   │   ├── ast_execute.c
│   │   └── utils.c
│   └── UI/                      # Interfaz gráfica (GTK)
│       ├── UI.c
│       ├── main_window.c
│       ├── toolbar.c
│       ├── console.c
│       ├── editor.c
│       └── ...
├── build/                       # Archivos compilados
├── reports/                     # Reportes generados
├── test/                        # Archivos de prueba
├── Makefile                     # Sistema de construcción
└── README.md
```

### 4.2 Componentes Principales

#### 4.2.1 Frontend (Análisis)

1. **Analizador Léxico (lexer.l)**
   - Tokenización del código fuente
   - Reconocimiento de palabras reservadas, operadores, literales
   - Manejo de comentarios y espacios en blanco
   - Manejo de errores léxicos

2. **Analizador Sintáctico (parser.y)**
   - Análisis sintáctico ascendente usando Bison
   - Construcción del Árbol de Sintaxis Abstracta (AST)
   - Recuperación de errores sintácticos
   - Precedencia y asociatividad de operadores

#### 4.2.2 Backend (Semántica y Ejecución)

1. **Análisis Semántico**
   - Verificación de tipos
   - Tabla de símbolos
   - Verificación de declaraciones
   - Análisis de scope

2. **Intérprete/Evaluador**
   - Ejecución de instrucciones
   - Evaluación de expresiones
   - Manejo de memoria
   - Control de flujo

#### 4.2.3 Estructuras de Datos

1. **Instruction**: Representa instrucciones del lenguaje
2. **Expression**: Representa expresiones y operaciones
3. **SymbolTable**: Tabla de símbolos para gestión de variables
4. **ErrorList**: Lista de errores durante compilación
5. **AST Nodes**: Nodos del árbol de sintaxis abstracta

#### 4.2.4 Reportes y Visualización

1. **Generador de AST**: Crea representaciones gráficas del AST
2. **Reporte de Errores**: Manejo y presentación de errores
3. **Consola de Salida**: Visualización de resultados

#### 4.2.5 Interfaz de Usuario (GTK)

1. **Editor de Código**: Editor con resaltado de sintaxis
2. **Consola**: Salida del programa y errores
3. **Toolbar**: Botones de acción (compilar, ejecutar, etc.)
4. **Ventana Principal**: Integración de todos los componentes

### 4.3 Flujo de Compilación/Interpretación

```text
Código Fuente JavaLang
        ↓
    Análisis Léxico (Flex)
        ↓
    Lista de Tokens
        ↓
    Análisis Sintáctico (Bison)
        ↓
    Árbol de Sintaxis Abstracta (AST)
        ↓
    Análisis Semántico
        ↓
    AST Anotado + Tabla de Símbolos
        ↓
    Interpretación/Ejecución
        ↓
    Resultado + Reportes
```

### 4.4 Manejo de Errores

El sistema maneja tres tipos de errores:

1. **Errores Léxicos**: Caracteres no reconocidos
2. **Errores Sintácticos**: Violaciones de la gramática
3. **Errores Semánticos**: Tipos incompatibles, variables no declaradas, etc.

### 4.5 Características Implementadas

- ✅ Tipos de datos primitivos (int, float, double, String, boolean, char)
- ✅ Variables y constantes (final)
- ✅ Operadores aritméticos, lógicos y bitwise
- ✅ Estructuras de control (if/else, switch/case, while, for)
- ✅ Arrays unidimensionales y bidimensionales
- ✅ Funciones y procedimientos
- ✅ System.out.println para salida
- ✅ Conversiones de tipos (casting)
- ✅ Métodos de utilidad (parseInt, parseDouble, etc.)
- ✅ Interfaz gráfica con GTK
- ✅ Generación de reportes AST

## 5. Compilación y Uso

### 5.1 Requisitos del Sistema

- GCC (GNU Compiler Collection)
- Flex (Fast Lexical Analyzer)
- Bison (GNU Parser Generator)
- GTK 3.0+ (para la interfaz gráfica)
- Make

### 5.2 Compilación

```bash
# Compilación normal
make

# Compilación con debug
make debug

# Limpiar archivos compilados
make clean
```

### 5.3 Ejecución

```bash
# Ejecutar con interfaz gráfica
./build/main

# Ejecutar archivo específico
./build/main archivo.java
```

## 6. Ejemplos de Código JavaLang

### 6.1 Ejemplo Básico

```java
public static void main() {
    int x = 10;
    int y = 20;
    int suma = x + y;
    System.out.println(suma);
}
```

### 6.2 Ejemplo con Condicionales

```java
public static void main() {
    int edad = 18;
    if (edad >= 18) {
        System.out.println("Mayor de edad");
    } else {
        System.out.println("Menor de edad");
    }
}
```

### 6.3 Ejemplo con Arrays

```java
public static void main() {
    int[] numeros = {1, 2, 3, 4, 5};
    for (int i = 0; i < numeros.length; i++) {
        System.out.println(numeros[i]);
    }
}
```

### 6.4 Ejemplo con Funciones

```java
int sumar(int a, int b) {
    return a + b;
}

public static void main() {
    int resultado = sumar(5, 3);
    System.out.println(resultado);
}
```

---

*Este documento describe la implementación actual de JavaLang. El lenguaje está en desarrollo continuo y pueden agregarse nuevas características en futuras versiones.*
