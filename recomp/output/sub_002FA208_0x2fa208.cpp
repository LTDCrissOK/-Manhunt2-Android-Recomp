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

// Function: sub_002FA208
// Address: 0x2fa208 - 0x2fa5c8
void sub_002FA208_0x2fa208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA208_0x2fa208");
#endif

    switch (ctx->pc) {
        case 0x2fa284u: goto label_2fa284;
        case 0x2fa300u: goto label_2fa300;
        case 0x2fa370u: goto label_2fa370;
        case 0x2fa418u: goto label_2fa418;
        case 0x2fa420u: goto label_2fa420;
        case 0x2fa474u: goto label_2fa474;
        case 0x2fa48cu: goto label_2fa48c;
        case 0x2fa494u: goto label_2fa494;
        case 0x2fa4b0u: goto label_2fa4b0;
        case 0x2fa4b8u: goto label_2fa4b8;
        case 0x2fa4c8u: goto label_2fa4c8;
        case 0x2fa568u: goto label_2fa568;
        default: break;
    }

    ctx->pc = 0x2fa208u;

    // 0x2fa208: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2fa208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2fa20c: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2fa20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2fa210: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2fa210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa214: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2fa214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2fa218: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fa218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa21c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2fa21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2fa220: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2fa220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x2fa224: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2fa224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2fa228: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x2fa228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x2fa22c: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2fa22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2fa230: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x2fa230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x2fa234: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2fa234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2fa238: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x2fa238u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2fa23c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x2fa23cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2fa240: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2fa240u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fa244: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2fa244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fa248: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2fa248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fa24c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fa24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa250: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x2fa250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x2fa254: 0xc4a10060  lwc1        $f1, 0x60($a1)
    ctx->pc = 0x2fa254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa258: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2fa258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa25c: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2fa25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x2fa260: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2fa260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa264: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2fa264u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2fa268: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2fa268u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2fa26c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2fa26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2fa270: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fa270u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2fa274: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2fa274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fa278: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fa278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fa27c: 0xc0be972  jal         func_2FA5C8
    ctx->pc = 0x2FA27Cu;
    SET_GPR_U32(ctx, 31, 0x2FA284u);
    ctx->pc = 0x2FA280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA27Cu;
    // 0x2fa280: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5C8u, 0x2FA27Cu, 0x2FA284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA284u;
label_2fa284:
    // 0x2fa284: 0x144000c2  bnez        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2FA284u;
    {
        const bool branch_taken_0x2fa284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA284u;
        // 0x2fa288: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa284) {
            ctx->pc = 0x2FA590u;
            goto label_2fa590;
        }
    }
    ctx->pc = 0x2FA28Cu;
    // 0x2fa28c: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2fa28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fa290: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2fa290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fa294: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x2fa294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2fa298: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fa298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa29c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2fa29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fa2a0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2fa2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2fa2a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2fa2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2fa2a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fa2a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa2ac: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2fa2acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa2b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fa2b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fa2b4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fa2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa2b8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2fa2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa2bc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fa2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa2c0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2fa2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa2c4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2fa2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa2c8: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x2fa2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fa2cc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2fa2ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fa2d0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fa2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fa2d4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2fa2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fa2d8: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x2fa2d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2fa2dc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2fa2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa2e0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2fa2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fa2e4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2fa2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fa2e8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fa2e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fa2ec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fa2ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fa2f0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2fa2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fa2f4: 0x46000004  c1          0x4
    ctx->pc = 0x2fa2f4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fa2f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FA2F8u;
    SET_GPR_U32(ctx, 31, 0x2FA300u);
    ctx->pc = 0x2FA2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA2F8u;
    // 0x2fa2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FA2F8u, 0x2FA300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA300u;
