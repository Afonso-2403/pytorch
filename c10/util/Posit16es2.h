#pragma once

// Defines the Posit16es2 type (Posit with nbits = 16 and es = 2).

#include <c10/macros/Macros.h>
#include <universal/number/posit/posit.hpp>


namespace c10 {
	using posit16es2 = sw::universal::posit<16,2>;
}

