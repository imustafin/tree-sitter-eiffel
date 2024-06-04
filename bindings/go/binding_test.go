package tree_sitter_eiffel_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-eiffel"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_eiffel.Language())
	if language == nil {
		t.Errorf("Error loading Eiffel grammar")
	}
}
