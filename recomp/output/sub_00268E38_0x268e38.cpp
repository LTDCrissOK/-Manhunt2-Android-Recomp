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

// Function: sub_00268E38
// Address: 0x268e38 - 0x268e58
void sub_00268E38_0x268e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268E38_0x268e38");
#endif

    switch (ctx->pc) {
        case 0x268e4cu: goto label_268e4c;
        default: break;
    }

    ctx->pc = 0x268e38u;

    // 0x268e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x268e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x268e3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x268e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268e44: 0xc09a382  jal         func_268E08
    ctx->pc = 0x268E44u;
    SET_GPR_U32(ctx, 31, 0x268E4Cu);
    ctx->pc = 0x268E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E44u;
    // 0x268e48: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x268E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268E08u, 0x268E44u, 0x268E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E4Cu;
label_268e4c:
    // 0x268e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268e50: 0x3e00008  jr          $ra
    ctx->pc = 0x268E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E50u;
        // 0x268e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268E58u;
}
