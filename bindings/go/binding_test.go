package tree_sitter_json_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-json"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_json.Language())
	if language == nil {
		t.Errorf("Error loading JSON grammar")
	}
}
