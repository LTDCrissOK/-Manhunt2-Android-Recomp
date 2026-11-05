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

// Function: sub_00137698
// Address: 0x137698 - 0x137918
void sub_00137698_0x137698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137698_0x137698");
#endif

    switch (ctx->pc) {
        case 0x1376d0u: goto label_1376d0;
        case 0x137704u: goto label_137704;
        case 0x13772cu: goto label_13772c;
        case 0x137748u: goto label_137748;
        case 0x137758u: goto label_137758;
        case 0x137760u: goto label_137760;
        case 0x1377a8u: goto label_1377a8;
        case 0x1377c4u: goto label_1377c4;
        case 0x1377d8u: goto label_1377d8;
        case 0x1377e0u: goto label_1377e0;
        case 0x137834u: goto label_137834;
        case 0x137848u: goto label_137848;
        case 0x137850u: goto label_137850;
        case 0x137878u: goto label_137878;
        case 0x1378acu: goto label_1378ac;
        case 0x1378c0u: goto label_1378c0;
        case 0x1378c8u: goto label_1378c8;
        default: break;
    }

    ctx->pc = 0x137698u;

    // 0x137698: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x137698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13769c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13769cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1376a0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1376a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1376a4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1376a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1376a8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1376a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1376ac: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1376acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1376b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1376b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1376b4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1376b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1376b8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1376b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1376bc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1376bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1376c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1376c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1376c4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1376c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1376c8: 0xc04d914  jal         func_136450
    ctx->pc = 0x1376C8u;
    SET_GPR_U32(ctx, 31, 0x1376D0u);
    ctx->pc = 0x1376CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1376C8u;
    // 0x1376cc: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136450u, 0x1376C8u, 0x1376D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376D0u;
label_1376d0:
    // 0x1376d0: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1376D0u;
    {
        const bool branch_taken_0x1376d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1376D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376D0u;
        // 0x1376d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376d0) {
            ctx->pc = 0x1378ECu;
            goto label_1378ec;
        }
    }
    ctx->pc = 0x1376D8u;
    // 0x1376d8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1376d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1376dc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1376dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1376e0: 0x245302d8  addiu       $s3, $v0, 0x2D8
    ctx->pc = 0x1376e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x1376e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1376e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1376e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1376e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1376ec: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x1376ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x1376f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1376f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1376f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1376f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1376f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1376f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1376fc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1376FCu;
    SET_GPR_U32(ctx, 31, 0x137704u);
    ctx->pc = 0x137700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1376FCu;
    // 0x137700: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1376FCu, 0x137704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137704u;
label_137704:
    // 0x137704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13770c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x13770cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x137710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137714: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x137714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x137718: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x137718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13771c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x13771cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x137720: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x137720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x137724: 0xc0411ac  jal         func_1046B0
    ctx->pc = 0x137724u;
    SET_GPR_U32(ctx, 31, 0x13772Cu);
    ctx->pc = 0x137728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137724u;
    // 0x137728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x137724u, 0x13772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13772Cu;
label_13772c:
    // 0x13772c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13772Cu;
    {
        const bool branch_taken_0x13772c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13772Cu;
        // 0x137730: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13772c) {
            ctx->pc = 0x13777Cu;
            goto label_13777c;
        }
    }
    ctx->pc = 0x137734u;
    // 0x137734: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x137734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x137738: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x137738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13773c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x13773cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137740: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x137740u;
    SET_GPR_U32(ctx, 31, 0x137748u);
    ctx->pc = 0x137744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137740u;
    // 0x137744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x137740u, 0x137748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137748u;
label_137748:
    // 0x137748: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x137748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13774c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13774Cu;
    {
        const bool branch_taken_0x13774c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13774Cu;
        // 0x137750: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13774c) {
            ctx->pc = 0x137770u;
            goto label_137770;
        }
    }
    ctx->pc = 0x137754u;
    // 0x137754: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x137754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_137758:
    // 0x137758: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x137758u;
    SET_GPR_U32(ctx, 31, 0x137760u);
    ctx->pc = 0x13775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137758u;
    // 0x13775c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x137758u, 0x137760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137760u;
label_137760:
    // 0x137760: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x137760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137764: 0x0  nop
    ctx->pc = 0x137764u;
    // NOP
    // 0x137768: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x137768u;
    {
        const bool branch_taken_0x137768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137768) {
            ctx->pc = 0x13776Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137768u;
            // 0x13776c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137758;
        }
    }
    ctx->pc = 0x137770u;
