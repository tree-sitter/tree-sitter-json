// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterJSON",
    products: [
        .library(name: "TreeSitterJSON", targets: ["TreeSitterJSON"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterJSON",
            dependencies: [],
            path: ".",
            exclude: [
                "Cargo.toml",
                "Makefile",
                "binding.gyp",
                "bindings/c",
                "bindings/go",
                "bindings/node",
                "bindings/python",
                "bindings/rust",
                "prebuilds",
                "grammar.js",
                "package.json",
                "package-lock.json",
                "pyproject.toml",
                "setup.py",
                "test",
                "examples",
                ".editorconfig",
                ".github",
                ".gitignore",
                ".gitattributes",
                ".gitmodules",
            ],
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterJSONTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterJSON",
            ],
            path: "bindings/swift/TreeSitterJSONTests"
        )
    ],
    cLanguageStandard: .c11
)
