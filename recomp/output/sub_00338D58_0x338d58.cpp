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

// Function: sub_00338D58
// Address: 0x338d58 - 0x339290
void sub_00338D58_0x338d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338D58_0x338d58");
#endif

    switch (ctx->pc) {
        case 0x338da0u: goto label_338da0;
        case 0x338db0u: goto label_338db0;
        case 0x338e10u: goto label_338e10;
        case 0x338e1cu: goto label_338e1c;
        case 0x338e48u: goto label_338e48;
        case 0x338f30u: goto label_338f30;
        case 0x338f38u: goto label_338f38;
        case 0x338f44u: goto label_338f44;
        case 0x338f50u: goto label_338f50;
        case 0x338f5cu: goto label_338f5c;
        case 0x338f68u: goto label_338f68;
        case 0x338f74u: goto label_338f74;
        case 0x338f8cu: goto label_338f8c;
        case 0x338fe8u: goto label_338fe8;
        case 0x339008u: goto label_339008;
        case 0x339018u: goto label_339018;
        case 0x33902cu: goto label_33902c;
        case 0x339148u: goto label_339148;
        case 0x3391dcu: goto label_3391dc;
        case 0x339218u: goto label_339218;
        case 0x339220u: goto label_339220;
        case 0x339228u: goto label_339228;
        case 0x339240u: goto label_339240;
        default: break;
    }

    ctx->pc = 0x338d58u;

    // 0x338d58: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x338d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x338d5c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x338d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x338d60: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x338d60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x338d64: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x338d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x338d68: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x338d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x338d6c: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x338d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x338d70: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x338d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x338d74: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x338d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x338d78: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x338d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x338d7c: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x338d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x338d80: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x338d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x338d84: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x338d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x338d88: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x338d88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x338d8c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x338d8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x338d90: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x338d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x338d94: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x338d94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x338d98: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x338D98u;
    SET_GPR_U32(ctx, 31, 0x338DA0u);
    ctx->pc = 0x338D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D98u;
    // 0x338d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x338D98u, 0x338DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DA0u;
label_338da0:
    // 0x338da0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x338DA0u;
    {
        const bool branch_taken_0x338da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338da0) {
            ctx->pc = 0x338DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338DA0u;
            // 0x338da4: 0xc60100a0  lwc1        $f1, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x338DB4u;
            goto label_338db4;
        }
    }
    ctx->pc = 0x338DA8u;
    // 0x338da8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x338DA8u;
    SET_GPR_U32(ctx, 31, 0x338DB0u);
    ctx->pc = 0x338DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DA8u;
    // 0x338dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x338DA8u, 0x338DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DB0u;
label_338db0:
    // 0x338db0: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x338db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_338db4:
    // 0x338db4: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x338db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x338db8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x338db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x338dbc: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x338dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x338dc0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x338dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338dc4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x338dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x338dc8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x338dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338dcc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x338dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x338dd0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x338dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338dd4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x338dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x338dd8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x338dd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338ddc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x338ddcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x338de0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x338de0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x338de4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x338de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x338de8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x338de8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x338dec: 0x4a0003bf  vwaitq
    ctx->pc = 0x338decu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x338df0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x338df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x338df4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x338df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x338df8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x338df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x338dfc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x338dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338e00: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x338e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x338e04: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x338e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x338e08: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x338e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338e0c: 0x0  nop
    ctx->pc = 0x338e0cu;
    // NOP
label_338e10:
    // 0x338e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x338E14u;
    SET_GPR_U32(ctx, 31, 0x338E1Cu);
    ctx->pc = 0x338E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E14u;
    // 0x338e18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x338E14u, 0x338E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E1Cu;
