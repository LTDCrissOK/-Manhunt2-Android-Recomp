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

// Function: sub_002906C0
// Address: 0x2906c0 - 0x290700
void sub_002906C0_0x2906c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002906C0_0x2906c0");
#endif

    switch (ctx->pc) {
        case 0x2906dcu: goto label_2906dc;
        case 0x2906f0u: goto label_2906f0;
        default: break;
    }

    ctx->pc = 0x2906c0u;

    // 0x2906c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2906c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2906c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2906c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2906c8: 0x8c82030c  lw          $v0, 0x30C($a0)
    ctx->pc = 0x2906c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 780)));
    // 0x2906cc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2906CCu;
    {
        const bool branch_taken_0x2906cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2906cc) {
            ctx->pc = 0x2906D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2906CCu;
            // 0x2906d0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2906E4u;
            goto label_2906e4;
        }
    }
    ctx->pc = 0x2906D4u;
    // 0x2906d4: 0xc0a9968  jal         func_2A65A0
    ctx->pc = 0x2906D4u;
    SET_GPR_U32(ctx, 31, 0x2906DCu);
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x2906D4u, 0x2906DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2906DCu;
label_2906dc:
    // 0x2906dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2906DCu;
    {
        const bool branch_taken_0x2906dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906DCu;
        // 0x2906e0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906dc) {
            ctx->pc = 0x2906E8u;
            goto label_2906e8;
        }
    }
    ctx->pc = 0x2906E4u;
label_2906e4:
    // 0x2906e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2906e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2906e8:
    // 0x2906e8: 0xc0ae686  jal         func_2B9A18
    ctx->pc = 0x2906E8u;
    SET_GPR_U32(ctx, 31, 0x2906F0u);
    ctx->pc = 0x2906ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2906E8u;
    // 0x2906ec: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A18u, 0x2906E8u, 0x2906F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2906F0u;
label_2906f0:
    // 0x2906f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2906f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2906f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2906f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2906F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2906FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906F8u;
        // 0x2906fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2906F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290700u;
}
