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

// Function: sub_001CEC90
// Address: 0x1cec90 - 0x1cecf8
void sub_001CEC90_0x1cec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEC90_0x1cec90");
#endif

    switch (ctx->pc) {
        case 0x1cece0u: goto label_1cece0;
        default: break;
    }

    ctx->pc = 0x1cec90u;

    // 0x1cec90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cec94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cec94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cec9c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1ceca0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CECA0u;
    {
        const bool branch_taken_0x1ceca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECA0u;
        // 0x1ceca4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceca0) {
            ctx->pc = 0x1CECE8u;
            goto label_1cece8;
        }
    }
    ctx->pc = 0x1CECA8u;
    // 0x1ceca8: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x1ceca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1cecac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CECACu;
    {
        const bool branch_taken_0x1cecac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECACu;
        // 0x1cecb0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecac) {
            ctx->pc = 0x1CECECu;
            goto label_1cecec;
        }
    }
    ctx->pc = 0x1CECB4u;
    // 0x1cecb4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1cecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1cecb8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1cecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cecbc: 0x8c8789b8  lw          $a3, -0x7648($a0)
    ctx->pc = 0x1cecbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937016)));
    // 0x1cecc0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1cecc4: 0x24632b18  addiu       $v1, $v1, 0x2B18
    ctx->pc = 0x1cecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11032));
    // 0x1cecc8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1cecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceccc: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1cecccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1cecd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cecd4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1cecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cecd8: 0xc073b3e  jal         func_1CECF8
    ctx->pc = 0x1CECD8u;
    SET_GPR_U32(ctx, 31, 0x1CECE0u);
    ctx->pc = 0x1CECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CECD8u;
    // 0x1cecdc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECF8u, 0x1CECD8u, 0x1CECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CECE0u;
label_1cece0:
    // 0x1cece0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CECE0u;
    {
        const bool branch_taken_0x1cece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECE0u;
        // 0x1cece4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cece0) {
            ctx->pc = 0x1CECF0u;
            goto label_1cecf0;
        }
    }
    ctx->pc = 0x1CECE8u;
label_1cece8:
    // 0x1cece8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1cecec:
    // 0x1cecec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cececu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cecf0:
    // 0x1cecf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CECF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECF0u;
        // 0x1cecf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CECF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CECF8u;
}
