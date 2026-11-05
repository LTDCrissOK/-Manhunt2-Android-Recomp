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

// Function: sub_00348F20
// Address: 0x348f20 - 0x349128
void sub_00348F20_0x348f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348F20_0x348f20");
#endif

    switch (ctx->pc) {
        case 0x348fa8u: goto label_348fa8;
        case 0x349090u: goto label_349090;
        case 0x3490a8u: goto label_3490a8;
        case 0x3490d0u: goto label_3490d0;
        case 0x3490e8u: goto label_3490e8;
        case 0x349104u: goto label_349104;
        default: break;
    }

    ctx->pc = 0x348f20u;

    // 0x348f20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x348f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x348f24: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x348f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x348f28: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x348f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x348f2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x348f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348f30: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x348f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x348f34: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x348f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x348f38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x348f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x348f3c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x348f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x348f40: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x348F40u;
    {
        const bool branch_taken_0x348f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F40u;
        // 0x348f44: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f40) {
            ctx->pc = 0x349110u;
            goto label_349110;
        }
    }
    ctx->pc = 0x348F48u;
    // 0x348f48: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x348f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x348f4c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x348f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x348f50: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x348F50u;
    {
        const bool branch_taken_0x348f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x348F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F50u;
        // 0x348f54: 0xdfb10048  ld          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f50) {
            ctx->pc = 0x349114u;
            goto label_349114;
        }
    }
    ctx->pc = 0x348F58u;
    // 0x348f58: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x348f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x348f5c: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x348F5Cu;
    {
        const bool branch_taken_0x348f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x348f5c) {
            ctx->pc = 0x348F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348F5Cu;
            // 0x348f60: 0xdfb20050  ld          $s2, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349118u;
            goto label_349118;
        }
    }
    ctx->pc = 0x348F64u;
    // 0x348f64: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x348f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x348f68: 0x8c43cba4  lw          $v1, -0x345C($v0)
    ctx->pc = 0x348f68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66CBA4u));
    // 0x348f6c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x348F6Cu;
    {
        const bool branch_taken_0x348f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F6Cu;
        // 0x348f70: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f6c) {
            ctx->pc = 0x348FACu;
            goto label_348fac;
        }
    }
    ctx->pc = 0x348F74u;
    // 0x348f74: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x348f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x348f78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x348f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348f7c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x348f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x348f80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x348f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x348f84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x348f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x348f88: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x348f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x348f8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x348f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x348f90: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x348f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x348f94: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x348f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x348f98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x348f98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348f9c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x348f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x348fa0: 0xc09fd46  jal         func_27F518
    ctx->pc = 0x348FA0u;
    SET_GPR_U32(ctx, 31, 0x348FA8u);
    ctx->pc = 0x348FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348FA0u;
    // 0x348fa4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F518u, 0x348FA0u, 0x348FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FA8u;
label_348fa8:
    // 0x348fa8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x348fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_348fac:
    // 0x348fac: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x348facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x348fb0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x348fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x348fb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348fb8: 0x8c51bd50  lw          $s1, -0x42B0($v0)
    ctx->pc = 0x348fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x348fbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x348fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x348fc0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x348fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x348fc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x348fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348fc8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x348fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x348fcc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x348fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x348fd0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x348fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x348fd4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x348fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x348fd8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x348fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x348fdc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x348fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x348fe0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x348fe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348fe4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x348fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x348fe8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x348fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x348fec: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x348fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x348ff0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x348ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x348ff4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x348ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348ff8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x348ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348ffc: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x348ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349000: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x349000u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x349004: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x349004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x349008: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x349008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34900c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x34900cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x349010: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x349010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x349014: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x349014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349018: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x349018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34901c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x34901cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349020: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x349020u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349024: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x349024u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349028: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x349028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34902c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x34902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349030: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x349030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349034: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x349034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349038: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x349038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34903c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x34903cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x349040: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x349040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x349044: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x349044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x349048: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x349048u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x34904c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x34904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349050: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x349050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349054: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x349054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x349058: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x349058u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34905c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34905cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x349060: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x349060u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x349064: 0x3c013ffa  lui         $at, 0x3FFA
    ctx->pc = 0x349064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16378 << 16));
    // 0x349068: 0x3421e147  ori         $at, $at, 0xE147
    ctx->pc = 0x349068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57671);
    // 0x34906c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34906cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349070: 0x0  nop
    ctx->pc = 0x349070u;
    // NOP
    // 0x349074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349078: 0x0  nop
    ctx->pc = 0x349078u;
    // NOP
    // 0x34907c: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x34907Cu;
    {
        const bool branch_taken_0x34907c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34907Cu;
        // 0x349080: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34907c) {
            ctx->pc = 0x349110u;
            goto label_349110;
        }
    }
    ctx->pc = 0x349084u;
    // 0x349084: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x349084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x349088: 0xc0ac9b2  jal         func_2B26C8
    ctx->pc = 0x349088u;
    SET_GPR_U32(ctx, 31, 0x349090u);
    ctx->pc = 0x34908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349088u;
    // 0x34908c: 0x24050083  addiu       $a1, $zero, 0x83 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x349088u, 0x349090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349090u;
