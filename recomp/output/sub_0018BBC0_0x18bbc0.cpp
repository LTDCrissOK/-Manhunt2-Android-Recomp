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

// Function: sub_0018BBC0
// Address: 0x18bbc0 - 0x18bd20
void sub_0018BBC0_0x18bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BBC0_0x18bbc0");
#endif

    switch (ctx->pc) {
        case 0x18bbf8u: goto label_18bbf8;
        case 0x18bc00u: goto label_18bc00;
        case 0x18bcb4u: goto label_18bcb4;
        case 0x18bcc8u: goto label_18bcc8;
        default: break;
    }

    ctx->pc = 0x18bbc0u;

    // 0x18bbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18bbc4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x18bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x18bbc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18bbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18bbcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18bbd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18bbd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bbd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18bbd8: 0x2444ef50  addiu       $a0, $v0, -0x10B0
    ctx->pc = 0x18bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
    // 0x18bbdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18bbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18bbe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18bbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bbe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18bbe8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48EF54u));
    // 0x18bbec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x18bbecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x48EF5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF5Cu, _value); } while (0);
    // 0x18bbf0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x18BBF0u;
    {
        const bool branch_taken_0x18bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBF0u;
        // 0x18bbf4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbf0) {
            ctx->pc = 0x18BCD0u;
            goto label_18bcd0;
        }
    }
    ctx->pc = 0x18BBF8u;
label_18bbf8:
    // 0x18bbf8: 0xc0952e8  jal         func_254BA0
    ctx->pc = 0x18BBF8u;
    SET_GPR_U32(ctx, 31, 0x18BC00u);
    ctx->pc = 0x18BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBF8u;
    // 0x18bbfc: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x18BBF8u, 0x18BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC00u;
label_18bc00:
    // 0x18bc00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18bc00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc04: 0x12330033  beq         $s1, $s3, . + 4 + (0x33 << 2)
    ctx->pc = 0x18BC04u;
    {
        const bool branch_taken_0x18bc04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x18BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC04u;
        // 0x18bc08: 0x2643ef50  addiu       $v1, $s2, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc04) {
            ctx->pc = 0x18BCD4u;
            goto label_18bcd4;
        }
    }
    ctx->pc = 0x18BC0Cu;
    // 0x18bc0c: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x18bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x18bc10: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x18BC10u;
    {
        const bool branch_taken_0x18bc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC10u;
        // 0x18bc14: 0x262300b0  addiu       $v1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc10) {
            ctx->pc = 0x18BCD0u;
            goto label_18bcd0;
        }
    }
    ctx->pc = 0x18BC18u;
    // 0x18bc18: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18bc1c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bc20: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18bc24: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x18bc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x18bc28: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x18bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x18bc2c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18bc2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18bc30: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bc34: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18bc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18bc38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18bc38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18bc3c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x18bc3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18bc40: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18bc40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18bc44: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x18bc44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18bc48: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x18bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bc4c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x18bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18bc50: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x18bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18bc54: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18bc54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18bc58: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18bc58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18bc5c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x18bc5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18bc60: 0x0  nop
    ctx->pc = 0x18bc60u;
    // NOP
    // 0x18bc64: 0x0  nop
    ctx->pc = 0x18bc64u;
    // NOP
    // 0x18bc68: 0x46010084  c1          0x10084
    ctx->pc = 0x18bc68u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x18bc6c: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x18bc6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x18bc70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18bc70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bc74: 0x0  nop
    ctx->pc = 0x18bc74u;
    // NOP
    // 0x18bc78: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x18bc78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bc7c: 0x0  nop
    ctx->pc = 0x18bc7cu;
    // NOP
    // 0x18bc80: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18BC80u;
    {
        const bool branch_taken_0x18bc80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC80u;
        // 0x18bc84: 0xe6020050  swc1        $f2, 0x50($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc80) {
            ctx->pc = 0x18BCACu;
            goto label_18bcac;
        }
    }
    ctx->pc = 0x18BC88u;
    // 0x18bc88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18bc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18bc8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18bc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bc90: 0x0  nop
    ctx->pc = 0x18bc90u;
    // NOP
    // 0x18bc94: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x18bc94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x18bc98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18bc98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bc9c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x18bc9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18bca0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18bca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18bca4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18bca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18bca8: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x18bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_18bcac:
    // 0x18bcac: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x18BCACu;
    SET_GPR_U32(ctx, 31, 0x18BCB4u);
    ctx->pc = 0x18BCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCACu;
    // 0x18bcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x18BCACu, 0x18BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCB4u;
label_18bcb4:
    // 0x18bcb4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18BCB4u;
    {
        const bool branch_taken_0x18bcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCB4u;
        // 0x18bcb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bcb4) {
            ctx->pc = 0x18BD00u;
            goto label_18bd00;
        }
    }
    ctx->pc = 0x18BCBCu;
    // 0x18bcbc: 0x262500f0  addiu       $a1, $s1, 0xF0
    ctx->pc = 0x18bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x18bcc0: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x18BCC0u;
    SET_GPR_U32(ctx, 31, 0x18BCC8u);
    ctx->pc = 0x18BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCC0u;
    // 0x18bcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x18BCC0u, 0x18BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCC8u;
label_18bcc8:
    // 0x18bcc8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18BCC8u;
    {
        const bool branch_taken_0x18bcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCC8u;
        // 0x18bccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bcc8) {
            ctx->pc = 0x18BD00u;
            goto label_18bd00;
        }
    }
    ctx->pc = 0x18BCD0u;
label_18bcd0:
    // 0x18bcd0: 0x2643ef50  addiu       $v1, $s2, -0x10B0
    ctx->pc = 0x18bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963024));
label_18bcd4:
    // 0x18bcd4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18bcd8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BCD8u;
    {
        const bool branch_taken_0x18bcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCD8u;
        // 0x18bcdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bcd8) {
            ctx->pc = 0x18BCE4u;
            goto label_18bce4;
        }
    }
    ctx->pc = 0x18BCE0u;
    // 0x18bce0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18bce4:
    // 0x18bce4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BCE4u;
    {
        const bool branch_taken_0x18bce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bce4) {
            ctx->pc = 0x18BCF4u;
            goto label_18bcf4;
        }
    }
    ctx->pc = 0x18BCECu;
    // 0x18bcec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x18bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18bcf0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_18bcf4:
    // 0x18bcf4: 0x5480ffc0  bnel        $a0, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x18BCF4u;
    {
        const bool branch_taken_0x18bcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bcf4) {
            ctx->pc = 0x18BCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BCF4u;
            // 0x18bcf8: 0x8c850fe4  lw          $a1, 0xFE4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bbf8;
        }
    }
    ctx->pc = 0x18BCFCu;
    // 0x18bcfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18bcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bd00:
    // 0x18bd00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18bd00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bd04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18bd04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18bd08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18bd08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bd0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18bd0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18bd10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bd14: 0x3e00008  jr          $ra
    ctx->pc = 0x18BD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD14u;
        // 0x18bd18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BD1Cu;
    // 0x18bd1c: 0x0  nop
    ctx->pc = 0x18bd1cu;
    // NOP
    ctx->pc = 0x18bd20u;
}
