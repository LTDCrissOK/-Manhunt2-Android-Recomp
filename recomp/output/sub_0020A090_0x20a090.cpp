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

// Function: sub_0020A090
// Address: 0x20a090 - 0x20a0b8
void sub_0020A090_0x20a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A090_0x20a090");
#endif

    switch (ctx->pc) {
        case 0x20a0acu: goto label_20a0ac;
        default: break;
    }

    ctx->pc = 0x20a090u;

    // 0x20a090: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x20a090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x20a094: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a098: 0x8c442b78  lw          $a0, 0x2B78($v0)
    ctx->pc = 0x20a098u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B78u));
    // 0x20a09c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A09Cu;
    {
        const bool branch_taken_0x20a09c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A09Cu;
        // 0x20a0a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a09c) {
            ctx->pc = 0x20A0ACu;
            goto label_20a0ac;
        }
    }
    ctx->pc = 0x20A0A4u;
    // 0x20a0a4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x20A0A4u;
    SET_GPR_U32(ctx, 31, 0x20A0ACu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x20A0A4u, 0x20A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0ACu;
label_20a0ac:
    // 0x20a0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0B0u;
        // 0x20a0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A0B8u;
}
