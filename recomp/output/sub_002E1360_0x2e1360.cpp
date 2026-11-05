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

// Function: sub_002E1360
// Address: 0x2e1360 - 0x2e14c0
void sub_002E1360_0x2e1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1360_0x2e1360");
#endif

    switch (ctx->pc) {
        case 0x2e1398u: goto label_2e1398;
        case 0x2e13ccu: goto label_2e13cc;
        default: break;
    }

    ctx->pc = 0x2e1360u;

    // 0x2e1360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1368: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e1368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e136c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e136cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1370: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2e1370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e1374: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2e1374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2e1378: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E1378u;
    {
        const bool branch_taken_0x2e1378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1378u;
        // 0x2e137c: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1378) {
            ctx->pc = 0x2E1418u;
            goto label_2e1418;
        }
    }
    ctx->pc = 0x2E1380u;
    // 0x2e1380: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2e1380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1384: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2e1384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2e1388: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2e1388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2e138c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e138cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1390: 0xc0b849c  jal         func_2E1270
    ctx->pc = 0x2E1390u;
    SET_GPR_U32(ctx, 31, 0x2E1398u);
    ctx->pc = 0x2E1394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1390u;
    // 0x2e1394: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1270u, 0x2E1390u, 0x2E1398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1398u;
label_2e1398:
    // 0x2e1398: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e1398u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e139c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e13a0: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x2e13a0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2e13a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e13a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e13a8: 0x0  nop
    ctx->pc = 0x2e13a8u;
    // NOP
    // 0x2e13ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E13ACu;
    {
        const bool branch_taken_0x2e13ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13ACu;
        // 0x2e13b0: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13ac) {
            ctx->pc = 0x2E13C4u;
            goto label_2e13c4;
        }
    }
    ctx->pc = 0x2E13B4u;
    // 0x2e13b4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2e13b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2e13b8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2e13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2e13bc: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2e13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2e13c0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2e13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_2e13c4:
    // 0x2e13c4: 0xc0b849c  jal         func_2E1270
    ctx->pc = 0x2E13C4u;
    SET_GPR_U32(ctx, 31, 0x2E13CCu);
    ctx->pc = 0x2E13C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E13C4u;
    // 0x2e13c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1270u, 0x2E13C4u, 0x2E13CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13CCu;
label_2e13cc:
    // 0x2e13cc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2e13ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2e13d0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2e13d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2e13d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e13d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e13d8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2e13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2e13dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E13DCu;
    {
        const bool branch_taken_0x2e13dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13DCu;
        // 0x2e13e0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13dc) {
            ctx->pc = 0x2E13F0u;
            goto label_2e13f0;
        }
    }
    ctx->pc = 0x2E13E4u;
    // 0x2e13e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e13e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E13E8u;
    {
        const bool branch_taken_0x2e13e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13E8u;
        // 0x2e13ec: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13e8) {
            ctx->pc = 0x2E13FCu;
            goto label_2e13fc;
        }
    }
    ctx->pc = 0x2E13F0u;
label_2e13f0:
    // 0x2e13f0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e13f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2e13f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e13f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e13f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e13f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e13fc:
    // 0x2e13fc: 0x0  nop
    ctx->pc = 0x2e13fcu;
    // NOP
    // 0x2e1400: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e1400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e1404: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x2e1404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2e1408: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e1408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e140c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2e140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2e1410: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E1410u;
    {
        const bool branch_taken_0x2e1410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1410u;
        // 0x2e1414: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1410) {
            ctx->pc = 0x2E1480u;
            goto label_2e1480;
        }
    }
    ctx->pc = 0x2E1418u;
label_2e1418:
    // 0x2e1418: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2e1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e141c: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E141Cu;
    {
        const bool branch_taken_0x2e141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e141c) {
            ctx->pc = 0x2E1420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E141Cu;
            // 0x2e1420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E14ACu;
            goto label_2e14ac;
        }
    }
    ctx->pc = 0x2E1424u;
    // 0x2e1424: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x2e1424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1428: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x2e1428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e142c: 0xc4610078  lwc1        $f1, 0x78($v1)
    ctx->pc = 0x2e142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1430: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e1430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e1434: 0xc60300f4  lwc1        $f3, 0xF4($s0)
    ctx->pc = 0x2e1434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e1438: 0xc60200a4  lwc1        $f2, 0xA4($s0)
    ctx->pc = 0x2e1438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e143c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2e143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2e1440: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e1440u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e1444: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e1444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e1448: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1448u;
    {
        const bool branch_taken_0x2e1448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1448u;
        // 0x2e144c: 0x460118c1  sub.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1448) {
            ctx->pc = 0x2E145Cu;
            goto label_2e145c;
        }
    }
    ctx->pc = 0x2E1450u;
    // 0x2e1450: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e1450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e1454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1454u;
    {
        const bool branch_taken_0x2e1454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1454u;
        // 0x2e1458: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1454) {
            ctx->pc = 0x2E1468u;
            goto label_2e1468;
        }
    }
    ctx->pc = 0x2E145Cu;
label_2e145c:
    // 0x2e145c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e145cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2e1460: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e1460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e1464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1468:
    // 0x2e1468: 0x0  nop
    ctx->pc = 0x2e1468u;
    // NOP
    // 0x2e146c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2e146cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e1470: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x2e1470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2e1474: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e1474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1478: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2e1478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2e147c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2e147cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2e1480:
    // 0x2e1480: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e1480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e1484: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e1484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1488: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e1488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e148c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e148cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e1490: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e1490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e1494: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e1494u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e1498: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e1498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e149c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e149cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e14a0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e14a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e14a4: 0xfa0500a0  sqc2        $vf5, 0xA0($s0)
    ctx->pc = 0x2e14a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2e14a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e14a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e14ac:
    // 0x2e14ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e14acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e14b0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2e14b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e14b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E14B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14B4u;
        // 0x2e14b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E14B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E14BCu;
    // 0x2e14bc: 0x0  nop
    ctx->pc = 0x2e14bcu;
    // NOP
    ctx->pc = 0x2e14c0u;
}
