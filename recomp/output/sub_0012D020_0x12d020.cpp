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

// Function: sub_0012D020
// Address: 0x12d020 - 0x12d078
void sub_0012D020_0x12d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D020_0x12d020");
#endif

    switch (ctx->pc) {
        case 0x12d048u: goto label_12d048;
        case 0x12d06cu: goto label_12d06c;
        default: break;
    }

    ctx->pc = 0x12d020u;

    // 0x12d020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d024: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12d028: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12D028u;
    {
        const bool branch_taken_0x12d028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D028u;
        // 0x12d02c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d028) {
            ctx->pc = 0x12D06Cu;
            goto label_12d06c;
        }
    }
    ctx->pc = 0x12D030u;
    // 0x12d030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d034: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12d034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12d038: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x12d038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x12d03c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d040: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12d040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x12d044: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x12d044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_12d048:
    // 0x12d048: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x12d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12d04c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12d050: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x12d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12d054: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x12d054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12d058: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x12d058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12d05c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D05Cu;
    {
        const bool branch_taken_0x12d05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D05Cu;
        // 0x12d060: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d05c) {
            ctx->pc = 0x12D048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d048;
        }
    }
    ctx->pc = 0x12D064u;
    // 0x12d064: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x12D064u;
    SET_GPR_U32(ctx, 31, 0x12D06Cu);
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x12D064u, 0x12D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D06Cu;
label_12d06c:
    // 0x12d06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d070: 0x3e00008  jr          $ra
    ctx->pc = 0x12D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D070u;
        // 0x12d074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D078u;
}
