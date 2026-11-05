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

// Function: entry_002b68a4
// Address: 0x2b68a4 - 0x2b68b4
void entry_002b68a4_0x2b68a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b68a4_0x2b68a4");
#endif

    ctx->pc = 0x2b68a4u;

    // 0x2b68a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b68a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b68a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b68ac: 0x8e035900  lw          $v1, 0x5900($s0)
    ctx->pc = 0x2b68acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22784)));
    // 0x2b68b0: 0x28620033  slti        $v0, $v1, 0x33
    ctx->pc = 0x2b68b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    ctx->pc = 0x2b68b4u;
}
