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

// Function: sub_00259148
// Address: 0x259148 - 0x259248
void sub_00259148_0x259148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259148_0x259148");
#endif

    switch (ctx->pc) {
        case 0x259174u: goto label_259174;
        case 0x2591ccu: goto label_2591cc;
        case 0x259214u: goto label_259214;
        default: break;
    }

    ctx->pc = 0x259148u;

    // 0x259148: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x259148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25914c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x25914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x259150: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x259150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x259154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259158: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x259158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x25915c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25915cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259160: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x259160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x259164: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x259164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x259168: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x259168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x25916c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x25916Cu;
    SET_GPR_U32(ctx, 31, 0x259174u);
    ctx->pc = 0x259170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25916Cu;
    // 0x259170: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x25916Cu, 0x259174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259174u;
label_259174:
    // 0x259174: 0x8e031100  lw          $v1, 0x1100($s0)
    ctx->pc = 0x259174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4352)));
    // 0x259178: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x259178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25917c: 0x24620260  addiu       $v0, $v1, 0x260
    ctx->pc = 0x25917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 608));
    // 0x259180: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x259180u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259184: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x259184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259188: 0x24630270  addiu       $v1, $v1, 0x270
    ctx->pc = 0x259188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x25918c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x25918cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x259190: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x259190u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259194: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x259194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259198: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x259198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x25919c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x25919cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2591a0: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x2591a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x2591a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2591a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x2591a8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2591a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2591ac: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2591acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2591b0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2591b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2591b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2591b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2591b8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2591b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2591bc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2591bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2591c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2591c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591c4: 0xc08fd62  jal         func_23F588
    ctx->pc = 0x2591C4u;
    SET_GPR_U32(ctx, 31, 0x2591CCu);
    ctx->pc = 0x2591C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2591C4u;
    // 0x2591c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F588u, 0x2591C4u, 0x2591CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591CCu;
label_2591cc:
    // 0x2591cc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2591ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2591d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2591d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2591d4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2591d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2591d8: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x2591d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2591dc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2591dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2591e0: 0xf8410050  sqc2        $vf1, 0x50($v0)
    ctx->pc = 0x2591e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2591e4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2591e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2591e8: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x2591e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2591ec: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2591ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2591f0: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x2591f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2591f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2591f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2591f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2591f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591fc: 0xc46c96ac  lwc1        $f12, -0x6954($v1)
    ctx->pc = 0x2591fcu;
    { uint32_t bits = FAST_READ32(0x3F96ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x259200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259204: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x259204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x259208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25920c: 0xc08e23a  jal         func_2388E8
    ctx->pc = 0x25920Cu;
    SET_GPR_U32(ctx, 31, 0x259214u);
    ctx->pc = 0x259210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25920Cu;
    // 0x259210: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x25920Cu, 0x259214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259214u;
label_259214:
    // 0x259214: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x259214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x259218: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x259218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25921c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x25921cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x259220: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x259220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259224: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x259224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x259228: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x259228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25922c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x25922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x259230: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x259230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x259234: 0x3e00008  jr          $ra
    ctx->pc = 0x259234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259234u;
        // 0x259238: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25923Cu;
    // 0x25923c: 0x0  nop
    ctx->pc = 0x25923cu;
    // NOP
    // 0x259240: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x259240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x259244: 0x0  nop
    ctx->pc = 0x259244u;
    // NOP
    ctx->pc = 0x259248u;
}
