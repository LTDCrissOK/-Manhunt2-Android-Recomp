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

// Function: sub_003AC710
// Address: 0x3ac710 - 0x3ac788
void sub_003AC710_0x3ac710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC710_0x3ac710");
#endif

    switch (ctx->pc) {
        case 0x3ac744u: goto label_3ac744;
        case 0x3ac764u: goto label_3ac764;
        default: break;
    }

    ctx->pc = 0x3ac710u;

    // 0x3ac710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ac710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ac714: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3ac714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3ac718: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ac718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ac71c: 0x24632794  addiu       $v1, $v1, 0x2794
    ctx->pc = 0x3ac71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10132));
    // 0x3ac720: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ac720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ac724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ac724u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x422794u));
    // 0x3ac728: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ac728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ac72c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AC72Cu;
    {
        const bool branch_taken_0x3ac72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC72Cu;
        // 0x3ac730: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac72c) {
            ctx->pc = 0x3AC778u;
            goto label_3ac778;
        }
    }
    ctx->pc = 0x3AC734u;
    // 0x3ac734: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3ac734u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
    // 0x3ac738: 0x26102a28  addiu       $s0, $s0, 0x2A28
    ctx->pc = 0x3ac738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10792));
    // 0x3ac73c: 0xc0e8eb2  jal         func_3A3AC8
    ctx->pc = 0x3AC73Cu;
    SET_GPR_U32(ctx, 31, 0x3AC744u);
    ctx->pc = 0x3AC740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC73Cu;
    // 0x3ac740: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3AC8u, 0x3AC73Cu, 0x3AC744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC744u;
label_3ac744:
    // 0x3ac744: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3ac744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3ac748: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ac748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3ac74c: 0x2450279c  addiu       $s0, $v0, 0x279C
    ctx->pc = 0x3ac74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10140));
    // 0x3ac750: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ac750u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42279Cu));
    // 0x3ac754: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC754u;
    {
        const bool branch_taken_0x3ac754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC754u;
        // 0x3ac758: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac754) {
            ctx->pc = 0x3AC768u;
            goto label_3ac768;
        }
    }
    ctx->pc = 0x3AC75Cu;
    // 0x3ac75c: 0xc0f3e3a  jal         func_3CF8E8
    ctx->pc = 0x3AC75Cu;
    SET_GPR_U32(ctx, 31, 0x3AC764u);
    ctx->pc = 0x3CF8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF8E8u, 0x3AC75Cu, 0x3AC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC764u;
label_3ac764:
    // 0x3ac764: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3ac764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3ac768:
    // 0x3ac768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ac768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac76c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ac76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ac770: 0x80e8f6c  j           func_3A3DB0
    ctx->pc = 0x3AC770u;
    ctx->pc = 0x3AC774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC770u;
    // 0x3ac774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3DB0u;
    sub_003A3DB0_0x3a3db0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AC778u;
label_3ac778:
    // 0x3ac778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ac778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac77c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ac77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ac780: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC780u;
        // 0x3ac784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC788u;
}
