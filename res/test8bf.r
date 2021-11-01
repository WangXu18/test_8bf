#include "PIGeneral.h"

resource 'PiPL' (16000, "Tommy PiPL", purgeable)
{
	{
		Kind { Filter },
		Name { "test8bf滤镜" },
		Category { "完美办公" },
		Version { (latestFilterVersion << 16) | latestFilterSubVersion },

		Component { ComponentNumber, "test8bf" },

		#if defined(_WIN64)
			CodeWin64X86 { "test8bf" },
		#else
			CodeWin32X86 { "test8bf" },
		#endif

		EnableInfo { "true" },

	}
};
