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

// Function: sub_00192738
// Address: 0x192738 - 0x1927a0
void sub_00192738_0x192738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192738_0x192738");
#endif

    switch (ctx->pc) {
        case 0x19274cu: goto label_19274c;
        default: break;
    }

    ctx->pc = 0x192738u;

    // 0x192738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19273c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19273cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192744: 0xc094f5c  jal         func_253D70
    ctx->pc = 0x192744u;
    SET_GPR_U32(ctx, 31, 0x19274Cu);
    ctx->pc = 0x192748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192744u;
    // 0x192748: 0x8c851004  lw          $a1, 0x1004($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253D70u, 0x192744u, 0x19274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19274Cu;
label_19274c:
    // 0x19274c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192750: 0x3e00008  jr          $ra
    ctx->pc = 0x192750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192750u;
        // 0x192754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192758u;
    // 0x192758: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x192758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19275c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192760: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x192760u;
    {
        const bool branch_taken_0x192760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x192764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192760u;
        // 0x192764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192760) {
            ctx->pc = 0x192794u;
            goto label_192794;
        }
    }
    ctx->pc = 0x192768u;
    // 0x192768: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x192768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x19276c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x192770: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x192770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x192774: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192774u;
    {
        const bool branch_taken_0x192774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192774u;
        // 0x192778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192774) {
            ctx->pc = 0x192794u;
            goto label_192794;
        }
    }
    ctx->pc = 0x19277Cu;
    // 0x19277c: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x19277cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x192780: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x192780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x192784: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x192784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192788: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x192788u;
    {
        const bool branch_taken_0x192788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192788u;
        // 0x19278c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192788) {
            ctx->pc = 0x192794u;
            goto label_192794;
        }
    }
    ctx->pc = 0x192790u;
    // 0x192790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192794:
    // 0x192794: 0x3e00008  jr          $ra
    ctx->pc = 0x192794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19279Cu;
    // 0x19279c: 0x0  nop
    ctx->pc = 0x19279cu;
    // NOP
    ctx->pc = 0x1927a0u;
}
