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

// Function: sub_00169568
// Address: 0x169568 - 0x1696e0
void sub_00169568_0x169568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169568_0x169568");
#endif

    switch (ctx->pc) {
        case 0x1695b0u: goto label_1695b0;
        case 0x1695c0u: goto label_1695c0;
        case 0x1695e8u: goto label_1695e8;
        case 0x1695f0u: goto label_1695f0;
        case 0x169650u: goto label_169650;
        case 0x169680u: goto label_169680;
        case 0x169690u: goto label_169690;
        default: break;
    }

    ctx->pc = 0x169568u;

    // 0x169568: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x169568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16956c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16956cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169570: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x169570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x169574: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x169574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16957c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16957cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169580: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x169580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169584: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x169584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x169588: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x169588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16958c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x169590: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x169590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x169594: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x169594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x169598: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x169598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16959c: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x16959Cu;
    {
        const bool branch_taken_0x16959c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16959Cu;
        // 0x1695a0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16959c) {
            ctx->pc = 0x1696ACu;
            goto label_1696ac;
        }
    }
    ctx->pc = 0x1695A4u;
    // 0x1695a4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1695a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1695a8: 0xc0400be  jal         func_1002F8
    ctx->pc = 0x1695A8u;
    SET_GPR_U32(ctx, 31, 0x1695B0u);
    ctx->pc = 0x1695ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695A8u;
    // 0x1695ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002F8u, 0x1695A8u, 0x1695B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695B0u;
label_1695b0:
    // 0x1695b0: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1695B0u;
    {
        const bool branch_taken_0x1695b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695b0) {
            ctx->pc = 0x1695B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1695B0u;
            // 0x1695b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1696B0u;
            goto label_1696b0;
        }
    }
    ctx->pc = 0x1695B8u;
    // 0x1695b8: 0xc040094  jal         func_100250
    ctx->pc = 0x1695B8u;
    SET_GPR_U32(ctx, 31, 0x1695C0u);
    ctx->pc = 0x1695BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695B8u;
    // 0x1695bc: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100250u, 0x1695B8u, 0x1695C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695C0u;
label_1695c0:
    // 0x1695c0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1695c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695c4: 0x12c0003a  beqz        $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x1695C4u;
    {
        const bool branch_taken_0x1695c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695C4u;
        // 0x1695c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695c4) {
            ctx->pc = 0x1696B0u;
            goto label_1696b0;
        }
    }
    ctx->pc = 0x1695CCu;
    // 0x1695cc: 0x92d70022  lbu         $s7, 0x22($s6)
    ctx->pc = 0x1695ccu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 34)));
    // 0x1695d0: 0x12e00036  beqz        $s7, . + 4 + (0x36 << 2)
    ctx->pc = 0x1695D0u;
    {
        const bool branch_taken_0x1695d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695D0u;
        // 0x1695d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695d0) {
            ctx->pc = 0x1696ACu;
            goto label_1696ac;
        }
    }
    ctx->pc = 0x1695D8u;
    // 0x1695d8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1695d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1695dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1695dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1695e0: 0x241e0018  addiu       $fp, $zero, 0x18
    ctx->pc = 0x1695e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1695e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1695e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1695e8:
    // 0x1695e8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1695E8u;
    SET_GPR_U32(ctx, 31, 0x1695F0u);
    ctx->pc = 0x1695ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695E8u;
    // 0x1695ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1695E8u, 0x1695F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695F0u;
label_1695f0:
    // 0x1695f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1695f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695f4: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1695F4u;
    {
        const bool branch_taken_0x1695f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695F4u;
        // 0x1695f8: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695f4) {
            ctx->pc = 0x16969Cu;
            goto label_16969c;
        }
    }
    ctx->pc = 0x1695FCu;
    // 0x1695fc: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x1695fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169600: 0x52400027  beql        $s2, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x169600u;
    {
        const bool branch_taken_0x169600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x169600) {
            ctx->pc = 0x169604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169600u;
            // 0x169604: 0x32b000ff  andi        $s0, $s5, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1696A0u;
            goto label_1696a0;
        }
    }
    ctx->pc = 0x169608u;
    // 0x169608: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x169608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x16960c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16960Cu;
    {
        const bool branch_taken_0x16960c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16960Cu;
        // 0x169610: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16960c) {
            ctx->pc = 0x16961Cu;
            goto label_16961c;
        }
    }
    ctx->pc = 0x169614u;
    // 0x169614: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169614u;
    {
        const bool branch_taken_0x169614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169614u;
        // 0x169618: 0xc6410030  lwc1        $f1, 0x30($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169614) {
            ctx->pc = 0x169620u;
            goto label_169620;
        }
    }
    ctx->pc = 0x16961Cu;
