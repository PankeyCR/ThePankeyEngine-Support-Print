#pragma once

#include "CharArray.hpp"
#include "Byte.hpp"

namespace pankey{

	namespace Support{

		namespace Print{

			template<class Printer>
			void print(Printer& a_printer, const pankey::Type::Array::CharArray& a_printing){
				for(int x = 0; x < a_printing.length(); x++){
					pankey::Type::Array::Byte f_byte = a_printing.get(x);
					a_printer.write(f_byte);
				}
			}

		}

	}

}