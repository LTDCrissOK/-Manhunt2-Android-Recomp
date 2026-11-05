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

// Function: sub_001C1888
// Address: 0x1c1888 - 0x1c1cb0
void sub_001C1888_0x1c1888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1888_0x1c1888");
#endif

    switch (ctx->pc) {
        case 0x1c18f0u: goto label_1c18f0;
        case 0x1c197cu: goto label_1c197c;
        case 0x1c1b3cu: goto label_1c1b3c;
        case 0x1c1c68u: goto label_1c1c68;
        case 0x1c1c78u: goto label_1c1c78;
        default: break;
    }

    ctx->pc = 0x1c1888u;

    // 0x1c1888: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c1888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c188c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1c188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1c1890: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1c1890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1c1894: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1898: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1c1898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1c189c: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1c189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c18a0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1c18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1c18a4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c18a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c18a8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1c18a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1c18ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c18acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18b0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1c18b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c18b4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1c18b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1c18b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c18bc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c18bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c18c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c18c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c18c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18c8: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x1c18c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c18cc: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1c18ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c18d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c18d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c18d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c18d8: 0x8e6504bc  lw          $a1, 0x4BC($s3)
    ctx->pc = 0x1c18d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1212)));
    // 0x1c18dc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1c18dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c18e0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c18e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c18e4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c18e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c18e8: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1C18E8u;
    SET_GPR_U32(ctx, 31, 0x1C18F0u);
    ctx->pc = 0x1C18ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18E8u;
    // 0x1c18ec: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1C18E8u, 0x1C18F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18F0u;
label_1c18f0:
    // 0x1c18f0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c18f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c18f4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c18f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c18f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c18f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c18fc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c18fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c1900: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1c1900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1908: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1c1908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1c190c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1c190cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1c1910: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c1910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c1914: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c1914u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c1918: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x1c1918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c191c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1920: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1c1920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1924: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x1c1924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1928: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1c1928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c192c: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1c192cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c1930: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c1930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1c1934: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c1934u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1c1938: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1C1938u;
    {
        const bool branch_taken_0x1c1938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1938u;
        // 0x1c193c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1938) {
            ctx->pc = 0x1C196Cu;
            goto label_1c196c;
        }
    }
    ctx->pc = 0x1C1940u;
    // 0x1c1940: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1c1940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1944: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c1944u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c1948: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1c1948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c194c: 0x0  nop
    ctx->pc = 0x1c194cu;
    // NOP
    // 0x1c1950: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1950u;
    {
        const bool branch_taken_0x1c1950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1950u;
        // 0x1c1954: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1950) {
            ctx->pc = 0x1C196Cu;
            goto label_1c196c;
        }
    }
    ctx->pc = 0x1C1958u;
    // 0x1c1958: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c1958u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c195c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1c195cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1960: 0x0  nop
    ctx->pc = 0x1c1960u;
    // NOP
    // 0x1c1964: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C1964u;
    {
        const bool branch_taken_0x1c1964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1964) {
            ctx->pc = 0x1C1968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1964u;
            // 0x1c1968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C196Cu;
            goto label_1c196c;
        }
    }
    ctx->pc = 0x1C196Cu;
label_1c196c:
    // 0x1c196c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C196Cu;
    {
        const bool branch_taken_0x1c196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C196Cu;
        // 0x1c1970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c196c) {
            ctx->pc = 0x1C1A28u;
            goto label_1c1a28;
        }
    }
    ctx->pc = 0x1C1974u;
    // 0x1c1974: 0xc06fb44  jal         func_1BED10
    ctx->pc = 0x1C1974u;
    SET_GPR_U32(ctx, 31, 0x1C197Cu);
    ctx->pc = 0x1C1978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1974u;
    // 0x1c1978: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED10u, 0x1C1974u, 0x1C197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C197Cu;
label_1c197c:
    // 0x1c197c: 0x266201e0  addiu       $v0, $s3, 0x1E0
    ctx->pc = 0x1c197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
    // 0x1c1980: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c1980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1984: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1c1984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c1988: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c1988u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c198c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c198cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c1990: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1c1990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1994: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1c1994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c1998: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c1998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c199c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1c199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c19a0: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x1c19a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c19a4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1c19a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c19a8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c19a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c19ac: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1c19acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c19b0: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x1c19b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1c19b4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c19b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c19b8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c19b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c19bc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1c19bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c19c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c19c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c19c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c19c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c19c8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c19c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c19cc: 0x46010044  c1          0x10044
    ctx->pc = 0x1c19ccu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c19d0: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1c19d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c19d4: 0x0  nop
    ctx->pc = 0x1c19d4u;
    // NOP
    // 0x1c19d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C19D8u;
    {
        const bool branch_taken_0x1c19d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19D8u;
        // 0x1c19dc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19d8) {
            ctx->pc = 0x1C19ECu;
            goto label_1c19ec;
        }
    }
    ctx->pc = 0x1C19E0u;
    // 0x1c19e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c19e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c19e4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C19E4u;
    {
        const bool branch_taken_0x1c19e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19E4u;
        // 0x1c19e8: 0x24420f90  addiu       $v0, $v0, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19e4) {
            ctx->pc = 0x1C1C84u;
            goto label_1c1c84;
        }
    }
    ctx->pc = 0x1C19ECu;
