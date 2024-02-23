fn main() {
    cc::Build::new()
        .include("src")
        .flag_if_supported("-Wno-unused-parameter")
        .flag_if_supported("-Wno-unused-but-set-variable")
        .flag_if_supported("-Wno-trigraphs")
        .file("src/parser.c")
        .compile("parser");
    println!("cargo:rerun-if-changed=src/parser.c");
}
