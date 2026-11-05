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

// Function: sub_002BCBC0
// Address: 0x2bcbc0 - 0x2bcbe8
void sub_002BCBC0_0x2bcbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCBC0_0x2bcbc0");
#endif

    switch (ctx->pc) {
        case 0x2bcbdcu: goto label_2bcbdc;
        default: break;
    }

    ctx->pc = 0x2bcbc0u;

    // 0x2bcbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bcbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bcbc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bcbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bcbc8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2bcbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bcbcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCBCCu;
    {
        const bool branch_taken_0x2bcbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBCCu;
        // 0x2bcbd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbcc) {
            ctx->pc = 0x2BCBE0u;
            goto label_2bcbe0;
        }
    }
    ctx->pc = 0x2BCBD4u;
    // 0x2bcbd4: 0xc0af3ca  jal         func_2BCF28
    ctx->pc = 0x2BCBD4u;
    SET_GPR_U32(ctx, 31, 0x2BCBDCu);
    ctx->pc = 0x2BCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCF28u, 0x2BCBD4u, 0x2BCBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBDCu;
label_2bcbdc:
    // 0x2bcbdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bcbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bcbe0:
    // 0x2bcbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBE0u;
        // 0x2bcbe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCBE8u;
}
