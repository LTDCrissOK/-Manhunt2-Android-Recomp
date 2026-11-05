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

// Function: sub_00159550
// Address: 0x159550 - 0x1595a0
void sub_00159550_0x159550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159550_0x159550");
#endif

    switch (ctx->pc) {
        case 0x159568u: goto label_159568;
        case 0x159580u: goto label_159580;
        case 0x159590u: goto label_159590;
        default: break;
    }

    ctx->pc = 0x159550u;

    // 0x159550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159554: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x159554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x159558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15955c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x15955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x159560: 0xc04f43a  jal         func_13D0E8
    ctx->pc = 0x159560u;
    SET_GPR_U32(ctx, 31, 0x159568u);
    ctx->pc = 0x159564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159560u;
    // 0x159564: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0E8u, 0x159560u, 0x159568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159568u;
label_159568:
    // 0x159568: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x159568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15956c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x159570: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159570u;
    {
        const bool branch_taken_0x159570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x159570) {
            ctx->pc = 0x159588u;
            goto label_159588;
        }
    }
    ctx->pc = 0x159578u;
    // 0x159578: 0xc056568  jal         func_1595A0
    ctx->pc = 0x159578u;
    SET_GPR_U32(ctx, 31, 0x159580u);
    ctx->pc = 0x15957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159578u;
    // 0x15957c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595A0u, 0x159578u, 0x159580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159580u;
label_159580:
    // 0x159580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x159580u;
    {
        const bool branch_taken_0x159580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159580u;
        // 0x159584: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159580) {
            ctx->pc = 0x159594u;
            goto label_159594;
        }
    }
    ctx->pc = 0x159588u;
label_159588:
    // 0x159588: 0xc0565d8  jal         func_159760
    ctx->pc = 0x159588u;
    SET_GPR_U32(ctx, 31, 0x159590u);
    ctx->pc = 0x15958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159588u;
    // 0x15958c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159760u, 0x159588u, 0x159590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159590u;
label_159590:
    // 0x159590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159594:
    // 0x159594: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x159594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159598: 0x3e00008  jr          $ra
    ctx->pc = 0x159598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159598u;
        // 0x15959c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1595A0u;
}
