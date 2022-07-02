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

In order to locally test highlights, you must set up a local tree-sitter config
(See [docs](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#per-user-configuration)
for more context):

```
# within the tree-sitter-dart directory...
# `npx` means execute a binary from one of your dependencies in package.json
# This will generate config.json file in your user dir that you must update
npx tree-sitter init-config

# The previous command should log where it generated the config file.
# Edit this file and update the "parser-directories" field with the parent of
# your tree-sitter-dart repository.
vim $TREE_SITTER_CONFIG.json
```
