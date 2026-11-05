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

// Function: sub_00153848
// Address: 0x153848 - 0x153e30
void sub_00153848_0x153848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153848_0x153848");
#endif

    switch (ctx->pc) {
        case 0x1539fcu: goto label_1539fc;
        case 0x153a18u: goto label_153a18;
        case 0x153a24u: goto label_153a24;
        case 0x153a34u: goto label_153a34;
        case 0x153a64u: goto label_153a64;
        case 0x153a70u: goto label_153a70;
        case 0x153a80u: goto label_153a80;
        case 0x153be8u: goto label_153be8;
        case 0x153cc8u: goto label_153cc8;
        case 0x153cd0u: goto label_153cd0;
        case 0x153d64u: goto label_153d64;
        case 0x153d7cu: goto label_153d7c;
        case 0x153dd8u: goto label_153dd8;
        default: break;
    }

    ctx->pc = 0x153848u;

    // 0x153848: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x153848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x15384c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x15384cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153850: 0xffb101c8  sd          $s1, 0x1C8($sp)
    ctx->pc = 0x153850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 17));
    // 0x153854: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x153854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153858: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x153858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x15385c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15385cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153860: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x153860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x153864: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x153864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x153868: 0xffb301d8  sd          $s3, 0x1D8($sp)
    ctx->pc = 0x153868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 19));
    // 0x15386c: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x15386cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x153870: 0xffb501e8  sd          $s5, 0x1E8($sp)
    ctx->pc = 0x153870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 21));
    // 0x153874: 0xffb601f0  sd          $s6, 0x1F0($sp)
    ctx->pc = 0x153874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 22));
    // 0x153878: 0xffb701f8  sd          $s7, 0x1F8($sp)
    ctx->pc = 0x153878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 23));
    // 0x15387c: 0xffbe0200  sd          $fp, 0x200($sp)
    ctx->pc = 0x15387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 30));
    // 0x153880: 0xffbf0208  sd          $ra, 0x208($sp)
    ctx->pc = 0x153880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 31));
    // 0x153884: 0xe7b40210  swc1        $f20, 0x210($sp)
    ctx->pc = 0x153884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x153888: 0x8ce30104  lw          $v1, 0x104($a3)
    ctx->pc = 0x153888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    // 0x15388c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x153890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x153890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153894: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x153894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153898: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x153898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15389c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x15389cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1538a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1538a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1538a4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1538a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1538a8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1538a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1538ac: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1538acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1538b0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1538b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1538b4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1538b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1538b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1538b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1538bc: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1538bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1538c0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1538c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1538c4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1538c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1538c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1538c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1538cc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1538ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1538d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1538d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1538d4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1538d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1538d8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1538d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1538dc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1538dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1538e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1538e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1538e4: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1538e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1538e8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1538e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1538ec: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1538ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1538f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1538f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1538f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1538f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1538f8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1538f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1538fc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1538fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x153900: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x153900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153904: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x153904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x153908: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x153908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15390c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x15390cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153910: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x153910u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153914: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x153914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x153918: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x153918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15391c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15391cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x153920: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x153920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x153924: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x153924u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x153928: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x153928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15392c: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x15392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x153930: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x153930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153934: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x153934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153938: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x153938u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15393c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15393cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x153940: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x153940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x153944: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x153944u;
    {
        const bool branch_taken_0x153944 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x153948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153944u;
        // 0x153948: 0xe7a50038  swc1        $f5, 0x38($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153944) {
            ctx->pc = 0x15398Cu;
            goto label_15398c;
        }
    }
    ctx->pc = 0x15394Cu;
    // 0x15394c: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x15394cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x153950: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x153950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x153954: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x153954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x153958: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15395c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x15395cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x153960: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153964: 0x0  nop
    ctx->pc = 0x153964u;
    // NOP
    // 0x153968: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x153968u;
    {
        const bool branch_taken_0x153968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153968u;
        // 0x15396c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153968) {
            ctx->pc = 0x153984u;
            goto label_153984;
        }
    }
    ctx->pc = 0x153970u;
    // 0x153970: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x153970u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x153974: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153978: 0x0  nop
    ctx->pc = 0x153978u;
    // NOP
    // 0x15397c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15397Cu;
    {
        const bool branch_taken_0x15397c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15397c) {
            ctx->pc = 0x153980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15397Cu;
            // 0x153980: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153984u;
            goto label_153984;
        }
    }
    ctx->pc = 0x153984u;
