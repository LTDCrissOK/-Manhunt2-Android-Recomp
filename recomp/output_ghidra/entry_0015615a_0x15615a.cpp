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

// Function: entry_0015615a
// Address: 0x15615a - 0x156168
void entry_0015615a_0x15615a(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015615a_0x15615a");
#endif

    ctx->pc = 0x15615au;

    // 0x15615a: 0x27bd  .word       0x000027BD                   # INVALID     $zero, $zero, 0x27BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x15615au;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x15615A raw=0x000027BD");
    // 0x15615e: 0x8ffb0  tge         $zero, $t0, 1022
    ctx->pc = 0x15615eu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x156162: 0x802dffbf  lb          $t5, -0x41($at)
    ctx->pc = 0x156162u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967231)));
    // 0x156166: 0xd8dc0080  lqc2        $vf28, 0x80($a2)
    ctx->pc = 0x156166u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 128)));
    ctx->pc = 0x156168u;
}
