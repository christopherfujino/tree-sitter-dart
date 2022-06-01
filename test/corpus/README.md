Tree-Sitter comes with its own built-in
[test runner](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test)
that takes in source code and an expected concrete syntax tree, in
[S-expression](https://en.wikipedia.org/wiki/S-expression) format. The
formatting of the syntax tree expectation is not enforced by the test runner.

See ../../third_party/dart-sdk/pkg/front_end/parser_testcases/ for similar
upstream tests.
