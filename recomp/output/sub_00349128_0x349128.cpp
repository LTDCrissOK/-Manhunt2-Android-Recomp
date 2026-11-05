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

// Function: sub_00349128
// Address: 0x349128 - 0x3493f0
void sub_00349128_0x349128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349128_0x349128");
#endif

    switch (ctx->pc) {
        case 0x349204u: goto label_349204;
        case 0x34922cu: goto label_34922c;
        case 0x34925cu: goto label_34925c;
        case 0x349270u: goto label_349270;
        case 0x34929cu: goto label_34929c;
        case 0x3492a4u: goto label_3492a4;
        case 0x349388u: goto label_349388;
        case 0x349394u: goto label_349394;
        case 0x3493c8u: goto label_3493c8;
        default: break;
    }

    ctx->pc = 0x349128u;

    // 0x349128: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x349128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34912c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x34912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x349130: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x349130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x349134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x349134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349138: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x349138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x34913c: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x34913cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x349140: 0x10c000a6  beqz        $a2, . + 4 + (0xA6 << 2)
    ctx->pc = 0x349140u;
    {
        const bool branch_taken_0x349140 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x349144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349140u;
        // 0x349144: 0x26030090  addiu       $v1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349140) {
            ctx->pc = 0x3493DCu;
            goto label_3493dc;
        }
    }
    ctx->pc = 0x349148u;
    // 0x349148: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x349148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x34914c: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x34914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349150: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x349150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x349154: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x349154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349158: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x349158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34915c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x349160: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x349160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x349164: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x349164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349168: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x349168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34916c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x34916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349170: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x349170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x349174: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x349174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349178: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x349178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x34917c: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x34917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349180: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x349180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349184: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x349184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349188: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x349188u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34918c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x34918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x349190: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x349190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x349194: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x349194u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x349198: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x349198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34919c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x34919cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3491a0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3491a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3491a4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x3491a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3491a8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3491a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3491ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3491acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3491b0: 0x3c01c316  lui         $at, 0xC316
    ctx->pc = 0x3491b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49942 << 16));
    // 0x3491b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3491b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3491b8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x3491b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3491bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3491bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3491c0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x3491c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3491c4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3491c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3491c8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x3491c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3491cc: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3491ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3491d0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x3491d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3491d4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3491d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3491d8: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x3491D8u;
    {
        const bool branch_taken_0x3491d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3491DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491D8u;
        // 0x3491dc: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3491d8) {
            ctx->pc = 0x349294u;
            goto label_349294;
        }
    }
    ctx->pc = 0x3491E0u;
    // 0x3491e0: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x3491e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x3491e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3491e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3491e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3491e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3491ec: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3491ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3491f0: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x3491f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3491f4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x3491f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3491f8: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x3491f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x3491fc: 0xc0c48da  jal         func_312368
    ctx->pc = 0x3491FCu;
    SET_GPR_U32(ctx, 31, 0x349204u);
    ctx->pc = 0x349200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3491FCu;
    // 0x349200: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x3491FCu, 0x349204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349204u;
label_349204:
    // 0x349204: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x349204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x349208: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x349208u;
    {
        const bool branch_taken_0x349208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349208u;
        // 0x34920c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349208) {
            ctx->pc = 0x34922Cu;
            goto label_34922c;
        }
    }
    ctx->pc = 0x349210u;
    // 0x349210: 0x80830051  lb          $v1, 0x51($a0)
    ctx->pc = 0x349210u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
    // 0x349214: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349214u;
    {
        const bool branch_taken_0x349214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x349214) {
            ctx->pc = 0x349224u;
            goto label_349224;
        }
    }
    ctx->pc = 0x34921Cu;
    // 0x34921c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34921Cu;
    {
        const bool branch_taken_0x34921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34921Cu;
        // 0x349220: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34921c) {
            ctx->pc = 0x34922Cu;
            goto label_34922c;
        }
    }
    ctx->pc = 0x349224u;