label_2fa300:
    // 0x2fa300: 0x8e2311e8  lw          $v1, 0x11E8($s1)
    ctx->pc = 0x2fa300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fa304: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2fa304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fa308: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x2fa308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2fa30c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fa30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa310: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2fa310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fa314: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2fa314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2fa318: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x2fa318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2fa31c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2fa31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa320: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2fa320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fa324: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2fa324u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2fa328: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2fa328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa32c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2fa32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fa330: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2fa330u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2fa334: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2fa334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa338: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2fa338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fa33c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2fa33cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2fa340: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2fa340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fa344: 0x0  nop
    ctx->pc = 0x2fa344u;
    // NOP
    // 0x2fa348: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2fa348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fa34c: 0x0  nop
    ctx->pc = 0x2fa34cu;
    // NOP
    // 0x2fa350: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x2FA350u;
    {
        const bool branch_taken_0x2fa350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA350u;
        // 0x2fa354: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa350) {
            ctx->pc = 0x2FA428u;
            goto label_2fa428;
        }
    }
    ctx->pc = 0x2FA358u;
    // 0x2fa358: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fa358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa35c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fa35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fa360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fa364: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2fa364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2fa368: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2FA368u;
    {
        const bool branch_taken_0x2fa368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA368u;
        // 0x2fa36c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa368) {
            ctx->pc = 0x2FA468u;
            goto label_2fa468;
        }
    }
    ctx->pc = 0x2FA370u;
label_2fa370:
    // 0x2fa370: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fa370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fa374: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2fa374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa378: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2fa378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa37c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2fa37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fa380: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2fa380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa384: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2fa384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa388: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2fa388u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2fa38c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fa38cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2fa390: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2fa390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2fa394: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2fa394u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2fa398: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x2fa398u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2fa39c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2fa39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2fa3a0: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2fa3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2fa3a4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2fa3a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2fa3a8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2fa3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa3ac: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2fa3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fa3b0: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2fa3b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fa3b4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2fa3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa3b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fa3b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa3bc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2fa3bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa3c0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2fa3c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fa3c4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2fa3c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fa3c8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2fa3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa3cc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2fa3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa3d0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2fa3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa3d4: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2fa3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa3d8: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x2fa3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fa3dc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2fa3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2fa3e0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2fa3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2fa3e4: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2fa3e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2fa3e8: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x2fa3e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2fa3ec: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2fa3ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2fa3f0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fa3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa3f4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2fa3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2fa3f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2fa3f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2fa3fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fa3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fa400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fa404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa408: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2fa408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa40c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2fa40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa410: 0xc08e23a  jal         func_2388E8
    ctx->pc = 0x2FA410u;
    SET_GPR_U32(ctx, 31, 0x2FA418u);
    ctx->pc = 0x2FA414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA410u;
    // 0x2fa414: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x2FA410u, 0x2FA418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA418u;
label_2fa418:
    // 0x2fa418: 0xc08e2b4  jal         func_238AD0
    ctx->pc = 0x2FA418u;
    SET_GPR_U32(ctx, 31, 0x2FA420u);
    ctx->pc = 0x2FA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA418u;
    // 0x2fa41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AD0u, 0x2FA418u, 0x2FA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA420u;
label_2fa420:
    // 0x2fa420: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2FA420u;
    {
        const bool branch_taken_0x2fa420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA420u;
        // 0x2fa424: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa420) {
            ctx->pc = 0x2FA590u;
            goto label_2fa590;
        }
    }
    ctx->pc = 0x2FA428u;
label_2fa428:
    // 0x2fa428: 0xc4a20040  lwc1        $f2, 0x40($a1)
    ctx->pc = 0x2fa428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa42c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2fa42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fa430: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2fa430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa434: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2fa434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa438: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2fa438u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2fa43c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fa43cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2fa440: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2fa440u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2fa444: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2fa444u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2fa448: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2fa448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fa44c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2fa44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fa450: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2fa450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2fa454: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fa454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa458: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fa458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa45c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2fa45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2fa460: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2fa460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2fa464: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fa464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa468:
    // 0x2fa468: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2fa468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fa46c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FA46Cu;
    SET_GPR_U32(ctx, 31, 0x2FA474u);
    ctx->pc = 0x2FA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA46Cu;
    // 0x2fa470: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FA46Cu, 0x2FA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA474u;
label_2fa474:
    // 0x2fa474: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2fa474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2fa478: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2fa478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2fa47c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2fa47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2fa480: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2fa480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2fa484: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FA484u;
    SET_GPR_U32(ctx, 31, 0x2FA48Cu);
    ctx->pc = 0x2FA488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA484u;
    // 0x2fa488: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FA484u, 0x2FA48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA48Cu;
label_2fa48c:
    // 0x2fa48c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2FA48Cu;
    SET_GPR_U32(ctx, 31, 0x2FA494u);
    ctx->pc = 0x2FA490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA48Cu;
    // 0x2fa490: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FA48Cu, 0x2FA494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA494u;
