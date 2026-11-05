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

// Function: sub_001F3888
// Address: 0x1f3888 - 0x1f3a40
void sub_001F3888_0x1f3888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3888_0x1f3888");
#endif

    switch (ctx->pc) {
        case 0x1f390cu: goto label_1f390c;
        case 0x1f3938u: goto label_1f3938;
        case 0x1f3958u: goto label_1f3958;
        case 0x1f396cu: goto label_1f396c;
        case 0x1f3978u: goto label_1f3978;
        case 0x1f39d4u: goto label_1f39d4;
        case 0x1f3a10u: goto label_1f3a10;
        default: break;
    }

    ctx->pc = 0x1f3888u;

    // 0x1f3888: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f3888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f388c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1f388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1f3890: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x1f3890u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x1f3894: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f3894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f3898: 0x9263928d  lbu         $v1, -0x6D73($s3)
    ctx->pc = 0x1f3898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F928Du));
    // 0x1f389c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f389cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f38a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f38a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f38a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f38a8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f38a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f38ac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f38acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f38b0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f38b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f38b4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1f38b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1f38b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f38b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f38bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f38bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f38c0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f38c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f38c4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1f38c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f38c8: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x1f38c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1f38cc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f38ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f38d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F38D0u;
    {
        const bool branch_taken_0x1f38d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38D0u;
        // 0x1f38d4: 0xa263928d  sb          $v1, -0x6D73($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4294939277), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f38d0) {
            ctx->pc = 0x1F38E0u;
            goto label_1f38e0;
        }
    }
    ctx->pc = 0x1F38D8u;
    // 0x1f38d8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1f38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1f38dc: 0xa262928d  sb          $v0, -0x6D73($s3)
    ctx->pc = 0x1f38dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294939277), (uint8_t)GPR_U32(ctx, 2));
label_1f38e0:
    // 0x1f38e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f38e4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f38e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f38e8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1f38e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1f38ec: 0xa20200fc  sb          $v0, 0xFC($s0)
    ctx->pc = 0x1f38ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f38f0: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f38f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f38f4: 0x24c6eea8  addiu       $a2, $a2, -0x1158
    ctx->pc = 0x1f38f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962856));
    // 0x1f38f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f38fc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f38fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3900: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f3900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3904: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F3904u;
    SET_GPR_U32(ctx, 31, 0x1F390Cu);
    ctx->pc = 0x1F3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3904u;
    // 0x1f3908: 0x26110130  addiu       $s1, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F3904u, 0x1F390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F390Cu;
label_1f390c:
    // 0x1f390c: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x1f390cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f3910: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f3910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f3914: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1f3914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f3918: 0x0  nop
    ctx->pc = 0x1f3918u;
    // NOP
    // 0x1f391c: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1f391cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1f3920: 0x93b50028  lbu         $s5, 0x28($sp)
    ctx->pc = 0x1f3920u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3924: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3924u;
    {
        const bool branch_taken_0x1f3924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3924u;
        // 0x1f3928: 0x4615ad02  mul.s       $f20, $f21, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3924) {
            ctx->pc = 0x1F3958u;
            goto label_1f3958;
        }
    }
    ctx->pc = 0x1F392Cu;
    // 0x1f392c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3930: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F3930u;
    SET_GPR_U32(ctx, 31, 0x1F3938u);
    ctx->pc = 0x1F3934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3930u;
    // 0x1f3934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F3930u, 0x1F3938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3938u;
label_1f3938:
    // 0x1f3938: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f3938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f393c: 0x0  nop
    ctx->pc = 0x1f393cu;
    // NOP
    // 0x1f3940: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1F3940u;
    {
        const bool branch_taken_0x1f3940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3940u;
        // 0x1f3944: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3940) {
            ctx->pc = 0x1F3A10u;
            goto label_1f3a10;
        }
    }
    ctx->pc = 0x1F3948u;
    // 0x1f3948: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f394c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f394cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f3950: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F3950u;
    SET_GPR_U32(ctx, 31, 0x1F3958u);
    ctx->pc = 0x1F3954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3950u;
    // 0x1f3954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F3950u, 0x1F3958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3958u;
label_1f3958:
    // 0x1f3958: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1f3958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f395c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f395cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3960: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f3960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1f3964: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F3964u;
    SET_GPR_U32(ctx, 31, 0x1F396Cu);
    ctx->pc = 0x1F3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3964u;
    // 0x1f3968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F3964u, 0x1F396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F396Cu;
label_1f396c:
    // 0x1f396c: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1f396cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3970: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1F3970u;
    SET_GPR_U32(ctx, 31, 0x1F3978u);
    ctx->pc = 0x1F3974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3970u;
    // 0x1f3974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1F3970u, 0x1F3978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3978u;
label_1f3978:
    // 0x1f3978: 0x9203010c  lbu         $v1, 0x10C($s0)
    ctx->pc = 0x1f3978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1f397c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f3980: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1f3980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f3984: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f3984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f3988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f3988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f398c: 0x0  nop
    ctx->pc = 0x1f398cu;
    // NOP
    // 0x1f3990: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f3990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f3994: 0xa2020170  sb          $v0, 0x170($s0)
    ctx->pc = 0x1f3994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f3998: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1f3998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1f399c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f399cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f39a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f39a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39a4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f39a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f39a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f39a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f39ac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f39acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f39b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f39b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f39b4: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1f39b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f39b8: 0x9263928d  lbu         $v1, -0x6D73($s3)
    ctx->pc = 0x1f39b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294939277)));
    // 0x1f39bc: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1f39bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1f39c0: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f39c4: 0xa60300f4  sh          $v1, 0xF4($s0)
    ctx->pc = 0x1f39c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f39c8: 0xae0500f8  sw          $a1, 0xF8($s0)
    ctx->pc = 0x1f39c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 5));
    // 0x1f39cc: 0xc07dd9a  jal         func_1F7668
    ctx->pc = 0x1F39CCu;
    SET_GPR_U32(ctx, 31, 0x1F39D4u);
    ctx->pc = 0x1F39D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F39CCu;
    // 0x1f39d0: 0xae060104  sw          $a2, 0x104($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7668u, 0x1F39CCu, 0x1F39D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39D4u;
label_1f39d4:
    // 0x1f39d4: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x1f39d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f39d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f39dc: 0xa215011c  sb          $s5, 0x11C($s0)
    ctx->pc = 0x1f39dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 21));
    // 0x1f39e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f39e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f39e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f39e8: 0xe6150120  swc1        $f21, 0x120($s0)
    ctx->pc = 0x1f39e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f39ec: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f39ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f39f0: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f39f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f39f4: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f39f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f39f8: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f39fc: 0xe6010108  swc1        $f1, 0x108($s0)
    ctx->pc = 0x1f39fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x1f3a00: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1f3a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1f3a04: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1f3a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1f3a08: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F3A08u;
    SET_GPR_U32(ctx, 31, 0x1F3A10u);
    ctx->pc = 0x1F3A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A08u;
    // 0x1f3a0c: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F3A08u, 0x1F3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A10u;
label_1f3a10:
    // 0x1f3a10: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f3a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3a14: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f3a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3a18: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f3a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3a1c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1f3a1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3a20: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f3a20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3a24: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1f3a24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f3a28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f3a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f3a2c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1f3a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f3a30: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f3a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A34u;
        // 0x1f3a38: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3A3Cu;
    // 0x1f3a3c: 0x0  nop
    ctx->pc = 0x1f3a3cu;
    // NOP
    ctx->pc = 0x1f3a40u;
}
