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

// Function: sub_0030C718
// Address: 0x30c718 - 0x30c740
void sub_0030C718_0x30c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C718_0x30c718");
#endif

    switch (ctx->pc) {
        case 0x30c72cu: goto label_30c72c;
        default: break;
    }

    ctx->pc = 0x30c718u;

    // 0x30c718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c720: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30c720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30c724: 0xc0c23ce  jal         func_308F38
    ctx->pc = 0x30C724u;
    SET_GPR_U32(ctx, 31, 0x30C72Cu);
    ctx->pc = 0x30C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C724u;
    // 0x30c728: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308F38u, 0x30C724u, 0x30C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C72Cu;
label_30c72c:
    // 0x30c72c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30c72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c730: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c738: 0x3e00008  jr          $ra
    ctx->pc = 0x30C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C738u;
        // 0x30c73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C740u;
}
