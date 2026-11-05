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

// Function: sub_0030D848
// Address: 0x30d848 - 0x30d8b8
void sub_0030D848_0x30d848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D848_0x30d848");
#endif

    switch (ctx->pc) {
        case 0x30d858u: goto label_30d858;
        case 0x30d878u: goto label_30d878;
        default: break;
    }

    ctx->pc = 0x30d848u;

    // 0x30d848: 0x248b008c  addiu       $t3, $a0, 0x8C
    ctx->pc = 0x30d848u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x30d84c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d84cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d850: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30d850u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d854: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x30d854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_30d858:
    // 0x30d858: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x30d858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30d85c: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30D85Cu;
    {
        const bool branch_taken_0x30d85c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D85Cu;
        // 0x30d860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d85c) {
            ctx->pc = 0x30D898u;
            goto label_30d898;
        }
    }
    ctx->pc = 0x30D864u;
    // 0x30d864: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x30d864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x30d868: 0x16a1021  addu        $v0, $t3, $t2
    ctx->pc = 0x30d868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x30d86c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x30d86cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30d870: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x30d870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x30d874: 0x0  nop
    ctx->pc = 0x30d874u;
    // NOP
label_30d878:
    // 0x30d878: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d87c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D87Cu;
    {
        const bool branch_taken_0x30d87c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D87Cu;
        // 0x30d880: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d87c) {
            ctx->pc = 0x30D88Cu;
            goto label_30d88c;
        }
    }
    ctx->pc = 0x30D884u;
    // 0x30d884: 0x3e00008  jr          $ra
    ctx->pc = 0x30D884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D884u;
        // 0x30d888: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D88Cu;
label_30d88c:
    // 0x30d88c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x30d88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x30d890: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30D890u;
    {
        const bool branch_taken_0x30d890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D890u;
        // 0x30d894: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d890) {
            ctx->pc = 0x30D878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d878;
        }
    }
    ctx->pc = 0x30D898u;
label_30d898:
    // 0x30d898: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x30d898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30d89c: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x30d89cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x30d8a0: 0x29220045  slti        $v0, $t1, 0x45
    ctx->pc = 0x30d8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)69) ? 1 : 0);
    // 0x30d8a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x30D8A4u;
    {
        const bool branch_taken_0x30d8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8A4u;
        // 0x30d8a8: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8a4) {
            ctx->pc = 0x30D858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d858;
        }
    }
    ctx->pc = 0x30D8ACu;
    // 0x30d8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x30D8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8ACu;
        // 0x30d8b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D8B4u;
    // 0x30d8b4: 0x0  nop
    ctx->pc = 0x30d8b4u;
    // NOP
    ctx->pc = 0x30d8b8u;
}
