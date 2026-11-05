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

// Function: sub_0019F178
// Address: 0x19f178 - 0x19f198
void sub_0019F178_0x19f178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F178_0x19f178");
#endif

    switch (ctx->pc) {
        case 0x19f18cu: goto label_19f18c;
        default: break;
    }

    ctx->pc = 0x19f178u;

    // 0x19f178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f17c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f184: 0xc067c52  jal         func_19F148
    ctx->pc = 0x19F184u;
    SET_GPR_U32(ctx, 31, 0x19F18Cu);
    ctx->pc = 0x19F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F184u;
    // 0x19f188: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F148u, 0x19F184u, 0x19F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F18Cu;
label_19f18c:
    // 0x19f18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f190: 0x3e00008  jr          $ra
    ctx->pc = 0x19F190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F190u;
        // 0x19f194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F198u;
}
