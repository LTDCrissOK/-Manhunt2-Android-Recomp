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

// Function: sub_0028FA90
// Address: 0x28fa90 - 0x28fad8
void sub_0028FA90_0x28fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FA90_0x28fa90");
#endif

    switch (ctx->pc) {
        case 0x28fab0u: goto label_28fab0;
        case 0x28fabcu: goto label_28fabc;
        case 0x28fac8u: goto label_28fac8;
        default: break;
    }

    ctx->pc = 0x28fa90u;

    // 0x28fa90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28fa94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28fa98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28fa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28fa9c: 0x24a5b350  addiu       $a1, $a1, -0x4CB0
    ctx->pc = 0x28fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947664));
    // 0x28faa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28faa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28faa4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28faa8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x28FAA8u;
    SET_GPR_U32(ctx, 31, 0x28FAB0u);
    ctx->pc = 0x28FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAA8u;
    // 0x28faac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x28FAA8u, 0x28FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAB0u;
label_28fab0:
    // 0x28fab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fab4: 0xc0a789c  jal         func_29E270
    ctx->pc = 0x28FAB4u;
    SET_GPR_U32(ctx, 31, 0x28FABCu);
    ctx->pc = 0x28FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAB4u;
    // 0x28fab8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x28FAB4u, 0x28FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FABCu;
label_28fabc:
    // 0x28fabc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28fabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fac0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x28FAC0u;
    SET_GPR_U32(ctx, 31, 0x28FAC8u);
    ctx->pc = 0x28FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAC0u;
    // 0x28fac4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x28FAC0u, 0x28FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAC8u;
label_28fac8:
    // 0x28fac8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28fac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28facc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28faccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28fad0: 0x3e00008  jr          $ra
    ctx->pc = 0x28FAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAD0u;
        // 0x28fad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FAD8u;
}
