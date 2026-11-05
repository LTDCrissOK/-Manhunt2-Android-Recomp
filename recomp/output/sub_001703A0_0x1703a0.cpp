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

// Function: sub_001703A0
// Address: 0x1703a0 - 0x1703f0
void sub_001703A0_0x1703a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001703A0_0x1703a0");
#endif

    switch (ctx->pc) {
        case 0x1703c4u: goto label_1703c4;
        case 0x1703d0u: goto label_1703d0;
        case 0x1703e0u: goto label_1703e0;
        default: break;
    }

    ctx->pc = 0x1703a0u;

    // 0x1703a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1703a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1703a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1703a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1703a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1703a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1703ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1703acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1703b0: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x1703b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x1703b4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1703B4u;
    {
        const bool branch_taken_0x1703b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1703b4) {
            ctx->pc = 0x1703B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1703B4u;
            // 0x1703b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1703E4u;
            goto label_1703e4;
        }
    }
    ctx->pc = 0x1703BCu;
    // 0x1703bc: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1703BCu;
    SET_GPR_U32(ctx, 31, 0x1703C4u);
    ctx->pc = 0x1703C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703BCu;
    // 0x1703c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1703BCu, 0x1703C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703C4u;
label_1703c4:
    // 0x1703c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1703c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1703c8: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1703C8u;
    SET_GPR_U32(ctx, 31, 0x1703D0u);
    ctx->pc = 0x1703CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703C8u;
    // 0x1703cc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1703C8u, 0x1703D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703D0u;
label_1703d0:
    // 0x1703d0: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x1703d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
    // 0x1703d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1703d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1703d8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1703D8u;
    SET_GPR_U32(ctx, 31, 0x1703E0u);
    ctx->pc = 0x1703DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703D8u;
    // 0x1703dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1703D8u, 0x1703E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703E0u;
label_1703e0:
    // 0x1703e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1703e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1703e4:
    // 0x1703e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1703e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1703e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1703E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1703ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703E8u;
        // 0x1703ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1703E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1703F0u;
}
