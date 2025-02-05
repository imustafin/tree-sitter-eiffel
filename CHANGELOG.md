# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Added
- Parse attachment mark before tuple (`attached TUPLE`) [#14]
- Add indent queries compatible with [neovim](https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md). [#17]
- Keyword `separate` both as a type mark (`separate STRING`)
  and as an inline separate block (`separate x as y then end`). [#21]

### Changed
- Don't match a `(header_comment)`if there is an empty line before it,
  it will be matched as a simple `(comment)`. [#16]
- Differentiate in `(conditional_expression)` the `(else_part_expression)`. [#17]
- Extend highlight queries compatible with [neovim](https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md). [#17]
- Don't collect multiple lines into one `(header_comment)`.
  Now both `(header_comment)` and `(comment)` represent one line of comment. [#18]
- Fix token start positions after possible `(header_comment)`. Add tests for this too. [#18]
- Don't match comments inside `(verbatim_string)`. [#18]
- Update `tree-sitter-cli` to [0.24.6](https://github.com/tree-sitter/tree-sitter/releases/tag/v0.24.6). [#19], [#20], [#22], [#31]
- Recognize `(new_feature (extended_feature_name (identifier)))` at EOF. [#26]

  In files containing just the following (no `\n` after `x`):
  ```eiffel
  class A feature x
  ```

  Previously:
  ```
  (source_file
    (ERROR
      (class_name)
      (identifier)))
  ```

  After this change:
  ```
  (source_file
    (ERROR
      (class_name)
      (new_feature
        (extended_feature_name
        (identifier)))))
  ```
- Update `tree-sitter-cli` to 0.25.1 [#33]

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
[#17]: https://github.com/imustafin/tree-sitter-eiffel/pull/17
[#18]: https://github.com/imustafin/tree-sitter-eiffel/pull/18
[#19]: https://github.com/imustafin/tree-sitter-eiffel/pull/19
[#20]: https://github.com/imustafin/tree-sitter-eiffel/pull/20
[#21]: https://github.com/imustafin/tree-sitter-eiffel/pull/21
[#22]: https://github.com/imustafin/tree-sitter-eiffel/pull/22
[#26]: https://github.com/imustafin/tree-sitter-eiffel/pull/26
[#31]: https://github.com/imustafin/tree-sitter-eiffel/pull/31
[#33]: https://github.com/imustafin/tree-sitter-eiffel/pull/33

[unreleased]: https://github.com/imustafin/tree-sitter-eiffel/compare/v1.0.0...HEAD
[v1.0.0]: https://github.com/imustafin/tree-sitter-eiffel/compare/3dbff72823c37277ac5db345258d9c5c0beb3a77...v1.0.0
