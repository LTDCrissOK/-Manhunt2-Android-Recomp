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

// Function: sub_00273C00
// Address: 0x273c00 - 0x274178
void sub_00273C00_0x273c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273C00_0x273c00");
#endif

    switch (ctx->pc) {
        case 0x273cbcu: goto label_273cbc;
        case 0x273cd0u: goto label_273cd0;
        case 0x273d80u: goto label_273d80;
        case 0x273db8u: goto label_273db8;
        case 0x273e00u: goto label_273e00;
        case 0x273ea8u: goto label_273ea8;
        case 0x273eb0u: goto label_273eb0;
        case 0x273ec4u: goto label_273ec4;
        case 0x273f1cu: goto label_273f1c;
        case 0x27403cu: goto label_27403c;
        default: break;
    }

    ctx->pc = 0x273c00u;

    // 0x273c00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x273c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x273c04: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x273c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x273c08: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x273c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x273c0c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x273c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x273c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x273c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c14: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x273c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x273c18: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x273c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x273c1c: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x273c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x273c20: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x273c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x273c24: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x273c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x273c28: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x273c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x273c2c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x273c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x273c30: 0x8e300104  lw          $s0, 0x104($s1)
    ctx->pc = 0x273c30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x273c34: 0xc6201e70  lwc1        $f0, 0x1E70($s1)
    ctx->pc = 0x273c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x273c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x273c3c: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x273c3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273c40: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x273c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273c44: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x273c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x273c48: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x273c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x273c4c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x273c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c50: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x273c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x273c54: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x273c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273c58: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x273c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x273c5c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x273c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c60: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x273C60u;
    {
        const bool branch_taken_0x273c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x273C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C60u;
        // 0x273c64: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c60) {
            ctx->pc = 0x273CFCu;
            goto label_273cfc;
        }
    }
    ctx->pc = 0x273C68u;
    // 0x273c68: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x273c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x273c6c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x273c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x273c70: 0xc62c1e74  lwc1        $f12, 0x1E74($s1)
    ctx->pc = 0x273c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273c74: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x273c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c78: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x273c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273c7c: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x273c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x273c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x273c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x273c84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x273c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x273c88: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x273c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x273c8c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x273c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x273c90: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x273c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c94: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x273c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x273c98: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x273c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273c9c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x273c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x273ca0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x273ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273ca4: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x273ca4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x273ca8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x273ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x273cac: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x273cacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x273cb0: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x273cb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x273cb4: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x273CB4u;
    SET_GPR_U32(ctx, 31, 0x273CBCu);
    ctx->pc = 0x273CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CB4u;
    // 0x273cb8: 0xe7a50028  swc1        $f5, 0x28($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x273CB4u, 0x273CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CBCu;
label_273cbc:
    // 0x273cbc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x273cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x273cc0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x273cc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x273cc4: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x273cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x273cc8: 0xc0c48da  jal         func_312368
    ctx->pc = 0x273CC8u;
    SET_GPR_U32(ctx, 31, 0x273CD0u);
    ctx->pc = 0x273CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CC8u;
    // 0x273ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x273CC8u, 0x273CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CD0u;
label_273cd0:
    // 0x273cd0: 0xc6221e70  lwc1        $f2, 0x1E70($s1)
    ctx->pc = 0x273cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273cd4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x273cd8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x273cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x273cdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x273cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x273ce0: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x273ce0u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ce4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x273ce4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x273ce8: 0xc6201e74  lwc1        $f0, 0x1E74($s1)
    ctx->pc = 0x273ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273cec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x273cecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x273cf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x273cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x273cf4: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x273CF4u;
    {
        const bool branch_taken_0x273cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CF4u;
        // 0x273cf8: 0xe6201e74  swc1        $f0, 0x1E74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7796), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cf4) {
            ctx->pc = 0x27414Cu;
            goto label_27414c;
        }
    }
    ctx->pc = 0x273CFCu;
