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

// Function: sub_001F0420
// Address: 0x1f0420 - 0x1f0680
void sub_001F0420_0x1f0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0420_0x1f0420");
#endif

    switch (ctx->pc) {
        case 0x1f04f0u: goto label_1f04f0;
        case 0x1f0594u: goto label_1f0594;
        case 0x1f05c0u: goto label_1f05c0;
        default: break;
    }

    ctx->pc = 0x1f0420u;

    // 0x1f0420: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f0424: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0428: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f0428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f042c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0430: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f0430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0438: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1f0438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1f043c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f0440: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f0440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f0444: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f0444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f0448: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f0448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f044c: 0xe7bb0078  swc1        $f27, 0x78($sp)
    ctx->pc = 0x1f044cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f0450: 0xe7ba0070  swc1        $f26, 0x70($sp)
    ctx->pc = 0x1f0450u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f0454: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x1f0454u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f0458: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x1f0458u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f045c: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x1f045cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f0460: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1f0460u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f0464: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1f0464u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f0468: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1f0468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f046c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f046cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0470: 0xc4601528  lwc1        $f0, 0x1528($v1)
    ctx->pc = 0x1f0470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0474: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f0474u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0478: 0x0  nop
    ctx->pc = 0x1f0478u;
    // NOP
    // 0x1f047c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F047Cu;
    {
        const bool branch_taken_0x1f047c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F047Cu;
        // 0x1f0480: 0x34029488  ori         $v0, $zero, 0x9488 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f047c) {
            ctx->pc = 0x1F0490u;
            goto label_1f0490;
        }
    }
    ctx->pc = 0x1F0484u;
    // 0x1f0484: 0xe4611530  swc1        $f1, 0x1530($v1)
    ctx->pc = 0x1f0484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5424), bits); }
    // 0x1f0488: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1F0488u;
    {
        const bool branch_taken_0x1f0488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0488u;
        // 0x1f048c: 0xe461152c  swc1        $f1, 0x152C($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5420), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0488) {
            ctx->pc = 0x1F063Cu;
            goto label_1f063c;
        }
    }
    ctx->pc = 0x1F0490u;
label_1f0490:
    // 0x1f0490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0498: 0x3c013bb6  lui         $at, 0x3BB6
    ctx->pc = 0x1f0498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15286 << 16));
    // 0x1f049c: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1f049cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x1f04a0: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1f04a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1f04a4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1f04a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f04a8: 0xe460152c  swc1        $f0, 0x152C($v1)
    ctx->pc = 0x1f04a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5420), bits); }
    // 0x1f04ac: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x1f04acu;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x1f04b0: 0xe4601530  swc1        $f0, 0x1530($v1)
    ctx->pc = 0x1f04b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5424), bits); }
    // 0x1f04b4: 0x46000e46  mov.s       $f25, $f1
    ctx->pc = 0x1f04b4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[1]);
    // 0x1f04b8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1f04b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1f04bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f04bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f04c0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1f04c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1f04c4: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x1f04c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1f04c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1f04c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1f04cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f04ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f04d0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f04d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f04d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f04d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f04d8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1f04d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1f04dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f04dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f04e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f04e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f04e4: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x1f04e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f04e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f04e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f04ec: 0x0  nop
    ctx->pc = 0x1f04ecu;
    // NOP
label_1f04f0:
    // 0x1f04f0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1f04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1f04f4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1f04f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1f04f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f04f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f04fc: 0xc44113e8  lwc1        $f1, 0x13E8($v0)
    ctx->pc = 0x1f04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0500: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f0500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0504: 0x0  nop
    ctx->pc = 0x1f0504u;
    // NOP
    // 0x1f0508: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0508u;
    {
        const bool branch_taken_0x1f0508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0508) {
            ctx->pc = 0x1F050Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0508u;
            // 0x1f050c: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0524u;
            goto label_1f0524;
        }
    }
    ctx->pc = 0x1F0510u;
    // 0x1f0510: 0x46190832  c.eq.s      $f1, $f25
    ctx->pc = 0x1f0510u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0514: 0x0  nop
    ctx->pc = 0x1f0514u;
    // NOP
    // 0x1f0518: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0518u;
    {
        const bool branch_taken_0x1f0518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0518u;
        // 0x1f051c: 0x2951821  addu        $v1, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0518) {
            ctx->pc = 0x1F0534u;
            goto label_1f0534;
        }
    }
    ctx->pc = 0x1F0520u;
    // 0x1f0520: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0524:
    // 0x1f0524: 0x46190032  c.eq.s      $f0, $f25
    ctx->pc = 0x1f0524u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0528: 0x0  nop
    ctx->pc = 0x1f0528u;
    // NOP
    // 0x1f052c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F052Cu;
    {
        const bool branch_taken_0x1f052c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F052Cu;
        // 0x1f0530: 0x2951821  addu        $v1, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f052c) {
            ctx->pc = 0x1F0564u;
            goto label_1f0564;
        }
    }
    ctx->pc = 0x1F0534u;