label_137770:
    // 0x137770: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x137770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x137774: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x137774u;
    {
        const bool branch_taken_0x137774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137774u;
        // 0x137778: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137774) {
            ctx->pc = 0x1378E0u;
            goto label_1378e0;
        }
    }
    ctx->pc = 0x13777Cu;
label_13777c:
    // 0x13777c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x13777cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137780: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x137780u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137784: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x137784u;
    {
        const bool branch_taken_0x137784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137784u;
        // 0x137788: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137784) {
            ctx->pc = 0x137790u;
            goto label_137790;
        }
    }
    ctx->pc = 0x13778Cu;
    // 0x13778c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_137790:
    // 0x137790: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x137790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x137794: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x137794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137798: 0xc45489d0  lwc1        $f20, -0x7630($v0)
    ctx->pc = 0x137798u;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13779c: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
    ctx->pc = 0x13779Cu;
    {
        const bool branch_taken_0x13779c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13779Cu;
        // 0x1377a0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13779c) {
            ctx->pc = 0x137894u;
            goto label_137894;
        }
    }
    ctx->pc = 0x1377A4u;
    // 0x1377a4: 0x3c150044  lui         $s5, 0x44
    ctx->pc = 0x1377a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
label_1377a8:
    // 0x1377a8: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1377A8u;
    {
        const bool branch_taken_0x1377a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1377ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377A8u;
        // 0x1377ac: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377a8) {
            ctx->pc = 0x1377FCu;
            goto label_1377fc;
        }
    }
    ctx->pc = 0x1377B0u;
    // 0x1377b0: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x1377b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x1377b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1377b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1377b8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1377b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1377bc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1377BCu;
    SET_GPR_U32(ctx, 31, 0x1377C4u);
    ctx->pc = 0x1377C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1377BCu;
    // 0x1377c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1377BCu, 0x1377C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377C4u;
label_1377c4:
    // 0x1377c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1377c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1377c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1377C8u;
    {
        const bool branch_taken_0x1377c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377C8u;
        // 0x1377cc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377c8) {
            ctx->pc = 0x1377F0u;
            goto label_1377f0;
        }
    }
    ctx->pc = 0x1377D0u;
    // 0x1377d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1377d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1377d4: 0x0  nop
    ctx->pc = 0x1377d4u;
    // NOP
label_1377d8:
    // 0x1377d8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1377D8u;
    SET_GPR_U32(ctx, 31, 0x1377E0u);
    ctx->pc = 0x1377DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1377D8u;
    // 0x1377dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1377D8u, 0x1377E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377E0u;
label_1377e0:
    // 0x1377e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1377e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1377e4: 0x0  nop
    ctx->pc = 0x1377e4u;
    // NOP
    // 0x1377e8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1377E8u;
    {
        const bool branch_taken_0x1377e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1377e8) {
            ctx->pc = 0x1377ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1377E8u;
            // 0x1377ec: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1377D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1377d8;
        }
    }
    ctx->pc = 0x1377F0u;
label_1377f0:
    // 0x1377f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1377f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1377f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1377F4u;
    {
        const bool branch_taken_0x1377f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377F4u;
        // 0x1377f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377f4) {
            ctx->pc = 0x1378E0u;
            goto label_1378e0;
        }
    }
    ctx->pc = 0x1377FCu;
label_1377fc:
    // 0x1377fc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1377fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x137800: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137800u;
    {
        const bool branch_taken_0x137800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137800u;
        // 0x137804: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137800) {
            ctx->pc = 0x137810u;
            goto label_137810;
        }
    }
    ctx->pc = 0x137808u;
    // 0x137808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137808u;
    {
        const bool branch_taken_0x137808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137808u;
        // 0x13780c: 0xc6200030  lwc1        $f0, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137808) {
            ctx->pc = 0x137814u;
            goto label_137814;
        }
    }
    ctx->pc = 0x137810u;
label_137810:
    // 0x137810: 0xc6a0a568  lwc1        $f0, -0x5A98($s5)
    ctx->pc = 0x137810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137814:
    // 0x137814: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x137814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137818: 0x0  nop
    ctx->pc = 0x137818u;
    // NOP
    // 0x13781c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x13781Cu;
    {
        const bool branch_taken_0x13781c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13781Cu;
        // 0x137820: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13781c) {
            ctx->pc = 0x13786Cu;
            goto label_13786c;
        }
    }
    ctx->pc = 0x137824u;
    // 0x137824: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x137824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x137828: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x137828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13782c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x13782Cu;
    SET_GPR_U32(ctx, 31, 0x137834u);
    ctx->pc = 0x137830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13782Cu;
    // 0x137830: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x13782Cu, 0x137834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137834u;