label_273cfc:
    // 0x273cfc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x273cfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273d00: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x273d00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273d04: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x273d04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x273d08: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x273d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x273d0c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x273d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273d10: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x273d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x273d14: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x273d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x273d18: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x273d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d1c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x273d1cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x273d20: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x273d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x273d24: 0xe7ad0018  swc1        $f13, 0x18($sp)
    ctx->pc = 0x273d24u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x273d28: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x273d28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x273d2c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x273d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273d30: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x273d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273d34: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x273d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x273d38: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x273d38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x273d3c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x273d3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x273d40: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x273d40u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x273d44: 0x46010044  c1          0x10044
    ctx->pc = 0x273d44u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x273d48: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x273d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x273d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273d50: 0x26330350  addiu       $s3, $s1, 0x350
    ctx->pc = 0x273d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
    // 0x273d54: 0x26350390  addiu       $s5, $s1, 0x390
    ctx->pc = 0x273d54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x273d58: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x273d58u;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x273d5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x273d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273d60: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x273d60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x273d64: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x273d64u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x273d68: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x273d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x273d6c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x273d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x273d70: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x273D70u;
    {
        const bool branch_taken_0x273d70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D70u;
        // 0x273d74: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d70) {
            ctx->pc = 0x273E58u;
            goto label_273e58;
        }
    }
    ctx->pc = 0x273D78u;
    // 0x273d78: 0xc0b130c  jal         func_2C4C30
    ctx->pc = 0x273D78u;
    SET_GPR_U32(ctx, 31, 0x273D80u);
    ctx->pc = 0x2C4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4C30u, 0x273D78u, 0x273D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D80u;
label_273d80:
    // 0x273d80: 0xc6210320  lwc1        $f1, 0x320($s1)
    ctx->pc = 0x273d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273d84: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x273d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x273d88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x273d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x273d8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x273d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x273d90: 0x46010101  sub.s       $f4, $f0, $f1
    ctx->pc = 0x273d90u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x273d94: 0xe6200324  swc1        $f0, 0x324($s1)
    ctx->pc = 0x273d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 804), bits); }
    // 0x273d98: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x273d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273d9c: 0x0  nop
    ctx->pc = 0x273d9cu;
    // NOP
    // 0x273da0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x273DA0u;
    {
        const bool branch_taken_0x273da0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DA0u;
        // 0x273da4: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273da0) {
            ctx->pc = 0x273DD0u;
            goto label_273dd0;
        }
    }
    ctx->pc = 0x273DA8u;
    // 0x273da8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x273da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x273dac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x273dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x273db0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273db4: 0x0  nop
    ctx->pc = 0x273db4u;
    // NOP
label_273db8:
    // 0x273db8: 0x0  nop
    ctx->pc = 0x273db8u;
    // NOP
    // 0x273dbc: 0x46010100  add.s       $f4, $f0, $f1
    ctx->pc = 0x273dbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x273dc0: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x273dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273dc4: 0x0  nop
    ctx->pc = 0x273dc4u;
    // NOP
    // 0x273dc8: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x273DC8u;
    {
        const bool branch_taken_0x273dc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x273DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DC8u;
        // 0x273dcc: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dc8) {
            ctx->pc = 0x273DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273db8;
        }
    }
    ctx->pc = 0x273DD0u;
label_273dd0:
    // 0x273dd0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x273dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x273dd4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x273dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x273dd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273ddc: 0x0  nop
    ctx->pc = 0x273ddcu;
    // NOP
    // 0x273de0: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x273de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273de4: 0x0  nop
    ctx->pc = 0x273de4u;
    // NOP
    // 0x273de8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x273DE8u;
    {
        const bool branch_taken_0x273de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE8u;
        // 0x273dec: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273de8) {
            ctx->pc = 0x273E18u;
            goto label_273e18;
        }
    }
    ctx->pc = 0x273DF0u;
    // 0x273df0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x273df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x273df4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x273df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x273df8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x273df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x273dfc: 0x0  nop
    ctx->pc = 0x273dfcu;
    // NOP
label_273e00:
    // 0x273e00: 0x0  nop
    ctx->pc = 0x273e00u;
    // NOP
    // 0x273e04: 0x46020101  sub.s       $f4, $f0, $f2
    ctx->pc = 0x273e04u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x273e08: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x273e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273e0c: 0x0  nop
    ctx->pc = 0x273e0cu;
    // NOP
    // 0x273e10: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x273E10u;
    {
        const bool branch_taken_0x273e10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x273E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E10u;
        // 0x273e14: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e10) {
            ctx->pc = 0x273E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e00;
        }
    }
    ctx->pc = 0x273E18u;
label_273e18:
    // 0x273e18: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x273e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x273e1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x273e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x273e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273e24: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x273e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x273e28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x273e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x273e2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273e30: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x273e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273e34: 0x0  nop
    ctx->pc = 0x273e34u;
    // NOP
    // 0x273e38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x273E38u;
    {
        const bool branch_taken_0x273e38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273e38) {
            ctx->pc = 0x273E48u;
            goto label_273e48;
        }
    }
    ctx->pc = 0x273E40u;
    // 0x273e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x273E40u;
    {
        const bool branch_taken_0x273e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E40u;
        // 0x273e44: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e40) {
            ctx->pc = 0x273E58u;
            goto label_273e58;
        }
    }
    ctx->pc = 0x273E48u;
