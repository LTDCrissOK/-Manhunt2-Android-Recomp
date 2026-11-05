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

// Function: sub_0030F100
// Address: 0x30f100 - 0x30f3a8
void sub_0030F100_0x30f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F100_0x30f100");
#endif

    switch (ctx->pc) {
        case 0x30f1a8u: goto label_30f1a8;
        case 0x30f1c8u: goto label_30f1c8;
        case 0x30f1ecu: goto label_30f1ec;
        case 0x30f200u: goto label_30f200;
        case 0x30f250u: goto label_30f250;
        case 0x30f268u: goto label_30f268;
        case 0x30f288u: goto label_30f288;
        case 0x30f2c8u: goto label_30f2c8;
        case 0x30f2f0u: goto label_30f2f0;
        case 0x30f30cu: goto label_30f30c;
        case 0x30f320u: goto label_30f320;
        case 0x30f37cu: goto label_30f37c;
        default: break;
    }

    ctx->pc = 0x30f100u;

    // 0x30f100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30f104: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30f104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30f108: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x30f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x30f10c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x30f10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x30f110: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30f110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f114: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x30f114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x30f118: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x30f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x30f11c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x30f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x30f120: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x30f120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x30f124: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x30f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x30f128: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x30f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x30f12c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x30f12cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30f130: 0x8c45bd48  lw          $a1, -0x42B8($v0)
    ctx->pc = 0x30f130u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x30f134: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x30f134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x30f138: 0x8ca30100  lw          $v1, 0x100($a1)
    ctx->pc = 0x30f138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x30f13c: 0x8c860104  lw          $a2, 0x104($a0)
    ctx->pc = 0x30f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x30f140: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x30f140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x30f144: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30f148: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x30f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x30f14c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30f14cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f150: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x30f150u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f154: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30f154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30f158: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x30f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f15c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x30f15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f160: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x30f160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f164: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x30f164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f168: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x30f168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30f16c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30f16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30f170: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30f170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30f174: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x30f174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30f178: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x30f178u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30f17c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x30f17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f180: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x30f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f184: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x30f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f188: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x30f188u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x30f18c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x30f18cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x30f190: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x30f190u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x30f194: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x30f194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x30f198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f19c: 0xa0622160  sb          $v0, 0x2160($v1)
    ctx->pc = 0x30f19cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5B2160u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5B2160u, _value); } while (0);
    // 0x30f1a0: 0xc0c3dc2  jal         func_30F708
    ctx->pc = 0x30F1A0u;
    SET_GPR_U32(ctx, 31, 0x30F1A8u);
    ctx->pc = 0x30F1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F1A0u;
    // 0x30f1a4: 0x3c100031  lui         $s0, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x30F1A0u, 0x30F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1A8u;
label_30f1a8:
    // 0x30f1a8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x30f1a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1ac: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x30f1acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30f1b0: 0x2610dcb8  addiu       $s0, $s0, -0x2348
    ctx->pc = 0x30f1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958264));
    // 0x30f1b4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x30f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x30f1b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30f1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30f1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1c0: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30F1C0u;
    SET_GPR_U32(ctx, 31, 0x30F1C8u);
    ctx->pc = 0x30F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F1C0u;
    // 0x30f1c4: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30F1C0u, 0x30F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1C8u;
label_30f1c8:
    // 0x30f1c8: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x30f1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x30f1cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f1d0: 0x0  nop
    ctx->pc = 0x30f1d0u;
    // NOP
    // 0x30f1d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30f1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f1d8: 0x0  nop
    ctx->pc = 0x30f1d8u;
    // NOP
    // 0x30f1dc: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x30F1DCu;
    {
        const bool branch_taken_0x30f1dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f1dc) {
            ctx->pc = 0x30F1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F1DCu;
            // 0x30f1e0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F204u;
            goto label_30f204;
        }
    }
    ctx->pc = 0x30F1E4u;
    // 0x30f1e4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x30F1E4u;
    SET_GPR_U32(ctx, 31, 0x30F1ECu);
    ctx->pc = 0x30F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F1E4u;
    // 0x30f1e8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x30F1E4u, 0x30F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1ECu;
label_30f1ec:
    // 0x30f1ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F1ECu;
    {
        const bool branch_taken_0x30f1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1ECu;
        // 0x30f1f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1ec) {
            ctx->pc = 0x30F200u;
            goto label_30f200;
        }
    }
    ctx->pc = 0x30F1F4u;
    // 0x30f1f4: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x30f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x30f1f8: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30F1F8u;
    SET_GPR_U32(ctx, 31, 0x30F200u);
    ctx->pc = 0x30F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F1F8u;
    // 0x30f1fc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30F1F8u, 0x30F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F200u;
