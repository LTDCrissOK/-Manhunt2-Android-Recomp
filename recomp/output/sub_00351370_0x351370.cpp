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

// Function: sub_00351370
// Address: 0x351370 - 0x3514f0
void sub_00351370_0x351370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351370_0x351370");
#endif

    switch (ctx->pc) {
        case 0x351400u: goto label_351400;
        case 0x35140cu: goto label_35140c;
        case 0x35142cu: goto label_35142c;
        case 0x351434u: goto label_351434;
        case 0x351468u: goto label_351468;
        case 0x351480u: goto label_351480;
        case 0x351498u: goto label_351498;
        default: break;
    }

    ctx->pc = 0x351370u;

    // 0x351370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x351370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x351374: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x351374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x351378: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x351378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x35137c: 0x2446be70  addiu       $a2, $v0, -0x4190
    ctx->pc = 0x35137cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950512));
    // 0x351380: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x351380u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x351384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x351384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351388: 0x8c43be70  lw          $v1, -0x4190($v0)
    ctx->pc = 0x351388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BBE70u));
    // 0x35138c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35138cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x351390: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x351390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x351394: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x351394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x351398: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x351398u;
    {
        const bool branch_taken_0x351398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351398u;
        // 0x35139c: 0xe7b50058  swc1        $f21, 0x58($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x351398) {
            ctx->pc = 0x3514D0u;
            goto label_3514d0;
        }
    }
    ctx->pc = 0x3513A0u;
    // 0x3513a0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3513a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3513a4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3513a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3513a8: 0x8c82bd48  lw          $v0, -0x42B8($a0)
    ctx->pc = 0x3513a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x3513ac: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x3513acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3513b0: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x3513b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3513b4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x3513b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x3513b8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3513b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3513bc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3513bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3513c0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3513c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3513c4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3513c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3513c8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3513c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3513cc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3513ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3513d0: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x3513d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x3513d4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3513d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3513d8: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x3513d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x3513dc: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3513dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3513e0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3513e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x3513e4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3513e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x3513e8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3513e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3513ec: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3513ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3513f0: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3513F0u;
    {
        const bool branch_taken_0x3513f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3513F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3513F0u;
        // 0x3513f4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3513f0) {
            ctx->pc = 0x3514D0u;
            goto label_3514d0;
        }
    }
    ctx->pc = 0x3513F8u;
    // 0x3513f8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3513f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3513fc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3513fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_351400:
    // 0x351400: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x351404: 0xc0d27c0  jal         func_349F00
    ctx->pc = 0x351404u;
    SET_GPR_U32(ctx, 31, 0x35140Cu);
    ctx->pc = 0x351408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351404u;
    // 0x351408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F00u, 0x351404u, 0x35140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35140Cu;
label_35140c:
    // 0x35140c: 0x14510023  bne         $v0, $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x35140Cu;
    {
        const bool branch_taken_0x35140c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x351410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35140Cu;
        // 0x351410: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35140c) {
            ctx->pc = 0x35149Cu;
            goto label_35149c;
        }
    }
    ctx->pc = 0x351414u;
    // 0x351414: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x351414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x351418: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x351418u;
    {
        const bool branch_taken_0x351418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351418u;
        // 0x35141c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351418) {
            ctx->pc = 0x35149Cu;
            goto label_35149c;
        }
    }
    ctx->pc = 0x351420u;
    // 0x351420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351424: 0xc0d1e7e  jal         func_3479F8
    ctx->pc = 0x351424u;
    SET_GPR_U32(ctx, 31, 0x35142Cu);
    ctx->pc = 0x351428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351424u;
    // 0x351428: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3479F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3479F8u, 0x351424u, 0x35142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35142Cu;
label_35142c:
    // 0x35142c: 0xc0d244a  jal         func_349128
    ctx->pc = 0x35142Cu;
    SET_GPR_U32(ctx, 31, 0x351434u);
    ctx->pc = 0x351430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35142Cu;
    // 0x351430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349128u, 0x35142Cu, 0x351434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351434u;
