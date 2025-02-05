package tree_sitter_eiffel_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_eiffel "github.com/imustafin/tree-sitter-eiffel/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_eiffel.Language())
	if language == nil {
		t.Errorf("Error loading Eiffel grammar")
	}
}
