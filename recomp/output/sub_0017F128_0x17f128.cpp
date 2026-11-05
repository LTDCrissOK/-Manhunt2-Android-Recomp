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

// Function: sub_0017F128
// Address: 0x17f128 - 0x17f158
void sub_0017F128_0x17f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F128_0x17f128");
#endif

    switch (ctx->pc) {
        case 0x17f144u: goto label_17f144;
        default: break;
    }

    ctx->pc = 0x17f128u;

    // 0x17f128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f12c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f130: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17f130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f134: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F134u;
    {
        const bool branch_taken_0x17f134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F134u;
        // 0x17f138: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f134) {
            ctx->pc = 0x17F14Cu;
            goto label_17f14c;
        }
    }
    ctx->pc = 0x17F13Cu;
    // 0x17f13c: 0xc05eff6  jal         func_17BFD8
    ctx->pc = 0x17F13Cu;
    SET_GPR_U32(ctx, 31, 0x17F144u);
    ctx->pc = 0x17BFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BFD8u, 0x17F13Cu, 0x17F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F144u;
label_17f144:
    // 0x17f144: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F144u;
    {
        const bool branch_taken_0x17f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F144u;
        // 0x17f148: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f144) {
            ctx->pc = 0x17F150u;
            goto label_17f150;
        }
    }
    ctx->pc = 0x17F14Cu;
label_17f14c:
    // 0x17f14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f150:
    // 0x17f150: 0x3e00008  jr          $ra
    ctx->pc = 0x17F150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F150u;
        // 0x17f154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F158u;
}
