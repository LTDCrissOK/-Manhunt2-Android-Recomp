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

// Function: sub_00268E08
// Address: 0x268e08 - 0x268e38
void sub_00268E08_0x268e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268E08_0x268e08");
#endif

    switch (ctx->pc) {
        case 0x268e2cu: goto label_268e2c;
        default: break;
    }

    ctx->pc = 0x268e08u;

    // 0x268e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x268e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x268e0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x268e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x268e10: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x268E10u;
    {
        const bool branch_taken_0x268e10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x268E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E10u;
        // 0x268e14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e10) {
            ctx->pc = 0x268E2Cu;
            goto label_268e2c;
        }
    }
    ctx->pc = 0x268E18u;
    // 0x268e18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268E18u;
    {
        const bool branch_taken_0x268e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E18u;
        // 0x268e1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e18) {
            ctx->pc = 0x268E30u;
            goto label_268e30;
        }
    }
    ctx->pc = 0x268E20u;
    // 0x268e20: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x268e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x268e24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x268E24u;
    SET_GPR_U32(ctx, 31, 0x268E2Cu);
    ctx->pc = 0x268E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E24u;
    // 0x268e28: 0x248445c0  addiu       $a0, $a0, 0x45C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x268E24u, 0x268E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E2Cu;
label_268e2c:
    // 0x268e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_268e30:
    // 0x268e30: 0x3e00008  jr          $ra
    ctx->pc = 0x268E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E30u;
        // 0x268e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268E38u;
}
