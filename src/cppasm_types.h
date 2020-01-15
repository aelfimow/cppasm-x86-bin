/*! \file cppasm_types.h
    \brief cppasm specific types.
*/
#ifdef CPPASM_TYPES_H
#error Already included
#else
#define CPPASM_TYPES_H

#include <cstdint>
#include <string_view>
#include <vector>
#include <initializer_list>

/*! Operation code type  */
using opcode_t = int;

/*! Comment strings type  */
using comment_t = std::string_view;

#endif
