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

// Function: entry_00155aaa
// Address: 0x155aaa - 0x155ab0
void entry_00155aaa_0x155aaa(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155aaa_0x155aaa");
#endif

    ctx->pc = 0x155aaau;

    // 0x155aaa: 0x27bd  .word       0x000027BD                   # INVALID     $zero, $zero, 0x27BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155aaau;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x155AAA raw=0x000027BD");
    // 0x155aae: 0xffe00000  sd          $zero, 0x0($ra)
    ctx->pc = 0x155aaeu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x155ab0u;
}
