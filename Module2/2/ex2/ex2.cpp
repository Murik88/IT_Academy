#include <iostream>

int main()
{
#if defined(__clang__)
    std::cout << "Clang/LLVM" << std::endl;

#elif defined(__ICC) || defined(__INTEL_COMPILER)
    std::cout << "Intel ICC/ICPC" << std::endl;

#elif defined(__GNUC__) || defined(__GNUG__)
    std::cout << "GNU GCC/G++" << std::endl;

#elif defined(__HP_cc) || defined(__HP_aCC)
    std::cout << "Hewlett-Packard C/aC++" << std::endl;

#elif defined(__IBMC__) || defined(__IBMCPP__)
    std::cout << "IBM XL C/C++" << std::endl;

#elif defined(_MSC_VER)
    std::cout << "Microsoft Visual Studio" << std::endl;

#elif defined(__PGI)
    std::cout << "Portland Group PGCC/PGCPP" << std::endl;

#elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
    std::cout << "Oracle Solaris Studio" << std::endl;
#endif

#if defined(__linux__) // Or #if __linux__
    std::cout << "GNU/Linux" << std::endl;
#elif _WIN32
    std::cout << "Windows" << std::endl;
#elif _WIN64
    std::cout << "Windows 64-bit only" << std::endl;
#else
    std::cout << "Other" << std::endl;
#endif

    return 0;
}