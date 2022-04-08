# Tree Sitter for Dart

## Dev Setup

```
# install node.js dependencies
npm install

# compile the generator
npm run generate

# Run the parser tests from //test/corpus/*.txt
npm test
```

If you wish to interact with upstream Dart SDK files, there is a pinned git
submodule:

```
git submodule init
git submodule update
ls third_party/dart-sdk
```
