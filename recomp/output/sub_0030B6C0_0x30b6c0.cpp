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

// Function: sub_0030B6C0
// Address: 0x30b6c0 - 0x30b8a8
void sub_0030B6C0_0x30b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B6C0_0x30b6c0");
#endif

    switch (ctx->pc) {
        case 0x30b6f4u: goto label_30b6f4;
        case 0x30b6fcu: goto label_30b6fc;
        case 0x30b704u: goto label_30b704;
        case 0x30b70cu: goto label_30b70c;
        case 0x30b720u: goto label_30b720;
        case 0x30b748u: goto label_30b748;
        case 0x30b754u: goto label_30b754;
        case 0x30b774u: goto label_30b774;
        case 0x30b780u: goto label_30b780;
        case 0x30b788u: goto label_30b788;
        case 0x30b790u: goto label_30b790;
        case 0x30b860u: goto label_30b860;
        case 0x30b86cu: goto label_30b86c;
        case 0x30b870u: goto label_30b870;
        case 0x30b87cu: goto label_30b87c;
        default: break;
    }

    ctx->pc = 0x30b6c0u;

    // 0x30b6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30b6c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30b6c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30b6cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30b6d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30b6d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30b6d8: 0x14a2006b  bne         $a1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x30B6D8u;
    {
        const bool branch_taken_0x30b6d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6D8u;
        // 0x30b6dc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6d8) {
            ctx->pc = 0x30B888u;
            goto label_30b888;
        }
    }
    ctx->pc = 0x30B6E0u;
    // 0x30b6e0: 0x10800069  beqz        $a0, . + 4 + (0x69 << 2)
    ctx->pc = 0x30B6E0u;
    {
        const bool branch_taken_0x30b6e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6E0u;
        // 0x30b6e4: 0x3c10005a  lui         $s0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6e0) {
            ctx->pc = 0x30B888u;
            goto label_30b888;
        }
    }
    ctx->pc = 0x30B6E8u;
    // 0x30b6e8: 0x26106830  addiu       $s0, $s0, 0x6830
    ctx->pc = 0x30b6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26672));
    // 0x30b6ec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B6ECu;
    SET_GPR_U32(ctx, 31, 0x30B6F4u);
    ctx->pc = 0x30B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6ECu;
    // 0x30b6f0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B6ECu, 0x30B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B6F4u;
label_30b6f4:
    // 0x30b6f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B6F4u;
    SET_GPR_U32(ctx, 31, 0x30B6FCu);
    ctx->pc = 0x30B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6F4u;
    // 0x30b6f8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B6F4u, 0x30B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B6FCu;
label_30b6fc:
    // 0x30b6fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B6FCu;
    SET_GPR_U32(ctx, 31, 0x30B704u);
    ctx->pc = 0x30B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6FCu;
    // 0x30b700: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B6FCu, 0x30B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B704u;
label_30b704:
    // 0x30b704: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B704u;
    SET_GPR_U32(ctx, 31, 0x30B70Cu);
    ctx->pc = 0x30B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B704u;
    // 0x30b708: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B704u, 0x30B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B70Cu;
label_30b70c:
    // 0x30b70c: 0x3c11005a  lui         $s1, 0x5A
    ctx->pc = 0x30b70cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)90 << 16));
    // 0x30b710: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x30b710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x30b714: 0x263168d0  addiu       $s1, $s1, 0x68D0
    ctx->pc = 0x30b714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26832));
    // 0x30b718: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B718u;
    SET_GPR_U32(ctx, 31, 0x30B720u);
    ctx->pc = 0x30B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B718u;
    // 0x30b71c: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B718u, 0x30B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B720u;
label_30b720:
    // 0x30b720: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x30b720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x30b724: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x30b724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x30b728: 0x7e200010  sq          $zero, 0x10($s1)
    ctx->pc = 0x30b728u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 0));
    // 0x30b72c: 0x7e200040  sq          $zero, 0x40($s1)
    ctx->pc = 0x30b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 0));
    // 0x30b730: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x30b730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x30b734: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x30b734u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b738: 0x24516920  addiu       $s1, $v0, 0x6920
    ctx->pc = 0x30b738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26912));
    // 0x30b73c: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x30b73cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x30b740: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x30b740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b744: 0x0  nop
    ctx->pc = 0x30b744u;
    // NOP
