#pragma once

namespace pankey{

	namespace Support{

		namespace Print{

			template<class Printer>
			void print(Printer& a_printer, const long long& a_printing){
				a_printer.writeLongLong(a_printing);
			}

		}

	}

}