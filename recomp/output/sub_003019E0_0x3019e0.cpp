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

// Function: sub_003019E0
// Address: 0x3019e0 - 0x301c00
void sub_003019E0_0x3019e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003019E0_0x3019e0");
#endif

    switch (ctx->pc) {
        case 0x301a90u: goto label_301a90;
        case 0x301ae4u: goto label_301ae4;
        case 0x301b84u: goto label_301b84;
        default: break;
    }

    ctx->pc = 0x3019e0u;

    // 0x3019e0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3019e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x3019e4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x3019e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x3019e8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3019e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x3019ec: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3019ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x3019f0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3019f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019f4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x3019f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x3019f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3019f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019fc: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x3019fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x301a00: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x301a00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a04: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x301a04u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x301a08: 0x24575870  addiu       $s7, $v0, 0x5870
    ctx->pc = 0x301a08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x301a0c: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x301a0cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x301a10: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x301a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x301a14: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x301a14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x301a18: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x301a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x301a1c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x301a1cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x301a20: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x301a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x301a24: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x301a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x301a28: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x301a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x301a2c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x301a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x301a30: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x301a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x301a34: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x301a34u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x301a38: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x301a38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x301a3c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x301a3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x301a40: 0x8c42bd48  lw          $v0, -0x42B8($v0)
    ctx->pc = 0x301a40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x301a44: 0xc6350000  lwc1        $f21, 0x0($s1)
    ctx->pc = 0x301a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x301a48: 0xc6f900a4  lwc1        $f25, 0xA4($s7)
    ctx->pc = 0x301a48u;
    { uint32_t bits = FAST_READ32(0x595914u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x301a4c: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x301a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x301a50: 0x4600a846  mov.s       $f1, $f21
    ctx->pc = 0x301a50u;
    ctx->f[1] = FPU_MOV_S(ctx->f[21]);
    // 0x301a54: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x301a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x301a58: 0x8ef40084  lw          $s4, 0x84($s7)
    ctx->pc = 0x301a58u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x5958F4u));
    // 0x301a5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x301a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x301a60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x301a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x301a64: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x301a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x301a68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x301A68u;
    {
        const bool branch_taken_0x301a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A68u;
        // 0x301a6c: 0x8ef30088  lw          $s3, 0x88($s7) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a68) {
            ctx->pc = 0x301A74u;
            goto label_301a74;
        }
    }
    ctx->pc = 0x301A70u;
    // 0x301a70: 0xc45800f0  lwc1        $f24, 0xF0($v0)
    ctx->pc = 0x301a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_301a74:
    // 0x301a74: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x301a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x301a78: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x301a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x301a7c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x301a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x301a80: 0x27be0064  addiu       $fp, $sp, 0x64
    ctx->pc = 0x301a80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x301a84: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x301a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x301a88: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x301a88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x301a8c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x301a8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_301a90:
    // 0x301a90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x301a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x301a94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x301a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301a98: 0x0  nop
    ctx->pc = 0x301a98u;
    // NOP
    // 0x301a9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x301a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301aa0: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x301aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x301aa4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x301aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x301aa8: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x301aa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x301aac: 0xc6e1007c  lwc1        $f1, 0x7C($s7)
    ctx->pc = 0x301aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301ab0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x301ab0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301ab4: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x301ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301ab8: 0x0  nop
    ctx->pc = 0x301ab8u;
    // NOP
    // 0x301abc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x301ABCu;
    {
        const bool branch_taken_0x301abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301abc) {
            ctx->pc = 0x301ACCu;
            goto label_301acc;
        }
    }
    ctx->pc = 0x301AC4u;
    // 0x301ac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x301AC4u;
    {
        const bool branch_taken_0x301ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AC4u;
        // 0x301ac8: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ac4) {
            ctx->pc = 0x301ADCu;
            goto label_301adc;
        }
    }
    ctx->pc = 0x301ACCu;
