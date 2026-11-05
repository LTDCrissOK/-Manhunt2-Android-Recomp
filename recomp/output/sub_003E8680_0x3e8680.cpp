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

// Function: sub_003E8680
// Address: 0x3e8680 - 0x3e86a0
void sub_003E8680_0x3e8680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8680_0x3e8680");
#endif

    switch (ctx->pc) {
        case 0x3e8690u: goto label_3e8690;
        default: break;
    }

    ctx->pc = 0x3e8680u;

    // 0x3e8680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e8684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e8684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e8688: 0xc0b036e  jal         func_2C0DB8
    ctx->pc = 0x3E8688u;
    SET_GPR_U32(ctx, 31, 0x3E8690u);
    ctx->pc = 0x3E868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8688u;
    // 0x3e868c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DB8u, 0x3E8688u, 0x3E8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8690u;
label_3e8690:
    // 0x3e8690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8694: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8694u;
        // 0x3e8698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E869Cu;
    // 0x3e869c: 0x0  nop
    ctx->pc = 0x3e869cu;
    // NOP
    ctx->pc = 0x3e86a0u;
}
