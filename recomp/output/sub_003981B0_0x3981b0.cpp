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

// Function: sub_003981B0
// Address: 0x3981b0 - 0x3981e0
void sub_003981B0_0x3981b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003981B0_0x3981b0");
#endif

    switch (ctx->pc) {
        case 0x3981c8u: goto label_3981c8;
        default: break;
    }

    ctx->pc = 0x3981b0u;

    // 0x3981b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3981b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3981b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3981b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3981b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3981b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3981bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3981bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3981c0: 0xc0eb934  jal         func_3AE4D0
    ctx->pc = 0x3981C0u;
    SET_GPR_U32(ctx, 31, 0x3981C8u);
    ctx->pc = 0x3981C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3981C0u;
    // 0x3981c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE4D0u, 0x3981C0u, 0x3981C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3981C8u;
label_3981c8:
    // 0x3981c8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3981c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3981cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3981ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3981d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3981d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3981d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3981D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3981D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981D4u;
        // 0x3981d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3981D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3981DCu;
    // 0x3981dc: 0x0  nop
    ctx->pc = 0x3981dcu;
    // NOP
    ctx->pc = 0x3981e0u;
}