label_301acc:
    // 0x301acc: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x301accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301ad0: 0x0  nop
    ctx->pc = 0x301ad0u;
    // NOP
    // 0x301ad4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x301AD4u;
    {
        const bool branch_taken_0x301ad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301ad4) {
            ctx->pc = 0x301AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301AD4u;
            // 0x301ad8: 0x4600c506  mov.s       $f20, $f24 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x301ADCu;
            goto label_301adc;
        }
    }
    ctx->pc = 0x301ADCu;
label_301adc:
    // 0x301adc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x301ADCu;
    SET_GPR_U32(ctx, 31, 0x301AE4u);
    ctx->pc = 0x301AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301ADCu;
    // 0x301ae0: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x301ADCu, 0x301AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AE4u;
label_301ae4:
    // 0x301ae4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x301ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x301ae8: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x301ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x301aec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x301aecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301af0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x301af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x301af4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x301af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x301af8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x301af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x301afc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x301afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301b00: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x301b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x301b04: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x301b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301b08: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x301b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x301b0c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x301b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301b10: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x301b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x301b14: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x301b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301b18: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x301b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x301b1c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x301b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x301b20: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x301b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x301b24: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x301b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x301b28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x301b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b2c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x301b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301b30: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x301b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b34: 0x4604b042  mul.s       $f1, $f22, $f4
    ctx->pc = 0x301b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[4]);
    // 0x301b38: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x301b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301b3c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x301b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301b40: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x301b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b44: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x301b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x301b48: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x301b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b4c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x301b4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x301b50: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x301b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x301b54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x301b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301b58: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x301b58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x301b5c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x301b5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x301b60: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x301b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x301b64: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x301b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x301b68: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x301b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x301b6c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x301b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x301b70: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x301b70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b74: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x301b74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x301b78: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x301b78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b7c: 0xc07a346  jal         func_1E8D18
    ctx->pc = 0x301B7Cu;
    SET_GPR_U32(ctx, 31, 0x301B84u);
    ctx->pc = 0x301B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B7Cu;
    // 0x301b80: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8D18u, 0x301B7Cu, 0x301B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B84u;
label_301b84:
    // 0x301b84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x301B84u;
    {
        const bool branch_taken_0x301b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B84u;
        // 0x301b88: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b84) {
            ctx->pc = 0x301BA0u;
            goto label_301ba0;
        }
    }
    ctx->pc = 0x301B8Cu;
    // 0x301b8c: 0x8fb60064  lw          $s6, 0x64($sp)
    ctx->pc = 0x301b8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x301b90: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x301b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b94: 0xc6350000  lwc1        $f21, 0x0($s1)
    ctx->pc = 0x301b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x301b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x301B98u;
    {
        const bool branch_taken_0x301b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B98u;
        // 0x301b9c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b98) {
            ctx->pc = 0x301BA4u;
            goto label_301ba4;
        }
    }
    ctx->pc = 0x301BA0u;
label_301ba0:
    // 0x301ba0: 0xc6370000  lwc1        $f23, 0x0($s1)
    ctx->pc = 0x301ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_301ba4:
    // 0x301ba4: 0x4617a841  sub.s       $f1, $f21, $f23
    ctx->pc = 0x301ba4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x301ba8: 0x4601c834  c.lt.s      $f25, $f1
    ctx->pc = 0x301ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301bac: 0x0  nop
    ctx->pc = 0x301bacu;
    // NOP
    // 0x301bb0: 0x4501ffb7  bc1t        . + 4 + (-0x49 << 2)
    ctx->pc = 0x301BB0u;
    {
        const bool branch_taken_0x301bb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x301BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BB0u;
        // 0x301bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bb0) {
            ctx->pc = 0x301A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301a90;
        }
    }
    ctx->pc = 0x301BB8u;
    // 0x301bb8: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x301bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x301bbc: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x301bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x301bc0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x301bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x301bc4: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x301bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x301bc8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x301bc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x301bcc: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x301bccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x301bd0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x301bd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x301bd4: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x301bd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x301bd8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x301bd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x301bdc: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x301bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x301be0: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x301be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x301be4: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x301be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x301be8: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x301be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x301bec: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x301becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x301bf0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x301bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x301bf4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x301bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x301bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x301BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BF8u;
        // 0x301bfc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301C00u;
}
