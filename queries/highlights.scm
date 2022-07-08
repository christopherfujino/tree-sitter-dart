; https://tree-sitter.github.io/tree-sitter/using-parsers#query-syntax
; https://tree-sitter.github.io/tree-sitter/syntax-highlighting#highlights

(primitive_type) @type
(function_declaration name: (identifier) @function)
(number) @number