label_1c19ec:
    // 0x1c19ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c19ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c19f0: 0x0  nop
    ctx->pc = 0x1c19f0u;
    // NOP
    // 0x1c19f4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1c19f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c19f8: 0x0  nop
    ctx->pc = 0x1c19f8u;
    // NOP
    // 0x1c19fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C19FCu;
    {
        const bool branch_taken_0x1c19fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19FCu;
        // 0x1c1a00: 0x24420f90  addiu       $v0, $v0, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19fc) {
            ctx->pc = 0x1C1A14u;
            goto label_1c1a14;
        }
    }
    ctx->pc = 0x1C1A04u;
    // 0x1c1a04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1a0c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1C1A0Cu;
    {
        const bool branch_taken_0x1c1a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a0c) {
            ctx->pc = 0x1C1C84u;
            goto label_1c1c84;
        }
    }
    ctx->pc = 0x1C1A14u;
label_1c1a14:
    // 0x1c1a14: 0x0  nop
    ctx->pc = 0x1c1a14u;
    // NOP
    // 0x1c1a18: 0x0  nop
    ctx->pc = 0x1c1a18u;
    // NOP
    // 0x1c1a1c: 0x46140803  div.s       $f0, $f1, $f20
    ctx->pc = 0x1c1a1cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x1c1a20: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1C1A20u;
    {
        const bool branch_taken_0x1c1a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A20u;
        // 0x1c1a24: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a20) {
            ctx->pc = 0x1C1C80u;
            goto label_1c1c80;
        }
    }
    ctx->pc = 0x1C1A28u;
label_1c1a28:
    // 0x1c1a28: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c1a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1a2c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1c1a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1a30: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c1a30u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c1a34: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c1a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1a38: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c1a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1a3c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c1a3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c1a40: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c1a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1a44: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1c1a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1a48: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x1c1a48u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c1a4c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1c1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1a50: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c1a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1a54: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1c1a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1a58: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c1a58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c1a5c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1c1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1a60: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c1a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1a64: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c1a64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c1a68: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1c1a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1a6c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1c1a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1a70: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1c1a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c1a74: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c1a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1a78: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1c1a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1a7c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c1a7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c1a80: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1c1a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1a84: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c1a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1a88: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c1a88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c1a8c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1c1a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1a90: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1c1a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1a94: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x1c1a94u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c1a98: 0x46000140  add.s       $f5, $f0, $f0
    ctx->pc = 0x1c1a98u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1c1a9c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1c1a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1c1aa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1aa4: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x1c1aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1c1aa8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1c1aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1c1aac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c1aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c1ab0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c1ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c1ab4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1c1ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1c1ab8: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x1c1ab8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1c1abc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1c1abcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1c1ac0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c1ac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c1ac4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1c1ac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1c1ac8: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x1c1ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1acc: 0x0  nop
    ctx->pc = 0x1c1accu;
    // NOP
    // 0x1c1ad0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1AD0u;
    {
        const bool branch_taken_0x1c1ad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AD0u;
        // 0x1c1ad4: 0x46011081  sub.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ad0) {
            ctx->pc = 0x1C1ADCu;
            goto label_1c1adc;
        }
    }
    ctx->pc = 0x1C1AD8u;
    // 0x1c1ad8: 0x4600a106  mov.s       $f4, $f20
    ctx->pc = 0x1c1ad8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[20]);
label_1c1adc:
    // 0x1c1adc: 0x46142032  c.eq.s      $f4, $f20
    ctx->pc = 0x1c1adcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1ae0: 0x0  nop
    ctx->pc = 0x1c1ae0u;
    // NOP
    // 0x1c1ae4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1AE4u;
    {
        const bool branch_taken_0x1c1ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AE4u;
        // 0x1c1ae8: 0x4600a0c6  mov.s       $f3, $f20 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ae4) {
            ctx->pc = 0x1C1B00u;
            goto label_1c1b00;
        }
    }
    ctx->pc = 0x1C1AECu;
    // 0x1c1aec: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x1c1aecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x1c1af0: 0x0  nop
    ctx->pc = 0x1c1af0u;
    // NOP
    // 0x1c1af4: 0x46050503  div.s       $f20, $f0, $f5
    ctx->pc = 0x1c1af4u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x1c1af8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C1AF8u;
    {
        const bool branch_taken_0x1c1af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1af8) {
            ctx->pc = 0x1C1B2Cu;
            goto label_1c1b2c;
        }
    }
    ctx->pc = 0x1C1B00u;
