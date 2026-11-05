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

// Function: sub_001300C8
// Address: 0x1300c8 - 0x130108
void sub_001300C8_0x1300c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001300C8_0x1300c8");
#endif

    switch (ctx->pc) {
        case 0x1300e8u: goto label_1300e8;
        case 0x1300f8u: goto label_1300f8;
        default: break;
    }

    ctx->pc = 0x1300c8u;

    // 0x1300c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1300c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1300cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1300ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1300d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1300d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1300d4: 0x8c820258  lw          $v0, 0x258($a0)
    ctx->pc = 0x1300d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x1300d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1300D8u;
    {
        const bool branch_taken_0x1300d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1300DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300D8u;
        // 0x1300dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300d8) {
            ctx->pc = 0x1300FCu;
            goto label_1300fc;
        }
    }
    ctx->pc = 0x1300E0u;
    // 0x1300e0: 0xc043920  jal         func_10E480
    ctx->pc = 0x1300E0u;
    SET_GPR_U32(ctx, 31, 0x1300E8u);
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x1300E0u, 0x1300E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300E8u;
label_1300e8:
    // 0x1300e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1300E8u;
    {
        const bool branch_taken_0x1300e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1300e8) {
            ctx->pc = 0x1300ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1300E8u;
            // 0x1300ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1300FCu;
            goto label_1300fc;
        }
    }
    ctx->pc = 0x1300F0u;
    // 0x1300f0: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x1300F0u;
    SET_GPR_U32(ctx, 31, 0x1300F8u);
    ctx->pc = 0x1300F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300F0u;
    // 0x1300f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x1300F0u, 0x1300F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300F8u;
label_1300f8:
    // 0x1300f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1300fc:
    // 0x1300fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1300fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130100: 0x3e00008  jr          $ra
    ctx->pc = 0x130100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130100u;
        // 0x130104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130108u;
}
