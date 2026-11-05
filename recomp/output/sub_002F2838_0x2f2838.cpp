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

// Function: sub_002F2838
// Address: 0x2f2838 - 0x2f28b8
void sub_002F2838_0x2f2838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2838_0x2f2838");
#endif

    switch (ctx->pc) {
        case 0x2f2838u: goto label_2f2838;
        case 0x2f283cu: goto label_2f283c;
        case 0x2f2840u: goto label_2f2840;
        case 0x2f2844u: goto label_2f2844;
        case 0x2f2848u: goto label_2f2848;
        case 0x2f284cu: goto label_2f284c;
        case 0x2f2850u: goto label_2f2850;
        case 0x2f2854u: goto label_2f2854;
        case 0x2f2858u: goto label_2f2858;
        case 0x2f285cu: goto label_2f285c;
        case 0x2f2860u: goto label_2f2860;
        case 0x2f2864u: goto label_2f2864;
        case 0x2f2868u: goto label_2f2868;
        case 0x2f286cu: goto label_2f286c;
        case 0x2f2870u: goto label_2f2870;
        case 0x2f2874u: goto label_2f2874;
        case 0x2f2878u: goto label_2f2878;
        case 0x2f287cu: goto label_2f287c;
        case 0x2f2880u: goto label_2f2880;
        case 0x2f2884u: goto label_2f2884;
        case 0x2f2888u: goto label_2f2888;
        case 0x2f288cu: goto label_2f288c;
        case 0x2f2890u: goto label_2f2890;
        case 0x2f2894u: goto label_2f2894;
        case 0x2f2898u: goto label_2f2898;
        case 0x2f289cu: goto label_2f289c;
        case 0x2f28a0u: goto label_2f28a0;
        case 0x2f28a4u: goto label_2f28a4;
        case 0x2f28a8u: goto label_2f28a8;
        case 0x2f28acu: goto label_2f28ac;
        case 0x2f28b0u: goto label_2f28b0;
        case 0x2f28b4u: goto label_2f28b4;
        default: break;
    }

    ctx->pc = 0x2f2838u;

label_2f2838:
    // 0x2f2838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f2838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f283c:
    // 0x2f283c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2f2840:
    // 0x2f2840: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2f2840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2f2844:
    // 0x2f2844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f2848:
    // 0x2f2848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f2848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f284c:
    // 0x2f284c: 0xc095462  jal         func_255188
label_2f2850:
    if (ctx->pc == 0x2F2850u) {
        ctx->pc = 0x2F2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F284Cu;
        // 0x2f2850: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2854u;
        goto label_2f2854;
    }
    ctx->pc = 0x2F284Cu;
    SET_GPR_U32(ctx, 31, 0x2F2854u);
    ctx->pc = 0x2F2850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F284Cu;
    // 0x2f2850: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255188u, 0x2F284Cu, 0x2F2854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2854u;
label_2f2854:
    // 0x2f2854: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f2854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f2858:
    // 0x2f2858: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f2858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f285c:
    // 0x2f285c: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x2f285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_2f2860:
    // 0x2f2860: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f2860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f2864:
    // 0x2f2864: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x2f2864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2f2868:
    // 0x2f2868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f286c:
    // 0x2f286c: 0xc0b13d2  jal         func_2C4F48
label_2f2870:
    if (ctx->pc == 0x2F2870u) {
        ctx->pc = 0x2F2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F286Cu;
        // 0x2f2870: 0xae0311d0  sw          $v1, 0x11D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2874u;
        goto label_2f2874;
    }
    ctx->pc = 0x2F286Cu;
    SET_GPR_U32(ctx, 31, 0x2F2874u);
    ctx->pc = 0x2F2870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F286Cu;
    // 0x2f2870: 0xae0311d0  sw          $v1, 0x11D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4560), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4F48u, 0x2F286Cu, 0x2F2874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2874u;
label_2f2874:
    // 0x2f2874: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f2874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2878:
    // 0x2f2878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f287c:
    // 0x2f287c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f2880:
    // 0x2f2880: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f2880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f2884:
    // 0x2f2884: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f2884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2888:
    // 0x2f2888: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f288c:
    // 0x2f288c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2f288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2f2890:
    // 0x2f2890: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x2f2890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2f2894:
    // 0x2f2894: 0x40f809  jalr        $v0
label_2f2898:
    if (ctx->pc == 0x2F2898u) {
        ctx->pc = 0x2F2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2894u;
        // 0x2f2898: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F289Cu;
        goto label_2f289c;
    }
    ctx->pc = 0x2F2894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F289Cu);
        ctx->pc = 0x2F2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2894u;
        // 0x2f2898: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2894u, 0x2F289Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F289Cu;
label_2f289c:
    // 0x2f289c: 0xae0012a4  sw          $zero, 0x12A4($s0)
    ctx->pc = 0x2f289cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 0));
label_2f28a0:
    // 0x2f28a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f28a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f28a4:
    // 0x2f28a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f28a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f28a8:
    // 0x2f28a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f28a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f28ac:
    // 0x2f28ac: 0x3e00008  jr          $ra
label_2f28b0:
    if (ctx->pc == 0x2F28B0u) {
        ctx->pc = 0x2F28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28ACu;
        // 0x2f28b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F28B4u;
        goto label_2f28b4;
    }
    ctx->pc = 0x2F28ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28ACu;
        // 0x2f28b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F28ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F28B4u;
label_2f28b4:
    // 0x2f28b4: 0x0  nop
    ctx->pc = 0x2f28b4u;
    // NOP
    ctx->pc = 0x2f28b8u;
}
