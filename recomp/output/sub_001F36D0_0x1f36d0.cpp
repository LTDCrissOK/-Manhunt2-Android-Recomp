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

// Function: sub_001F36D0
// Address: 0x1f36d0 - 0x1f3888
void sub_001F36D0_0x1f36d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F36D0_0x1f36d0");
#endif

    switch (ctx->pc) {
        case 0x1f3754u: goto label_1f3754;
        case 0x1f3780u: goto label_1f3780;
        case 0x1f37a0u: goto label_1f37a0;
        case 0x1f37b4u: goto label_1f37b4;
        case 0x1f37c0u: goto label_1f37c0;
        case 0x1f381cu: goto label_1f381c;
        case 0x1f3858u: goto label_1f3858;
        default: break;
    }

    ctx->pc = 0x1f36d0u;

    // 0x1f36d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f36d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f36d4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1f36d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1f36d8: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x1f36d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x1f36dc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f36dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f36e0: 0x9263928c  lbu         $v1, -0x6D74($s3)
    ctx->pc = 0x1f36e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F928Cu));
    // 0x1f36e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f36e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f36e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f36ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f36f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f36f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f36f4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f36f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f36f8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f36f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f36fc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1f36fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1f3700: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f3700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3704: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f3704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f3708: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f3708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f370c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1f370cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f3710: 0x2c42001b  sltiu       $v0, $v0, 0x1B
    ctx->pc = 0x1f3710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x1f3714: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f3714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f3718: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3718u;
    {
        const bool branch_taken_0x1f3718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3718u;
        // 0x1f371c: 0xa263928c  sb          $v1, -0x6D74($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4294939276), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3718) {
            ctx->pc = 0x1F3728u;
            goto label_1f3728;
        }
    }
    ctx->pc = 0x1F3720u;
    // 0x1f3720: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1f3720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1f3724: 0xa262928c  sb          $v0, -0x6D74($s3)
    ctx->pc = 0x1f3724u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294939276), (uint8_t)GPR_U32(ctx, 2));
label_1f3728:
    // 0x1f3728: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f3728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f372c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f372cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f3730: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1f3734: 0xa20200fc  sb          $v0, 0xFC($s0)
    ctx->pc = 0x1f3734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3738: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f3738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f373c: 0x24c6ee98  addiu       $a2, $a2, -0x1168
    ctx->pc = 0x1f373cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962840));
    // 0x1f3740: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f3740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f3744: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f3744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3748: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f3748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f374c: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F374Cu;
    SET_GPR_U32(ctx, 31, 0x1F3754u);
    ctx->pc = 0x1F3750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F374Cu;
    // 0x1f3750: 0x26110130  addiu       $s1, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F374Cu, 0x1F3754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3754u;
label_1f3754:
    // 0x1f3754: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x1f3754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f3758: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f3758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f375c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1f375cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f3760: 0x0  nop
    ctx->pc = 0x1f3760u;
    // NOP
    // 0x1f3764: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1f3764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1f3768: 0x93b50028  lbu         $s5, 0x28($sp)
    ctx->pc = 0x1f3768u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f376c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F376Cu;
    {
        const bool branch_taken_0x1f376c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F376Cu;
        // 0x1f3770: 0x4615ad02  mul.s       $f20, $f21, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f376c) {
            ctx->pc = 0x1F37A0u;
            goto label_1f37a0;
        }
    }
    ctx->pc = 0x1F3774u;
    // 0x1f3774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3778: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F3778u;
    SET_GPR_U32(ctx, 31, 0x1F3780u);
    ctx->pc = 0x1F377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3778u;
    // 0x1f377c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F3778u, 0x1F3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3780u;