label_30b748:
    // 0x30b748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b74c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B74Cu;
    SET_GPR_U32(ctx, 31, 0x30B754u);
    ctx->pc = 0x30B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B74Cu;
    // 0x30b750: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B74Cu, 0x30B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B754u;
label_30b754:
    // 0x30b754: 0x0  nop
    ctx->pc = 0x30b754u;
    // NOP
    // 0x30b758: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30B758u;
    {
        const bool branch_taken_0x30b758 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x30B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B758u;
        // 0x30b75c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b758) {
            ctx->pc = 0x30B748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b748;
        }
    }
    ctx->pc = 0x30B760u;
    // 0x30b760: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x30b760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x30b764: 0x262412c0  addiu       $a0, $s1, 0x12C0
    ctx->pc = 0x30b764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4800));
    // 0x30b768: 0x24527da0  addiu       $s2, $v0, 0x7DA0
    ctx->pc = 0x30b768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32160));
    // 0x30b76c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B76Cu;
    SET_GPR_U32(ctx, 31, 0x30B774u);
    ctx->pc = 0x30B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B76Cu;
    // 0x30b770: 0x2410000d  addiu       $s0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B76Cu, 0x30B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B774u;
label_30b774:
    // 0x30b774: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x30b774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b778: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B778u;
    SET_GPR_U32(ctx, 31, 0x30B780u);
    ctx->pc = 0x30B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B778u;
    // 0x30b77c: 0x262412f0  addiu       $a0, $s1, 0x12F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B778u, 0x30B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B780u;
label_30b780:
    // 0x30b780: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B780u;
    SET_GPR_U32(ctx, 31, 0x30B788u);
    ctx->pc = 0x30B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B780u;
    // 0x30b784: 0x26241330  addiu       $a0, $s1, 0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B780u, 0x30B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B788u;
label_30b788:
    // 0x30b788: 0xc0c259a  jal         func_309668
    ctx->pc = 0x30B788u;
    SET_GPR_U32(ctx, 31, 0x30B790u);
    ctx->pc = 0x30B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B788u;
    // 0x30b78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309668u, 0x30B788u, 0x30B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B790u;