label_16961c:
    // 0x16961c: 0xc441a568  lwc1        $f1, -0x5A98($v0)
    ctx->pc = 0x16961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_169620:
    // 0x169620: 0xc680033c  lwc1        $f0, 0x33C($s4)
    ctx->pc = 0x169620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169624: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x169624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169628: 0x0  nop
    ctx->pc = 0x169628u;
    // NOP
    // 0x16962c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x16962Cu;
    {
        const bool branch_taken_0x16962c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16962Cu;
        // 0x169630: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16962c) {
            ctx->pc = 0x16969Cu;
            goto label_16969c;
        }
    }
    ctx->pc = 0x169634u;
    // 0x169634: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x169634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169638: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x169638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16963c: 0x0  nop
    ctx->pc = 0x16963cu;
    // NOP
    // 0x169640: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x169640u;
    {
        const bool branch_taken_0x169640 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169640u;
        // 0x169644: 0x32b000ff  andi        $s0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169640) {
            ctx->pc = 0x1696A0u;
            goto label_1696a0;
        }
    }
    ctx->pc = 0x169648u;
    // 0x169648: 0x96930320  lhu         $s3, 0x320($s4)
    ctx->pc = 0x169648u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 800)));
    // 0x16964c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16964cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169650:
    // 0x169650: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x169650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x169654: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x169654u;
    {
        const bool branch_taken_0x169654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169654u;
        // 0x169658: 0x32b000ff  andi        $s0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169654) {
            ctx->pc = 0x1696A0u;
            goto label_1696a0;
        }
    }
    ctx->pc = 0x16965Cu;
    // 0x16965c: 0x23e2018  mult        $a0, $s1, $fp
    ctx->pc = 0x16965cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x169660: 0x8e820324  lw          $v0, 0x324($s4)
    ctx->pc = 0x169660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x169664: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x169664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x169668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x169668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16966c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16966Cu;
    {
        const bool branch_taken_0x16966c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16966c) {
            ctx->pc = 0x169670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16966Cu;
            // 0x169670: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169650;
        }
    }
    ctx->pc = 0x169674u;
    // 0x169674: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x169674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x169678: 0xc0400be  jal         func_1002F8
    ctx->pc = 0x169678u;
    SET_GPR_U32(ctx, 31, 0x169680u);
    ctx->pc = 0x16967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169678u;
    // 0x16967c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002F8u, 0x169678u, 0x169680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169680u;
label_169680:
    // 0x169680: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x169680u;
    {
        const bool branch_taken_0x169680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169680) {
            ctx->pc = 0x169684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169680u;
            // 0x169684: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169650;
        }
    }
    ctx->pc = 0x169688u;
    // 0x169688: 0xc040094  jal         func_100250
    ctx->pc = 0x169688u;
    SET_GPR_U32(ctx, 31, 0x169690u);
    ctx->pc = 0x16968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169688u;
    // 0x16968c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100250u, 0x169688u, 0x169690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169690u;
label_169690:
    // 0x169690: 0x5452ffef  bnel        $v0, $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x169690u;
    {
        const bool branch_taken_0x169690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x169690) {
            ctx->pc = 0x169694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169690u;
            // 0x169694: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169650;
        }
    }
    ctx->pc = 0x169698u;
    // 0x169698: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x169698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_16969c:
    // 0x16969c: 0x32b000ff  andi        $s0, $s5, 0xFF
    ctx->pc = 0x16969cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_1696a0:
    // 0x1696a0: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x1696a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1696a4: 0x5440ffd0  bnel        $v0, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1696A4u;
    {
        const bool branch_taken_0x1696a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1696a4) {
            ctx->pc = 0x1696A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1696A4u;
            // 0x1696a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1695E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1695e8;
        }
    }
    ctx->pc = 0x1696ACu;
label_1696ac:
    // 0x1696ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1696acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1696b0:
    // 0x1696b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1696b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1696b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1696b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1696b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1696b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1696bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1696bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1696c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1696c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1696c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1696c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1696c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1696c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1696cc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1696ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1696d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1696d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1696d4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1696d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1696d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1696D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1696DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696D8u;
        // 0x1696dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1696D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1696E0u;
}
