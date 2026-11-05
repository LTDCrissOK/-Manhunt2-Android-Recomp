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

// Function: sub_001BB358
// Address: 0x1bb358 - 0x1bb510
void sub_001BB358_0x1bb358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB358_0x1bb358");
#endif

    switch (ctx->pc) {
        case 0x1bb458u: goto label_1bb458;
        case 0x1bb504u: goto label_1bb504;
        default: break;
    }

    ctx->pc = 0x1bb358u;

    // 0x1bb358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb35c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bb35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb364: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x1bb364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb368: 0x8ca200a8  lw          $v0, 0xA8($a1)
    ctx->pc = 0x1bb368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x1bb36c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB36Cu;
    {
        const bool branch_taken_0x1bb36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB36Cu;
        // 0x1bb370: 0x46000085  abs.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ABS_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb36c) {
            ctx->pc = 0x1BB39Cu;
            goto label_1bb39c;
        }
    }
    ctx->pc = 0x1BB374u;
    // 0x1bb374: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1bb374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1bb378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb37c: 0x0  nop
    ctx->pc = 0x1bb37cu;
    // NOP
    // 0x1bb380: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1bb380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb384: 0x0  nop
    ctx->pc = 0x1bb384u;
    // NOP
    // 0x1bb388: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x1BB388u;
    {
        const bool branch_taken_0x1bb388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb388) {
            ctx->pc = 0x1BB450u;
            goto label_1bb450;
        }
    }
    ctx->pc = 0x1BB390u;
    // 0x1bb390: 0xaca000ac  sw          $zero, 0xAC($a1)
    ctx->pc = 0x1bb390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 0));
    // 0x1bb394: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1BB394u;
    {
        const bool branch_taken_0x1bb394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB394u;
        // 0x1bb398: 0xaca000a8  sw          $zero, 0xA8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb394) {
            ctx->pc = 0x1BB504u;
            goto label_1bb504;
        }
    }
    ctx->pc = 0x1BB39Cu;
label_1bb39c:
    // 0x1bb39c: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x1bb39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb3a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb3a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1bb3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb3a8: 0x0  nop
    ctx->pc = 0x1bb3a8u;
    // NOP
    // 0x1bb3ac: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x1bb3acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb3b0: 0x0  nop
    ctx->pc = 0x1bb3b0u;
    // NOP
    // 0x1bb3b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB3B4u;
    {
        const bool branch_taken_0x1bb3b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3B4u;
        // 0x1bb3b8: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3b4) {
            ctx->pc = 0x1BB3C0u;
            goto label_1bb3c0;
        }
    }
    ctx->pc = 0x1BB3BCu;
    // 0x1bb3bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb3bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb3c0:
    // 0x1bb3c0: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BB3C0u;
    {
        const bool branch_taken_0x1bb3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb3c0) {
            ctx->pc = 0x1BB3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB3C0u;
            // 0x1bb3c4: 0x8ca40070  lw          $a0, 0x70($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB460u;
            goto label_1bb460;
        }
    }
    ctx->pc = 0x1BB3C8u;
    // 0x1bb3c8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1bb3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1bb3cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb3d0: 0x0  nop
    ctx->pc = 0x1bb3d0u;
    // NOP
    // 0x1bb3d4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1bb3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb3d8: 0x0  nop
    ctx->pc = 0x1bb3d8u;
    // NOP
    // 0x1bb3dc: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x1BB3DCu;
    {
        const bool branch_taken_0x1bb3dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb3dc) {
            ctx->pc = 0x1BB3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB3DCu;
            // 0x1bb3e0: 0x8ca40070  lw          $a0, 0x70($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB460u;
            goto label_1bb460;
        }
    }
    ctx->pc = 0x1BB3E4u;
    // 0x1bb3e4: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x1bb3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb3e8: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x1bb3e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb3ec: 0x0  nop
    ctx->pc = 0x1bb3ecu;
    // NOP
    // 0x1bb3f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB3F0u;
    {
        const bool branch_taken_0x1bb3f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3F0u;
        // 0x1bb3f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3f0) {
            ctx->pc = 0x1BB3FCu;
            goto label_1bb3fc;
        }
    }
    ctx->pc = 0x1BB3F8u;
    // 0x1bb3f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb3fc:
    // 0x1bb3fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1BB3FCu;
    {
        const bool branch_taken_0x1bb3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb3fc) {
            ctx->pc = 0x1BB400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB3FCu;
            // 0x1bb400: 0xc4a10034  lwc1        $f1, 0x34($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB430u;
            goto label_1bb430;
        }
    }
    ctx->pc = 0x1BB404u;
    // 0x1bb404: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bb404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bb408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb40c: 0x0  nop
    ctx->pc = 0x1bb40cu;
    // NOP
    // 0x1bb410: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb410u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb414: 0x0  nop
    ctx->pc = 0x1bb414u;
    // NOP
    // 0x1bb418: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB418u;
    {
        const bool branch_taken_0x1bb418 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB418u;
        // 0x1bb41c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb418) {
            ctx->pc = 0x1BB424u;
            goto label_1bb424;
        }
    }
    ctx->pc = 0x1BB420u;
    // 0x1bb420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb424:
    // 0x1bb424: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB424u;
    {
        const bool branch_taken_0x1bb424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb424) {
            ctx->pc = 0x1BB428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB424u;
            // 0x1bb428: 0x8ca40070  lw          $a0, 0x70($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB460u;
            goto label_1bb460;
        }
    }
    ctx->pc = 0x1BB42Cu;
    // 0x1bb42c: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x1bb42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bb430:
    // 0x1bb430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bb434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb438: 0x0  nop
    ctx->pc = 0x1bb438u;
    // NOP
    // 0x1bb43c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb43cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb440: 0x0  nop
    ctx->pc = 0x1bb440u;
    // NOP
    // 0x1bb444: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB444u;
    {
        const bool branch_taken_0x1bb444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB444u;
        // 0x1bb448: 0xaca200a8  sw          $v0, 0xA8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb444) {
            ctx->pc = 0x1BB450u;
            goto label_1bb450;
        }
    }
    ctx->pc = 0x1BB44Cu;
    // 0x1bb44c: 0xaca200ac  sw          $v0, 0xAC($a1)
    ctx->pc = 0x1bb44cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 2));
