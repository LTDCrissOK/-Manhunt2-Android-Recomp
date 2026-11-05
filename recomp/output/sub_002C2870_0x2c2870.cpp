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

// Function: sub_002C2870
// Address: 0x2c2870 - 0x2c28d0
void sub_002C2870_0x2c2870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2870_0x2c2870");
#endif

    switch (ctx->pc) {
        case 0x2c289cu: goto label_2c289c;
        case 0x2c28b4u: goto label_2c28b4;
        default: break;
    }

    ctx->pc = 0x2c2870u;

    // 0x2c2870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c2874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c2878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c287c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c287cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c2880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c2884: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c2884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2888: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c2888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c288c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c288cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c2894: 0xc0b0b82  jal         func_2C2E08
    ctx->pc = 0x2C2894u;
    SET_GPR_U32(ctx, 31, 0x2C289Cu);
    ctx->pc = 0x2C2898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2894u;
    // 0x2c2898: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E08u, 0x2C2894u, 0x2C289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C289Cu;
label_2c289c:
    // 0x2c289c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c28a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c28a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28a8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c28a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28ac: 0xc0b0a4e  jal         func_2C2938
    ctx->pc = 0x2C28ACu;
    SET_GPR_U32(ctx, 31, 0x2C28B4u);
    ctx->pc = 0x2C28B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C28ACu;
    // 0x2c28b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2938u, 0x2C28ACu, 0x2C28B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28B4u;
label_2c28b4:
    // 0x2c28b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c28b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c28b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c28b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c28bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c28bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c28c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c28c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c28c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c28c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c28c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C28C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28C8u;
        // 0x2c28cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C28C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C28D0u;
}