label_30b790:
    // 0x30b790: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x30b790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x30b794: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x30b794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x30b798: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x30b798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x30b79c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30b7a0: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x30b7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x30b7a4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x30b7a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x30b7a8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x30b7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x30b7ac: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x30b7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x30b7b0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x30b7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x30b7b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30b7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30b7b8: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x30b7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x30b7bc: 0x3c0142be  lui         $at, 0x42BE
    ctx->pc = 0x30b7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17086 << 16));
    // 0x30b7c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30b7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30b7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b7c8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x30b7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x30b7cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30b7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30b7d0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x30b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30b7d4: 0x3c01bba3  lui         $at, 0xBBA3
    ctx->pc = 0x30b7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48035 << 16));
    // 0x30b7d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x30b7d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x30b7dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30b7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30b7e0: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x30b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x30b7e4: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x30b7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x30b7e8: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x30b7e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x30b7ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b7f0: 0x24847cb0  addiu       $a0, $a0, 0x7CB0
    ctx->pc = 0x30b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    // 0x30b7f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30b7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30b7f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30b7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30b7fc: 0x3c0146ea  lui         $at, 0x46EA
    ctx->pc = 0x30b7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18154 << 16));
    // 0x30b800: 0x34216000  ori         $at, $at, 0x6000
    ctx->pc = 0x30b800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24576);
    // 0x30b804: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30b804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x30b808: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x30b808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x30b80c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x30b80cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x30b810: 0xae221388  sw          $v0, 0x1388($s1)
    ctx->pc = 0x30b810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5000), GPR_U32(ctx, 2));
    // 0x30b814: 0xe6241340  swc1        $f4, 0x1340($s1)
    ctx->pc = 0x30b814u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4928), bits); }
    // 0x30b818: 0xe6221344  swc1        $f2, 0x1344($s1)
    ctx->pc = 0x30b818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4932), bits); }
    // 0x30b81c: 0xe6211348  swc1        $f1, 0x1348($s1)
    ctx->pc = 0x30b81cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4936), bits); }
    // 0x30b820: 0xe6281350  swc1        $f8, 0x1350($s1)
    ctx->pc = 0x30b820u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4944), bits); }
    // 0x30b824: 0xae251354  sw          $a1, 0x1354($s1)
    ctx->pc = 0x30b824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4948), GPR_U32(ctx, 5));
    // 0x30b828: 0xe6231358  swc1        $f3, 0x1358($s1)
    ctx->pc = 0x30b828u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4952), bits); }
    // 0x30b82c: 0xe620136c  swc1        $f0, 0x136C($s1)
    ctx->pc = 0x30b82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4972), bits); }
    // 0x30b830: 0xae27135c  sw          $a3, 0x135C($s1)
    ctx->pc = 0x30b830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4956), GPR_U32(ctx, 7));
    // 0x30b834: 0xae261368  sw          $a2, 0x1368($s1)
    ctx->pc = 0x30b834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4968), GPR_U32(ctx, 6));
    // 0x30b838: 0xae231370  sw          $v1, 0x1370($s1)
    ctx->pc = 0x30b838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4976), GPR_U32(ctx, 3));
    // 0x30b83c: 0xe6251374  swc1        $f5, 0x1374($s1)
    ctx->pc = 0x30b83cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4980), bits); }
    // 0x30b840: 0xe629137c  swc1        $f9, 0x137C($s1)
    ctx->pc = 0x30b840u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4988), bits); }
    // 0x30b844: 0xe6261380  swc1        $f6, 0x1380($s1)
    ctx->pc = 0x30b844u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4992), bits); }
    // 0x30b848: 0xe6271384  swc1        $f7, 0x1384($s1)
    ctx->pc = 0x30b848u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4996), bits); }
    // 0x30b84c: 0xe628134c  swc1        $f8, 0x134C($s1)
    ctx->pc = 0x30b84cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4940), bits); }
    // 0x30b850: 0xae201360  sw          $zero, 0x1360($s1)
    ctx->pc = 0x30b850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4960), GPR_U32(ctx, 0));
    // 0x30b854: 0xae201364  sw          $zero, 0x1364($s1)
    ctx->pc = 0x30b854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4964), GPR_U32(ctx, 0));
    // 0x30b858: 0xc0b418a  jal         func_2D0628
    ctx->pc = 0x30B858u;
    SET_GPR_U32(ctx, 31, 0x30B860u);
    ctx->pc = 0x30B85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B858u;
    // 0x30b85c: 0xe6291378  swc1        $f9, 0x1378($s1) (Delay Slot)
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4984), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0628u, 0x30B858u, 0x30B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B860u;
label_30b860:
    // 0x30b860: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x30b860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x30b864: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B864u;
    SET_GPR_U32(ctx, 31, 0x30B86Cu);
    ctx->pc = 0x30B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B864u;
    // 0x30b868: 0x24847d90  addiu       $a0, $a0, 0x7D90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B864u, 0x30B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B86Cu;
label_30b86c:
    // 0x30b86c: 0x0  nop
    ctx->pc = 0x30b86cu;
    // NOP
label_30b870:
    // 0x30b870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b874: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30B874u;
    SET_GPR_U32(ctx, 31, 0x30B87Cu);
    ctx->pc = 0x30B878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B874u;
    // 0x30b878: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30B874u, 0x30B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B87Cu;
label_30b87c:
    // 0x30b87c: 0x0  nop
    ctx->pc = 0x30b87cu;
    // NOP
    // 0x30b880: 0x1613fffb  bne         $s0, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30B880u;
    {
        const bool branch_taken_0x30b880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x30B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B880u;
        // 0x30b884: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b880) {
            ctx->pc = 0x30B870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b870;
        }
    }
    ctx->pc = 0x30B888u;
label_30b888:
    // 0x30b888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30b888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b88c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30b88cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30b890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30b890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b894: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30b894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30b898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30b898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b89c: 0x3e00008  jr          $ra
    ctx->pc = 0x30B89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B89Cu;
        // 0x30b8a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B8A4u;
    // 0x30b8a4: 0x0  nop
    ctx->pc = 0x30b8a4u;
    // NOP
    ctx->pc = 0x30b8a8u;
}
