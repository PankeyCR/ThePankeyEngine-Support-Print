#pragma once

namespace pankey{

	namespace Support{

		namespace Print{

			template<class Printer>
			void print(Printer& a_printer, const int& a_printing){
				a_printer.writeInt(a_printing);
			}

		}

	}

}