label_153984:
    // 0x153984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153984u;
    {
        const bool branch_taken_0x153984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153984u;
        // 0x153988: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153984) {
            ctx->pc = 0x153994u;
            goto label_153994;
        }
    }
    ctx->pc = 0x15398Cu;
label_15398c:
    // 0x15398c: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x15398Cu;
    {
        const bool branch_taken_0x15398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15398Cu;
        // 0x153990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15398c) {
            ctx->pc = 0x153DFCu;
            goto label_153dfc;
        }
    }
    ctx->pc = 0x153994u;
label_153994:
    // 0x153994: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x153994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153998: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x153998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15399c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x15399cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1539a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1539a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1539a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1539a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1539a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1539a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1539ac: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1539acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1539b0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1539b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1539b4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1539b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1539b8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1539b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1539bc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1539bcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1539c0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1539c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1539c4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1539c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1539c8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1539c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1539cc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1539ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1539d0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1539d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1539d4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1539d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1539d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1539d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1539dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1539dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1539e0: 0x0  nop
    ctx->pc = 0x1539e0u;
    // NOP
    // 0x1539e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1539e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1539e8: 0x0  nop
    ctx->pc = 0x1539e8u;
    // NOP
    // 0x1539ec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1539ECu;
    {
        const bool branch_taken_0x1539ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1539F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539ECu;
        // 0x1539f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539ec) {
            ctx->pc = 0x153A0Cu;
            goto label_153a0c;
        }
    }
    ctx->pc = 0x1539F4u;
    // 0x1539f4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x1539F4u;
    {
        const bool branch_taken_0x1539f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1539F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539F4u;
        // 0x1539f8: 0xdfb001c0  ld          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539f4) {
            ctx->pc = 0x153E00u;
            goto label_153e00;
        }
    }
    ctx->pc = 0x1539FCu;
label_1539fc:
    // 0x1539fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1539fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x153a00: 0xac4091bc  sw          $zero, -0x6E44($v0)
    ctx->pc = 0x153a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F91BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91BCu, _value); } while (0);
    // 0x153a04: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x153A04u;
    {
        const bool branch_taken_0x153a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A04u;
        // 0x153a08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a04) {
            ctx->pc = 0x153DFCu;
            goto label_153dfc;
        }
    }
    ctx->pc = 0x153A0Cu;
label_153a0c:
    // 0x153a0c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x153a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a10: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x153A10u;
    SET_GPR_U32(ctx, 31, 0x153A18u);
    ctx->pc = 0x153A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A10u;
    // 0x153a14: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x153A10u, 0x153A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A18u;
label_153a18:
    // 0x153a18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a1c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x153A1Cu;
    SET_GPR_U32(ctx, 31, 0x153A24u);
    ctx->pc = 0x153A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A1Cu;
    // 0x153a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x153A1Cu, 0x153A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A24u;
label_153a24:
    // 0x153a24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153A24u;
    {
        const bool branch_taken_0x153a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153a24) {
            ctx->pc = 0x153A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153A24u;
            // 0x153a28: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x153A38u;
            goto label_153a38;
        }
    }
    ctx->pc = 0x153A2Cu;
    // 0x153a2c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x153A2Cu;
    SET_GPR_U32(ctx, 31, 0x153A34u);
    ctx->pc = 0x153A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A2Cu;
    // 0x153a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x153A2Cu, 0x153A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A34u;
label_153a34:
    // 0x153a34: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x153a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153a38:
    // 0x153a38: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x153a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x153a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a40: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x153a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x153a44: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x153a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x153a48: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x153a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153a4c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x153a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x153a50: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x153a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153a54: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x153a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x153a58: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x153a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153a5c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x153A5Cu;
    SET_GPR_U32(ctx, 31, 0x153A64u);
    ctx->pc = 0x153A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A5Cu;
    // 0x153a60: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x153A5Cu, 0x153A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A64u;
label_153a64:
    // 0x153a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a68: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x153A68u;
    SET_GPR_U32(ctx, 31, 0x153A70u);
    ctx->pc = 0x153A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A68u;
    // 0x153a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x153A68u, 0x153A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A70u;
label_153a70:
    // 0x153a70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153A70u;
    {
        const bool branch_taken_0x153a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153a70) {
            ctx->pc = 0x153A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153A70u;
            // 0x153a74: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x153A84u;
            goto label_153a84;
        }
    }
    ctx->pc = 0x153A78u;
    // 0x153a78: 0xc0c4900  jal         func_312400
    ctx->pc = 0x153A78u;
    SET_GPR_U32(ctx, 31, 0x153A80u);
    ctx->pc = 0x153A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A78u;
    // 0x153a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x153A78u, 0x153A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A80u;
