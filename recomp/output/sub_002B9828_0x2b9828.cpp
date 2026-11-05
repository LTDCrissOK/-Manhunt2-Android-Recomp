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

// Function: sub_002B9828
// Address: 0x2b9828 - 0x2b98e0
void sub_002B9828_0x2b9828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9828_0x2b9828");
#endif

    switch (ctx->pc) {
        case 0x2b9838u: goto label_2b9838;
        case 0x2b9840u: goto label_2b9840;
        case 0x2b9848u: goto label_2b9848;
        case 0x2b988cu: goto label_2b988c;
        case 0x2b9894u: goto label_2b9894;
        case 0x2b989cu: goto label_2b989c;
        case 0x2b98bcu: goto label_2b98bc;
        case 0x2b98ccu: goto label_2b98cc;
        case 0x2b98d4u: goto label_2b98d4;
        default: break;
    }

    ctx->pc = 0x2b9828u;

    // 0x2b9828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b982c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b9830: 0xc0db256  jal         func_36C958
    ctx->pc = 0x2B9830u;
    SET_GPR_U32(ctx, 31, 0x2B9838u);
    ctx->pc = 0x2B9834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9830u;
    // 0x2b9834: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x2B9830u, 0x2B9838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9838u;
label_2b9838:
    // 0x2b9838: 0xc0db0cc  jal         func_36C330
    ctx->pc = 0x2B9838u;
    SET_GPR_U32(ctx, 31, 0x2B9840u);
    ctx->pc = 0x36C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C330u, 0x2B9838u, 0x2B9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9840u;
label_2b9840:
    // 0x2b9840: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B9840u;
    SET_GPR_U32(ctx, 31, 0x2B9848u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B9840u, 0x2B9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9848u;
label_2b9848:
    // 0x2b9848: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x2b9848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2b984c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B984Cu;
    {
        const bool branch_taken_0x2b984c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B984Cu;
        // 0x2b9850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b984c) {
            ctx->pc = 0x2B988Cu;
            goto label_2b988c;
        }
    }
    ctx->pc = 0x2B9854u;
    // 0x2b9854: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b9854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b9858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b9858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b985c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2b985cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b9860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9868: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b9868u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b986c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2b986cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2b9870: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x2b9870u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x2b9874: 0x46006446  mov.s       $f17, $f12
    ctx->pc = 0x2b9874u;
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    // 0x2b9878: 0x46007486  mov.s       $f18, $f14
    ctx->pc = 0x2b9878u;
    ctx->f[18] = FPU_MOV_S(ctx->f[14]);
    // 0x2b987c: 0x460074c6  mov.s       $f19, $f14
    ctx->pc = 0x2b987cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[14]);
    // 0x2b9880: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2b9880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b9884: 0xc0da8a0  jal         func_36A280
    ctx->pc = 0x2B9884u;
    SET_GPR_U32(ctx, 31, 0x2B988Cu);
    ctx->pc = 0x2B9888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9884u;
    // 0x2b9888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A280u, 0x2B9884u, 0x2B988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B988Cu;
label_2b988c:
    // 0x2b988c: 0xc0a2470  jal         func_2891C0
    ctx->pc = 0x2B988Cu;
    SET_GPR_U32(ctx, 31, 0x2B9894u);
    ctx->pc = 0x2891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2891C0u, 0x2B988Cu, 0x2B9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9894u;
label_2b9894:
    // 0x2b9894: 0xc0a2460  jal         func_289180
    ctx->pc = 0x2B9894u;
    SET_GPR_U32(ctx, 31, 0x2B989Cu);
    ctx->pc = 0x289180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289180u, 0x2B9894u, 0x2B989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B989Cu;
label_2b989c:
    // 0x2b989c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B989Cu;
    {
        const bool branch_taken_0x2b989c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B989Cu;
        // 0x2b98a0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b989c) {
            ctx->pc = 0x2B98B4u;
            goto label_2b98b4;
        }
    }
    ctx->pc = 0x2B98A4u;
    // 0x2b98a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b98a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b98a8: 0x8c434074  lw          $v1, 0x4074($v0)
    ctx->pc = 0x2b98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16500)));
    // 0x2b98ac: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B98ACu;
    {
        const bool branch_taken_0x2b98ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b98ac) {
            ctx->pc = 0x2B98C4u;
            goto label_2b98c4;
        }
    }
    ctx->pc = 0x2B98B4u;
label_2b98b4:
    // 0x2b98b4: 0xc0a2180  jal         func_288600
    ctx->pc = 0x2B98B4u;
    SET_GPR_U32(ctx, 31, 0x2B98BCu);
    ctx->pc = 0x288600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288600u, 0x2B98B4u, 0x2B98BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B98BCu;
label_2b98bc:
    // 0x2b98bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B98BCu;
    {
        const bool branch_taken_0x2b98bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b98bc) {
            ctx->pc = 0x2B98CCu;
            goto label_2b98cc;
        }
    }
    ctx->pc = 0x2B98C4u;
label_2b98c4:
    // 0x2b98c4: 0xc0a2184  jal         func_288610
    ctx->pc = 0x2B98C4u;
    SET_GPR_U32(ctx, 31, 0x2B98CCu);
    ctx->pc = 0x288610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288610u, 0x2B98C4u, 0x2B98CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B98CCu;
label_2b98cc:
    // 0x2b98cc: 0xc0db2b6  jal         func_36CAD8
    ctx->pc = 0x2B98CCu;
    SET_GPR_U32(ctx, 31, 0x2B98D4u);
    ctx->pc = 0x2B98D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B98CCu;
    // 0x2b98d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x2B98CCu, 0x2B98D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B98D4u;
label_2b98d4:
    // 0x2b98d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b98d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b98d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B98D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98D8u;
        // 0x2b98dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B98D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B98E0u;
}
