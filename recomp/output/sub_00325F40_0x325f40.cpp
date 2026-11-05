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

// Function: sub_00325F40
// Address: 0x325f40 - 0x326048
void sub_00325F40_0x325f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325F40_0x325f40");
#endif

    switch (ctx->pc) {
        case 0x325f90u: goto label_325f90;
        case 0x325f9cu: goto label_325f9c;
        case 0x325fecu: goto label_325fec;
        case 0x325ff8u: goto label_325ff8;
        case 0x326020u: goto label_326020;
        default: break;
    }

    ctx->pc = 0x325f40u;

    // 0x325f40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325f44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325f48: 0xe44cbe58  swc1        $f12, -0x41A8($v0)
    ctx->pc = 0x325f48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBE58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE58u, _value); } while (0); }
    // 0x325f4c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325f50: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x325f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x325f54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325f58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x325f5c: 0x3c11005b  lui         $s1, 0x5B
    ctx->pc = 0x325f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
    // 0x325f60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x325f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x325f64: 0x26316da0  addiu       $s1, $s1, 0x6DA0
    ctx->pc = 0x325f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28064));
    // 0x325f68: 0x8ca2be28  lw          $v0, -0x41D8($a1)
    ctx->pc = 0x325f68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBE28u));
    // 0x325f6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x325f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x325f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x325f7c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x325f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x325f80: 0xe46cbe48  swc1        $f12, -0x41B8($v1)
    ctx->pc = 0x325f80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBE48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE48u, _value); } while (0); }
    // 0x325f84: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x325f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x325f88: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x325F88u;
    SET_GPR_U32(ctx, 31, 0x325F90u);
    ctx->pc = 0x325F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F88u;
    // 0x325f8c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x325F88u, 0x325F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F90u;
label_325f90:
    // 0x325f90: 0x8e64be34  lw          $a0, -0x41CC($s3)
    ctx->pc = 0x325f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950452)));
    // 0x325f94: 0xc0b1448  jal         func_2C5120
    ctx->pc = 0x325F94u;
    SET_GPR_U32(ctx, 31, 0x325F9Cu);
    ctx->pc = 0x325F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F94u;
    // 0x325f98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5120u, 0x325F94u, 0x325F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F9Cu;
label_325f9c:
    // 0x325f9c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x325f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x325fa0: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x325fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x325fa4: 0x24426df0  addiu       $v0, $v0, 0x6DF0
    ctx->pc = 0x325fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28144));
    // 0x325fa8: 0x8c852c64  lw          $a1, 0x2C64($a0)
    ctx->pc = 0x325fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482C64u));
    // 0x325fac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x325facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B6DF0u));
    // 0x325fb0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x325fb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x325fb4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x325fb4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x325fb8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x325fb8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x325fbc: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x325fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x325fc0: 0x8c832c64  lw          $v1, 0x2C64($a0)
    ctx->pc = 0x325fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11364)));
    // 0x325fc4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x325fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x325fc8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x325fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x325fcc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x325fccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x325fd0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x325fd0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x325fd4: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x325fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x325fd8: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x325fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x325fdc: 0x8c852c64  lw          $a1, 0x2C64($a0)
    ctx->pc = 0x325fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11364)));
    // 0x325fe0: 0x26106db0  addiu       $s0, $s0, 0x6DB0
    ctx->pc = 0x325fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28080));
    // 0x325fe4: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x325FE4u;
    SET_GPR_U32(ctx, 31, 0x325FECu);
    ctx->pc = 0x325FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FE4u;
    // 0x325fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x325FE4u, 0x325FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FECu;
label_325fec:
    // 0x325fec: 0x8e64be34  lw          $a0, -0x41CC($s3)
    ctx->pc = 0x325fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950452)));
    // 0x325ff0: 0xc0b1448  jal         func_2C5120
    ctx->pc = 0x325FF0u;
    SET_GPR_U32(ctx, 31, 0x325FF8u);
    ctx->pc = 0x325FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FF0u;
    // 0x325ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5120u, 0x325FF0u, 0x325FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FF8u;
label_325ff8:
    // 0x325ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x325ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325ffc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x325ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x326000: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x326000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x326004: 0xaca3be44  sw          $v1, -0x41BC($a1)
    ctx->pc = 0x326004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FBE44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE44u, _value); } while (0);
    // 0x326008: 0x3c06005b  lui         $a2, 0x5B
    ctx->pc = 0x326008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)91 << 16));
    // 0x32600c: 0xac43be7c  sw          $v1, -0x4184($v0)
    ctx->pc = 0x32600cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FBE7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE7Cu, _value); } while (0);
    // 0x326010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x326014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326018: 0xc0b19e2  jal         func_2C6788
    ctx->pc = 0x326018u;
    SET_GPR_U32(ctx, 31, 0x326020u);
    ctx->pc = 0x32601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326018u;
    // 0x32601c: 0x24c66dc0  addiu       $a2, $a2, 0x6DC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6788u, 0x326018u, 0x326020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326020u;
label_326020:
    // 0x326020: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x326020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x326024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326028: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x326028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32602c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32602cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326030: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x326030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x326034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326038: 0xac402c68  sw          $zero, 0x2C68($v0)
    ctx->pc = 0x326038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C68u, _value); } while (0);
    // 0x32603c: 0x3e00008  jr          $ra
    ctx->pc = 0x32603Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32603Cu;
        // 0x326040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32603Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326044u;
    // 0x326044: 0x0  nop
    ctx->pc = 0x326044u;
    // NOP
    ctx->pc = 0x326048u;
}
