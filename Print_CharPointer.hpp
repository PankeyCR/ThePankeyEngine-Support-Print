#pragma once

#include "CharPointer.hpp"

namespace pankey{

	namespace Support{

		namespace Print{

			template<class Printer>
			void print(Printer& a_printer, const pankey::Utility::Test::CharPointer& a_printing){
				const char* i_str = a_printing.get();
				a_printer.writeString(i_str);
			}

		}

	}

}