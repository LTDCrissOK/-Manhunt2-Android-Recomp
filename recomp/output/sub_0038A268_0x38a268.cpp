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

// Function: sub_0038A268
// Address: 0x38a268 - 0x38a278
void sub_0038A268_0x38a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A268_0x38a268");
#endif

    ctx->pc = 0x38a268u;

    // 0x38a268: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38a268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a26c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x38a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x38a270: 0x80f3050  j           func_3CC140
    ctx->pc = 0x38A270u;
    ctx->pc = 0x38A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A270u;
    // 0x38a274: 0x24849440  addiu       $a0, $a0, -0x6BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    sub_003CC140_0x3cc140(rdram, ctx, runtime); return;
    ctx->pc = 0x38A278u;
}