label_1f0534:
    // 0x1f0534: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f0534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0538: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1f0538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f053c: 0xc44013e8  lwc1        $f0, 0x13E8($v0)
    ctx->pc = 0x1f053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0540: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f0540u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0544: 0x0  nop
    ctx->pc = 0x1f0544u;
    // NOP
    // 0x1f0548: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
    ctx->pc = 0x1F0548u;
    {
        const bool branch_taken_0x1f0548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0548) {
            ctx->pc = 0x1F054Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0548u;
            // 0x1f054c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F05F8u;
            goto label_1f05f8;
        }
    }
    ctx->pc = 0x1F0550u;
    // 0x1f0550: 0xc44014d8  lwc1        $f0, 0x14D8($v0)
    ctx->pc = 0x1f0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0554: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f0554u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0558: 0x0  nop
    ctx->pc = 0x1f0558u;
    // NOP
    // 0x1f055c: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x1F055Cu;
    {
        const bool branch_taken_0x1f055c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f055c) {
            ctx->pc = 0x1F0560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F055Cu;
            // 0x1f0560: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F05F8u;
            goto label_1f05f8;
        }
    }
    ctx->pc = 0x1F0564u;
label_1f0564:
    // 0x1f0564: 0x4493a800  mtc1        $s3, $f21
    ctx->pc = 0x1f0564u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f0568: 0x0  nop
    ctx->pc = 0x1f0568u;
    // NOP
    // 0x1f056c: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1f056cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1f0570: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x1f0570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x1f0574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0578: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1f0578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1f057c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f057cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0580: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f0580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f0584: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f0584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f0588: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1f0588u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1f058c: 0xc0e40f4  jal         func_3903D0
    ctx->pc = 0x1F058Cu;
    SET_GPR_U32(ctx, 31, 0x1F0594u);
    ctx->pc = 0x1F0590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F058Cu;
    // 0x1f0590: 0x460cab00  add.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903D0u, 0x1F058Cu, 0x1F0594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0594u;
label_1f0594:
    // 0x1f0594: 0x461b0502  mul.s       $f20, $f0, $f27
    ctx->pc = 0x1f0594u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x1f0598: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x1f0598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x1f059c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f059cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f05a0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f05a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f05a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f05a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f05a8: 0x460cab00  add.s       $f12, $f21, $f12
    ctx->pc = 0x1f05a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    // 0x1f05ac: 0x461aa501  sub.s       $f20, $f20, $f26
    ctx->pc = 0x1f05acu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
    // 0x1f05b0: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x1f05b0u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x1f05b4: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x1f05b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x1f05b8: 0xc0e40f4  jal         func_3903D0
    ctx->pc = 0x1F05B8u;
    SET_GPR_U32(ctx, 31, 0x1F05C0u);
    ctx->pc = 0x1F05BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05B8u;
    // 0x1f05bc: 0x4617a500  add.s       $f20, $f20, $f23 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903D0u, 0x1F05B8u, 0x1F05C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05C0u;
label_1f05c0:
    // 0x1f05c0: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x1f05c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x1f05c4: 0xc601152c  lwc1        $f1, 0x152C($s0)
    ctx->pc = 0x1f05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f05c8: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1f05c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1f05cc: 0xc6021530  lwc1        $f2, 0x1530($s0)
    ctx->pc = 0x1f05ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f05d0: 0x461a0001  sub.s       $f0, $f0, $f26
    ctx->pc = 0x1f05d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x1f05d4: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1f05d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1f05d8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1f05d8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1f05dc: 0xe601152c  swc1        $f1, 0x152C($s0)
    ctx->pc = 0x1f05dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5420), bits); }
    // 0x1f05e0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1f05e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1f05e4: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x1f05e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x1f05e8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1f05e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1f05ec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1f05ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f05f0: 0xe6021530  swc1        $f2, 0x1530($s0)
    ctx->pc = 0x1f05f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5424), bits); }
    // 0x1f05f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f05f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f05f8:
    // 0x1f05f8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f05f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f05fc: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x1f05fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f0600: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1F0600u;
    {
        const bool branch_taken_0x1f0600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0600u;
        // 0x1f0604: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0600) {
            ctx->pc = 0x1F04F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f04f0;
        }
    }
    ctx->pc = 0x1F0608u;
    // 0x1f0608: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f060c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f060cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0610: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1f0610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1f0614: 0xc480152c  lwc1        $f0, 0x152C($a0)
    ctx->pc = 0x1f0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0618: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f0618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f061c: 0x0  nop
    ctx->pc = 0x1f061cu;
    // NOP
    // 0x1f0620: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0620u;
    {
        const bool branch_taken_0x1f0620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0620) {
            ctx->pc = 0x1F0624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0620u;
            // 0x1f0624: 0xe481152c  swc1        $f1, 0x152C($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5420), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0628u;
            goto label_1f0628;
        }
    }
    ctx->pc = 0x1F0628u;
label_1f0628:
    // 0x1f0628: 0xc4801530  lwc1        $f0, 0x1530($a0)
    ctx->pc = 0x1f0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f062c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f062cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0630: 0x0  nop
    ctx->pc = 0x1f0630u;
    // NOP
    // 0x1f0634: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0634u;
    {
        const bool branch_taken_0x1f0634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0634) {
            ctx->pc = 0x1F0638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0634u;
            // 0x1f0638: 0xe4811530  swc1        $f1, 0x1530($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5424), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F063Cu;
            goto label_1f063c;
        }
    }
    ctx->pc = 0x1F063Cu;
label_1f063c:
    // 0x1f063c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f063cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f0644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0648: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f0648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f064c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f064cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0650: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f0650u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0654: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f0654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0658: 0xc7bb0078  lwc1        $f27, 0x78($sp)
    ctx->pc = 0x1f0658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1f065c: 0xc7ba0070  lwc1        $f26, 0x70($sp)
    ctx->pc = 0x1f065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f0660: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x1f0660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f0664: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x1f0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f0668: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x1f0668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f066c: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1f066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f0670: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1f0670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0674: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1f0674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0678: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0678u;
        // 0x1f067c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0680u;
}
