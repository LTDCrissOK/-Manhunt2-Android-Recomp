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

// Function: sub_0014B398
// Address: 0x14b398 - 0x14b3f8
void sub_0014B398_0x14b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B398_0x14b398");
#endif

    switch (ctx->pc) {
        case 0x14b3bcu: goto label_14b3bc;
        case 0x14b3ccu: goto label_14b3cc;
        case 0x14b3d8u: goto label_14b3d8;
        case 0x14b3e8u: goto label_14b3e8;
        default: break;
    }

    ctx->pc = 0x14b398u;

    // 0x14b398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b39c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14b3a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14b3a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3a8: 0x8e020598  lw          $v0, 0x598($s0)
    ctx->pc = 0x14b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x14b3ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14B3ACu;
    {
        const bool branch_taken_0x14b3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3ACu;
        // 0x14b3b0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3ac) {
            ctx->pc = 0x14B3E8u;
            goto label_14b3e8;
        }
    }
    ctx->pc = 0x14B3B4u;
    // 0x14b3b4: 0xc052cc4  jal         func_14B310
    ctx->pc = 0x14B3B4u;
    SET_GPR_U32(ctx, 31, 0x14B3BCu);
    ctx->pc = 0x14B310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B310u, 0x14B3B4u, 0x14B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3BCu;
label_14b3bc:
    // 0x14b3bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14B3BCu;
    {
        const bool branch_taken_0x14b3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b3bc) {
            ctx->pc = 0x14B3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B3BCu;
            // 0x14b3c0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B3ECu;
            goto label_14b3ec;
        }
    }
    ctx->pc = 0x14B3C4u;
    // 0x14b3c4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14B3C4u;
    SET_GPR_U32(ctx, 31, 0x14B3CCu);
    ctx->pc = 0x14B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3C4u;
    // 0x14b3c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14B3C4u, 0x14B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3CCu;
label_14b3cc:
    // 0x14b3cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3d0: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14B3D0u;
    SET_GPR_U32(ctx, 31, 0x14B3D8u);
    ctx->pc = 0x14B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3D0u;
    // 0x14b3d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14B3D0u, 0x14B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3D8u;
label_14b3d8:
    // 0x14b3d8: 0xae020598  sw          $v0, 0x598($s0)
    ctx->pc = 0x14b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 2));
    // 0x14b3dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3e0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14B3E0u;
    SET_GPR_U32(ctx, 31, 0x14B3E8u);
    ctx->pc = 0x14B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3E0u;
    // 0x14b3e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14B3E0u, 0x14B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3E8u;
label_14b3e8:
    // 0x14b3e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14b3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14b3ec:
    // 0x14b3ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14b3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3F0u;
        // 0x14b3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B3F8u;
}
