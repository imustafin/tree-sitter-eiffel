// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterEiffel",
    products: [
        .library(name: "TreeSitterEiffel", targets: ["TreeSitterEiffel"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterEiffel",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterEiffelTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterEiffel",
            ],
            path: "bindings/swift/TreeSitterEiffelTests"
        )
    ],
    cLanguageStandard: .c11
)
