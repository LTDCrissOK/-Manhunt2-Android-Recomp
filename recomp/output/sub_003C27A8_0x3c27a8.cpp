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

// Function: sub_003C27A8
// Address: 0x3c27a8 - 0x3c27e0
void sub_003C27A8_0x3c27a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C27A8_0x3c27a8");
#endif

    switch (ctx->pc) {
        case 0x3c27c8u: goto label_3c27c8;
        default: break;
    }

    ctx->pc = 0x3c27a8u;

    // 0x3c27a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c27a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c27ac: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c27acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3c27b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c27b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c27b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3c27b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c27b8: 0x8c64cddc  lw          $a0, -0x3224($v1)
    ctx->pc = 0x3c27b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c27bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c27bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c27c0: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C27C0u;
    SET_GPR_U32(ctx, 31, 0x3C27C8u);
    ctx->pc = 0x3C27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C27C0u;
    // 0x3c27c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C27C0u, 0x3C27C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C27C8u;
label_3c27c8:
    // 0x3c27c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c27c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c27cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3C27CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27CCu;
        // 0x3c27d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C27CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C27D4u;
    // 0x3c27d4: 0x0  nop
    ctx->pc = 0x3c27d4u;
    // NOP
    // 0x3c27d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3c27d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3c27dc: 0x0  nop
    ctx->pc = 0x3c27dcu;
    // NOP
    ctx->pc = 0x3c27e0u;
}
