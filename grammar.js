module.exports = grammar({
    name: 'json',

    rules: {
        element: $ => $._value,

        _value: $ => choice(
            $.object,
            $.array,
            $.string,
            $.number,
            $.true,
            $.false,
            $.null
        ),

        comma: $ => ',',

        // Object
        opening_curly_brace: $ => '{',

        closing_curly_brace: $ => '}',

        colon: $ => ':',

        pair: $ => seq(
            $.string,
            $.colon,
            $._value
        ),

        object: $ => seq(
            $.opening_curly_brace,
            optional(
                choice(
                    repeated_entry($.pair, $.comma),
                    repeated_entry($._value, $.comma)
                )
            ),
            $.closing_curly_brace
        ),

        // Array
        opening_square_bracket: $ => '[',

        closing_square_bracket: $ => ']',

        array: $ => seq(
            $.opening_square_bracket,
            optional(
                repeated_entry($._value, $.comma)
            ),
            $.closing_square_bracket
        ),

        // String
        double_apostrophe: $ => '"',

        empty_string: $ => seq(
            $.double_apostrophe,
            $.double_apostrophe
        ),

        string_content: $ => repeat1(
            /((\\")+)?[^"]+((\\")+)?/
        ),

        string: $ => choice(
            $.empty_string,
            seq(
                $.double_apostrophe,
                $.string_content,
                $.double_apostrophe
            )
        ),

        // Number
        positive_sign: $ => '+',

        negative_sign: $ => '-',

        sign: $ => choice($.positive_sign, $.negative_sign),

        digits: $ => /[0-9]+/,

        integer: $ => seq(
            optional($.negative_sign),
            $.digits
        ),

        decimal_point: $ => '.',

        fraction: $ => seq(
            $.decimal_point,
            $.digits,
        ),

        exponent_function: $ => choice('e', 'E'),

        exponent: $ => seq(
            $.exponent_function,
            optional($.sign),
            $.digits
        ),

        number: $ => seq(
            $.integer,
            optional($.fraction),
            optional($.exponent)
        ),

        // True
        true: $ => 'true',

        // False
        false: $ => 'false',

        // Null
        null: $ => 'null'
    }
});

function repeated_entry(rule, seperator) {
    return seq(
        rule,
        optional(
            repeat(
                seq(
                    seperator,
                    rule,
                )
            )
        )
    )
}