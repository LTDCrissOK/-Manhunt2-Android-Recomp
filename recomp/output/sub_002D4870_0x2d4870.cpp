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

// Function: sub_002D4870
// Address: 0x2d4870 - 0x2d48f0
void sub_002D4870_0x2d4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4870_0x2d4870");
#endif

    switch (ctx->pc) {
        case 0x2d48a4u: goto label_2d48a4;
        case 0x2d48b0u: goto label_2d48b0;
        case 0x2d48b8u: goto label_2d48b8;
        case 0x2d48c4u: goto label_2d48c4;
        case 0x2d48ccu: goto label_2d48cc;
        case 0x2d48d4u: goto label_2d48d4;
        default: break;
    }

    ctx->pc = 0x2d4870u;

    // 0x2d4870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d487c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d4880: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2d4880u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2d4884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d4888: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d4888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d488c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d4890: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x2d4890u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2d4894: 0x8e30bd48  lw          $s0, -0x42B8($s1)
    ctx->pc = 0x2d4894u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2d4898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d489c: 0xc0c8848  jal         func_322120
    ctx->pc = 0x2D489Cu;
    SET_GPR_U32(ctx, 31, 0x2D48A4u);
    ctx->pc = 0x2D48A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D489Cu;
    // 0x2d48a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322120u, 0x2D489Cu, 0x2D48A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48A4u;
label_2d48a4:
    // 0x2d48a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d48a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48a8: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x2D48A8u;
    SET_GPR_U32(ctx, 31, 0x2D48B0u);
    ctx->pc = 0x2D48ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48A8u;
    // 0x2d48ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x2D48A8u, 0x2D48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48B0u;
label_2d48b0:
    // 0x2d48b0: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x2D48B0u;
    SET_GPR_U32(ctx, 31, 0x2D48B8u);
    ctx->pc = 0x2D48B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48B0u;
    // 0x2d48b4: 0x8e24bd48  lw          $a0, -0x42B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x2D48B0u, 0x2D48B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48B8u;
label_2d48b8:
    // 0x2d48b8: 0x8e25bd48  lw          $a1, -0x42B8($s1)
    ctx->pc = 0x2d48b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
    // 0x2d48bc: 0xc0c884e  jal         func_322138
    ctx->pc = 0x2D48BCu;
    SET_GPR_U32(ctx, 31, 0x2D48C4u);
    ctx->pc = 0x2D48C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48BCu;
    // 0x2d48c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x2D48BCu, 0x2D48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48C4u;
label_2d48c4:
    // 0x2d48c4: 0xc0c4db6  jal         func_3136D8
    ctx->pc = 0x2D48C4u;
    SET_GPR_U32(ctx, 31, 0x2D48CCu);
    ctx->pc = 0x2D48C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48C4u;
    // 0x2d48c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3136D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3136D8u, 0x2D48C4u, 0x2D48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48CCu;
label_2d48cc:
    // 0x2d48cc: 0xc09a362  jal         func_268D88
    ctx->pc = 0x2D48CCu;
    SET_GPR_U32(ctx, 31, 0x2D48D4u);
    ctx->pc = 0x2D48D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48CCu;
    // 0x2d48d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D88u, 0x2D48CCu, 0x2D48D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48D4u;
label_2d48d4:
    // 0x2d48d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d48d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d48d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d48d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d48dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d48dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d48e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d48e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d48e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d48e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d48e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D48E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D48E8u;
        // 0x2d48ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D48E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D48F0u;
}