label_1c1b00:
    // 0x1c1b00: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x1c1b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1b04: 0x0  nop
    ctx->pc = 0x1c1b04u;
    // NOP
    // 0x1c1b08: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1C1B08u;
    {
        const bool branch_taken_0x1c1b08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1b08) {
            ctx->pc = 0x1C1B3Cu;
            goto label_1c1b3c;
        }
    }
    ctx->pc = 0x1C1B10u;
    // 0x1c1b10: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x1c1b10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1b14: 0x0  nop
    ctx->pc = 0x1c1b14u;
    // NOP
    // 0x1c1b18: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1C1B18u;
    {
        const bool branch_taken_0x1c1b18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1b18) {
            ctx->pc = 0x1C1B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1B18u;
            // 0x1c1b1c: 0x46002807  neg.s       $f0, $f5 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1B4Cu;
            goto label_1c1b4c;
        }
    }
    ctx->pc = 0x1C1B20u;
    // 0x1c1b20: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x1c1b20u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x1c1b24: 0x46042000  add.s       $f0, $f4, $f4
    ctx->pc = 0x1c1b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x1c1b28: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1c1b28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1c1b2c:
    // 0x1c1b2c: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x1c1b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1b30: 0x0  nop
    ctx->pc = 0x1c1b30u;
    // NOP
    // 0x1c1b34: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x1C1B34u;
    {
        const bool branch_taken_0x1c1b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1b34) {
            ctx->pc = 0x1C1BF8u;
            goto label_1c1bf8;
        }
    }
    ctx->pc = 0x1C1B3Cu;
label_1c1b3c:
    // 0x1c1b3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1b40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c1b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c1b44: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C1B44u;
    {
        const bool branch_taken_0x1c1b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b44) {
            ctx->pc = 0x1C1BF8u;
            goto label_1c1bf8;
        }
    }
    ctx->pc = 0x1C1B4Cu;
label_1c1b4c:
    // 0x1c1b4c: 0x0  nop
    ctx->pc = 0x1c1b4cu;
    // NOP
    // 0x1c1b50: 0x0  nop
    ctx->pc = 0x1c1b50u;
    // NOP
    // 0x1c1b54: 0x46020084  c1          0x20084
    ctx->pc = 0x1c1b54u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c1b58: 0x460420c0  add.s       $f3, $f4, $f4
    ctx->pc = 0x1c1b58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x1c1b5c: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1c1b5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c1b60: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c1b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c1b64: 0x0  nop
    ctx->pc = 0x1c1b64u;
    // NOP
    // 0x1c1b68: 0x0  nop
    ctx->pc = 0x1c1b68u;
    // NOP
    // 0x1c1b6c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1c1b6cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1c1b70: 0x0  nop
    ctx->pc = 0x1c1b70u;
    // NOP
    // 0x1c1b74: 0x0  nop
    ctx->pc = 0x1c1b74u;
    // NOP
    // 0x1c1b78: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1c1b78u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1c1b7c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x1c1b7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1b80: 0x0  nop
    ctx->pc = 0x1c1b80u;
    // NOP
    // 0x1c1b84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1B84u;
    {
        const bool branch_taken_0x1c1b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1b84) {
            ctx->pc = 0x1C1B9Cu;
            goto label_1c1b9c;
        }
    }
    ctx->pc = 0x1C1B8Cu;
    // 0x1c1b8c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1c1b8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1b90: 0x0  nop
    ctx->pc = 0x1c1b90u;
    // NOP
    // 0x1c1b94: 0x4501ffe9  bc1t        . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C1B94u;
    {
        const bool branch_taken_0x1c1b94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1b94) {
            ctx->pc = 0x1C1B3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1b3c;
        }
    }
    ctx->pc = 0x1C1B9Cu;
