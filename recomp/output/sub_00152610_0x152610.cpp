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

// Function: sub_00152610
// Address: 0x152610 - 0x152740
void sub_00152610_0x152610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152610_0x152610");
#endif

    switch (ctx->pc) {
        case 0x152660u: goto label_152660;
        case 0x1526a8u: goto label_1526a8;
        case 0x15271cu: goto label_15271c;
        default: break;
    }

    ctx->pc = 0x152610u;

    // 0x152610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152614: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x152614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152618: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x152618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15261c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15261cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x152620: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x152620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x152624: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x152624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x152628: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x152628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15262c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x152630: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x152630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x152634: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x152634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152638: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x152638u;
    {
        const bool branch_taken_0x152638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152638u;
        // 0x15263c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152638) {
            ctx->pc = 0x152724u;
            goto label_152724;
        }
    }
    ctx->pc = 0x152640u;
    // 0x152640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x152644: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x152644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x152648: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x152648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15264c: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x15264cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x152650: 0x52000035  beql        $s0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x152650u;
    {
        const bool branch_taken_0x152650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x152650) {
            ctx->pc = 0x152654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152650u;
            // 0x152654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152728u;
            goto label_152728;
        }
    }
    ctx->pc = 0x152658u;
    // 0x152658: 0xc053c6a  jal         func_14F1A8
    ctx->pc = 0x152658u;
    SET_GPR_U32(ctx, 31, 0x152660u);
    ctx->pc = 0x15265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152658u;
    // 0x15265c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A8u, 0x152658u, 0x152660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152660u;
label_152660:
    // 0x152660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x152660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152664: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x152664u;
    {
        const bool branch_taken_0x152664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x152668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152664u;
        // 0x152668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152664) {
            ctx->pc = 0x152728u;
            goto label_152728;
        }
    }
    ctx->pc = 0x15266Cu;
    // 0x15266c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x152670: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x152674: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x152674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x152678: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x152678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x15267c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15267Cu;
    {
        const bool branch_taken_0x15267c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15267c) {
            ctx->pc = 0x152680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15267Cu;
            // 0x152680: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15268Cu;
            goto label_15268c;
        }
    }
    ctx->pc = 0x152684u;
    // 0x152684: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152684u;
    {
        const bool branch_taken_0x152684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152684u;
        // 0x152688: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152684) {
            ctx->pc = 0x152694u;
            goto label_152694;
        }
    }
    ctx->pc = 0x15268Cu;
label_15268c:
    // 0x15268c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152690: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x152690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_152694:
    // 0x152694: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x152694u;
    {
        const bool branch_taken_0x152694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x152698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152694u;
        // 0x152698: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152694) {
            ctx->pc = 0x152724u;
            goto label_152724;
        }
    }
    ctx->pc = 0x15269Cu;
    // 0x15269c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15269cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526a0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1526A0u;
    SET_GPR_U32(ctx, 31, 0x1526A8u);
    ctx->pc = 0x1526A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1526A0u;
    // 0x1526a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1526A0u, 0x1526A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526A8u;
label_1526a8:
    // 0x1526a8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1526a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1526ac: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1526acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1526b0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1526b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1526b4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1526b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1526b8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1526b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1526bc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1526bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1526c0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1526c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1526c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1526c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526c8: 0x0  nop
    ctx->pc = 0x1526c8u;
    // NOP
    // 0x1526cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1526ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1526d0: 0x0  nop
    ctx->pc = 0x1526d0u;
    // NOP
    // 0x1526d4: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x1526D4u;
    {
        const bool branch_taken_0x1526d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1526d4) {
            ctx->pc = 0x1526D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1526D4u;
            // 0x1526d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152728u;
            goto label_152728;
        }
    }
    ctx->pc = 0x1526DCu;
    // 0x1526dc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1526dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1526e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1526e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1526e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1526e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1526e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1526ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1526ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1526f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1526f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1526f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526f8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1526f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1526fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1526fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x152700: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x152700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x152704: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x152704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152708: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x152708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15270c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x15270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152710: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x152710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x152714: 0xc041032  jal         func_1040C8
    ctx->pc = 0x152714u;
    SET_GPR_U32(ctx, 31, 0x15271Cu);
    ctx->pc = 0x152718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152714u;
    // 0x152718: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x152714u, 0x15271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15271Cu;
label_15271c:
    // 0x15271c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15271Cu;
    {
        const bool branch_taken_0x15271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15271Cu;
        // 0x152720: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15271c) {
            ctx->pc = 0x152728u;
            goto label_152728;
        }
    }
    ctx->pc = 0x152724u;
label_152724:
    // 0x152724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152728:
    // 0x152728: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x152728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15272c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15272cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x152730: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x152730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152734: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x152734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x152738: 0x3e00008  jr          $ra
    ctx->pc = 0x152738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152738u;
        // 0x15273c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152740u;
}
