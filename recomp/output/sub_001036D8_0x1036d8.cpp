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

// Function: sub_001036D8
// Address: 0x1036d8 - 0x103850
void sub_001036D8_0x1036d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001036D8_0x1036d8");
#endif

    switch (ctx->pc) {
        case 0x103780u: goto label_103780;
        case 0x103788u: goto label_103788;
        case 0x1037c4u: goto label_1037c4;
        default: break;
    }

    ctx->pc = 0x1036d8u;

    // 0x1036d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1036d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1036dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1036dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1036e0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1036e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1036e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1036e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036e8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1036e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1036ec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1036ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1036f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1036f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1036f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1036f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1036fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1036fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x103700: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x103700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x103704: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x103704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x103708: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x103708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10370c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x10370cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x103710: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103710u;
    {
        const bool branch_taken_0x103710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x103714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103710u;
        // 0x103714: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103710) {
            ctx->pc = 0x103720u;
            goto label_103720;
        }
    }
    ctx->pc = 0x103718u;
    // 0x103718: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x103718u;
    {
        const bool branch_taken_0x103718 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x10371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103718u;
        // 0x10371c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103718) {
            ctx->pc = 0x103728u;
            goto label_103728;
        }
    }
    ctx->pc = 0x103720u;
label_103720:
    // 0x103720: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x103720u;
    {
        const bool branch_taken_0x103720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103720u;
        // 0x103724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103720) {
            ctx->pc = 0x10381Cu;
            goto label_10381c;
        }
    }
    ctx->pc = 0x103728u;
label_103728:
    // 0x103728: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x103728u;
    {
        const bool branch_taken_0x103728 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103728u;
        // 0x10372c: 0xc45489d0  lwc1        $f20, -0x7630($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103728) {
            ctx->pc = 0x103760u;
            goto label_103760;
        }
    }
    ctx->pc = 0x103730u;
    // 0x103730: 0x5235000c  beql        $s1, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x103730u;
    {
        const bool branch_taken_0x103730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x103730) {
            ctx->pc = 0x103734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103730u;
            // 0x103734: 0x92340022  lbu         $s4, 0x22($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103764u;
            goto label_103764;
        }
    }
    ctx->pc = 0x103738u;
    // 0x103738: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x103738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x10373c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10373Cu;
    {
        const bool branch_taken_0x10373c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10373Cu;
        // 0x103740: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10373c) {
            ctx->pc = 0x10374Cu;
            goto label_10374c;
        }
    }
    ctx->pc = 0x103744u;
    // 0x103744: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103744u;
    {
        const bool branch_taken_0x103744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103744u;
        // 0x103748: 0xc6200030  lwc1        $f0, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103744) {
            ctx->pc = 0x103750u;
            goto label_103750;
        }
    }
    ctx->pc = 0x10374Cu;
label_10374c:
    // 0x10374c: 0xc440a568  lwc1        $f0, -0x5A98($v0)
    ctx->pc = 0x10374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_103750:
    // 0x103750: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x103750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103754: 0x0  nop
    ctx->pc = 0x103754u;
    // NOP
    // 0x103758: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x103758u;
    {
        const bool branch_taken_0x103758 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103758u;
        // 0x10375c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103758) {
            ctx->pc = 0x10381Cu;
            goto label_10381c;
        }
    }
    ctx->pc = 0x103760u;
label_103760:
    // 0x103760: 0x92340022  lbu         $s4, 0x22($s1)
    ctx->pc = 0x103760u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_103764:
    // 0x103764: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x103764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103768: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x103768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x10376c: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x10376cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x103770: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x103770u;
    {
        const bool branch_taken_0x103770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103770u;
        // 0x103774: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103770) {
            ctx->pc = 0x103818u;
            goto label_103818;
        }
    }
    ctx->pc = 0x103778u;
    // 0x103778: 0x3c170044  lui         $s7, 0x44
    ctx->pc = 0x103778u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)68 << 16));
    // 0x10377c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103780:
    // 0x103780: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x103780u;
    SET_GPR_U32(ctx, 31, 0x103788u);
    ctx->pc = 0x103784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103780u;
    // 0x103784: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x103780u, 0x103788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103788u;
label_103788:
    // 0x103788: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x103788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10378c: 0x5215001f  beql        $s0, $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x10378Cu;
    {
        const bool branch_taken_0x10378c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x10378c) {
            ctx->pc = 0x103790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10378Cu;
            // 0x103790: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10380Cu;
            goto label_10380c;
        }
    }
    ctx->pc = 0x103794u;
    // 0x103794: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x103794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x103798: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x103798u;
    {
        const bool branch_taken_0x103798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103798u;
        // 0x10379c: 0xc6e0a568  lwc1        $f0, -0x5A98($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103798) {
            ctx->pc = 0x1037A4u;
            goto label_1037a4;
        }
    }
    ctx->pc = 0x1037A0u;
    // 0x1037a0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1037a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1037a4:
    // 0x1037a4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1037a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1037a8: 0x0  nop
    ctx->pc = 0x1037a8u;
    // NOP
    // 0x1037ac: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x1037ACu;
    {
        const bool branch_taken_0x1037ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1037ac) {
            ctx->pc = 0x1037B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1037ACu;
            // 0x1037b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10380Cu;
            goto label_10380c;
        }
    }
    ctx->pc = 0x1037B4u;
    // 0x1037b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1037b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1037b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1037b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1037bc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1037BCu;
    SET_GPR_U32(ctx, 31, 0x1037C4u);
    ctx->pc = 0x1037C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037BCu;
    // 0x1037c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1037BCu, 0x1037C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037C4u;
label_1037c4:
    // 0x1037c4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1037c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1037c8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1037c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1037cc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1037ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1037d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1037d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1037d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1037d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1037d8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1037d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1037dc: 0x52600009  beql        $s3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1037DCu;
    {
        const bool branch_taken_0x1037dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1037dc) {
            ctx->pc = 0x1037E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1037DCu;
            // 0x1037e0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x103804u;
            goto label_103804;
        }
    }
    ctx->pc = 0x1037E4u;
    // 0x1037e4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1037e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1037e8: 0x0  nop
    ctx->pc = 0x1037e8u;
    // NOP
    // 0x1037ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1037ECu;
    {
        const bool branch_taken_0x1037ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1037F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037ECu;
        // 0x1037f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037ec) {
            ctx->pc = 0x1037F8u;
            goto label_1037f8;
        }
    }
    ctx->pc = 0x1037F4u;
    // 0x1037f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1037f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1037f8:
    // 0x1037f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1037F8u;
    {
        const bool branch_taken_0x1037f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1037f8) {
            ctx->pc = 0x1037FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1037F8u;
            // 0x1037fc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10380Cu;
            goto label_10380c;
        }
    }
    ctx->pc = 0x103800u;
    // 0x103800: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x103800u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_103804:
    // 0x103804: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x103804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103808: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x103808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10380c:
    // 0x10380c: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x10380cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x103810: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x103810u;
    {
        const bool branch_taken_0x103810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103810u;
        // 0x103814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103810) {
            ctx->pc = 0x103780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103780;
        }
    }
    ctx->pc = 0x103818u;
label_103818:
    // 0x103818: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x103818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10381c:
    // 0x10381c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10381cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103820: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x103820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103824: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103828: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x103828u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10382c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x10382cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103830: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x103830u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x103834: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x103834u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103838: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x103838u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10383c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10383cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103840: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x103840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x103844: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x103844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103848: 0x3e00008  jr          $ra
    ctx->pc = 0x103848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103848u;
        // 0x10384c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103850u;
}
