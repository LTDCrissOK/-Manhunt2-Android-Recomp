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

// Function: sub_0016E6A8
// Address: 0x16e6a8 - 0x16e6e0
void sub_0016E6A8_0x16e6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E6A8_0x16e6a8");
#endif

    switch (ctx->pc) {
        case 0x16e6bcu: goto label_16e6bc;
        case 0x16e6c4u: goto label_16e6c4;
        case 0x16e6ccu: goto label_16e6cc;
        default: break;
    }

    ctx->pc = 0x16e6a8u;

    // 0x16e6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e6ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e6b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e6b4: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E6B4u;
    SET_GPR_U32(ctx, 31, 0x16E6BCu);
    ctx->pc = 0x16E6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6B4u;
    // 0x16e6b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E6B4u, 0x16E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6BCu;
label_16e6bc:
    // 0x16e6bc: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E6BCu;
    SET_GPR_U32(ctx, 31, 0x16E6C4u);
    ctx->pc = 0x16E6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6BCu;
    // 0x16e6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E6BCu, 0x16E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6C4u;
label_16e6c4:
    // 0x16e6c4: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E6C4u;
    SET_GPR_U32(ctx, 31, 0x16E6CCu);
    ctx->pc = 0x16E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6C4u;
    // 0x16e6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16E6C4u, 0x16E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6CCu;
label_16e6cc:
    // 0x16e6cc: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x16e6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x16e6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e6d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6D8u;
        // 0x16e6dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E6E0u;
}