label_153a80:
    // 0x153a80: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x153a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153a84:
    // 0x153a84: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x153a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x153a88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x153a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153a8c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x153a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x153a90: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x153a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x153a94: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x153a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153a98: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x153a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x153a9c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x153a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153aa0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x153aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x153aa4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x153aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153aa8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x153aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x153aac: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x153aacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153ab0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x153ab0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153ab4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x153ab4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153ab8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x153ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x153abc: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x153abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153ac0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x153ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x153ac4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x153ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153ac8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x153ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153acc: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x153accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153ad0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x153ad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x153ad4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x153ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x153ad8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x153ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x153adc: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x153adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x153ae0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x153ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153ae4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x153ae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x153ae8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x153ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x153aec: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x153aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x153af0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x153af0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x153af4: 0x4a0003bf  vwaitq
    ctx->pc = 0x153af4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x153af8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x153af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153afc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x153afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x153b00: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x153b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x153b04: 0x24525b40  addiu       $s2, $v0, 0x5B40
    ctx->pc = 0x153b04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x153b08: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x153b08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153b0c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x153b0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x153b10: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x153b10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x153b14: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x153b14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153b18: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x153b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x153b1c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x153b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153b20: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x153b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x153b24: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x153b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153b28: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x153b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x153b2c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x153b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153b30: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x153b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x153b34: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x153b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153b38: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x153b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x153b3c: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x153b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x153b40: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x153b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x153b44: 0xafa501b4  sw          $a1, 0x1B4($sp)
    ctx->pc = 0x153b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 5));
    // 0x153b48: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x153b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x153b4c: 0xafa601ac  sw          $a2, 0x1AC($sp)
    ctx->pc = 0x153b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 6));
    // 0x153b50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x153b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x153b54: 0xafa701a8  sw          $a3, 0x1A8($sp)
    ctx->pc = 0x153b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 7));
    // 0x153b58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153b5c: 0xafa801a4  sw          $t0, 0x1A4($sp)
    ctx->pc = 0x153b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 8));
    // 0x153b60: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x153b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
    // 0x153b64: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x153b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x153b68: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x153b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x153b6c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x153b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x153b70: 0x27b30140  addiu       $s3, $sp, 0x140
    ctx->pc = 0x153b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x153b74: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x153b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x153b78: 0x27b60110  addiu       $s6, $sp, 0x110
    ctx->pc = 0x153b78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x153b7c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x153b7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x153b80: 0x27b500e0  addiu       $s5, $sp, 0xE0
    ctx->pc = 0x153b80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x153b84: 0xc454ec30  lwc1        $f20, -0x13D0($v0)
    ctx->pc = 0x153b84u;
    { uint32_t bits = FAST_READ32(0x43EC30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153b88: 0x27b401a0  addiu       $s4, $sp, 0x1A0
    ctx->pc = 0x153b88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x153b8c: 0x24c8ec10  addiu       $t0, $a2, -0x13F0
    ctx->pc = 0x153b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962192));
    // 0x153b90: 0x69090007  ldl         $t1, 0x7($t0)
    ctx->pc = 0x153b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x153b94: 0x6d090000  ldr         $t1, 0x0($t0)
    ctx->pc = 0x153b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x153b98: 0x6902000f  ldl         $v0, 0xF($t0)
    ctx->pc = 0x153b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x153b9c: 0x6d020008  ldr         $v0, 0x8($t0)
    ctx->pc = 0x153b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x153ba0: 0xb3a90087  sdl         $t1, 0x87($sp)
    ctx->pc = 0x153ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153ba4: 0xb7a90080  sdr         $t1, 0x80($sp)
    ctx->pc = 0x153ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153ba8: 0xb3a2008f  sdl         $v0, 0x8F($sp)
    ctx->pc = 0x153ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153bac: 0xb7a20088  sdr         $v0, 0x88($sp)
    ctx->pc = 0x153bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153bb0: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x153bb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153bb4: 0xac6591bc  sw          $a1, -0x6E44($v1)
    ctx->pc = 0x153bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3F91BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91BCu, _value); } while (0);
    // 0x153bb8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x153bb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153bbc: 0x2485ec20  addiu       $a1, $a0, -0x13E0
    ctx->pc = 0x153bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962208));
    // 0x153bc0: 0x68a90007  ldl         $t1, 0x7($a1)
    ctx->pc = 0x153bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x153bc4: 0x6ca90000  ldr         $t1, 0x0($a1)
    ctx->pc = 0x153bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x153bc8: 0x68a2000f  ldl         $v0, 0xF($a1)
    ctx->pc = 0x153bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x153bcc: 0x6ca20008  ldr         $v0, 0x8($a1)
    ctx->pc = 0x153bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x153bd0: 0xb3a90097  sdl         $t1, 0x97($sp)
    ctx->pc = 0x153bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153bd4: 0xb7a90090  sdr         $t1, 0x90($sp)
    ctx->pc = 0x153bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153bd8: 0xb3a2009f  sdl         $v0, 0x9F($sp)
    ctx->pc = 0x153bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153bdc: 0xb7a20098  sdr         $v0, 0x98($sp)
    ctx->pc = 0x153bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153be0: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x153be4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x153be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_153be8:
    // 0x153be8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x153be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153bec: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x153becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153bf0: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x153bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153bf4: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x153bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153bf8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x153bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x153bfc: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x153bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x153c00: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x153c00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x153c04: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x153c04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x153c08: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x153c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x153c0c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x153c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x153c10: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x153c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x153c14: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x153c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x153c18: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x153c18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x153c1c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x153c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x153c20: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x153c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x153c24: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x153c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153c28: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x153c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153c2c: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x153c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153c30: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x153c30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x153c34: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x153c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153c38: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x153c38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x153c3c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x153c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x153c40: 0x8fa701b4  lw          $a3, 0x1B4($sp)
    ctx->pc = 0x153c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x153c44: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x153c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x153c48: 0xe7a500c0  swc1        $f5, 0xC0($sp)
    ctx->pc = 0x153c48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x153c4c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x153c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x153c50: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x153c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x153c54: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x153c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x153c58: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x153c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153c5c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x153c5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153c60: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x153c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153c64: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x153c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x153c68: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x153c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153c6c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x153c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153c70: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x153c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153c74: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x153c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153c78: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x153c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153c7c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x153c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x153c80: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x153c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x153c84: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x153c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x153c88: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x153c88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x153c8c: 0x8fa901ac  lw          $t1, 0x1AC($sp)
    ctx->pc = 0x153c8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x153c90: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x153c90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153c94: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x153c94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x153c98: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x153c98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153c9c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x153c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x153ca0: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x153ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153ca4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x153ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x153ca8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x153ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153cac: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x153cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153cb0: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x153cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153cb4: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x153cb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x153cb8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x153cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x153cbc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x153cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x153cc0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x153CC0u;
    SET_GPR_U32(ctx, 31, 0x153CC8u);
    ctx->pc = 0x153CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153CC0u;
    // 0x153cc4: 0xe7a200bc  swc1        $f2, 0xBC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x153CC0u, 0x153CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CC8u;
