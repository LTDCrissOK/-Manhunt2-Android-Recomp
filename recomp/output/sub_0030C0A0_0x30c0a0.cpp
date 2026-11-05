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

// Function: sub_0030C0A0
// Address: 0x30c0a0 - 0x30c0d0
void sub_0030C0A0_0x30c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C0A0_0x30c0a0");
#endif

    switch (ctx->pc) {
        case 0x30c0c0u: goto label_30c0c0;
        default: break;
    }

    ctx->pc = 0x30c0a0u;

    // 0x30c0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c0a4: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c0ac: 0x24a5c038  addiu       $a1, $a1, -0x3FC8
    ctx->pc = 0x30c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950968));
    // 0x30c0b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30c0b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30c0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0b8: 0xc0c4898  jal         func_312260
    ctx->pc = 0x30C0B8u;
    SET_GPR_U32(ctx, 31, 0x30C0C0u);
    ctx->pc = 0x30C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C0B8u;
    // 0x30c0bc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x30C0B8u, 0x30C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C0C0u;
label_30c0c0:
    // 0x30c0c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x30c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c0c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x30C0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0C8u;
        // 0x30c0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C0D0u;
}
