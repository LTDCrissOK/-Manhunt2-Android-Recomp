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

// Function: sub_003346F8
// Address: 0x3346f8 - 0x334758
void sub_003346F8_0x3346f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003346F8_0x3346f8");
#endif

    switch (ctx->pc) {
        case 0x334718u: goto label_334718;
        default: break;
    }

    ctx->pc = 0x3346f8u;

    // 0x3346f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3346f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3346fc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3346fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x334700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334704: 0x24a55ba0  addiu       $a1, $a1, 0x5BA0
    ctx->pc = 0x334704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23456));
    // 0x334708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33470c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x334710: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x334710u;
    SET_GPR_U32(ctx, 31, 0x334718u);
    ctx->pc = 0x334714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334710u;
    // 0x334714: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x334710u, 0x334718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334718u;
label_334718:
    // 0x334718: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x334718u;
    {
        const bool branch_taken_0x334718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334718u;
        // 0x33471c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334718) {
            ctx->pc = 0x334744u;
            goto label_334744;
        }
    }
    ctx->pc = 0x334720u;
    // 0x334720: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x334720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x334724: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334728: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334728u;
    {
        const bool branch_taken_0x334728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334728u;
        // 0x33472c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334728) {
            ctx->pc = 0x334744u;
            goto label_334744;
        }
    }
    ctx->pc = 0x334730u;
    // 0x334730: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x334730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x334734: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x334734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x334738: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334738u;
    {
        const bool branch_taken_0x334738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334738u;
        // 0x33473c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334738) {
            ctx->pc = 0x334744u;
            goto label_334744;
        }
    }
    ctx->pc = 0x334740u;
    // 0x334740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334744:
    // 0x334744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334748: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x334748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33474c: 0x3e00008  jr          $ra
    ctx->pc = 0x33474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33474Cu;
        // 0x334750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334754u;
    // 0x334754: 0x0  nop
    ctx->pc = 0x334754u;
    // NOP
    ctx->pc = 0x334758u;
}
