#include "logos/arch.h"
#define COLOR "\033[1;38;5;183m"

#define CONFIG \
{ \
   /* name            function                 cached */\
    { "",             get_title,               false }, \
    { "",             get_bar,                 false }, \
    { "OS: ",         get_os,                  true  }, \
    { "Host: ",       get_host,                true  }, \
    { "Kernel: ",     get_kernel,              true  }, \
    { "Uptime: ",     get_uptime,              false }, \
    { "Packages: ",   get_packages_pacman,   false }, \
    { "Shell: ",      get_shell,             false }, \
    { "Resolution: ", get_resolution,        false }, \
    { "Terminal: ",   get_terminal,          false }, \
    { "CPU: ",        get_cpu,                 true  }, \
    { "GPU: ",        get_gpu,                 true  }, \
    { "Memory: ",     get_memory,              false }, \
    SPACER \
    { "",             get_colors1,             false }, \
    { "",             get_colors2,             false }, \
}

#define CPU_CONFIG \
{ \
   REMOVE("(R)"), \
   REMOVE("(TM)"), \
   REMOVE("Dual-Core"), \
   REMOVE("Quad-Core"), \
   REMOVE("Six-Core"), \
   REMOVE("6-Core Processor"), \
   REMOVE("Eight-Core"), \
   REMOVE("CPU"), \
}

#define GPU_CONFIG \
{ \
    REMOVE("Corporation"), \
    REMOVE("TU116"), \
    REMOVE("["), \
    REMOVE("]"), \
}
