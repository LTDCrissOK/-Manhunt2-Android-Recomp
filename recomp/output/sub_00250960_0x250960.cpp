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

// Function: sub_00250960
// Address: 0x250960 - 0x250a80
void sub_00250960_0x250960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250960_0x250960");
#endif

    ctx->pc = 0x250960u;

    // 0x250960: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x250960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250964: 0x8ce300f0  lw          $v1, 0xF0($a3)
    ctx->pc = 0x250964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x250968: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x250968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25096c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25096Cu;
    {
        const bool branch_taken_0x25096c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x250970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25096Cu;
        // 0x250970: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25096c) {
            ctx->pc = 0x250980u;
            goto label_250980;
        }
    }
    ctx->pc = 0x250974u;
    // 0x250974: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x250974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x250978: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x250978u;
    {
        const bool branch_taken_0x250978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250978u;
        // 0x25097c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250978) {
            ctx->pc = 0x250A74u;
            goto label_250a74;
        }
    }
    ctx->pc = 0x250980u;
label_250980:
    // 0x250980: 0x90e30110  lbu         $v1, 0x110($a3)
    ctx->pc = 0x250980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 272)));
    // 0x250984: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x250984u;
    {
        const bool branch_taken_0x250984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250984u;
        // 0x250988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250984) {
            ctx->pc = 0x250A74u;
            goto label_250a74;
        }
    }
    ctx->pc = 0x25098Cu;
    // 0x25098c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x25098cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x250990: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x250990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x250994: 0xc46198fc  lwc1        $f1, -0x6704($v1)
    ctx->pc = 0x250994u;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250998: 0x24e60100  addiu       $a2, $a3, 0x100
    ctx->pc = 0x250998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x25099c: 0x8ca40104  lw          $a0, 0x104($a1)
    ctx->pc = 0x25099cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x2509a0: 0xc4e000f8  lwc1        $f0, 0xF8($a3)
    ctx->pc = 0x2509a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2509a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2509a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2509a8: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x2509a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2509ac: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2509acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2509b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2509b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2509b4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2509b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2509b8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2509b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2509bc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2509bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2509c0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2509c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2509c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2509c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2509c8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2509c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2509cc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2509ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2509d0: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x2509d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2509d4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2509d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2509d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2509d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2509dc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2509dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2509e0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2509e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2509e4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2509e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2509e8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2509e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2509ec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2509ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2509f0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2509f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2509f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2509f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2509f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2509f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2509fc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2509fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250a00: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x250a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250a04: 0x24e30120  addiu       $v1, $a3, 0x120
    ctx->pc = 0x250a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x250a08: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x250a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250a0c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x250a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250a10: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x250a10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x250a14: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x250a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250a18: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x250a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250a1c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x250a1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x250a20: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x250a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250a24: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x250a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250a28: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x250a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x250a2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x250a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250a30: 0x0  nop
    ctx->pc = 0x250a30u;
    // NOP
    // 0x250a34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x250a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250a38: 0x0  nop
    ctx->pc = 0x250a38u;
    // NOP
    // 0x250a3c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x250A3Cu;
    {
        const bool branch_taken_0x250a3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250a3c) {
            ctx->pc = 0x250A74u;
            goto label_250a74;
        }
    }
    ctx->pc = 0x250A44u;
    // 0x250a44: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x250a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x250a48: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x250a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250a4c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x250a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250a50: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x250a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x250a54: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x250a54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x250a58: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x250a58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x250a5c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x250a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x250a60: 0x46000004  c1          0x4
    ctx->pc = 0x250a60u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x250a64: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x250a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250a68: 0x0  nop
    ctx->pc = 0x250a68u;
    // NOP
    // 0x250a6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x250A6Cu;
    {
        const bool branch_taken_0x250a6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250a6c) {
            ctx->pc = 0x250A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250A6Cu;
            // 0x250a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250A74u;
            goto label_250a74;
        }
    }
    ctx->pc = 0x250A74u;
label_250a74:
    // 0x250a74: 0x3e00008  jr          $ra
    ctx->pc = 0x250A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A74u;
        // 0x250a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250A7Cu;
    // 0x250a7c: 0x0  nop
    ctx->pc = 0x250a7cu;
    // NOP
    ctx->pc = 0x250a80u;
}
