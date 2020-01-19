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

/*! Operation code sequence type  */
using opcode_seq_t = std::initializer_list<opcode_t>;

/*! Comment strings type  */
using comment_t = std::string_view;

#endif
