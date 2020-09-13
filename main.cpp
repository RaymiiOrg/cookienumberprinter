#include "cookieNumber.h"
#include <iostream>

int main() {
    std::vector<CookieNumber> examples {
        CookieNumber(0),
        CookieNumber(1),
        CookieNumber(1.1),
        CookieNumber(100.348),
        CookieNumber(1234),
        CookieNumber("123123.324289347"),
        CookieNumber(1000000),
        CookieNumber("8765432"),
        CookieNumber("12300000000"),
        CookieNumber("3000000000000000000.1"),
        CookieNumber("897348972984792874397293749237491279471947329723947274398742397423979324"),
        CookieNumber("11734897298479287439729374923749127947194732972394727439874239742397932487324987239847923749723974294782378943729479327423979879879879879794793475934759345737497593759837598347953479573975937595793875934759347593759437983479438759438735987349579348754398579837598347985734897598375947354987589987987"),
    };

    std::cout << "CookieNumberPrinter by https://raymii.org, examples." << std::endl;
    std::cout << "Should print:" << std::endl;
    std::cout << "0\n"
                 "1\n"
                 "1.1\n"
                 "100.3\n"
                 "1234\n"
                 "123 thousand\n"
                 "1 million\n"
                 "8 million\n"
                 "12 billion\n"
                 "3 quintillion\n"
                 "897a\n"
                 "11yyy" << std::endl;
    std::cout << "Here we go!" << std::endl << std::endl;

    for (const auto& example : examples) {
        std::cout << cp.print(example) << std::endl;
    }
    return 0;
}
