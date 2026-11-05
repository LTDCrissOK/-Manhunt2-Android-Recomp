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

// Function: sub_0010FF50
// Address: 0x10ff50 - 0x10ffb8
void sub_0010FF50_0x10ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FF50_0x10ff50");
#endif

    switch (ctx->pc) {
        case 0x10ff74u: goto label_10ff74;
        case 0x10ff88u: goto label_10ff88;
        case 0x10ffa0u: goto label_10ffa0;
        default: break;
    }

    ctx->pc = 0x10ff50u;

    // 0x10ff50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ff54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ff58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ff5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ff5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10ff60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ff68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10ff6c: 0xc044eb4  jal         func_113AD0
    ctx->pc = 0x10FF6Cu;
    SET_GPR_U32(ctx, 31, 0x10FF74u);
    ctx->pc = 0x10FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF6Cu;
    // 0x10ff70: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AD0u, 0x10FF6Cu, 0x10FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF74u;
label_10ff74:
    // 0x10ff74: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10FF74u;
    {
        const bool branch_taken_0x10ff74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10ff74) {
            ctx->pc = 0x10FF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FF74u;
            // 0x10ff78: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FF94u;
            goto label_10ff94;
        }
    }
    ctx->pc = 0x10FF7Cu;
    // 0x10ff7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ff7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff80: 0xc044ed2  jal         func_113B48
    ctx->pc = 0x10FF80u;
    SET_GPR_U32(ctx, 31, 0x10FF88u);
    ctx->pc = 0x10FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF80u;
    // 0x10ff84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B48u, 0x10FF80u, 0x10FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF88u;
label_10ff88:
    // 0x10ff88: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FF88u;
    {
        const bool branch_taken_0x10ff88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF88u;
        // 0x10ff8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff88) {
            ctx->pc = 0x10FFA0u;
            goto label_10ffa0;
        }
    }
    ctx->pc = 0x10FF90u;
    // 0x10ff90: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10ff94:
    // 0x10ff94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10ff94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff98: 0xc04cb2a  jal         func_132CA8
    ctx->pc = 0x10FF98u;
    SET_GPR_U32(ctx, 31, 0x10FFA0u);
    ctx->pc = 0x10FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF98u;
    // 0x10ff9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132CA8u, 0x10FF98u, 0x10FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFA0u;
label_10ffa0:
    // 0x10ffa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ffa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ffa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ffa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ffa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ffa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ffac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10ffacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ffb0: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFB0u;
        // 0x10ffb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FFB8u;
}
