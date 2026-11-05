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

// Function: sub_00192808
// Address: 0x192808 - 0x192888
void sub_00192808_0x192808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192808_0x192808");
#endif

    switch (ctx->pc) {
        case 0x192830u: goto label_192830;
        default: break;
    }

    ctx->pc = 0x192808u;

    // 0x192808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19280c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192814: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x192814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x192818: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x192818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19281c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x192820: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x192820u;
    {
        const bool branch_taken_0x192820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x192824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192820u;
        // 0x192824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192820) {
            ctx->pc = 0x192874u;
            goto label_192874;
        }
    }
    ctx->pc = 0x192828u;
    // 0x192828: 0xc061a12  jal         func_186848
    ctx->pc = 0x192828u;
    SET_GPR_U32(ctx, 31, 0x192830u);
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x192828u, 0x192830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192830u;
label_192830:
    // 0x192830: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x192830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x192834: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x192834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x192838: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x192838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x19283c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19283Cu;
    {
        const bool branch_taken_0x19283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19283Cu;
        // 0x192840: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19283c) {
            ctx->pc = 0x192848u;
            goto label_192848;
        }
    }
    ctx->pc = 0x192844u;
    // 0x192844: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x192844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_192848:
    // 0x192848: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x192848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19284c: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x19284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x192850: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x192850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x192854: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x192854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x192858: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x192858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x19285c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x19285Cu;
    {
        const bool branch_taken_0x19285c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19285c) {
            ctx->pc = 0x192860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19285Cu;
            // 0x192860: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192868u;
            goto label_192868;
        }
    }
    ctx->pc = 0x192864u;
    // 0x192864: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x192864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_192868:
    // 0x192868: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x192868u;
    {
        const bool branch_taken_0x192868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192868u;
        // 0x19286c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192868) {
            ctx->pc = 0x192874u;
            goto label_192874;
        }
    }
    ctx->pc = 0x192870u;
    // 0x192870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192874:
    // 0x192874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192878: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x192878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19287c: 0x3e00008  jr          $ra
    ctx->pc = 0x19287Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19287Cu;
        // 0x192880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19287Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192884u;
    // 0x192884: 0x0  nop
    ctx->pc = 0x192884u;
    // NOP
    ctx->pc = 0x192888u;
}