label_1c1b9c:
    // 0x1c1b9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c1b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1ba0: 0x0  nop
    ctx->pc = 0x1c1ba0u;
    // NOP
    // 0x1c1ba4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1c1ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1ba8: 0x0  nop
    ctx->pc = 0x1c1ba8u;
    // NOP
    // 0x1c1bac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1BACu;
    {
        const bool branch_taken_0x1c1bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1bac) {
            ctx->pc = 0x1C1BC4u;
            goto label_1c1bc4;
        }
    }
    ctx->pc = 0x1C1BB4u;
    // 0x1c1bb4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1c1bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1bb8: 0x0  nop
    ctx->pc = 0x1c1bb8u;
    // NOP
    // 0x1c1bbc: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1C1BBCu;
    {
        const bool branch_taken_0x1c1bbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BBCu;
        // 0x1c1bc0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bbc) {
            ctx->pc = 0x1C1BF8u;
            goto label_1c1bf8;
        }
    }
    ctx->pc = 0x1C1BC4u;
label_1c1bc4:
    // 0x1c1bc4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1c1bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1bc8: 0x0  nop
    ctx->pc = 0x1c1bc8u;
    // NOP
    // 0x1c1bcc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1BCCu;
    {
        const bool branch_taken_0x1c1bcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1bcc) {
            ctx->pc = 0x1C1BE4u;
            goto label_1c1be4;
        }
    }
    ctx->pc = 0x1C1BD4u;
    // 0x1c1bd4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c1bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1bd8: 0x0  nop
    ctx->pc = 0x1c1bd8u;
    // NOP
    // 0x1c1bdc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1BDCu;
    {
        const bool branch_taken_0x1c1bdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BDCu;
        // 0x1c1be0: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bdc) {
            ctx->pc = 0x1C1BF8u;
            goto label_1c1bf8;
        }
    }
    ctx->pc = 0x1C1BE4u;
label_1c1be4:
    // 0x1c1be4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c1be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1be8: 0x0  nop
    ctx->pc = 0x1c1be8u;
    // NOP
    // 0x1c1bec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1BECu;
    {
        const bool branch_taken_0x1c1bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BECu;
        // 0x1c1bf0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bec) {
            ctx->pc = 0x1C1BF8u;
            goto label_1c1bf8;
        }
    }
    ctx->pc = 0x1C1BF4u;
    // 0x1c1bf4: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1c1bf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_1c1bf8:
    // 0x1c1bf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c1bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1bfc: 0x0  nop
    ctx->pc = 0x1c1bfcu;
    // NOP
    // 0x1c1c00: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1c1c00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1c04: 0x0  nop
    ctx->pc = 0x1c1c04u;
    // NOP
    // 0x1c1c08: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1C1C08u;
    {
        const bool branch_taken_0x1c1c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C08u;
        // 0x1c1c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c08) {
            ctx->pc = 0x1C1C70u;
            goto label_1c1c70;
        }
    }
    ctx->pc = 0x1C1C10u;
    // 0x1c1c10: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1c1c10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c1c14: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c1c14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1c18: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c1c18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c1c1c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c1c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c1c20: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c1c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c1c24: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c1c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c1c28: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c1c28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1c2c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c1c2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c1c30: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c1c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c1c34: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1c1c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1c38: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c1c3c: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x1c1c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c44: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1c1c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1c48: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c1c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1c4c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1c1c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1c50: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c1c50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c54: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1c1c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1c1c58: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1c1c58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c1c5c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1c1c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c1c60: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x1C1C60u;
    SET_GPR_U32(ctx, 31, 0x1C1C68u);
    ctx->pc = 0x1C1C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C60u;
    // 0x1c1c64: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1C1C60u, 0x1C1C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C68u;
label_1c1c68:
    // 0x1c1c68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1C68u;
    {
        const bool branch_taken_0x1c1c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C68u;
        // 0x1c1c6c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c68) {
            ctx->pc = 0x1C1C7Cu;
            goto label_1c1c7c;
        }
    }
    ctx->pc = 0x1C1C70u;
label_1c1c70:
    // 0x1c1c70: 0xc06fb44  jal         func_1BED10
    ctx->pc = 0x1C1C70u;
    SET_GPR_U32(ctx, 31, 0x1C1C78u);
    ctx->pc = 0x1C1C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C70u;
    // 0x1c1c74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED10u, 0x1C1C70u, 0x1C1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C78u;
label_1c1c78:
    // 0x1c1c78: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1c1c7c:
    // 0x1c1c7c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1c1c7cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1c1c80:
    // 0x1c1c80: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1c1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_1c1c84:
    // 0x1c1c84: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1c1c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1c1c88: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1c1c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1c8c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1c1c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1c90: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1c1c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1c94: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1c1c94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c1c98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c1c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1c9c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1c1c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c1ca0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1c1ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CA4u;
        // 0x1c1ca8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1CACu;
    // 0x1c1cac: 0x0  nop
    ctx->pc = 0x1c1cacu;
    // NOP
    ctx->pc = 0x1c1cb0u;
}