label_349090:
    // 0x349090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x349090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349094: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x349094u;
    {
        const bool branch_taken_0x349094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x349094) {
            ctx->pc = 0x349098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349094u;
            // 0x349098: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349110u;
            goto label_349110;
        }
    }
    ctx->pc = 0x34909Cu;
    // 0x34909c: 0x8e130274  lw          $s3, 0x274($s0)
    ctx->pc = 0x34909cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x3490a0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x3490A0u;
    SET_GPR_U32(ctx, 31, 0x3490A8u);
    ctx->pc = 0x3490A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490A0u;
    // 0x3490a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x3490A0u, 0x3490A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490A8u;
label_3490a8:
    // 0x3490a8: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3490A8u;
    {
        const bool branch_taken_0x3490a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3490ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490A8u;
        // 0x3490ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3490a8) {
            ctx->pc = 0x3490E0u;
            goto label_3490e0;
        }
    }
    ctx->pc = 0x3490B0u;
    // 0x3490b0: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x3490b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x3490b4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x3490b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3490b8: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x3490b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x3490bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3490bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3490c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3490C0u;
    {
        const bool branch_taken_0x3490c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3490C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490C0u;
        // 0x3490c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3490c0) {
            ctx->pc = 0x3490D4u;
            goto label_3490d4;
        }
    }
    ctx->pc = 0x3490C8u;
    // 0x3490c8: 0xc0f753e  jal         func_3DD4F8
    ctx->pc = 0x3490C8u;
    SET_GPR_U32(ctx, 31, 0x3490D0u);
    ctx->pc = 0x3DD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4F8u, 0x3490C8u, 0x3490D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490D0u;
label_3490d0:
    // 0x3490d0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x3490d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3490d4:
    // 0x3490d4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3490D4u;
    {
        const bool branch_taken_0x3490d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3490D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490D4u;
        // 0x3490d8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3490d4) {
            ctx->pc = 0x349110u;
            goto label_349110;
        }
    }
    ctx->pc = 0x3490DCu;
    // 0x3490dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3490dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3490e0:
    // 0x3490e0: 0xc0d90e0  jal         func_364380
    ctx->pc = 0x3490E0u;
    SET_GPR_U32(ctx, 31, 0x3490E8u);
    ctx->pc = 0x3490E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490E0u;
    // 0x3490e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364380u, 0x3490E0u, 0x3490E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490E8u;
label_3490e8:
    // 0x3490e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3490E8u;
    {
        const bool branch_taken_0x3490e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3490ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490E8u;
        // 0x3490ec: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3490e8) {
            ctx->pc = 0x34910Cu;
            goto label_34910c;
        }
    }
    ctx->pc = 0x3490F0u;
    // 0x3490f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3490f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3490f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3490f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3490f8: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x3490f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x3490fc: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x3490FCu;
    SET_GPR_U32(ctx, 31, 0x349104u);
    ctx->pc = 0x349100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490FCu;
    // 0x349100: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x3490FCu, 0x349104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349104u;
label_349104:
    // 0x349104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x349104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349108: 0xa24200f1  sb          $v0, 0xF1($s2)
    ctx->pc = 0x349108u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 241), (uint8_t)GPR_U32(ctx, 2));
label_34910c:
    // 0x34910c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x34910cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_349110:
    // 0x349110: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x349110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_349114:
    // 0x349114: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x349114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_349118:
    // 0x349118: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x349118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34911c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x34911cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x349120: 0x3e00008  jr          $ra
    ctx->pc = 0x349120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349120u;
        // 0x349124: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349128u;
}
