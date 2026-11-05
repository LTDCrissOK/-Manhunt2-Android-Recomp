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

// Function: sub_001AB170
// Address: 0x1ab170 - 0x1ab1d0
void sub_001AB170_0x1ab170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB170_0x1ab170");
#endif

    switch (ctx->pc) {
        case 0x1ab1b0u: goto label_1ab1b0;
        case 0x1ab1c0u: goto label_1ab1c0;
        default: break;
    }

    ctx->pc = 0x1ab170u;

    // 0x1ab170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab178: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x1ab178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1ab17c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB17Cu;
    {
        const bool branch_taken_0x1ab17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab17c) {
            ctx->pc = 0x1AB180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB17Cu;
            // 0x1ab180: 0x8c830158  lw          $v1, 0x158($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB190u;
            goto label_1ab190;
        }
    }
    ctx->pc = 0x1AB184u;
    // 0x1ab184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab188: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AB188u;
    {
        const bool branch_taken_0x1ab188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB188u;
        // 0x1ab18c: 0xac820160  sw          $v0, 0x160($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab188) {
            ctx->pc = 0x1AB1C0u;
            goto label_1ab1c0;
        }
    }
    ctx->pc = 0x1AB190u;
label_1ab190:
    // 0x1ab190: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1ab190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ab194: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB194u;
    {
        const bool branch_taken_0x1ab194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB194u;
        // 0x1ab198: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab194) {
            ctx->pc = 0x1AB1A4u;
            goto label_1ab1a4;
        }
    }
    ctx->pc = 0x1AB19Cu;
    // 0x1ab19c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB19Cu;
    {
        const bool branch_taken_0x1ab19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB19Cu;
        // 0x1ab1a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab19c) {
            ctx->pc = 0x1AB1B8u;
            goto label_1ab1b8;
        }
    }
    ctx->pc = 0x1AB1A4u;
label_1ab1a4:
    // 0x1ab1a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab1a8: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB1A8u;
    SET_GPR_U32(ctx, 31, 0x1AB1B0u);
    ctx->pc = 0x1AB1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1A8u;
    // 0x1ab1ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB1A8u, 0x1AB1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1B0u;
label_1ab1b0:
    // 0x1ab1b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB1B0u;
    {
        const bool branch_taken_0x1ab1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1B0u;
        // 0x1ab1b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1b0) {
            ctx->pc = 0x1AB1C4u;
            goto label_1ab1c4;
        }
    }
    ctx->pc = 0x1AB1B8u;
label_1ab1b8:
    // 0x1ab1b8: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB1B8u;
    SET_GPR_U32(ctx, 31, 0x1AB1C0u);
    ctx->pc = 0x1AB1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1B8u;
    // 0x1ab1bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB1B8u, 0x1AB1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1C0u;
label_1ab1c0:
    // 0x1ab1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab1c4:
    // 0x1ab1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1C4u;
        // 0x1ab1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB1CCu;
    // 0x1ab1cc: 0x0  nop
    ctx->pc = 0x1ab1ccu;
    // NOP
    ctx->pc = 0x1ab1d0u;
}
