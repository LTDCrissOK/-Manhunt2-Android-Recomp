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

// Function: sub_00133B98
// Address: 0x133b98 - 0x133bf0
void sub_00133B98_0x133b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133B98_0x133b98");
#endif

    switch (ctx->pc) {
        case 0x133bc4u: goto label_133bc4;
        case 0x133bd4u: goto label_133bd4;
        default: break;
    }

    ctx->pc = 0x133b98u;

    // 0x133b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x133ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133bac: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x133bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x133bb0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x133bb4: 0x10b10009  beq         $a1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x133BB4u;
    {
        const bool branch_taken_0x133bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x133BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BB4u;
        // 0x133bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133bb4) {
            ctx->pc = 0x133BDCu;
            goto label_133bdc;
        }
    }
    ctx->pc = 0x133BBCu;
    // 0x133bbc: 0xc04c3e6  jal         func_130F98
    ctx->pc = 0x133BBCu;
    SET_GPR_U32(ctx, 31, 0x133BC4u);
    ctx->pc = 0x133BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BBCu;
    // 0x133bc0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130F98u, 0x133BBCu, 0x133BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BC4u;
label_133bc4:
    // 0x133bc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133BC4u;
    {
        const bool branch_taken_0x133bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BC4u;
        // 0x133bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133bc4) {
            ctx->pc = 0x133BDCu;
            goto label_133bdc;
        }
    }
    ctx->pc = 0x133BCCu;
    // 0x133bcc: 0xc04b3f8  jal         func_12CFE0
    ctx->pc = 0x133BCCu;
    SET_GPR_U32(ctx, 31, 0x133BD4u);
    ctx->pc = 0x133BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BCCu;
    // 0x133bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFE0u, 0x133BCCu, 0x133BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BD4u;
label_133bd4:
    // 0x133bd4: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x133bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
    // 0x133bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133bdc:
    // 0x133bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133be0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133be8: 0x3e00008  jr          $ra
    ctx->pc = 0x133BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BE8u;
        // 0x133bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133BF0u;
}
