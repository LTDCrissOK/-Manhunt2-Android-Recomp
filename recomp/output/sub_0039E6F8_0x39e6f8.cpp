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

// Function: sub_0039E6F8
// Address: 0x39e6f8 - 0x39e760
void sub_0039E6F8_0x39e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E6F8_0x39e6f8");
#endif

    switch (ctx->pc) {
        case 0x39e720u: goto label_39e720;
        case 0x39e734u: goto label_39e734;
        default: break;
    }

    ctx->pc = 0x39e6f8u;

    // 0x39e6f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39e6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e704: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39E704u;
    {
        const bool branch_taken_0x39e704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E704u;
        // 0x39e708: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e704) {
            ctx->pc = 0x39E750u;
            goto label_39e750;
        }
    }
    ctx->pc = 0x39E70Cu;
    // 0x39e70c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39e710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E710u;
    {
        const bool branch_taken_0x39e710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E710u;
        // 0x39e714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e710) {
            ctx->pc = 0x39E720u;
            goto label_39e720;
        }
    }
    ctx->pc = 0x39E718u;
    // 0x39e718: 0xc0ec4ca  jal         func_3B1328
    ctx->pc = 0x39E718u;
    SET_GPR_U32(ctx, 31, 0x39E720u);
    ctx->pc = 0x39E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E718u;
    // 0x39e71c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1328u, 0x39E718u, 0x39E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E720u;
label_39e720:
    // 0x39e720: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39e724: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E724u;
    {
        const bool branch_taken_0x39e724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e724) {
            ctx->pc = 0x39E728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E724u;
            // 0x39e728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E738u;
            goto label_39e738;
        }
    }
    ctx->pc = 0x39E72Cu;
    // 0x39e72c: 0xc0ec6fc  jal         func_3B1BF0
    ctx->pc = 0x39E72Cu;
    SET_GPR_U32(ctx, 31, 0x39E734u);
    ctx->pc = 0x39E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E72Cu;
    // 0x39e730: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1BF0u, 0x39E72Cu, 0x39E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E734u;
label_39e734:
    // 0x39e734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39e738:
    // 0x39e738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e73c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e744: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x39e744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x39e748: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x39E748u;
    ctx->pc = 0x39E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E748u;
    // 0x39e74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x39E750u;
label_39e750:
    // 0x39e750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e754: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e758: 0x3e00008  jr          $ra
    ctx->pc = 0x39E758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E758u;
        // 0x39e75c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E760u;
}
