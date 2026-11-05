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

// Function: sub_003E27F8
// Address: 0x3e27f8 - 0x3e28b8
void sub_003E27F8_0x3e27f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E27F8_0x3e27f8");
#endif

    switch (ctx->pc) {
        case 0x3e2840u: goto label_3e2840;
        case 0x3e284cu: goto label_3e284c;
        case 0x3e2858u: goto label_3e2858;
        case 0x3e2864u: goto label_3e2864;
        case 0x3e2870u: goto label_3e2870;
        case 0x3e2884u: goto label_3e2884;
        case 0x3e2890u: goto label_3e2890;
        default: break;
    }

    ctx->pc = 0x3e27f8u;

    // 0x3e27f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e27f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e27fc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e2800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e2804: 0x24423590  addiu       $v0, $v0, 0x3590
    ctx->pc = 0x3e2804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13712));
    // 0x3e2808: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e2808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e280c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e280cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e2814: 0x2623031c  addiu       $v1, $s1, 0x31C
    ctx->pc = 0x3e2814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 796));
    // 0x3e2818: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e2818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e281c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e281cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2820: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e2820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e2824: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E2824u;
    {
        const bool branch_taken_0x3e2824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2824u;
        // 0x3e2828: 0xae220278  sw          $v0, 0x278($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2824) {
            ctx->pc = 0x3E2878u;
            goto label_3e2878;
        }
    }
    ctx->pc = 0x3E282Cu;
    // 0x3e282c: 0x26300f9c  addiu       $s0, $s1, 0xF9C
    ctx->pc = 0x3e282cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3996));
    // 0x3e2830: 0x10700011  beq         $v1, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E2830u;
    {
        const bool branch_taken_0x3e2830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x3E2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2830u;
        // 0x3e2834: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2830) {
            ctx->pc = 0x3E2878u;
            goto label_3e2878;
        }
    }
    ctx->pc = 0x3E2838u;
    // 0x3e2838: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x3e2838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x3e283c: 0x0  nop
    ctx->pc = 0x3e283cu;
    // NOP
label_3e2840:
    // 0x3e2840: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e2840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e2844: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2844u;
    SET_GPR_U32(ctx, 31, 0x3E284Cu);
    ctx->pc = 0x3E2848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2844u;
    // 0x3e2848: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2844u, 0x3E284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E284Cu;
label_3e284c:
    // 0x3e284c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3e284cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3e2850: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2850u;
    SET_GPR_U32(ctx, 31, 0x3E2858u);
    ctx->pc = 0x3E2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2850u;
    // 0x3e2854: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2850u, 0x3E2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2858u;
label_3e2858:
    // 0x3e2858: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e2858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e285c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E285Cu;
    SET_GPR_U32(ctx, 31, 0x3E2864u);
    ctx->pc = 0x3E2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E285Cu;
    // 0x3e2860: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E285Cu, 0x3E2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2864u;
label_3e2864:
    // 0x3e2864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2868: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2868u;
    SET_GPR_U32(ctx, 31, 0x3E2870u);
    ctx->pc = 0x3E286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2868u;
    // 0x3e286c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2868u, 0x3E2870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2870u;
label_3e2870:
    // 0x3e2870: 0x1650fff3  bne         $s2, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3E2870u;
    {
        const bool branch_taken_0x3e2870 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2870u;
        // 0x3e2874: 0x2610ffe0  addiu       $s0, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2870) {
            ctx->pc = 0x3E2840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2840;
        }
    }
    ctx->pc = 0x3E2878u;
label_3e2878:
    // 0x3e2878: 0x26240308  addiu       $a0, $s1, 0x308
    ctx->pc = 0x3e2878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x3e287c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E287Cu;
    SET_GPR_U32(ctx, 31, 0x3E2884u);
    ctx->pc = 0x3E2880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E287Cu;
    // 0x3e2880: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E287Cu, 0x3E2884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2884u;
label_3e2884:
    // 0x3e2884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2888: 0xc0a9712  jal         func_2A5C48
    ctx->pc = 0x3E2888u;
    SET_GPR_U32(ctx, 31, 0x3E2890u);
    ctx->pc = 0x3E288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2888u;
    // 0x3e288c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5C48u, 0x3E2888u, 0x3E2890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2890u;
label_3e2890:
    // 0x3e2890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e2890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e2898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e2898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e289c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e289cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e28a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e28a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e28a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E28A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E28A4u;
        // 0x3e28a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E28A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E28ACu;
    // 0x3e28ac: 0x0  nop
    ctx->pc = 0x3e28acu;
    // NOP
    // 0x3e28b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e28b4: 0x0  nop
    ctx->pc = 0x3e28b4u;
    // NOP
    ctx->pc = 0x3e28b8u;
}
