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

// Function: sub_003DB248
// Address: 0x3db248 - 0x3db270
void sub_003DB248_0x3db248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB248_0x3db248");
#endif

    switch (ctx->pc) {
        case 0x3db258u: goto label_3db258;
        case 0x3db260u: goto label_3db260;
        default: break;
    }

    ctx->pc = 0x3db248u;

    // 0x3db248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db24c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db250: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB250u;
    SET_GPR_U32(ctx, 31, 0x3DB258u);
    ctx->pc = 0x3DB254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB250u;
    // 0x3db254: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB250u, 0x3DB258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB258u;
label_3db258:
    // 0x3db258: 0xc05a7b0  jal         func_169EC0
    ctx->pc = 0x3DB258u;
    SET_GPR_U32(ctx, 31, 0x3DB260u);
    ctx->pc = 0x3DB25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB258u;
    // 0x3db25c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169EC0u, 0x3DB258u, 0x3DB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB260u;
label_3db260:
    // 0x3db260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db264: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB264u;
        // 0x3db268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB26Cu;
    // 0x3db26c: 0x0  nop
    ctx->pc = 0x3db26cu;
    // NOP
    ctx->pc = 0x3db270u;
}
