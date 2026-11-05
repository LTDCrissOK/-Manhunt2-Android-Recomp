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

// Function: sub_00135680
// Address: 0x135680 - 0x1356f8
void sub_00135680_0x135680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135680_0x135680");
#endif

    switch (ctx->pc) {
        case 0x135694u: goto label_135694;
        case 0x1356b0u: goto label_1356b0;
        case 0x1356c0u: goto label_1356c0;
        case 0x1356c8u: goto label_1356c8;
        case 0x1356d4u: goto label_1356d4;
        case 0x1356e4u: goto label_1356e4;
        default: break;
    }

    ctx->pc = 0x135680u;

    // 0x135680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135684: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x135684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x135688: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x135688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13568c: 0xc04d2d6  jal         func_134B58
    ctx->pc = 0x13568Cu;
    SET_GPR_U32(ctx, 31, 0x135694u);
    ctx->pc = 0x135690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13568Cu;
    // 0x135690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134B58u, 0x13568Cu, 0x135694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135694u;
label_135694:
    // 0x135694: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x135694u;
    {
        const bool branch_taken_0x135694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135694u;
        // 0x135698: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135694) {
            ctx->pc = 0x1356E4u;
            goto label_1356e4;
        }
    }
    ctx->pc = 0x13569Cu;
    // 0x13569c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x13569cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1356a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1356a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1356a4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1356a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1356a8: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1356A8u;
    SET_GPR_U32(ctx, 31, 0x1356B0u);
    ctx->pc = 0x1356ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356A8u;
    // 0x1356ac: 0x24a502c4  addiu       $a1, $a1, 0x2C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 708));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1356A8u, 0x1356B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1356B0u;
label_1356b0:
    // 0x1356b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1356b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1356b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1356b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356b8: 0xc04d5be  jal         func_1356F8
    ctx->pc = 0x1356B8u;
    SET_GPR_U32(ctx, 31, 0x1356C0u);
    ctx->pc = 0x1356BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356B8u;
    // 0x1356bc: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356F8u, 0x1356B8u, 0x1356C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1356C0u;
label_1356c0:
    // 0x1356c0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1356C0u;
    SET_GPR_U32(ctx, 31, 0x1356C8u);
    ctx->pc = 0x1356C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356C0u;
    // 0x1356c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1356C0u, 0x1356C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1356C8u;
label_1356c8:
    // 0x1356c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1356c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356cc: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1356CCu;
    SET_GPR_U32(ctx, 31, 0x1356D4u);
    ctx->pc = 0x1356D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356CCu;
    // 0x1356d0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1356CCu, 0x1356D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1356D4u;
label_1356d4:
    // 0x1356d4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1356d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1356d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1356d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356dc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1356DCu;
    SET_GPR_U32(ctx, 31, 0x1356E4u);
    ctx->pc = 0x1356E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356DCu;
    // 0x1356e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1356DCu, 0x1356E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1356E4u;
label_1356e4:
    // 0x1356e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1356e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1356e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1356e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1356ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1356ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1356F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356ECu;
        // 0x1356f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1356ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1356F4u;
    // 0x1356f4: 0x0  nop
    ctx->pc = 0x1356f4u;
    // NOP
    ctx->pc = 0x1356f8u;
}
