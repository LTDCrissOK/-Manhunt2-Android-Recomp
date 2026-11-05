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

// Function: sub_00399710
// Address: 0x399710 - 0x399758
void sub_00399710_0x399710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399710_0x399710");
#endif

    switch (ctx->pc) {
        case 0x399738u: goto label_399738;
        case 0x399748u: goto label_399748;
        default: break;
    }

    ctx->pc = 0x399710u;

    // 0x399710: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x399710u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x399714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39971c: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x39971cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x399720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x399724: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x399724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399728: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x399728u;
    {
        const bool branch_taken_0x399728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399728u;
        // 0x39972c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399728) {
            ctx->pc = 0x399740u;
            goto label_399740;
        }
    }
    ctx->pc = 0x399730u;
    // 0x399730: 0xc0e6540  jal         func_399500
    ctx->pc = 0x399730u;
    SET_GPR_U32(ctx, 31, 0x399738u);
    ctx->pc = 0x399734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399730u;
    // 0x399734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399500u, 0x399730u, 0x399738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399738u;
label_399738:
    // 0x399738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x399738u;
    {
        const bool branch_taken_0x399738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399738u;
        // 0x39973c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399738) {
            ctx->pc = 0x39974Cu;
            goto label_39974c;
        }
    }
    ctx->pc = 0x399740u;
label_399740:
    // 0x399740: 0xc0e657a  jal         func_3995E8
    ctx->pc = 0x399740u;
    SET_GPR_U32(ctx, 31, 0x399748u);
    ctx->pc = 0x399744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399740u;
    // 0x399744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3995E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3995E8u, 0x399740u, 0x399748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399748u;
label_399748:
    // 0x399748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39974c:
    // 0x39974c: 0x3e00008  jr          $ra
    ctx->pc = 0x39974Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39974Cu;
        // 0x399750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39974Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399754u;
    // 0x399754: 0x0  nop
    ctx->pc = 0x399754u;
    // NOP
    ctx->pc = 0x399758u;
}
