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

// Function: sub_001E7270
// Address: 0x1e7270 - 0x1e7420
void sub_001E7270_0x1e7270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7270_0x1e7270");
#endif

    switch (ctx->pc) {
        case 0x1e72ccu: goto label_1e72cc;
        case 0x1e72e0u: goto label_1e72e0;
        case 0x1e7300u: goto label_1e7300;
        case 0x1e7310u: goto label_1e7310;
        case 0x1e7328u: goto label_1e7328;
        default: break;
    }

    ctx->pc = 0x1e7270u;

    // 0x1e7270: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e7270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e7274: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e7274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e7278: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x1e7278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1e727c: 0xc440d958  lwc1        $f0, -0x26A8($v0)
    ctx->pc = 0x1e727cu;
    { uint32_t bits = FAST_READ32(0x45D958u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7280: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1e7280u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7284: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1e7284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1e7288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e7288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e728c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1e728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1e7290: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e7290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7294: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1e7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1e7298: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e7298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e729c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1e729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1e72a0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1e72a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72a4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x1e72a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1e72a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e72a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72ac: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1e72acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1e72b0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1e72b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72b4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1e72b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1e72b8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1e72b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1e72bc: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x1e72bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x1e72c0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1e72c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e72c4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E72C4u;
    SET_GPR_U32(ctx, 31, 0x1E72CCu);
    ctx->pc = 0x1E72C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72C4u;
    // 0x1e72c8: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E72C4u, 0x1E72CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72CCu;
label_1e72cc:
    // 0x1e72cc: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x1e72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1e72d0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E72D0u;
    {
        const bool branch_taken_0x1e72d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72D0u;
        // 0x1e72d4: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72d0) {
            ctx->pc = 0x1E73E8u;
            goto label_1e73e8;
        }
    }
    ctx->pc = 0x1E72D8u;
    // 0x1e72d8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e72dc: 0x0  nop
    ctx->pc = 0x1e72dcu;
    // NOP
label_1e72e0:
    // 0x1e72e0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1e72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e72e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e72e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72e8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1E72E8u;
    {
        const bool branch_taken_0x1e72e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72E8u;
        // 0x1e72ec: 0xafa30064  sw          $v1, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72e8) {
            ctx->pc = 0x1E73D0u;
            goto label_1e73d0;
        }
    }
    ctx->pc = 0x1E72F0u;
    // 0x1e72f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e72f4: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1e72f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e72f8: 0xc454d958  lwc1        $f20, -0x26A8($v0)
    ctx->pc = 0x1e72f8u;
    { uint32_t bits = FAST_READ32(0x45D958u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e72fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e72fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7300:
    // 0x1e7300: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e7300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7304: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e7304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7308: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E7308u;
    SET_GPR_U32(ctx, 31, 0x1E7310u);
    ctx->pc = 0x1E730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7308u;
    // 0x1e730c: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E7308u, 0x1E7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7310u;
label_1e7310:
    // 0x1e7310: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e7310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e7314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e7314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7318: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e7318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e731c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1e731cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e7320: 0xc078d06  jal         func_1E3418
    ctx->pc = 0x1E7320u;
    SET_GPR_U32(ctx, 31, 0x1E7328u);
    ctx->pc = 0x1E7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7320u;
    // 0x1e7324: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3418u, 0x1E7320u, 0x1E7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7328u;
label_1e7328:
    // 0x1e7328: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E7328u;
    {
        const bool branch_taken_0x1e7328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7328u;
        // 0x1e732c: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7328) {
            ctx->pc = 0x1E73BCu;
            goto label_1e73bc;
        }
    }
    ctx->pc = 0x1E7330u;
    // 0x1e7330: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1e7330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7334: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e7334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7338: 0x0  nop
    ctx->pc = 0x1e7338u;
    // NOP
    // 0x1e733c: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x1E733Cu;
    {
        const bool branch_taken_0x1e733c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e733c) {
            ctx->pc = 0x1E7340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E733Cu;
            // 0x1e7340: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E73C0u;
            goto label_1e73c0;
        }
    }
    ctx->pc = 0x1E7344u;
    // 0x1e7344: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1e7344u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7348: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e7348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e734c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e734cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7350: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1e7350u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e7354: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1e7354u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7358: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1e7358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1e735c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1e735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e7360: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1e7360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e7364: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e7364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7368: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1e736c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1e736cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e7370: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e7370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7374: 0x8fa8003c  lw          $t0, 0x3C($sp)
    ctx->pc = 0x1e7374u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1e7378: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x1e7378u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e737c: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x1e737cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1e7380: 0x8fab0050  lw          $t3, 0x50($sp)
    ctx->pc = 0x1e7380u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7384: 0x8fac0048  lw          $t4, 0x48($sp)
    ctx->pc = 0x1e7384u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e7388: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1e7388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1e738c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1e738cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1e7390: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1e7390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1e7394: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1e7394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x1e7398: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x1e7398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x1e739c: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x1e739cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x1e73a0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e73a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e73a4: 0xae08003c  sw          $t0, 0x3C($s0)
    ctx->pc = 0x1e73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 8));
    // 0x1e73a8: 0xae090040  sw          $t1, 0x40($s0)
    ctx->pc = 0x1e73a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 9));
    // 0x1e73ac: 0xae0a0044  sw          $t2, 0x44($s0)
    ctx->pc = 0x1e73acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 10));
    // 0x1e73b0: 0xae0b0050  sw          $t3, 0x50($s0)
    ctx->pc = 0x1e73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 11));
    // 0x1e73b4: 0xae0c0048  sw          $t4, 0x48($s0)
    ctx->pc = 0x1e73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 12));
    // 0x1e73b8: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x1e73b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1e73bc:
    // 0x1e73bc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e73c0:
    // 0x1e73c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e73c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e73c4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e73c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e73c8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1E73C8u;
    {
        const bool branch_taken_0x1e73c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73C8u;
        // 0x1e73cc: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73c8) {
            ctx->pc = 0x1E7300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7300;
        }
    }
    ctx->pc = 0x1E73D0u;
label_1e73d0:
    // 0x1e73d0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x1e73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1e73d4: 0x8fb40064  lw          $s4, 0x64($sp)
    ctx->pc = 0x1e73d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1e73d8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1e73d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e73dc: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1E73DCu;
    {
        const bool branch_taken_0x1e73dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e73dc) {
            ctx->pc = 0x1E73E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E73DCu;
            // 0x1e73e0: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E72E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e72e0;
        }
    }
    ctx->pc = 0x1E73E4u;
    // 0x1e73e4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1e73e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e73e8:
    // 0x1e73e8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1e73e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e73ec: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1e73ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e73f0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1e73f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e73f4: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1e73f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e73f8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1e73f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e73fc: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1e73fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e7400: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1e7400u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e7404: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x1e7404u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e7408: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1e7408u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e740c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1e740cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e7410: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1e7410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e7414: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7414u;
        // 0x1e7418: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E741Cu;
    // 0x1e741c: 0x0  nop
    ctx->pc = 0x1e741cu;
    // NOP
    ctx->pc = 0x1e7420u;
}
