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

// Function: sub_0039A770
// Address: 0x39a770 - 0x39a7b8
void sub_0039A770_0x39a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A770_0x39a770");
#endif

    switch (ctx->pc) {
        case 0x39a78cu: goto label_39a78c;
        case 0x39a798u: goto label_39a798;
        case 0x39a7a0u: goto label_39a7a0;
        default: break;
    }

    ctx->pc = 0x39a770u;

    // 0x39a770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39a778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a77c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39a780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a784: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x39A784u;
    SET_GPR_U32(ctx, 31, 0x39A78Cu);
    ctx->pc = 0x39A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A784u;
    // 0x39a788: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x39A784u, 0x39A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A78Cu;
label_39a78c:
    // 0x39a78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a790: 0xc0e69ee  jal         func_39A7B8
    ctx->pc = 0x39A790u;
    SET_GPR_U32(ctx, 31, 0x39A798u);
    ctx->pc = 0x39A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A790u;
    // 0x39a794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A7B8u, 0x39A790u, 0x39A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A798u;
label_39a798:
    // 0x39a798: 0xc0e6a78  jal         func_39A9E0
    ctx->pc = 0x39A798u;
    SET_GPR_U32(ctx, 31, 0x39A7A0u);
    ctx->pc = 0x39A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A798u;
    // 0x39a79c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9E0u, 0x39A798u, 0x39A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A7A0u;
label_39a7a0:
    // 0x39a7a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39a7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39a7a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a7a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x39A7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7B0u;
        // 0x39a7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A7B8u;
}