label_338e1c:
    // 0x338e1c: 0x0  nop
    ctx->pc = 0x338e1cu;
    // NOP
    // 0x338e20: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338E20u;
    {
        const bool branch_taken_0x338e20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x338E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E20u;
        // 0x338e24: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e20) {
            ctx->pc = 0x338E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338e10;
        }
    }
    ctx->pc = 0x338E28u;
    // 0x338e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338e2c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x338e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x338e30: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x338e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x338e34: 0x245e6ec0  addiu       $fp, $v0, 0x6EC0
    ctx->pc = 0x338e34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 28352));
    // 0x338e38: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x338e38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x338e3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e40: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x338e40u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338e44: 0x0  nop
    ctx->pc = 0x338e44u;
    // NOP
label_338e48:
    // 0x338e48: 0x27d30004  addiu       $s3, $fp, 0x4
    ctx->pc = 0x338e48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x338e4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x338e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x338e50: 0x2338021  addu        $s0, $s1, $s3
    ctx->pc = 0x338e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x338e54: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x338e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x338e58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x338e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338e5c: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x338E5Cu;
    {
        const bool branch_taken_0x338e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E5Cu;
        // 0x338e60: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e5c) {
            ctx->pc = 0x3391F4u;
            goto label_3391f4;
        }
    }
    ctx->pc = 0x338E64u;
    // 0x338e64: 0x8c83bd48  lw          $v1, -0x42B8($a0)
    ctx->pc = 0x338e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950216)));
    // 0x338e68: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x338e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x338e6c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x338e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x338e70: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x338e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x338e74: 0x24636f50  addiu       $v1, $v1, 0x6F50
    ctx->pc = 0x338e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28496));
    // 0x338e78: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x338e78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B6F50u));
    // 0x338e7c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x338e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338e80: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x338e80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x338e84: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x338e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x338e88: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x338e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338e8c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x338e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338e90: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x338e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338e94: 0xc7a500bc  lwc1        $f5, 0xBC($sp)
    ctx->pc = 0x338e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x338e98: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x338e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x338e9c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x338e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x338ea0: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x338ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x338ea4: 0xe7a500ac  swc1        $f5, 0xAC($sp)
    ctx->pc = 0x338ea4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x338ea8: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x338ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x338eac: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x338eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338eb0: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x338eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x338eb4: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x338eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x338eb8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x338eb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x338ebc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x338ebcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x338ec0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x338ec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x338ec4: 0x46010044  c1          0x10044
    ctx->pc = 0x338ec4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x338ec8: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x338ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x338ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x338eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x338ed0: 0x0  nop
    ctx->pc = 0x338ed0u;
    // NOP
    // 0x338ed4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x338ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338ed8: 0x0  nop
    ctx->pc = 0x338ed8u;
    // NOP
    // 0x338edc: 0x450300c6  bc1tl       . + 4 + (0xC6 << 2)
    ctx->pc = 0x338EDCu;
    {
        const bool branch_taken_0x338edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338edc) {
            ctx->pc = 0x338EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338EDCu;
            // 0x338ee0: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3391F8u;
            goto label_3391f8;
        }
    }
    ctx->pc = 0x338EE4u;
    // 0x338ee4: 0x3c014108  lui         $at, 0x4108
    ctx->pc = 0x338ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16648 << 16));
    // 0x338ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x338ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x338eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x338eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x338ef0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x338ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x338ef4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x338ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338ef8: 0x0  nop
    ctx->pc = 0x338ef8u;
    // NOP
    // 0x338efc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x338EFCu;
    {
        const bool branch_taken_0x338efc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x338F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EFCu;
        // 0x338f00: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338efc) {
            ctx->pc = 0x338F20u;
            goto label_338f20;
        }
    }
    ctx->pc = 0x338F04u;
    // 0x338f04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x338f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x338f08: 0x3c013df0  lui         $at, 0x3DF0
    ctx->pc = 0x338f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15856 << 16));
    // 0x338f0c: 0x3421f0f1  ori         $at, $at, 0xF0F1
    ctx->pc = 0x338f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61681);
    // 0x338f10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x338f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x338f14: 0x0  nop
    ctx->pc = 0x338f14u;
    // NOP
    // 0x338f18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x338f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x338f1c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x338f1cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_338f20:
    // 0x338f20: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x338F20u;
    {
        const bool branch_taken_0x338f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F20u;
        // 0x338f24: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338f20) {
            ctx->pc = 0x338F90u;
            goto label_338f90;
        }
    }
    ctx->pc = 0x338F28u;
    // 0x338f28: 0xc0db198  jal         func_36C660
    ctx->pc = 0x338F28u;
    SET_GPR_U32(ctx, 31, 0x338F30u);
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x338F28u, 0x338F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F30u;
label_338f30:
    // 0x338f30: 0xc0db190  jal         func_36C640
    ctx->pc = 0x338F30u;
    SET_GPR_U32(ctx, 31, 0x338F38u);
    ctx->pc = 0x338F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F30u;
    // 0x338f34: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C640u, 0x338F30u, 0x338F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F38u;
