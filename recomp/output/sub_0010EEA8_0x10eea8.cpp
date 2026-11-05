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

// Function: sub_0010EEA8
// Address: 0x10eea8 - 0x10eed8
void sub_0010EEA8_0x10eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EEA8_0x10eea8");
#endif

    switch (ctx->pc) {
        case 0x10eec8u: goto label_10eec8;
        default: break;
    }

    ctx->pc = 0x10eea8u;

    // 0x10eea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10eea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10eeac: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EEACu;
    {
        const bool branch_taken_0x10eeac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEACu;
        // 0x10eeb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eeac) {
            ctx->pc = 0x10EEC8u;
            goto label_10eec8;
        }
    }
    ctx->pc = 0x10EEB4u;
    // 0x10eeb4: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x10eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x10eeb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EEB8u;
    {
        const bool branch_taken_0x10eeb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEB8u;
        // 0x10eebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eeb8) {
            ctx->pc = 0x10EEC8u;
            goto label_10eec8;
        }
    }
    ctx->pc = 0x10EEC0u;
    // 0x10eec0: 0xc05de0c  jal         func_177830
    ctx->pc = 0x10EEC0u;
    SET_GPR_U32(ctx, 31, 0x10EEC8u);
    ctx->pc = 0x10EEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEC0u;
    // 0x10eec4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177830u, 0x10EEC0u, 0x10EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EEC8u;
label_10eec8:
    // 0x10eec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10eec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eecc: 0x3e00008  jr          $ra
    ctx->pc = 0x10EECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EECCu;
        // 0x10eed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EED4u;
    // 0x10eed4: 0x0  nop
    ctx->pc = 0x10eed4u;
    // NOP
    ctx->pc = 0x10eed8u;
}
