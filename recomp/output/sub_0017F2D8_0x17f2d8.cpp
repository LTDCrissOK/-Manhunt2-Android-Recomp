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

// Function: sub_0017F2D8
// Address: 0x17f2d8 - 0x17f308
void sub_0017F2D8_0x17f2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F2D8_0x17f2d8");
#endif

    switch (ctx->pc) {
        case 0x17f2f4u: goto label_17f2f4;
        default: break;
    }

    ctx->pc = 0x17f2d8u;

    // 0x17f2d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f2dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f2e0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x17f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f2e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F2E4u;
    {
        const bool branch_taken_0x17f2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2E4u;
        // 0x17f2e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2e4) {
            ctx->pc = 0x17F2FCu;
            goto label_17f2fc;
        }
    }
    ctx->pc = 0x17F2ECu;
    // 0x17f2ec: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x17F2ECu;
    SET_GPR_U32(ctx, 31, 0x17F2F4u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x17F2ECu, 0x17F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2F4u;
label_17f2f4:
    // 0x17f2f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F2F4u;
    {
        const bool branch_taken_0x17f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2F4u;
        // 0x17f2f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2f4) {
            ctx->pc = 0x17F300u;
            goto label_17f300;
        }
    }
    ctx->pc = 0x17F2FCu;
label_17f2fc:
    // 0x17f2fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f2fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f300:
    // 0x17f300: 0x3e00008  jr          $ra
    ctx->pc = 0x17F300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F300u;
        // 0x17f304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F308u;
}