label_338f38:
    // 0x338f38: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x338f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x338f3c: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x338F3Cu;
    SET_GPR_U32(ctx, 31, 0x338F44u);
    ctx->pc = 0x338F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F3Cu;
    // 0x338f40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x338F3Cu, 0x338F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F44u;
label_338f44:
    // 0x338f44: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x338f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x338f48: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x338F48u;
    SET_GPR_U32(ctx, 31, 0x338F50u);
    ctx->pc = 0x338F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F48u;
    // 0x338f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x338F48u, 0x338F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F50u;
label_338f50:
    // 0x338f50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x338f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x338f54: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x338F54u;
    SET_GPR_U32(ctx, 31, 0x338F5Cu);
    ctx->pc = 0x338F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F54u;
    // 0x338f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x338F54u, 0x338F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F5Cu;
label_338f5c:
    // 0x338f5c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x338f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x338f60: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x338F60u;
    SET_GPR_U32(ctx, 31, 0x338F68u);
    ctx->pc = 0x338F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F60u;
    // 0x338f64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x338F60u, 0x338F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F68u;
label_338f68:
    // 0x338f68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x338f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338f6c: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x338F6Cu;
    SET_GPR_U32(ctx, 31, 0x338F74u);
    ctx->pc = 0x338F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F6Cu;
    // 0x338f70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x338F6Cu, 0x338F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F74u;
label_338f74:
    // 0x338f74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x338f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x338f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f80: 0x8c540090  lw          $s4, 0x90($v0)
    ctx->pc = 0x338f80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x338f84: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x338F84u;
    SET_GPR_U32(ctx, 31, 0x338F8Cu);
    ctx->pc = 0x338F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F84u;
    // 0x338f88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x338F84u, 0x338F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F8Cu;
label_338f8c:
    // 0x338f8c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x338f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_338f90:
    // 0x338f90: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x338f90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338f94: 0x24636ed8  addiu       $v1, $v1, 0x6ED8
    ctx->pc = 0x338f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28376));
    // 0x338f98: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x338f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x338f9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x338f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338fa0: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x338FA0u;
    {
        const bool branch_taken_0x338fa0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x338FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338FA0u;
        // 0x338fa4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338fa0) {
            ctx->pc = 0x3391F4u;
            goto label_3391f4;
        }
    }
    ctx->pc = 0x338FA8u;
    // 0x338fa8: 0x26620014  addiu       $v0, $s3, 0x14
    ctx->pc = 0x338fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x338fac: 0x26630078  addiu       $v1, $s3, 0x78
    ctx->pc = 0x338facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x338fb0: 0x222b821  addu        $s7, $s1, $v0
    ctx->pc = 0x338fb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x338fb4: 0x223b021  addu        $s6, $s1, $v1
    ctx->pc = 0x338fb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x338fb8: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x338fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x338fbc: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x338fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x338fc0: 0x24846f00  addiu       $a0, $a0, 0x6F00
    ctx->pc = 0x338fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28416));
    // 0x338fc4: 0x24426f14  addiu       $v0, $v0, 0x6F14
    ctx->pc = 0x338fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28436));
    // 0x338fc8: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x338fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x338fcc: 0x224a821  addu        $s5, $s1, $a0
    ctx->pc = 0x338fccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x338fd0: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x338fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x338fd4: 0x24636f28  addiu       $v1, $v1, 0x6F28
    ctx->pc = 0x338fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28456));
    // 0x338fd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x338fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x338fdc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x338fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x338fe0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x338fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x338fe4: 0x92020076  lbu         $v0, 0x76($s0)
    ctx->pc = 0x338fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 118)));
