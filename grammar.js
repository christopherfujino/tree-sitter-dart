// Copyright (c) 2022, the Dart project authors.  Please see the AUTHORS file
// for details. All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

module.exports = grammar({
  name: "Dart",

  // https://tree-sitter.github.io/tree-sitter/creating-parsers#keyword-extraction
  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($.declaration),

    declaration: $ => choice(
      $.function_declaration,
    ),

    function_declaration: $ => seq(
      // optional return type
      $.identifier,
      $.parameter_list,
      $.block,
    ),

    parameter_list: _$ => seq(
      "(",
      // optional seq parameter
      ")",
    ),

    block: $ => seq(
      "{",
      repeat($._statement),
      "}",
    ),

    _statement: $ => choice(
      seq($.assignment_statement, ";"),
      // local function def
      $.function_declaration,
    ),

    assignment_statement: $ => seq(
      // optional type
      $.identifier,
      "=",
      $._expression,
    ),

    _expression: $ => choice(
      $.identifier,
      $._numeric_literal,
    ),

    // Dart spec 17.5
    _numeric_literal: $ => choice(
      $.number,
    ),

    number: _$ => /\d+/,

    // Dart spec 17.38
    identifier: _$ => /[$a-zA-Z_][a-zA-Z_\d]*/,
  }
});