label_349224:
    // 0x349224: 0xc0b0f5c  jal         func_2C3D70
    ctx->pc = 0x349224u;
    SET_GPR_U32(ctx, 31, 0x34922Cu);
    ctx->pc = 0x349228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349224u;
    // 0x349228: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3D70u, 0x349224u, 0x34922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34922Cu;
label_34922c:
    // 0x34922c: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x34922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349230: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x349230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349234: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x349234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349238: 0x0  nop
    ctx->pc = 0x349238u;
    // NOP
    // 0x34923c: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x34923Cu;
    {
        const bool branch_taken_0x34923c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34923c) {
            ctx->pc = 0x349240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34923Cu;
            // 0x349240: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3492ACu;
            goto label_3492ac;
        }
    }
    ctx->pc = 0x349244u;
    // 0x349244: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x349244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x349248: 0x90820293  lbu         $v0, 0x293($a0)
    ctx->pc = 0x349248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 659)));
    // 0x34924c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34924Cu;
    {
        const bool branch_taken_0x34924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34924c) {
            ctx->pc = 0x349250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34924Cu;
            // 0x349250: 0xc6010088  lwc1        $f1, 0x88($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34927Cu;
            goto label_34927c;
        }
    }
    ctx->pc = 0x349254u;
    // 0x349254: 0xc09a0a6  jal         func_268298
    ctx->pc = 0x349254u;
    SET_GPR_U32(ctx, 31, 0x34925Cu);
    ctx->pc = 0x268298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268298u, 0x349254u, 0x34925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34925Cu;
label_34925c:
    // 0x34925c: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x34925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x349260: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x349260u;
    {
        const bool branch_taken_0x349260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x349260) {
            ctx->pc = 0x349264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349260u;
            // 0x349264: 0xc6000084  lwc1        $f0, 0x84($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x349278u;
            goto label_349278;
        }
    }
    ctx->pc = 0x349268u;
    // 0x349268: 0xc0b0f1a  jal         func_2C3C68
    ctx->pc = 0x349268u;
    SET_GPR_U32(ctx, 31, 0x349270u);
    ctx->pc = 0x2C3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C68u, 0x349268u, 0x349270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349270u;
label_349270:
    // 0x349270: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x349270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x349274: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x349274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_349278:
    // 0x349278: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x349278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34927c:
    // 0x34927c: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x34927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349280: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349284: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x349284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349288: 0x0  nop
    ctx->pc = 0x349288u;
    // NOP
    // 0x34928c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x34928Cu;
    {
        const bool branch_taken_0x34928c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34928c) {
            ctx->pc = 0x349290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34928Cu;
            // 0x349290: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3492ACu;
            goto label_3492ac;
        }
    }
    ctx->pc = 0x349294u;
label_349294:
    // 0x349294: 0xc0d23ae  jal         func_348EB8
    ctx->pc = 0x349294u;
    SET_GPR_U32(ctx, 31, 0x34929Cu);
    ctx->pc = 0x349298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349294u;
    // 0x349298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348EB8u, 0x349294u, 0x34929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34929Cu;
label_34929c:
    // 0x34929c: 0xc0d2790  jal         func_349E40
    ctx->pc = 0x34929Cu;
    SET_GPR_U32(ctx, 31, 0x3492A4u);
    ctx->pc = 0x3492A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34929Cu;
    // 0x3492a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349E40u, 0x34929Cu, 0x3492A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492A4u;
label_3492a4:
    // 0x3492a4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3492A4u;
    {
        const bool branch_taken_0x3492a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3492A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492A4u;
        // 0x3492a8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492a4) {
            ctx->pc = 0x3493E0u;
            goto label_3493e0;
        }
    }
    ctx->pc = 0x3492ACu;