label_2fa494:
    // 0x2fa494: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x2fa494u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fa498: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2fa498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2fa49c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2fa49cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fa4a0: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x2fa4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fa4a4: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2fa4a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa4a8: 0x24555b40  addiu       $s5, $v0, 0x5B40
    ctx->pc = 0x2fa4a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x2fa4ac: 0x0  nop
    ctx->pc = 0x2fa4acu;
    // NOP
label_2fa4b0:
    // 0x2fa4b0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2FA4B0u;
    SET_GPR_U32(ctx, 31, 0x2FA4B8u);
    ctx->pc = 0x2FA4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA4B0u;
    // 0x2fa4b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FA4B0u, 0x2FA4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA4B8u;
label_2fa4b8:
    // 0x2fa4b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa4bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2fa4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa4c0: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x2FA4C0u;
    SET_GPR_U32(ctx, 31, 0x2FA4C8u);
    ctx->pc = 0x2FA4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA4C0u;
    // 0x2fa4c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x2FA4C0u, 0x2FA4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA4C8u;
label_2fa4c8:
    // 0x2fa4c8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2fa4c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2fa4cc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2fa4ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fa4d0: 0xda430010  lqc2        $vf3, 0x10($s2)
    ctx->pc = 0x2fa4d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2fa4d4: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x2fa4d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2fa4d8: 0xda450030  lqc2        $vf5, 0x30($s2)
    ctx->pc = 0x2fa4d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2fa4dc: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2fa4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fa4e0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2fa4e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fa4e4: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x2fa4e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fa4e8: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x2fa4e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fa4ec: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fa4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa4f0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fa4f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fa4f4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2fa4f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fa4f8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fa4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fa4fc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fa4fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fa500: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fa500u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2fa504: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fa504u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fa508: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2fa508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fa50c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fa50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa510: 0x8e2311e8  lw          $v1, 0x11E8($s1)
    ctx->pc = 0x2fa510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fa514: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x2fa514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2fa518: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fa518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa51c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2fa51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2fa520: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fa520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa524: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2fa524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fa528: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fa528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fa52c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2fa52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa530: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2fa530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa534: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2fa534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa538: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2fa538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa53c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x2fa53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fa540: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2fa540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2fa544: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2fa544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2fa548: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2fa548u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2fa54c: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x2fa54cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2fa550: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2fa550u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2fa554: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fa554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa55c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fa55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa560: 0xc0be972  jal         func_2FA5C8
    ctx->pc = 0x2FA560u;
    SET_GPR_U32(ctx, 31, 0x2FA568u);
    ctx->pc = 0x2FA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA560u;
    // 0x2fa564: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5C8u, 0x2FA560u, 0x2FA568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA568u;
label_2fa568:
    // 0x2fa568: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x2FA568u;
    {
        const bool branch_taken_0x2fa568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa568) {
            ctx->pc = 0x2FA370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa370;
        }
    }
    ctx->pc = 0x2FA570u;
    // 0x2fa570: 0x4617a802  mul.s       $f0, $f21, $f23
    ctx->pc = 0x2fa570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x2fa574: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2fa574u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2fa578: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x2fa578u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2fa57c: 0x46160836  c.le.s      $f1, $f22
    ctx->pc = 0x2fa57cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fa580: 0x0  nop
    ctx->pc = 0x2fa580u;
    // NOP
    // 0x2fa584: 0x4501ffca  bc1t        . + 4 + (-0x36 << 2)
    ctx->pc = 0x2FA584u;
    {
        const bool branch_taken_0x2fa584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fa584) {
            ctx->pc = 0x2FA4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa4b0;
        }
    }
    ctx->pc = 0x2FA58Cu;
    // 0x2fa58c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2fa58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2fa590:
    // 0x2fa590: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x2fa590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fa594: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2fa594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fa598: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x2fa598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2fa59c: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2fa59cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fa5a0: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x2fa5a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fa5a4: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2fa5a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2fa5a8: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x2fa5a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2fa5ac: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2fa5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2fa5b0: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x2fa5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fa5b4: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x2fa5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fa5b8: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2fa5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fa5bc: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2fa5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fa5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5C0u;
        // 0x2fa5c4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA5C8u;
}
