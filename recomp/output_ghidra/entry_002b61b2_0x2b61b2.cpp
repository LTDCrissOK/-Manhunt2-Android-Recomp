#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002b61b2
// Address: 0x2b61b2 - 0x2b61b6
void entry_002b61b2_0x2b61b2(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b61b2_0x2b61b2");
#endif

    ctx->pc = 0x2b61b2u;

    // 0x2b61b2: 0x27bd  .word       0x000027BD                   # INVALID     $zero, $zero, 0x27BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b61b2u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B61B2 raw=0x000027BD");
    ctx->pc = 0x2b61b6u;
}