label_3492ac:
    // 0x3492ac: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x3492acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x3492b0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3492b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3492b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3492b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3492b8: 0x8c430220  lw          $v1, 0x220($v0)
    ctx->pc = 0x3492b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x3492bc: 0x90450293  lbu         $a1, 0x293($v0)
    ctx->pc = 0x3492bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 659)));
    // 0x3492c0: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x3492c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3492c4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3492c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3492c8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3492c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3492cc: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x3492ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3492d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3492d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3492d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3492d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3492d8: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3492D8u;
    {
        const bool branch_taken_0x3492d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3492DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492D8u;
        // 0x3492dc: 0x46030182  mul.s       $f6, $f0, $f3 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492d8) {
            ctx->pc = 0x3492E4u;
            goto label_3492e4;
        }
    }
    ctx->pc = 0x3492E0u;
    // 0x3492e0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x3492e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_3492e4:
    // 0x3492e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3492e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3492e8: 0x8c64bd48  lw          $a0, -0x42B8($v1)
    ctx->pc = 0x3492e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x3492ec: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x3492ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3492f0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x3492f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x3492f4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3492f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3492f8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x3492f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3492fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3492fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349300: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x349300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349304: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x349304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349308: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x349308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34930c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x34930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349310: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x349310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x349314: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x349314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x349318: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x349318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34931c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x34931cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x349320: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x349320u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x349324: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x349324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349328: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x349328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34932c: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x34932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x349330: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x349330u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x349334: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x349334u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x349338: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x349338u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34933c: 0x46010044  c1          0x10044
    ctx->pc = 0x34933cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x349340: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x349340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
    // 0x349344: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x349344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x349348: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x349348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x34934c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x349350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349354: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x349354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x349358: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x349358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34935c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34935cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x349360: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x349360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349364: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x349364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x349368: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x349368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x34936c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34936cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x349370: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x349370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349374: 0x0  nop
    ctx->pc = 0x349374u;
    // NOP
    // 0x349378: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x349378u;
    {
        const bool branch_taken_0x349378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349378u;
        // 0x34937c: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349378) {
            ctx->pc = 0x3493C8u;
            goto label_3493c8;
        }
    }
    ctx->pc = 0x349380u;
    // 0x349380: 0xc0d5818  jal         func_356060
    ctx->pc = 0x349380u;
    SET_GPR_U32(ctx, 31, 0x349388u);
    ctx->pc = 0x356060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356060u, 0x349380u, 0x349388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349388u;
label_349388:
    // 0x349388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34938c: 0xc0d5818  jal         func_356060
    ctx->pc = 0x34938Cu;
    SET_GPR_U32(ctx, 31, 0x349394u);
    ctx->pc = 0x349390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34938Cu;
    // 0x349390: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356060u, 0x34938Cu, 0x349394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349394u;
label_349394:
    // 0x349394: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x349394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349398: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x349398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x34939c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34939cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3493a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3493a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3493a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3493a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3493a8: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x3493a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3493ac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3493acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3493b0: 0x0  nop
    ctx->pc = 0x3493b0u;
    // NOP
    // 0x3493b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3493B4u;
    {
        const bool branch_taken_0x3493b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3493B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493B4u;
        // 0x3493b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3493b4) {
            ctx->pc = 0x3493C8u;
            goto label_3493c8;
        }
    }
    ctx->pc = 0x3493BCu;
    // 0x3493bc: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x3493bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3493c0: 0xc0cda26  jal         func_336898
    ctx->pc = 0x3493C0u;
    SET_GPR_U32(ctx, 31, 0x3493C8u);
    ctx->pc = 0x3493C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3493C0u;
    // 0x3493c4: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x3493C0u, 0x3493C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3493C8u;
label_3493c8:
    // 0x3493c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3493c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3493cc: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x3493ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3493d0: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x3493d0u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3493d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3493d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3493d8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x3493d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_3493dc:
    // 0x3493dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3493dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3493e0:
    // 0x3493e0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3493e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3493e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3493e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3493e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3493E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3493ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493E8u;
        // 0x3493ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3493E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3493F0u;
}