label_273e48:
    // 0x273e48: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x273e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273e4c: 0x0  nop
    ctx->pc = 0x273e4cu;
    // NOP
    // 0x273e50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x273E50u;
    {
        const bool branch_taken_0x273e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273e50) {
            ctx->pc = 0x273E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E50u;
            // 0x273e54: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E58u;
            goto label_273e58;
        }
    }
    ctx->pc = 0x273E58u;
label_273e58:
    // 0x273e58: 0xc6220328  lwc1        $f2, 0x328($s1)
    ctx->pc = 0x273e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273e5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x273e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x273e60: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x273e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x273e64: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x273e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x273e68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273e6c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x273e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x273e70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x273e70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x273e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273e78: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x273e78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x273e7c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x273e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x273e80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x273e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x273e84: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x273e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x273e88: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x273e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x273e8c: 0xc6210320  lwc1        $f1, 0x320($s1)
    ctx->pc = 0x273e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273e90: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x273e90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x273e94: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x273e94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x273e98: 0xe6220328  swc1        $f2, 0x328($s1)
    ctx->pc = 0x273e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 808), bits); }
    // 0x273e9c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x273e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x273ea0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x273EA0u;
    SET_GPR_U32(ctx, 31, 0x273EA8u);
    ctx->pc = 0x273EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EA0u;
    // 0x273ea4: 0xe6210320  swc1        $f1, 0x320($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 800), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x273EA0u, 0x273EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EA8u;
label_273ea8:
    // 0x273ea8: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x273EA8u;
    SET_GPR_U32(ctx, 31, 0x273EB0u);
    ctx->pc = 0x273EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EA8u;
    // 0x273eac: 0xc62c0320  lwc1        $f12, 0x320($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x273EA8u, 0x273EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EB0u;
label_273eb0:
    // 0x273eb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x273eb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x273eb4: 0xc62c0320  lwc1        $f12, 0x320($s1)
    ctx->pc = 0x273eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273eb8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x273eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x273ebc: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x273EBCu;
    SET_GPR_U32(ctx, 31, 0x273EC4u);
    ctx->pc = 0x273EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EBCu;
    // 0x273ec0: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x273EBCu, 0x273EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EC4u;
label_273ec4:
    // 0x273ec4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x273ec4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x273ec8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x273ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x273ecc: 0x8ee22b00  lw          $v0, 0x2B00($s7)
    ctx->pc = 0x273eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11008)));
    // 0x273ed0: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x273ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x273ed4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x273ED4u;
    {
        const bool branch_taken_0x273ed4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x273ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED4u;
        // 0x273ed8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ed4) {
            ctx->pc = 0x273EF0u;
            goto label_273ef0;
        }
    }
    ctx->pc = 0x273EDCu;
    // 0x273edc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273ee0: 0x0  nop
    ctx->pc = 0x273ee0u;
    // NOP
    // 0x273ee4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x273ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x273ee8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x273EE8u;
    {
        const bool branch_taken_0x273ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273ee8) {
            ctx->pc = 0x273F08u;
            goto label_273f08;
        }
    }
    ctx->pc = 0x273EF0u;
label_273ef0:
    // 0x273ef0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x273ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x273ef4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x273ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x273ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x273ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273efc: 0x0  nop
    ctx->pc = 0x273efcu;
    // NOP
    // 0x273f00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x273f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x273f04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x273f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_273f08:
    // 0x273f08: 0x3c013ac9  lui         $at, 0x3AC9
    ctx->pc = 0x273f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15049 << 16));
    // 0x273f0c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x273f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x273f10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x273f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x273f14: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x273F14u;
    SET_GPR_U32(ctx, 31, 0x273F1Cu);
    ctx->pc = 0x273F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F14u;
    // 0x273f18: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x273F14u, 0x273F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F1Cu;
