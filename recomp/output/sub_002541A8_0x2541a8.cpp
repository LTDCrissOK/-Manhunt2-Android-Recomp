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

// Function: sub_002541A8
// Address: 0x2541a8 - 0x2541e0
void sub_002541A8_0x2541a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002541A8_0x2541a8");
#endif

    switch (ctx->pc) {
        case 0x2541bcu: goto label_2541bc;
        default: break;
    }

    ctx->pc = 0x2541a8u;

    // 0x2541a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2541a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2541ac: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2541acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2541b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2541b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2541b4: 0xc0952e8  jal         func_254BA0
    ctx->pc = 0x2541B4u;
    SET_GPR_U32(ctx, 31, 0x2541BCu);
    ctx->pc = 0x2541B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541B4u;
    // 0x2541b8: 0x8c850fe4  lw          $a1, 0xFE4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x2541B4u, 0x2541BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541BCu;
label_2541bc:
    // 0x2541bc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2541BCu;
    {
        const bool branch_taken_0x2541bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2541bc) {
            ctx->pc = 0x2541C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2541BCu;
            // 0x2541c0: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2541CCu;
            goto label_2541cc;
        }
    }
    ctx->pc = 0x2541C4u;
    // 0x2541c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2541C4u;
    {
        const bool branch_taken_0x2541c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2541C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541C4u;
        // 0x2541c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541c4) {
            ctx->pc = 0x2541D4u;
            goto label_2541d4;
        }
    }
    ctx->pc = 0x2541CCu;
label_2541cc:
    // 0x2541cc: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2541ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x2541d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2541d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2541d4:
    // 0x2541d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2541d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2541d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2541D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2541DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541D8u;
        // 0x2541dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2541E0u;
}
