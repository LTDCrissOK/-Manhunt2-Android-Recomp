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

// Function: sub_0016E7B0
// Address: 0x16e7b0 - 0x16e7e8
void sub_0016E7B0_0x16e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E7B0_0x16e7b0");
#endif

    switch (ctx->pc) {
        case 0x16e7c4u: goto label_16e7c4;
        case 0x16e7ccu: goto label_16e7cc;
        case 0x16e7d4u: goto label_16e7d4;
        default: break;
    }

    ctx->pc = 0x16e7b0u;

    // 0x16e7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e7b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e7b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e7bc: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E7BCu;
    SET_GPR_U32(ctx, 31, 0x16E7C4u);
    ctx->pc = 0x16E7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7BCu;
    // 0x16e7c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E7BCu, 0x16E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7C4u;
label_16e7c4:
    // 0x16e7c4: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E7C4u;
    SET_GPR_U32(ctx, 31, 0x16E7CCu);
    ctx->pc = 0x16E7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7C4u;
    // 0x16e7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E7C4u, 0x16E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7CCu;
label_16e7cc:
    // 0x16e7cc: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E7CCu;
    SET_GPR_U32(ctx, 31, 0x16E7D4u);
    ctx->pc = 0x16E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7CCu;
    // 0x16e7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16E7CCu, 0x16E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7D4u;
label_16e7d4:
    // 0x16e7d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e7d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x16E7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7DCu;
        // 0x16e7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E7E4u;
    // 0x16e7e4: 0x0  nop
    ctx->pc = 0x16e7e4u;
    // NOP
    ctx->pc = 0x16e7e8u;
}