label_153cc8:
    // 0x153cc8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x153CC8u;
    SET_GPR_U32(ctx, 31, 0x153CD0u);
    ctx->pc = 0x153CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153CC8u;
    // 0x153ccc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x153CC8u, 0x153CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CD0u;
label_153cd0:
    // 0x153cd0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x153cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153cd4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x153cd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x153cd8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x153cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x153cdc: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x153cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x153ce0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x153ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x153ce4: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x153ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x153ce8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x153ce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153cec: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x153cecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153cf0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x153cf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153cf4: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x153cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x153cf8: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x153cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153cfc: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x153cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153d00: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x153d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x153d04: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x153d04u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x153d08: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x153d08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x153d0c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x153d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x153d10: 0x0  nop
    ctx->pc = 0x153d10u;
    // NOP
    // 0x153d14: 0x0  nop
    ctx->pc = 0x153d14u;
    // NOP
    // 0x153d18: 0x46010084  c1          0x10084
    ctx->pc = 0x153d18u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x153d1c: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x153d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x153d20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d24: 0x0  nop
    ctx->pc = 0x153d24u;
    // NOP
    // 0x153d28: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x153d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153d2c: 0x0  nop
    ctx->pc = 0x153d2cu;
    // NOP
    // 0x153d30: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x153D30u;
    {
        const bool branch_taken_0x153d30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D30u;
        // 0x153d34: 0xe7a20130  swc1        $f2, 0x130($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d30) {
            ctx->pc = 0x153D5Cu;
            goto label_153d5c;
        }
    }
    ctx->pc = 0x153D38u;
    // 0x153d38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x153d3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d40: 0x0  nop
    ctx->pc = 0x153d40u;
    // NOP
    // 0x153d44: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x153d44u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x153d48: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x153d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x153d4c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x153d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x153d50: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x153d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x153d54: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x153d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153d58: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x153d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_153d5c:
    // 0x153d5c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x153D5Cu;
    SET_GPR_U32(ctx, 31, 0x153D64u);
    ctx->pc = 0x153D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D5Cu;
    // 0x153d60: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x153D5Cu, 0x153D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D64u;