label_30f200:
    // 0x30f200: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x30f200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_30f204:
    // 0x30f204: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x30f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x30f208: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x30f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x30f20c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x30f20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x30f210: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x30F210u;
    {
        const bool branch_taken_0x30f210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F210u;
        // 0x30f214: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f210) {
            ctx->pc = 0x30F37Cu;
            goto label_30f37c;
        }
    }
    ctx->pc = 0x30F218u;
    // 0x30f218: 0x3062020f  andi        $v0, $v1, 0x20F
    ctx->pc = 0x30f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)527);
    // 0x30f21c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x30f21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x30f220: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30F220u;
    {
        const bool branch_taken_0x30f220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F220u;
        // 0x30f224: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f220) {
            ctx->pc = 0x30F288u;
            goto label_30f288;
        }
    }
    ctx->pc = 0x30F228u;
    // 0x30f228: 0x8ca30418  lw          $v1, 0x418($a1)
    ctx->pc = 0x30f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1048)));
    // 0x30f22c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30F22Cu;
    {
        const bool branch_taken_0x30f22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F22Cu;
        // 0x30f230: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f22c) {
            ctx->pc = 0x30F238u;
            goto label_30f238;
        }
    }
    ctx->pc = 0x30F234u;
    // 0x30f234: 0x8cb011e4  lw          $s0, 0x11E4($a1)
    ctx->pc = 0x30f234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4580)));
label_30f238:
    // 0x30f238: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x30F238u;
    {
        const bool branch_taken_0x30f238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F238u;
        // 0x30f23c: 0x26b1dcb8  addiu       $s1, $s5, -0x2348 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f238) {
            ctx->pc = 0x30F270u;
            goto label_30f270;
        }
    }
    ctx->pc = 0x30F240u;
    // 0x30f240: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x30f240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x30f244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30f244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f248: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30F248u;
    SET_GPR_U32(ctx, 31, 0x30F250u);
    ctx->pc = 0x30F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F248u;
    // 0x30f24c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30F248u, 0x30F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F250u;
label_30f250:
    // 0x30f250: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x30f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x30f254: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30F254u;
    {
        const bool branch_taken_0x30f254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F254u;
        // 0x30f258: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f254) {
            ctx->pc = 0x30F288u;
            goto label_30f288;
        }
    }
    ctx->pc = 0x30F25Cu;
    // 0x30f25c: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x30f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x30f260: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30F260u;
    SET_GPR_U32(ctx, 31, 0x30F268u);
    ctx->pc = 0x30F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F260u;
    // 0x30f264: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30F260u, 0x30F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F268u;
label_30f268:
    // 0x30f268: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30F268u;
    {
        const bool branch_taken_0x30f268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f268) {
            ctx->pc = 0x30F288u;
            goto label_30f288;
        }
    }
    ctx->pc = 0x30F270u;
label_30f270:
    // 0x30f270: 0x8c8211e4  lw          $v0, 0x11E4($a0)
    ctx->pc = 0x30f270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4580)));
    // 0x30f274: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F274u;
    {
        const bool branch_taken_0x30f274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F274u;
        // 0x30f278: 0x26a5dcb8  addiu       $a1, $s5, -0x2348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f274) {
            ctx->pc = 0x30F288u;
            goto label_30f288;
        }
    }
    ctx->pc = 0x30F27Cu;
    // 0x30f27c: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x30f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x30f280: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30F280u;
    SET_GPR_U32(ctx, 31, 0x30F288u);
    ctx->pc = 0x30F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F280u;
    // 0x30f284: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30F280u, 0x30F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F288u;
label_30f288:
    // 0x30f288: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x30f288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x30f28c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f290: 0x0  nop
    ctx->pc = 0x30f290u;
    // NOP
    // 0x30f294: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30f294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f298: 0x0  nop
    ctx->pc = 0x30f298u;
    // NOP
    // 0x30f29c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x30F29Cu;
    {
        const bool branch_taken_0x30f29c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f29c) {
            ctx->pc = 0x30F338u;
            goto label_30f338;
        }
    }
    ctx->pc = 0x30F2A4u;
    // 0x30f2a4: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x30f2a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x30f2a8: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x30f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x30f2ac: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30F2ACu;
    {
        const bool branch_taken_0x30f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f2ac) {
            ctx->pc = 0x30F338u;
            goto label_30f338;
        }
    }
    ctx->pc = 0x30F2B4u;
    // 0x30f2b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f2b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x30F2B8u;
    {
        const bool branch_taken_0x30f2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F2B8u;
        // 0x30f2bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f2b8) {
            ctx->pc = 0x30F338u;
            goto label_30f338;
        }
    }
    ctx->pc = 0x30F2C0u;
    // 0x30f2c0: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x30f2c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30f2c4: 0x0  nop
    ctx->pc = 0x30f2c4u;
    // NOP