label_273f1c:
    // 0x273f1c: 0xc666000c  lwc1        $f6, 0xC($s3)
    ctx->pc = 0x273f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x273f20: 0xc6250350  lwc1        $f5, 0x350($s1)
    ctx->pc = 0x273f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x273f24: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x273f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x273f28: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x273f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273f2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x273f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x273f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273f34: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x273f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x273f38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x273f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x273f3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x273f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x273f40: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x273f40u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x273f44: 0xc6a9000c  lwc1        $f9, 0xC($s5)
    ctx->pc = 0x273f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x273f48: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x273f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x273f4c: 0xc6270390  lwc1        $f7, 0x390($s1)
    ctx->pc = 0x273f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x273f50: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x273f50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x273f54: 0xc6230328  lwc1        $f3, 0x328($s1)
    ctx->pc = 0x273f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273f58: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x273f58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x273f5c: 0xc6a80004  lwc1        $f8, 0x4($s5)
    ctx->pc = 0x273f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x273f60: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x273f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x273f64: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x273f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273f68: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x273f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x273f6c: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x273f6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x273f70: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x273f70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x273f74: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x273f74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x273f78: 0xe7a6005c  swc1        $f6, 0x5C($sp)
    ctx->pc = 0x273f78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x273f7c: 0xe7a70060  swc1        $f7, 0x60($sp)
    ctx->pc = 0x273f7cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x273f80: 0xe7a80064  swc1        $f8, 0x64($sp)
    ctx->pc = 0x273f80u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x273f84: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x273f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x273f88: 0xe7a9006c  swc1        $f9, 0x6C($sp)
    ctx->pc = 0x273f88u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x273f8c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x273f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x273f90: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x273f90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x273f94: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x273f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x273f98: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x273f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x273f9c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x273f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273fa0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x273fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273fa4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x273fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x273fa8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x273fa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x273fac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x273facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x273fb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x273fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x273fb4: 0xc7a80078  lwc1        $f8, 0x78($sp)
    ctx->pc = 0x273fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x273fb8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x273fb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x273fbc: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x273fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273fc0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x273fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273fc4: 0x46044142  mul.s       $f5, $f8, $f4
    ctx->pc = 0x273fc4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x273fc8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x273fc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x273fcc: 0xc7a70074  lwc1        $f7, 0x74($sp)
    ctx->pc = 0x273fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x273fd0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x273fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x273fd4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x273fd4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x273fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x273fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x273fdc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x273fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x273fe0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x273fe0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x273fe4: 0xe7a80048  swc1        $f8, 0x48($sp)
    ctx->pc = 0x273fe4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x273fe8: 0x46043982  mul.s       $f6, $f7, $f4
    ctx->pc = 0x273fe8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x273fec: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x273fecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x273ff0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x273ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x273ff4: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x273ff4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x273ff8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x273ff8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x273ffc: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x273ffcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x274000: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x274000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x274004: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x274004u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x274008: 0xe6090004  swc1        $f9, 0x4($s0)
    ctx->pc = 0x274008u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27400c: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x27400cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x274010: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x274010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x274014: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x274014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x274018: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x274018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x27401c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x27401cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274020: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x274020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274024: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x274024u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x274028: 0x4a0003bf  vwaitq
    ctx->pc = 0x274028u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x27402c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x27402cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x274030: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x274030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x274034: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x274034u;
    SET_GPR_U32(ctx, 31, 0x27403Cu);
    ctx->pc = 0x274038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274034u;
    // 0x274038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x274034u, 0x27403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27403Cu;
label_27403c:
    // 0x27403c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x27403cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x274040: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x274040u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x274044: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x274044u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x274048: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x274048u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27404c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x27404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x274050: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x274050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274054: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x274054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274058: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x274058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27405c: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x27405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274060: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x274060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x274064: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x274064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x274068: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x274068u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27406c: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x27406cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x274070: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x274070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x274074: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x274074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x274078: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x274078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27407c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x27407cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274080: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x274080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274084: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x274084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274088: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x274088u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x27408c: 0x4a0003bf  vwaitq
    ctx->pc = 0x27408cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x274090: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x274090u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x274094: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x274094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x274098: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x274098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27409c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x27409cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2740a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2740a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2740a4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2740a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2740a8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2740a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2740ac: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2740acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2740b0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2740b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2740b4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2740b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2740b8: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x2740b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2740bc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2740bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2740c0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2740c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2740c4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2740c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2740c8: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x2740c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2740cc: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2740ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2740d0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2740d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2740d4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2740d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2740d8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2740d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2740dc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2740dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2740e0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2740e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2740e4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2740e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2740e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2740e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2740ec: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2740ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2740f0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2740f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2740f4: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2740f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2740f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2740f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2740fc: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2740fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x274100: 0xf8610060  sqc2        $vf1, 0x60($v1)
    ctx->pc = 0x274100u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x274104: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x274104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x274108: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x274108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27410c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x27410cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x274110: 0xf8610050  sqc2        $vf1, 0x50($v1)
    ctx->pc = 0x274110u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x274114: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x274114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274118: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x274118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27411c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x27411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274120: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x274120u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x274124: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x274124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x274128: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x274128u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x27412c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x27412cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x274130: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x274130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274134: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x274134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x274138: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x274138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x27413c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x27413cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x274140: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x274140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x274144: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x274144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x274148: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x274148u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_27414c:
    // 0x27414c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x27414cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274150: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x274150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x274154: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x274154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274158: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x274158u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x27415c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x27415cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x274160: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x274160u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x274164: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x274164u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274168: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x274168u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x27416c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x27416cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x274170: 0x3e00008  jr          $ra
    ctx->pc = 0x274170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274170u;
        // 0x274174: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274178u;
}
