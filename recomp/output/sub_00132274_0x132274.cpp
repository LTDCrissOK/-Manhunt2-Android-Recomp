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

// Function: sub_00132274
// Address: 0x132274 - 0x132288
void sub_00132274_0x132274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132274_0x132274");
#endif

    switch (ctx->pc) {
        case 0x13227cu: goto label_13227c;
        case 0x132280u: goto label_132280;
        default: break;
    }

    ctx->pc = 0x132274u;

    // 0x132274: 0xc04c950  jal         func_132540
    ctx->pc = 0x132274u;
    SET_GPR_U32(ctx, 31, 0x13227Cu);
    ctx->pc = 0x132278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132274u;
    // 0x132278: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132540u, 0x132274u, 0x13227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13227Cu;
label_13227c:
    // 0x13227c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13227cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132280:
    // 0x132280: 0x3e00008  jr          $ra
    ctx->pc = 0x132280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132280u;
        // 0x132284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132288u;
}