label_338fe8:
    // 0x338fe8: 0x5040007d  beql        $v0, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x338FE8u;
    {
        const bool branch_taken_0x338fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338fe8) {
            ctx->pc = 0x338FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338FE8u;
            // 0x338fec: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3391E0u;
            goto label_3391e0;
        }
    }
    ctx->pc = 0x338FF0u;
    // 0x338ff0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x338ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x338ff4: 0x50540009  beql        $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x338FF4u;
    {
        const bool branch_taken_0x338ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x338ff4) {
            ctx->pc = 0x338FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338FF4u;
            // 0x338ff8: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33901Cu;
            goto label_33901c;
        }
    }
    ctx->pc = 0x338FFCu;
    // 0x338ffc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x338ffcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339000: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x339000u;
    SET_GPR_U32(ctx, 31, 0x339008u);
    ctx->pc = 0x339004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339000u;
    // 0x339004: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x339000u, 0x339008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339008u;
label_339008:
    // 0x339008: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x339008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33900c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339010: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x339010u;
    SET_GPR_U32(ctx, 31, 0x339018u);
    ctx->pc = 0x339014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339010u;
    // 0x339014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x339010u, 0x339018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339018u;
label_339018:
    // 0x339018: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x339018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33901c:
    // 0x33901c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x33901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x339020: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x339020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339024: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x339024u;
    SET_GPR_U32(ctx, 31, 0x33902Cu);
    ctx->pc = 0x339028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339024u;
    // 0x339028: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x339024u, 0x33902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33902Cu;
label_33902c:
    // 0x33902c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x33902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x339030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x339034: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x339034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x339038: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x339038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x33903c: 0x8e6c0000  lw          $t4, 0x0($s3)
    ctx->pc = 0x33903cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x339040: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x339040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x339044: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x339044u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x339048: 0x440e0800  mfc1        $t6, $f1
    ctx->pc = 0x339048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x33904c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x33904Cu;
    {
        const bool branch_taken_0x33904c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33904Cu;
        // 0x339050: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33904c) {
            ctx->pc = 0x339150u;
            goto label_339150;
        }
    }
    ctx->pc = 0x339054u;
    // 0x339054: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x339054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x339058: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x339058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33905c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x339060: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x339060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339064: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x339064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339068: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x339068u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33906c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x33906cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339070: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x339070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339074: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x339074u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x339078: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x339078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33907c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x33907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339080: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x339080u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x339084: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x339084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x339088: 0x0  nop
    ctx->pc = 0x339088u;
    // NOP
    // 0x33908c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x33908Cu;
    {
        const bool branch_taken_0x33908c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33908c) {
            ctx->pc = 0x33909Cu;
            goto label_33909c;
        }
    }
    ctx->pc = 0x339094u;
    // 0x339094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x339094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x339098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x339098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33909c:
    // 0x33909c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3390a0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3390a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3390a4: 0x0  nop
    ctx->pc = 0x3390a4u;
    // NOP
    // 0x3390a8: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x3390a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3390ac: 0x0  nop
    ctx->pc = 0x3390acu;
    // NOP
    // 0x3390b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3390B0u;
    {
        const bool branch_taken_0x3390b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3390B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390B0u;
        // 0x3390b4: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3390b0) {
            ctx->pc = 0x3390BCu;
            goto label_3390bc;
        }
    }
    ctx->pc = 0x3390B8u;
    // 0x3390b8: 0x46003146  mov.s       $f5, $f6
    ctx->pc = 0x3390b8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[6]);
