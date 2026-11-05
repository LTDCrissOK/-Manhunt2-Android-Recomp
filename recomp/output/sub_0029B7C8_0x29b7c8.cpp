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

// Function: sub_0029B7C8
// Address: 0x29b7c8 - 0x29b800
void sub_0029B7C8_0x29b7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B7C8_0x29b7c8");
#endif

    switch (ctx->pc) {
        case 0x29b7e8u: goto label_29b7e8;
        default: break;
    }

    ctx->pc = 0x29b7c8u;

    // 0x29b7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b7cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b7d0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x29b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29b7d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B7D4u;
    {
        const bool branch_taken_0x29b7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7D4u;
        // 0x29b7d8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7d4) {
            ctx->pc = 0x29B7F0u;
            goto label_29b7f0;
        }
    }
    ctx->pc = 0x29B7DCu;
    // 0x29b7dc: 0x24840238  addiu       $a0, $a0, 0x238
    ctx->pc = 0x29b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
    // 0x29b7e0: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x29B7E0u;
    SET_GPR_U32(ctx, 31, 0x29B7E8u);
    ctx->pc = 0x29B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7E0u;
    // 0x29b7e4: 0x24a5bee0  addiu       $a1, $a1, -0x4120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x29B7E0u, 0x29B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7E8u;
label_29b7e8:
    // 0x29b7e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B7E8u;
    {
        const bool branch_taken_0x29b7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7E8u;
        // 0x29b7ec: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7e8) {
            ctx->pc = 0x29B7F4u;
            goto label_29b7f4;
        }
    }
    ctx->pc = 0x29B7F0u;
label_29b7f0:
    // 0x29b7f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b7f4:
    // 0x29b7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x29B7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7F8u;
        // 0x29b7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B800u;
}
