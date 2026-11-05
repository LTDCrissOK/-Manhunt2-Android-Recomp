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

// Function: sub_001E70C0
// Address: 0x1e70c0 - 0x1e7270
void sub_001E70C0_0x1e70c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E70C0_0x1e70c0");
#endif

    switch (ctx->pc) {
        case 0x1e7118u: goto label_1e7118;
        case 0x1e7128u: goto label_1e7128;
        case 0x1e7150u: goto label_1e7150;
        case 0x1e715cu: goto label_1e715c;
        case 0x1e716cu: goto label_1e716c;
        case 0x1e7180u: goto label_1e7180;
        case 0x1e71c8u: goto label_1e71c8;
        case 0x1e71d8u: goto label_1e71d8;
        default: break;
    }

    ctx->pc = 0x1e70c0u;

    // 0x1e70c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e70c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e70c4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1e70c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1e70c8: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x1e70c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x1e70cc: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1e70ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1e70d0: 0xc600d954  lwc1        $f0, -0x26AC($s0)
    ctx->pc = 0x1e70d0u;
    { uint32_t bits = FAST_READ32(0x45D954u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e70d4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e70d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70d8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1e70d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1e70dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e70dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70e0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1e70e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1e70e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e70e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70e8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x1e70e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1e70ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e70ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70f0: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1e70f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1e70f4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1e70f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70f8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1e70f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1e70fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e70fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7100: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1e7100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1e7104: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x1e7104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1e7108: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x1e7108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x1e710c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1e710cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e7110: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E7110u;
    SET_GPR_U32(ctx, 31, 0x1E7118u);
    ctx->pc = 0x1E7114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7110u;
    // 0x1e7114: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E7110u, 0x1E7118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7118u;
label_1e7118:
    // 0x1e7118: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e7118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1e711c: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E711Cu;
    {
        const bool branch_taken_0x1e711c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e711c) {
            ctx->pc = 0x1E7120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E711Cu;
            // 0x1e7120: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7210u;
            goto label_1e7210;
        }
    }
    ctx->pc = 0x1E7124u;
    // 0x1e7124: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e7124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e7128:
    // 0x1e7128: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1e7128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e712c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e712cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7130: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E7130u;
    {
        const bool branch_taken_0x1e7130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7130u;
        // 0x1e7134: 0xafa30064  sw          $v1, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7130) {
            ctx->pc = 0x1E71F8u;
            goto label_1e71f8;
        }
    }
    ctx->pc = 0x1E7138u;
    // 0x1e7138: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e7138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e713c: 0x26570010  addiu       $s7, $s2, 0x10
    ctx->pc = 0x1e713cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1e7140: 0xc454d954  lwc1        $f20, -0x26AC($v0)
    ctx->pc = 0x1e7140u;
    { uint32_t bits = FAST_READ32(0x45D954u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e7144: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1e7144u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e7148: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1e7148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e714c: 0x0  nop
    ctx->pc = 0x1e714cu;
    // NOP
label_1e7150:
    // 0x1e7150: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e7150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7154: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E7154u;
    SET_GPR_U32(ctx, 31, 0x1E715Cu);
    ctx->pc = 0x1E7158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7154u;
    // 0x1e7158: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E7154u, 0x1E715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E715Cu;
label_1e715c:
    // 0x1e715c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e715cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7160: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7164: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E7164u;
    SET_GPR_U32(ctx, 31, 0x1E716Cu);
    ctx->pc = 0x1E7168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7164u;
    // 0x1e7168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E7164u, 0x1E716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E716Cu;
label_1e716c:
    // 0x1e716c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7170: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7174: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e7174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7178: 0xc0788c0  jal         func_1E2300
    ctx->pc = 0x1E7178u;
    SET_GPR_U32(ctx, 31, 0x1E7180u);
    ctx->pc = 0x1E717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7178u;
    // 0x1e717c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2300u, 0x1E7178u, 0x1E7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7180u;
label_1e7180:
    // 0x1e7180: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E7180u;
    {
        const bool branch_taken_0x1e7180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7180) {
            ctx->pc = 0x1E7184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7180u;
            // 0x1e7184: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E71E8u;
            goto label_1e71e8;
        }
    }
    ctx->pc = 0x1E7188u;
    // 0x1e7188: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e7188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e718c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e718cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7190: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e7190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7194: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e7194u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7198: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1e7198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e719c: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1e719cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e71a0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e71a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e71a4: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1e71a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e71a8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1e71a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e71ac: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1e71acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e71b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e71b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e71b4: 0x0  nop
    ctx->pc = 0x1e71b4u;
    // NOP
    // 0x1e71b8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1E71B8u;
    {
        const bool branch_taken_0x1e71b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71B8u;
        // 0x1e71bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71b8) {
            ctx->pc = 0x1E71E4u;
            goto label_1e71e4;
        }
    }
    ctx->pc = 0x1E71C0u;
    // 0x1e71c0: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E71C0u;
    SET_GPR_U32(ctx, 31, 0x1E71C8u);
    ctx->pc = 0x1E71C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71C0u;
    // 0x1e71c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E71C0u, 0x1E71C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E71C8u;
label_1e71c8:
    // 0x1e71c8: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1e71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1e71cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e71ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71d0: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E71D0u;
    SET_GPR_U32(ctx, 31, 0x1E71D8u);
    ctx->pc = 0x1E71D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71D0u;
    // 0x1e71d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E71D0u, 0x1E71D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E71D8u;
label_1e71d8:
    // 0x1e71d8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1e71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e71dc: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1e71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1e71e0: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1e71e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_1e71e4:
    // 0x1e71e4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e71e8:
    // 0x1e71e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e71e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e71ec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e71ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e71f0: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1E71F0u;
    {
        const bool branch_taken_0x1e71f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e71f0) {
            ctx->pc = 0x1E71F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E71F0u;
            // 0x1e71f4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7150;
        }
    }
    ctx->pc = 0x1E71F8u;
label_1e71f8:
    // 0x1e71f8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1e71fc: 0x8fb30064  lw          $s3, 0x64($sp)
    ctx->pc = 0x1e71fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1e7200: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e7200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7204: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1E7204u;
    {
        const bool branch_taken_0x1e7204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7204) {
            ctx->pc = 0x1E7208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7204u;
            // 0x1e7208: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7128;
        }
    }
    ctx->pc = 0x1E720Cu;
    // 0x1e720c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1e720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1e7210:
    // 0x1e7210: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E7210u;
    {
        const bool branch_taken_0x1e7210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7210u;
        // 0x1e7214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7210) {
            ctx->pc = 0x1E723Cu;
            goto label_1e723c;
        }
    }
    ctx->pc = 0x1E7218u;
    // 0x1e7218: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e7218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e721c: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e721cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7220: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e7224: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e7224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7228: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1e7228u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e722c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7234: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1e7234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1e7238: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x1e7238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_1e723c:
    // 0x1e723c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1e723cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7240: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1e7240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e7244: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1e7244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7248: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1e7248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e724c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1e724cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7250: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1e7250u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e7254: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1e7254u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e7258: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x1e7258u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e725c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1e725cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e7260: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1e7260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e7264: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1e7264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e7268: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7268u;
        // 0x1e726c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7270u;
}
