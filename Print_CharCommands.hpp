#pragma once

#include "CharCommands.hpp"

namespace pankey{

	namespace Support{

		namespace Print{

			template<class Printer>
			void print(Printer& a_printer, const pankey::Type::Array::CharCommands& a_printing){
				for(int x = 0; x < a_printing.length(); x++){
					pankey::Utility::Test::CharPointer i_charpointer = a_printing.get(x);
					const char* i_str = i_charpointer.get();
					a_printer.writeString(i_str);
					if(x == a_printing.length() - 1){
						break;
					}
					a_printer.write(' ');
					a_printer.write(',');
					a_printer.write(' ');
				}
			}

		}

	}

}