label_351434:
    // 0x351434: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x351434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351438: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x351438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35143c: 0x0  nop
    ctx->pc = 0x35143cu;
    // NOP
    // 0x351440: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x351440u;
    {
        const bool branch_taken_0x351440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x351444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351440u;
        // 0x351444: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351440) {
            ctx->pc = 0x351488u;
            goto label_351488;
        }
    }
    ctx->pc = 0x351448u;
    // 0x351448: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x351448u;
    {
        const bool branch_taken_0x351448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351448u;
        // 0x35144c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351448) {
            ctx->pc = 0x35146Cu;
            goto label_35146c;
        }
    }
    ctx->pc = 0x351450u;
    // 0x351450: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x351450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x351454: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x351454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351458: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x351458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x35145c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x351460: 0xc0fbc50  jal         func_3EF140
    ctx->pc = 0x351460u;
    SET_GPR_U32(ctx, 31, 0x351468u);
    ctx->pc = 0x351464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351460u;
    // 0x351464: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF140u, 0x351460u, 0x351468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351468u;
label_351468:
    // 0x351468: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x351468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_35146c:
    // 0x35146c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x35146Cu;
    {
        const bool branch_taken_0x35146c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x351470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35146Cu;
        // 0x351470: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35146c) {
            ctx->pc = 0x35149Cu;
            goto label_35149c;
        }
    }
    ctx->pc = 0x351474u;
    // 0x351474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351478: 0xc0d1e40  jal         func_347900
    ctx->pc = 0x351478u;
    SET_GPR_U32(ctx, 31, 0x351480u);
    ctx->pc = 0x35147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351478u;
    // 0x35147c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x351478u, 0x351480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351480u;
label_351480:
    // 0x351480: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x351480u;
    {
        const bool branch_taken_0x351480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351480u;
        // 0x351484: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351480) {
            ctx->pc = 0x35149Cu;
            goto label_35149c;
        }
    }
    ctx->pc = 0x351488u;
label_351488:
    // 0x351488: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x351488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35148c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35148cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x351490: 0xc0d27c2  jal         func_349F08
    ctx->pc = 0x351490u;
    SET_GPR_U32(ctx, 31, 0x351498u);
    ctx->pc = 0x351494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351490u;
    // 0x351494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F08u, 0x351490u, 0x351498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351498u;
label_351498:
    // 0x351498: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x351498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_35149c:
    // 0x35149c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35149Cu;
    {
        const bool branch_taken_0x35149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35149c) {
            ctx->pc = 0x3514A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35149Cu;
            // 0x3514a0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3514B0u;
            goto label_3514b0;
        }
    }
    ctx->pc = 0x3514A4u;
    // 0x3514a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3514a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3514a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3514A8u;
    {
        const bool branch_taken_0x3514a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514A8u;
        // 0x3514ac: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514a8) {
            ctx->pc = 0x3514C0u;
            goto label_3514c0;
        }
    }
    ctx->pc = 0x3514B0u;
label_3514b0:
    // 0x3514b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3514B0u;
    {
        const bool branch_taken_0x3514b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514B0u;
        // 0x3514b4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514b0) {
            ctx->pc = 0x3514C4u;
            goto label_3514c4;
        }
    }
    ctx->pc = 0x3514B8u;
    // 0x3514b8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3514b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3514bc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3514bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_3514c0:
    // 0x3514c0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3514c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3514c4:
    // 0x3514c4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x3514c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3514c8: 0x1462ffcd  bne         $v1, $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3514C8u;
    {
        const bool branch_taken_0x3514c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3514CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514C8u;
        // 0x3514cc: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514c8) {
            ctx->pc = 0x351400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351400;
        }
    }
    ctx->pc = 0x3514D0u;
label_3514d0:
    // 0x3514d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3514d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3514d4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3514d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3514d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3514d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3514dc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x3514dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3514e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3514e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3514e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3514E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3514E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514E4u;
        // 0x3514e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3514E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3514ECu;
    // 0x3514ec: 0x0  nop
    ctx->pc = 0x3514ecu;
    // NOP
    ctx->pc = 0x3514f0u;
}