label_3390bc:
    // 0x3390bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3390bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3390c0: 0x0  nop
    ctx->pc = 0x3390c0u;
    // NOP
    // 0x3390c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3390c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3390c8: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x3390c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3390cc: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x3390ccu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3390d0: 0x0  nop
    ctx->pc = 0x3390d0u;
    // NOP
    // 0x3390d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3390d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3390d8: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x3390d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3390dc: 0x448c1800  mtc1        $t4, $f3
    ctx->pc = 0x3390dcu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3390e0: 0x0  nop
    ctx->pc = 0x3390e0u;
    // NOP
    // 0x3390e4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3390e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3390e8: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x3390e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3390ec: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x3390ecu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3390f0: 0x0  nop
    ctx->pc = 0x3390f0u;
    // NOP
    // 0x3390f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3390f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3390f8: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x3390f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3390fc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3390fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x339100: 0xc7af0080  lwc1        $f15, 0x80($sp)
    ctx->pc = 0x339100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x339104: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x339104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x339108: 0xc7b00084  lwc1        $f16, 0x84($sp)
    ctx->pc = 0x339108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x33910c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x33910cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x339110: 0xc7b10088  lwc1        $f17, 0x88($sp)
    ctx->pc = 0x339110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x339114: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x339114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x339118: 0xc7b20090  lwc1        $f18, 0x90($sp)
    ctx->pc = 0x339118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x33911c: 0x46001164  .word       0x46001164                   # cvt.w.s     $f5, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33911cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x339120: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x339120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x339124: 0xc7b30094  lwc1        $f19, 0x94($sp)
    ctx->pc = 0x339124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x339128: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x339128u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x33912c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x33912cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x339130: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x339130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x339134: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x339134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x339138: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x339138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33913c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x33913cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x339140: 0xc0da66e  jal         func_3699B8
    ctx->pc = 0x339140u;
    SET_GPR_U32(ctx, 31, 0x339148u);
    ctx->pc = 0x339144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339140u;
    // 0x339144: 0xe7a40000  swc1        $f4, 0x0($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3699B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3699B8u, 0x339140u, 0x339148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339148u;
label_339148:
    // 0x339148: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x339148u;
    {
        const bool branch_taken_0x339148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339148u;
        // 0x33914c: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339148) {
            ctx->pc = 0x3391E0u;
            goto label_3391e0;
        }
    }
    ctx->pc = 0x339150u;
label_339150:
    // 0x339150: 0xc6060050  lwc1        $f6, 0x50($s0)
    ctx->pc = 0x339150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x339154: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x339154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339158: 0xc6050054  lwc1        $f5, 0x54($s0)
    ctx->pc = 0x339158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33915c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x33915cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339160: 0xc6040058  lwc1        $f4, 0x58($s0)
    ctx->pc = 0x339160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x339164: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x339164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339168: 0xc603005c  lwc1        $f3, 0x5C($s0)
    ctx->pc = 0x339168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33916c: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x33916cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339170: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x339170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339174: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x339174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339178: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x339178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33917c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x33917cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339180: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x339180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339184: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x339184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339188: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x339188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33918c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x33918cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339190: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x339190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x339194: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x339194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x339198: 0xc7af0080  lwc1        $f15, 0x80($sp)
    ctx->pc = 0x339198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x33919c: 0xc7b00084  lwc1        $f16, 0x84($sp)
    ctx->pc = 0x33919cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x3391a0: 0xc7b10088  lwc1        $f17, 0x88($sp)
    ctx->pc = 0x3391a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x3391a4: 0xc7b20090  lwc1        $f18, 0x90($sp)
    ctx->pc = 0x3391a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x3391a8: 0xc7b30094  lwc1        $f19, 0x94($sp)
    ctx->pc = 0x3391a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x3391ac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3391acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3391b0: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x3391b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3391b4: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x3391b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3391b8: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x3391b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3391bc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x3391bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3391c0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x3391c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3391c4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3391c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3391c8: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x3391c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x3391cc: 0xafac0040  sw          $t4, 0x40($sp)
    ctx->pc = 0x3391ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 12));
    // 0x3391d0: 0xafad0048  sw          $t5, 0x48($sp)
    ctx->pc = 0x3391d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 13));
    // 0x3391d4: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x3391D4u;
    SET_GPR_U32(ctx, 31, 0x3391DCu);
    ctx->pc = 0x3391D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3391D4u;
    // 0x3391d8: 0xafae0050  sw          $t6, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x3391D4u, 0x3391DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3391DCu;
