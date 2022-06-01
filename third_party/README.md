## Third Party Dependencies

### Dart SDK

The Dart SDK is vendored in case the CFE is used at any point for integration
tests to validate tree-sitter-dart's parse results. By version tracking, we can
bisect when an upstream change diverges from the results of tree-sitter-dart.
