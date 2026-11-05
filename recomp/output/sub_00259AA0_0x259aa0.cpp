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

// Function: sub_00259AA0
// Address: 0x259aa0 - 0x259ad0
void sub_00259AA0_0x259aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259AA0_0x259aa0");
#endif

    switch (ctx->pc) {
        case 0x259abcu: goto label_259abc;
        default: break;
    }

    ctx->pc = 0x259aa0u;

    // 0x259aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259aa8: 0x8c840234  lw          $a0, 0x234($a0)
    ctx->pc = 0x259aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x259aac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259AACu;
    {
        const bool branch_taken_0x259aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x259AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AACu;
        // 0x259ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259aac) {
            ctx->pc = 0x259AC0u;
            goto label_259ac0;
        }
    }
    ctx->pc = 0x259AB4u;
    // 0x259ab4: 0xc0d5ec6  jal         func_357B18
    ctx->pc = 0x259AB4u;
    SET_GPR_U32(ctx, 31, 0x259ABCu);
    ctx->pc = 0x259AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259AB4u;
    // 0x259ab8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357B18u, 0x259AB4u, 0x259ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259ABCu;
label_259abc:
    // 0x259abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259ac0:
    // 0x259ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x259AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AC4u;
        // 0x259ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259ACCu;
    // 0x259acc: 0x0  nop
    ctx->pc = 0x259accu;
    // NOP
    ctx->pc = 0x259ad0u;
}
