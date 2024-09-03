import XCTest
import SwiftTreeSitter
import TreeSitterEiffel

final class TreeSitterEiffelTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_eiffel())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Eiffel grammar")
    }
}
