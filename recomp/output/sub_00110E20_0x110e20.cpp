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

// Function: sub_00110E20
// Address: 0x110e20 - 0x110e50
void sub_00110E20_0x110e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110E20_0x110e20");
#endif

    switch (ctx->pc) {
        case 0x110e3cu: goto label_110e3c;
        default: break;
    }

    ctx->pc = 0x110e20u;

    // 0x110e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110e28: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110e2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110E2Cu;
    {
        const bool branch_taken_0x110e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E2Cu;
        // 0x110e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e2c) {
            ctx->pc = 0x110E44u;
            goto label_110e44;
        }
    }
    ctx->pc = 0x110E34u;
    // 0x110e34: 0xc05a9da  jal         func_16A768
    ctx->pc = 0x110E34u;
    SET_GPR_U32(ctx, 31, 0x110E3Cu);
    ctx->pc = 0x16A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A768u, 0x110E34u, 0x110E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E3Cu;
label_110e3c:
    // 0x110e3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110E3Cu;
    {
        const bool branch_taken_0x110e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E3Cu;
        // 0x110e40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e3c) {
            ctx->pc = 0x110E48u;
            goto label_110e48;
        }
    }
    ctx->pc = 0x110E44u;
label_110e44:
    // 0x110e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110e48:
    // 0x110e48: 0x3e00008  jr          $ra
    ctx->pc = 0x110E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E48u;
        // 0x110e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110E50u;
}