label_3391dc:
    // 0x3391dc: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x3391dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3391e0:
    // 0x3391e0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x3391e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3391e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3391e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3391e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3391e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3391ec: 0x5440ff7e  bnel        $v0, $zero, . + 4 + (-0x82 << 2)
    ctx->pc = 0x3391ECu;
    {
        const bool branch_taken_0x3391ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3391ec) {
            ctx->pc = 0x3391F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3391ECu;
            // 0x3391f0: 0x92020076  lbu         $v0, 0x76($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 118)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338fe8;
        }
    }
    ctx->pc = 0x3391F4u;
label_3391f4:
    // 0x3391f4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3391f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3391f8:
    // 0x3391f8: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3391f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3391fc: 0x5440ff12  bnel        $v0, $zero, . + 4 + (-0xEE << 2)
    ctx->pc = 0x3391FCu;
    {
        const bool branch_taken_0x3391fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3391fc) {
            ctx->pc = 0x339200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3391FCu;
            // 0x339200: 0x38880  sll         $s1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338e48;
        }
    }
    ctx->pc = 0x339204u;
    // 0x339204: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x339204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x339208: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339208u;
    {
        const bool branch_taken_0x339208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339208u;
        // 0x33920c: 0x8fa200c4  lw          $v0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339208) {
            ctx->pc = 0x33922Cu;
            goto label_33922c;
        }
    }
    ctx->pc = 0x339210u;
    // 0x339210: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x339210u;
    SET_GPR_U32(ctx, 31, 0x339218u);
    ctx->pc = 0x339214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339210u;
    // 0x339214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x339210u, 0x339218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339218u;
label_339218:
    // 0x339218: 0xc0db20a  jal         func_36C828
    ctx->pc = 0x339218u;
    SET_GPR_U32(ctx, 31, 0x339220u);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x339218u, 0x339220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339220u;
label_339220:
    // 0x339220: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x339220u;
    SET_GPR_U32(ctx, 31, 0x339228u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x339220u, 0x339228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339228u;
label_339228:
    // 0x339228: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x339228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_33922c:
    // 0x33922c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x33922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x339230: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x339230u;
    {
        const bool branch_taken_0x339230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x339230) {
            ctx->pc = 0x339234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339230u;
            // 0x339234: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33925Cu;
            goto label_33925c;
        }
    }
    ctx->pc = 0x339238u;
    // 0x339238: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x339238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33923c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x33923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_339240:
    // 0x339240: 0x0  nop
    ctx->pc = 0x339240u;
    // NOP
    // 0x339244: 0x0  nop
    ctx->pc = 0x339244u;
    // NOP
    // 0x339248: 0x0  nop
    ctx->pc = 0x339248u;
    // NOP
    // 0x33924c: 0x0  nop
    ctx->pc = 0x33924cu;
    // NOP
    // 0x339250: 0x5482fffb  bnel        $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x339250u;
    {
        const bool branch_taken_0x339250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x339250) {
            ctx->pc = 0x339254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339250u;
            // 0x339254: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339240;
        }
    }
    ctx->pc = 0x339258u;
    // 0x339258: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x339258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_33925c:
    // 0x33925c: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x33925cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x339260: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x339260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x339264: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x339264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x339268: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x339268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33926c: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x33926cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x339270: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x339270u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x339274: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x339274u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x339278: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x339278u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x33927c: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x33927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x339280: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x339280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x339284: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x339284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x339288: 0x3e00008  jr          $ra
    ctx->pc = 0x339288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339288u;
        // 0x33928c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339290u;
}
