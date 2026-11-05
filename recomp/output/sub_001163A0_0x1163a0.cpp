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

// Function: sub_001163A0
// Address: 0x1163a0 - 0x1163e0
void sub_001163A0_0x1163a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001163A0_0x1163a0");
#endif

    switch (ctx->pc) {
        case 0x1163c4u: goto label_1163c4;
        default: break;
    }

    ctx->pc = 0x1163a0u;

    // 0x1163a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1163a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1163a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1163a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1163a8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1163a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1163ac: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x1163acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x1163b0: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x1163b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
    // 0x1163b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1163B4u;
    {
        const bool branch_taken_0x1163b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1163B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163B4u;
        // 0x1163b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163b4) {
            ctx->pc = 0x1163D4u;
            goto label_1163d4;
        }
    }
    ctx->pc = 0x1163BCu;
    // 0x1163bc: 0xc0952b6  jal         func_254AD8
    ctx->pc = 0x1163BCu;
    SET_GPR_U32(ctx, 31, 0x1163C4u);
    ctx->pc = 0x254AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254AD8u, 0x1163BCu, 0x1163C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163C4u;
label_1163c4:
    // 0x1163c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1163c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1163C8u;
    {
        const bool branch_taken_0x1163c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1163CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163C8u;
        // 0x1163cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163c8) {
            ctx->pc = 0x1163D8u;
            goto label_1163d8;
        }
    }
    ctx->pc = 0x1163D0u;
    // 0x1163d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1163d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1163d4:
    // 0x1163d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1163d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1163d8:
    // 0x1163d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1163D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1163DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163D8u;
        // 0x1163dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1163D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1163E0u;
}
