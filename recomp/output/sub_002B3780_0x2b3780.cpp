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

// Function: sub_002B3780
// Address: 0x2b3780 - 0x2b37b8
void sub_002B3780_0x2b3780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3780_0x2b3780");
#endif

    switch (ctx->pc) {
        case 0x2b3798u: goto label_2b3798;
        case 0x2b37a4u: goto label_2b37a4;
        default: break;
    }

    ctx->pc = 0x2b3780u;

    // 0x2b3780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3784: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b378c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b378cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b3790: 0xc0ee40c  jal         func_3B9030
    ctx->pc = 0x2B3790u;
    SET_GPR_U32(ctx, 31, 0x2B3798u);
    ctx->pc = 0x2B3794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3790u;
    // 0x2b3794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9030u, 0x2B3790u, 0x2B3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3798u;
label_2b3798:
    // 0x2b3798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b379c: 0xc0acd6a  jal         func_2B35A8
    ctx->pc = 0x2B379Cu;
    SET_GPR_U32(ctx, 31, 0x2B37A4u);
    ctx->pc = 0x2B37A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B379Cu;
    // 0x2b37a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B35A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B35A8u, 0x2B379Cu, 0x2B37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37A4u;
label_2b37a4:
    // 0x2b37a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b37a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b37a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b37a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b37ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B37ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37ACu;
        // 0x2b37b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B37ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B37B4u;
    // 0x2b37b4: 0x0  nop
    ctx->pc = 0x2b37b4u;
    // NOP
    ctx->pc = 0x2b37b8u;
}
