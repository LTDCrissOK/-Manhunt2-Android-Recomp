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

// Function: sub_00352230
// Address: 0x352230 - 0x352250
void sub_00352230_0x352230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352230_0x352230");
#endif

    switch (ctx->pc) {
        case 0x352244u: goto label_352244;
        default: break;
    }

    ctx->pc = 0x352230u;

    // 0x352230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x352230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x352234: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x352234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35223c: 0xc0d486e  jal         func_3521B8
    ctx->pc = 0x35223Cu;
    SET_GPR_U32(ctx, 31, 0x352244u);
    ctx->pc = 0x352240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35223Cu;
    // 0x352240: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3521B8u, 0x35223Cu, 0x352244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352244u;
label_352244:
    // 0x352244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352248: 0x3e00008  jr          $ra
    ctx->pc = 0x352248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352248u;
        // 0x35224c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352250u;
}