label_30f2c8:
    // 0x30f2c8: 0x12360015  beq         $s1, $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x30F2C8u;
    {
        const bool branch_taken_0x30f2c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x30F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F2C8u;
        // 0x30f2cc: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f2c8) {
            ctx->pc = 0x30F320u;
            goto label_30f320;
        }
    }
    ctx->pc = 0x30F2D0u;
    // 0x30f2d0: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x30f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x30f2d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x30f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30f2d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f2dc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x30f2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f2e0: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x30F2E0u;
    {
        const bool branch_taken_0x30f2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f2e0) {
            ctx->pc = 0x30F2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F2E0u;
            // 0x30f2e4: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F324u;
            goto label_30f324;
        }
    }
    ctx->pc = 0x30F2E8u;
    // 0x30f2e8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x30F2E8u;
    SET_GPR_U32(ctx, 31, 0x30F2F0u);
    ctx->pc = 0x30F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F2E8u;
    // 0x30f2ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x30F2E8u, 0x30F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F2F0u;
label_30f2f0:
    // 0x30f2f0: 0x5202000c  beql        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30F2F0u;
    {
        const bool branch_taken_0x30f2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30f2f0) {
            ctx->pc = 0x30F2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F2F0u;
            // 0x30f2f4: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F324u;
            goto label_30f324;
        }
    }
    ctx->pc = 0x30F2F8u;
    // 0x30f2f8: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x30f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x30f2fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F2FCu;
    {
        const bool branch_taken_0x30f2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F2FCu;
        // 0x30f300: 0x26a5dcb8  addiu       $a1, $s5, -0x2348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f2fc) {
            ctx->pc = 0x30F314u;
            goto label_30f314;
        }
    }
    ctx->pc = 0x30F304u;
    // 0x30f304: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30F304u;
    SET_GPR_U32(ctx, 31, 0x30F30Cu);
    ctx->pc = 0x30F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F304u;
    // 0x30f308: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30F304u, 0x30F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F30Cu;
label_30f30c:
    // 0x30f30c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30F30Cu;
    {
        const bool branch_taken_0x30f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F30Cu;
        // 0x30f310: 0x8e430224  lw          $v1, 0x224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f30c) {
            ctx->pc = 0x30F324u;
            goto label_30f324;
        }
    }
    ctx->pc = 0x30F314u;
label_30f314:
    // 0x30f314: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x30f314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x30f318: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30F318u;
    SET_GPR_U32(ctx, 31, 0x30F320u);
    ctx->pc = 0x30F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F318u;
    // 0x30f31c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30F318u, 0x30F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F320u;
label_30f320:
    // 0x30f320: 0x8e430224  lw          $v1, 0x224($s2)
    ctx->pc = 0x30f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_30f324:
    // 0x30f324: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30f324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30f328: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f32c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30f32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30f330: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x30F330u;
    {
        const bool branch_taken_0x30f330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f330) {
            ctx->pc = 0x30F2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f2c8;
        }
    }
    ctx->pc = 0x30F338u;
label_30f338:
    // 0x30f338: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x30f338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x30f33c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f340: 0x0  nop
    ctx->pc = 0x30f340u;
    // NOP
    // 0x30f344: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30f344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f348: 0x0  nop
    ctx->pc = 0x30f348u;
    // NOP
    // 0x30f34c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x30F34Cu;
    {
        const bool branch_taken_0x30f34c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F34Cu;
        // 0x30f350: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f34c) {
            ctx->pc = 0x30F380u;
            goto label_30f380;
        }
    }
    ctx->pc = 0x30F354u;
    // 0x30f354: 0x92820008  lbu         $v0, 0x8($s4)
    ctx->pc = 0x30f354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x30f358: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30F358u;
    {
        const bool branch_taken_0x30f358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F358u;
        // 0x30f35c: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f358) {
            ctx->pc = 0x30F384u;
            goto label_30f384;
        }
    }
    ctx->pc = 0x30F360u;
    // 0x30f360: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x30f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x30f364: 0x8c44032c  lw          $a0, 0x32C($v0)
    ctx->pc = 0x30f364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
    // 0x30f368: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30F368u;
    {
        const bool branch_taken_0x30f368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F368u;
        // 0x30f36c: 0x26a5dcb8  addiu       $a1, $s5, -0x2348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f368) {
            ctx->pc = 0x30F384u;
            goto label_30f384;
        }
    }
    ctx->pc = 0x30F370u;
    // 0x30f370: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x30f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x30f374: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30F374u;
    SET_GPR_U32(ctx, 31, 0x30F37Cu);
    ctx->pc = 0x30F378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F374u;
    // 0x30f378: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30F374u, 0x30F37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F37Cu;
label_30f37c:
    // 0x30f37c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x30f37cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30f380:
    // 0x30f380: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x30f380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_30f384:
    // 0x30f384: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30f384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f388: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x30f388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30f38c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x30f38cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f390: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x30f390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f394: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x30f394u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f398: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x30f398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30f39c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x30f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x30F3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3A0u;
        // 0x30f3a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F3A8u;
}