label_1f3780:
    // 0x1f3780: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f3780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3784: 0x0  nop
    ctx->pc = 0x1f3784u;
    // NOP
    // 0x1f3788: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1F3788u;
    {
        const bool branch_taken_0x1f3788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3788u;
        // 0x1f378c: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3788) {
            ctx->pc = 0x1F3858u;
            goto label_1f3858;
        }
    }
    ctx->pc = 0x1F3790u;
    // 0x1f3790: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3794: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f3794u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f3798: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F3798u;
    SET_GPR_U32(ctx, 31, 0x1F37A0u);
    ctx->pc = 0x1F379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3798u;
    // 0x1f379c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F3798u, 0x1F37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37A0u;
label_1f37a0:
    // 0x1f37a0: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1f37a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f37a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f37a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37a8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f37a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1f37ac: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F37ACu;
    SET_GPR_U32(ctx, 31, 0x1F37B4u);
    ctx->pc = 0x1F37B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37ACu;
    // 0x1f37b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F37ACu, 0x1F37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37B4u;
label_1f37b4:
    // 0x1f37b4: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1f37b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f37b8: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1F37B8u;
    SET_GPR_U32(ctx, 31, 0x1F37C0u);
    ctx->pc = 0x1F37BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37B8u;
    // 0x1f37bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1F37B8u, 0x1F37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37C0u;
label_1f37c0:
    // 0x1f37c0: 0x9203010c  lbu         $v1, 0x10C($s0)
    ctx->pc = 0x1f37c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1f37c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f37c8: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1f37c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f37cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f37ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f37d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f37d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f37d4: 0x0  nop
    ctx->pc = 0x1f37d4u;
    // NOP
    // 0x1f37d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f37d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f37dc: 0xa2020170  sb          $v0, 0x170($s0)
    ctx->pc = 0x1f37dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f37e0: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1f37e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1f37e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f37e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f37e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f37e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37ec: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f37ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f37f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f37f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f37f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f37f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f37f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f37f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f37fc: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1f37fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3800: 0x9263928c  lbu         $v1, -0x6D74($s3)
    ctx->pc = 0x1f3800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294939276)));
    // 0x1f3804: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1f3804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1f3808: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f3808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f380c: 0xa60300f4  sh          $v1, 0xF4($s0)
    ctx->pc = 0x1f380cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3810: 0xae0500f8  sw          $a1, 0xF8($s0)
    ctx->pc = 0x1f3810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 5));
    // 0x1f3814: 0xc07dd9a  jal         func_1F7668
    ctx->pc = 0x1F3814u;
    SET_GPR_U32(ctx, 31, 0x1F381Cu);
    ctx->pc = 0x1F3818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3814u;
    // 0x1f3818: 0xae060104  sw          $a2, 0x104($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7668u, 0x1F3814u, 0x1F381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F381Cu;
label_1f381c:
    // 0x1f381c: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x1f381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3824: 0xa215011c  sb          $s5, 0x11C($s0)
    ctx->pc = 0x1f3824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 21));
    // 0x1f3828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f382c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f382cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f3830: 0xe6150120  swc1        $f21, 0x120($s0)
    ctx->pc = 0x1f3830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f3834: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f3834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f3838: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f3838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f383c: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f383cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3840: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f3840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f3844: 0xe6010108  swc1        $f1, 0x108($s0)
    ctx->pc = 0x1f3844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x1f3848: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1f3848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1f384c: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1f384cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1f3850: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F3850u;
    SET_GPR_U32(ctx, 31, 0x1F3858u);
    ctx->pc = 0x1F3854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3850u;
    // 0x1f3854: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F3850u, 0x1F3858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3858u;
label_1f3858:
    // 0x1f3858: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f3858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f385c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f385cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3860: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f3860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3864: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1f3864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3868: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f3868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f386c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1f386cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f3870: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f3870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f3874: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1f3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f3878: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f3878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f387c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F387Cu;
        // 0x1f3880: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F387Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3884u;
    // 0x1f3884: 0x0  nop
    ctx->pc = 0x1f3884u;
    // NOP
    ctx->pc = 0x1f3888u;
}