label_137834:
    // 0x137834: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x137834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x137838: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x137838u;
    {
        const bool branch_taken_0x137838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137838u;
        // 0x13783c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137838) {
            ctx->pc = 0x137860u;
            goto label_137860;
        }
    }
    ctx->pc = 0x137840u;
    // 0x137840: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x137840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137844: 0x0  nop
    ctx->pc = 0x137844u;
    // NOP
label_137848:
    // 0x137848: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x137848u;
    SET_GPR_U32(ctx, 31, 0x137850u);
    ctx->pc = 0x13784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137848u;
    // 0x13784c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x137848u, 0x137850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137850u;
label_137850:
    // 0x137850: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x137850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137854: 0x0  nop
    ctx->pc = 0x137854u;
    // NOP
    // 0x137858: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x137858u;
    {
        const bool branch_taken_0x137858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137858) {
            ctx->pc = 0x13785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137858u;
            // 0x13785c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137848;
        }
    }
    ctx->pc = 0x137860u;
label_137860:
    // 0x137860: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x137860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x137864: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x137864u;
    {
        const bool branch_taken_0x137864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137864u;
        // 0x137868: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137864) {
            ctx->pc = 0x1378E0u;
            goto label_1378e0;
        }
    }
    ctx->pc = 0x13786Cu;
label_13786c:
    // 0x13786c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137870: 0xc041196  jal         func_104658
    ctx->pc = 0x137870u;
    SET_GPR_U32(ctx, 31, 0x137878u);
    ctx->pc = 0x137874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137870u;
    // 0x137874: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104658u, 0x137870u, 0x137878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137878u;
label_137878:
    // 0x137878: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x137878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x13787c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13787Cu;
    {
        const bool branch_taken_0x13787c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13787Cu;
        // 0x137880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13787c) {
            ctx->pc = 0x137888u;
            goto label_137888;
        }
    }
    ctx->pc = 0x137884u;
    // 0x137884: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x137884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_137888:
    // 0x137888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13788c: 0x1620ffc6  bnez        $s1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x13788Cu;
    {
        const bool branch_taken_0x13788c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13788c) {
            ctx->pc = 0x1377A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1377a8;
        }
    }
    ctx->pc = 0x137894u;
label_137894:
    // 0x137894: 0x26c202d8  addiu       $v0, $s6, 0x2D8
    ctx->pc = 0x137894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 728));
    // 0x137898: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x137898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13789c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x13789cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1378a0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1378a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378a4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1378A4u;
    SET_GPR_U32(ctx, 31, 0x1378ACu);
    ctx->pc = 0x1378A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1378A4u;
    // 0x1378a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1378A4u, 0x1378ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378ACu;
label_1378ac:
    // 0x1378ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1378acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1378b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1378B0u;
    {
        const bool branch_taken_0x1378b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378B0u;
        // 0x1378b4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378b0) {
            ctx->pc = 0x1378D8u;
            goto label_1378d8;
        }
    }
    ctx->pc = 0x1378B8u;
    // 0x1378b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1378b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1378bc: 0x0  nop
    ctx->pc = 0x1378bcu;
    // NOP
label_1378c0:
    // 0x1378c0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1378C0u;
    SET_GPR_U32(ctx, 31, 0x1378C8u);
    ctx->pc = 0x1378C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1378C0u;
    // 0x1378c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1378C0u, 0x1378C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378C8u;
label_1378c8:
    // 0x1378c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1378c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1378cc: 0x0  nop
    ctx->pc = 0x1378ccu;
    // NOP
    // 0x1378d0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1378D0u;
    {
        const bool branch_taken_0x1378d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1378d0) {
            ctx->pc = 0x1378D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1378D0u;
            // 0x1378d4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1378C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1378c0;
        }
    }
    ctx->pc = 0x1378D8u;
label_1378d8:
    // 0x1378d8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1378d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1378dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1378dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1378e0:
    // 0x1378e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1378e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1378e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1378e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1378e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1378e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1378ec:
    // 0x1378ec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1378ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1378f0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1378f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1378f4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1378f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1378f8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1378f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1378fc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1378fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137900: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x137900u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x137904: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x137904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137908: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x137908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13790c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x13790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137910: 0x3e00008  jr          $ra
    ctx->pc = 0x137910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137910u;
        // 0x137914: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137918u;
}
