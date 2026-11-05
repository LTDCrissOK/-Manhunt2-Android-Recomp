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

// Function: entry_0015636c
// Address: 0x15636c - 0x15637a
void entry_0015636c_0x15636c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015636c_0x15636c");
#endif

    ctx->pc = 0x15636cu;

    // 0x15636c: 0xfa010530  sqc2        $vf1, 0x530($s0)
    ctx->pc = 0x15636cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1328), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x156370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156374: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x156374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156378: 0x3e00008  jr          $ra
    ctx->pc = 0x156378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156380u;
}