label_1bb450:
    // 0x1bb450: 0xc06edee  jal         func_1BB7B8
    ctx->pc = 0x1BB450u;
    SET_GPR_U32(ctx, 31, 0x1BB458u);
    ctx->pc = 0x1BB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB450u;
    // 0x1bb454: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB7B8u, 0x1BB450u, 0x1BB458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB458u;
label_1bb458:
    // 0x1bb458: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1BB458u;
    {
        const bool branch_taken_0x1bb458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB458u;
        // 0x1bb45c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb458) {
            ctx->pc = 0x1BB508u;
            goto label_1bb508;
        }
    }
    ctx->pc = 0x1BB460u;
label_1bb460:
    // 0x1bb460: 0x8c820ff0  lw          $v0, 0xFF0($a0)
    ctx->pc = 0x1bb460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4080)));
    // 0x1bb464: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x1bb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1bb468: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1bb468u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1bb46c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BB46Cu;
    {
        const bool branch_taken_0x1bb46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb46c) {
            ctx->pc = 0x1BB4B8u;
            goto label_1bb4b8;
        }
    }
    ctx->pc = 0x1BB474u;
    // 0x1bb474: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bb474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bb478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb47c: 0x0  nop
    ctx->pc = 0x1bb47cu;
    // NOP
    // 0x1bb480: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x1bb480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb484: 0x0  nop
    ctx->pc = 0x1bb484u;
    // NOP
    // 0x1bb488: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB488u;
    {
        const bool branch_taken_0x1bb488 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB488u;
        // 0x1bb48c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb488) {
            ctx->pc = 0x1BB494u;
            goto label_1bb494;
        }
    }
    ctx->pc = 0x1BB490u;
    // 0x1bb490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb494:
    // 0x1bb494: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB494u;
    {
        const bool branch_taken_0x1bb494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB494u;
        // 0x1bb498: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb494) {
            ctx->pc = 0x1BB4B8u;
            goto label_1bb4b8;
        }
    }
    ctx->pc = 0x1BB49Cu;
    // 0x1bb49c: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x1bb49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
    // 0x1bb4a0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB4A0u;
    {
        const bool branch_taken_0x1bb4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb4a0) {
            ctx->pc = 0x1BB4B8u;
            goto label_1bb4b8;
        }
    }
    ctx->pc = 0x1BB4A8u;
    // 0x1bb4a8: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x1bb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x1bb4ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1bb4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1bb4b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BB4B0u;
    {
        const bool branch_taken_0x1bb4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4B0u;
        // 0x1bb4b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4b0) {
            ctx->pc = 0x1BB508u;
            goto label_1bb508;
        }
    }
    ctx->pc = 0x1BB4B8u;
label_1bb4b8:
    // 0x1bb4b8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1bb4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1bb4bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb4c0: 0x0  nop
    ctx->pc = 0x1bb4c0u;
    // NOP
    // 0x1bb4c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1bb4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb4c8: 0x0  nop
    ctx->pc = 0x1bb4c8u;
    // NOP
    // 0x1bb4cc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1BB4CCu;
    {
        const bool branch_taken_0x1bb4cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4CCu;
        // 0x1bb4d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4cc) {
            ctx->pc = 0x1BB508u;
            goto label_1bb508;
        }
    }
    ctx->pc = 0x1BB4D4u;
    // 0x1bb4d4: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x1bb4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb4d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bb4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb4dc: 0x0  nop
    ctx->pc = 0x1bb4dcu;
    // NOP
    // 0x1bb4e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb4e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb4e4: 0x0  nop
    ctx->pc = 0x1bb4e4u;
    // NOP
    // 0x1bb4e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB4E8u;
    {
        const bool branch_taken_0x1bb4e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4E8u;
        // 0x1bb4ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4e8) {
            ctx->pc = 0x1BB4F4u;
            goto label_1bb4f4;
        }
    }
    ctx->pc = 0x1BB4F0u;
    // 0x1bb4f0: 0xaca200ac  sw          $v0, 0xAC($a1)
    ctx->pc = 0x1bb4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 2));
label_1bb4f4:
    // 0x1bb4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb4f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bb4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4fc: 0xc06edee  jal         func_1BB7B8
    ctx->pc = 0x1BB4FCu;
    SET_GPR_U32(ctx, 31, 0x1BB504u);
    ctx->pc = 0x1BB500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4FCu;
    // 0x1bb500: 0xaca200a8  sw          $v0, 0xA8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB7B8u, 0x1BB4FCu, 0x1BB504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB504u;
label_1bb504:
    // 0x1bb504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb508:
    // 0x1bb508: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB508u;
        // 0x1bb50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB510u;
}