label_153d64:
    // 0x153d64: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x153d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153d68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x153d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d6c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x153d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d70: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x153d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d74: 0xc0779da  jal         func_1DE768
    ctx->pc = 0x153D74u;
    SET_GPR_U32(ctx, 31, 0x153D7Cu);
    ctx->pc = 0x153D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D74u;
    // 0x153d78: 0xe7a001a0  swc1        $f0, 0x1A0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE768u, 0x153D74u, 0x153D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D7Cu;
label_153d7c:
    // 0x153d7c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x153D7Cu;
    {
        const bool branch_taken_0x153d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153d7c) {
            ctx->pc = 0x153D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153D7Cu;
            // 0x153d80: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153DE0u;
            goto label_153de0;
        }
    }
    ctx->pc = 0x153D84u;
    // 0x153d84: 0x7fa00140  sq          $zero, 0x140($sp)
    ctx->pc = 0x153d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 0));
    // 0x153d88: 0x7fa00150  sq          $zero, 0x150($sp)
    ctx->pc = 0x153d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 0));
    // 0x153d8c: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x153d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x153d90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x153d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153d94: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x153d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x153d98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x153d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d9c: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x153d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x153da0: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x153da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x153da4: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x153da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x153da8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x153da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153dac: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x153dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x153db0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x153db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153db4: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x153db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x153db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x153db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153dbc: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x153dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x153dc0: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x153dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
    // 0x153dc4: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x153dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x153dc8: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x153dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x153dcc: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x153dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x153dd0: 0xc077dac  jal         func_1DF6B0
    ctx->pc = 0x153DD0u;
    SET_GPR_U32(ctx, 31, 0x153DD8u);
    ctx->pc = 0x153DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153DD0u;
    // 0x153dd4: 0xafa00188  sw          $zero, 0x188($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6B0u, 0x153DD0u, 0x153DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DD8u;
label_153dd8:
    // 0x153dd8: 0x1040ff08  beqz        $v0, . + 4 + (-0xF8 << 2)
    ctx->pc = 0x153DD8u;
    {
        const bool branch_taken_0x153dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DD8u;
        // 0x153ddc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dd8) {
            ctx->pc = 0x1539FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1539fc;
        }
    }
    ctx->pc = 0x153DE0u;
label_153de0:
    // 0x153de0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x153de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x153de4: 0x2ee20004  sltiu       $v0, $s7, 0x4
    ctx->pc = 0x153de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x153de8: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x153DE8u;
    {
        const bool branch_taken_0x153de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DE8u;
        // 0x153dec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153de8) {
            ctx->pc = 0x153BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153be8;
        }
    }
    ctx->pc = 0x153DF0u;
    // 0x153df0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x153df4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153df8: 0xacc091bc  sw          $zero, -0x6E44($a2)
    ctx->pc = 0x153df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F91BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91BCu, _value); } while (0);
label_153dfc:
    // 0x153dfc: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x153dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_153e00:
    // 0x153e00: 0xdfb101c8  ld          $s1, 0x1C8($sp)
    ctx->pc = 0x153e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x153e04: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x153e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x153e08: 0xdfb301d8  ld          $s3, 0x1D8($sp)
    ctx->pc = 0x153e08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x153e0c: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x153e0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x153e10: 0xdfb501e8  ld          $s5, 0x1E8($sp)
    ctx->pc = 0x153e10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x153e14: 0xdfb601f0  ld          $s6, 0x1F0($sp)
    ctx->pc = 0x153e14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x153e18: 0xdfb701f8  ld          $s7, 0x1F8($sp)
    ctx->pc = 0x153e18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x153e1c: 0xdfbe0200  ld          $fp, 0x200($sp)
    ctx->pc = 0x153e1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x153e20: 0xdfbf0208  ld          $ra, 0x208($sp)
    ctx->pc = 0x153e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x153e24: 0xc7b40210  lwc1        $f20, 0x210($sp)
    ctx->pc = 0x153e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153e28: 0x3e00008  jr          $ra
    ctx->pc = 0x153E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E28u;
        // 0x153e2c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153E30u;
}
