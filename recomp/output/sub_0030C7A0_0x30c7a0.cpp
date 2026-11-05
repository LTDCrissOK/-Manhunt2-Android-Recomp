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

// Function: sub_0030C7A0
// Address: 0x30c7a0 - 0x30c7d0
void sub_0030C7A0_0x30c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C7A0_0x30c7a0");
#endif

    switch (ctx->pc) {
        case 0x30c7b8u: goto label_30c7b8;
        case 0x30c7c0u: goto label_30c7c0;
        default: break;
    }

    ctx->pc = 0x30c7a0u;

    // 0x30c7a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c7a4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x30c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x30c7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c7ac: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x30c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x30c7b0: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x30C7B0u;
    SET_GPR_U32(ctx, 31, 0x30C7B8u);
    ctx->pc = 0x30C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7B0u;
    // 0x30c7b4: 0x24847eb8  addiu       $a0, $a0, 0x7EB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x30C7B0u, 0x30C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7B8u;
label_30c7b8:
    // 0x30c7b8: 0xc0c2e50  jal         func_30B940
    ctx->pc = 0x30C7B8u;
    SET_GPR_U32(ctx, 31, 0x30C7C0u);
    ctx->pc = 0x30C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7B8u;
    // 0x30c7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B940u, 0x30C7B8u, 0x30C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7C0u;
label_30c7c0:
    // 0x30c7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x30C7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7C4u;
        // 0x30c7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C7CCu;
    // 0x30c7cc: 0x0  nop
    ctx->pc = 0x30c7ccu;
    // NOP
    ctx->pc = 0x30c7d0u;
}
