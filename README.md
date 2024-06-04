# tree-sitter-eiffel

[![CI][ci]](https://github.com/imustafin/tree-sitter-eiffel/actions/workflows/ci.yml)

A tree-sitter parser for the Eiffel programming language.

This project uses [Semantic Versioning](https://semver.org/spec/v2.0.0.html).
[Conventional Commits](https://www.conventionalcommits.org/en/v1.0.0/)
because [tree-sitter-grammars template](https://github.com/tree-sitter-grammars/.github/blob/main/CONTRIBUTING.md#requirements-for-inclusion)
suggests that.

Also this project follows [Keep a Changelog](https://keepachangelog.com/en/1.1.0/)
with the changelog located at [CHANGELOG.md](CHANGELOG.md).

## References

* [eiffel.org - Eiffel programming language syntax](https://www.eiffel.org/doc/eiffel/Eiffel_programming_language_syntax)
* [gobosoft.com - Eiffel: The Syntax](http://www.gobosoft.com/eiffel/syntax/) (non-https!)


### Releasing
1. Choose the release version (e.g. `v0.0.1`)
2. Update version in files (no `v` char):
    1. `Makefile`
    2. `package.json`
    3. `package-lock.json` (`version` and `packages."".version`)
    4. `Cargo.toml`
    5. `pyproject.toml`
3. Update the changelog
    1. Change `[Unreleased]` title to the version (`[v0.0.1]`)
    2. Add release date in YYYY-MM-DD format
    2. Make a new `[Unreleased]` title with `### Added` and `### Fixed`
    3. At the end of file, add link for the release (`[v0.0.1] .../compare/v0.0.0...v0.0.1`)
    4. Update the `[unreleased]` link (`[unreleased]: .../compare/v0.0.1...HEAD`)
4. Make a commit with `release:` type
5. Add and push tag (`v0.0.1`)
6. Push changelog updates to `master`
7. Make a GitHub release
    1. Set the version
    2. Paste changelog of the release
        * Don't add the release title (already shown by GitHub)
        * Make headings (Added, Fixed) start from `h1` (`#`)

[ci]: https://img.shields.io/github/actions/workflow/status/imustafin/tree-sitter-eiffel/ci.yml?logo=github&label=CI
