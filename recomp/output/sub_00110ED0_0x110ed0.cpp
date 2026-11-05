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

// Function: sub_00110ED0
// Address: 0x110ed0 - 0x110f00
void sub_00110ED0_0x110ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110ED0_0x110ed0");
#endif

    switch (ctx->pc) {
        case 0x110eecu: goto label_110eec;
        default: break;
    }

    ctx->pc = 0x110ed0u;

    // 0x110ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110ed8: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110edc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110EDCu;
    {
        const bool branch_taken_0x110edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EDCu;
        // 0x110ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110edc) {
            ctx->pc = 0x110EF4u;
            goto label_110ef4;
        }
    }
    ctx->pc = 0x110EE4u;
    // 0x110ee4: 0xc05aa14  jal         func_16A850
    ctx->pc = 0x110EE4u;
    SET_GPR_U32(ctx, 31, 0x110EECu);
    ctx->pc = 0x16A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A850u, 0x110EE4u, 0x110EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EECu;
label_110eec:
    // 0x110eec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110EECu;
    {
        const bool branch_taken_0x110eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EECu;
        // 0x110ef0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eec) {
            ctx->pc = 0x110EF8u;
            goto label_110ef8;
        }
    }
    ctx->pc = 0x110EF4u;
label_110ef4:
    // 0x110ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110ef8:
    // 0x110ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x110EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EF8u;
        // 0x110efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F00u;
}
