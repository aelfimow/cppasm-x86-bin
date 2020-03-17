/*! \file asmstream.cpp
    \brief Class for Assembly Stream.
*/
#include <iostream>
#include <sstream>
#include <iomanip>
#include "cppasm_types.h"
#include "asmstream.h"


asmstream::asmstream()
{
}

asmstream::~asmstream()
{
}

void asmstream::byte(std::vector<opcode_t> const &seq)
{
    std::cout << ".byte ";

    auto size = seq.size();
    auto cnt = size;

    for (auto &c: seq)
    {
        std::cout << to_str(c);

        --cnt;

        if (cnt != 0)
        {
            std::cout << ", ";
        }
    }

    std::cout << std::endl;
}

std::string asmstream::to_str(opcode_t const &c) const
{
    size_t const total_chars = 2;

    std::ostringstream ss;

    ss << "$0x" << std::setfill('0') << std::setw(total_chars) << std::hex << std::uppercase;
    ss << static_cast<size_t>(c);

    return ss.str();
}
