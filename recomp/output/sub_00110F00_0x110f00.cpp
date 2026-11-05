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

// Function: sub_00110F00
// Address: 0x110f00 - 0x110f30
void sub_00110F00_0x110f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F00_0x110f00");
#endif

    switch (ctx->pc) {
        case 0x110f1cu: goto label_110f1c;
        default: break;
    }

    ctx->pc = 0x110f00u;

    // 0x110f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110f08: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110f0c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110F0Cu;
    {
        const bool branch_taken_0x110f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F0Cu;
        // 0x110f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f0c) {
            ctx->pc = 0x110F24u;
            goto label_110f24;
        }
    }
    ctx->pc = 0x110F14u;
    // 0x110f14: 0xc05aa16  jal         func_16A858
    ctx->pc = 0x110F14u;
    SET_GPR_U32(ctx, 31, 0x110F1Cu);
    ctx->pc = 0x16A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A858u, 0x110F14u, 0x110F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F1Cu;
label_110f1c:
    // 0x110f1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110F1Cu;
    {
        const bool branch_taken_0x110f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F1Cu;
        // 0x110f20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f1c) {
            ctx->pc = 0x110F28u;
            goto label_110f28;
        }
    }
    ctx->pc = 0x110F24u;
label_110f24:
    // 0x110f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110f28:
    // 0x110f28: 0x3e00008  jr          $ra
    ctx->pc = 0x110F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F28u;
        // 0x110f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F30u;
}
