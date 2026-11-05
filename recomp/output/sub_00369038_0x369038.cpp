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

// Function: sub_00369038
// Address: 0x369038 - 0x369058
void sub_00369038_0x369038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369038_0x369038");
#endif

    switch (ctx->pc) {
        case 0x36904cu: goto label_36904c;
        default: break;
    }

    ctx->pc = 0x369038u;

    // 0x369038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36903c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36903cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x369040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x369044: 0xc0da3fe  jal         func_368FF8
    ctx->pc = 0x369044u;
    SET_GPR_U32(ctx, 31, 0x36904Cu);
    ctx->pc = 0x369048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369044u;
    // 0x369048: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FF8u, 0x369044u, 0x36904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36904Cu;
label_36904c:
    // 0x36904c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36904cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369050: 0x3e00008  jr          $ra
    ctx->pc = 0x369050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369050u;
        // 0x369054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369058u;
}
