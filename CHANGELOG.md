# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Added
- Parse attachment mark before tuple (`attached TUPLE`) [#14]

### Changed
- Don't match a `(header_comment)`if there is an empty line before it,
  it will be matched as a simple `(comment)`. [#16]

### Removed

## [v1.0.0] 2024-06-04

### Added

- First version of the parser
- Running tests for Linux, Mac and Windows

### Changed

- Updated `tree-sitter-cli` to 0.22.6
- Updated binding files

### Removed

[#14]: https://github.com/imustafin/tree-sitter-eiffel/pull/14
[#16]: https://github.com/imustafin/tree-sitter-eiffel/pull/16

[unreleased]: https://github.com/imustafin/tree-sitter-eiffel/compare/v1.0.0...HEAD
[v1.0.0]: https://github.com/imustafin/tree-sitter-eiffel/compare/3dbff72823c37277ac5db345258d9c5c0beb3a77...v1.0.0
