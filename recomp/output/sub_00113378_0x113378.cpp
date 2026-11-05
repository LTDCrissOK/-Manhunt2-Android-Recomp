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

// Function: sub_00113378
// Address: 0x113378 - 0x113528
void sub_00113378_0x113378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113378_0x113378");
#endif

    switch (ctx->pc) {
        case 0x113434u: goto label_113434;
        default: break;
    }

    ctx->pc = 0x113378u;

    // 0x113378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11337c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x11337cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x113380: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x113380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x113384: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113388: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x113388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11338c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11338cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113390: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x113390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x113394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113398: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x113398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11339c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1133a0: 0xc6000140  lwc1        $f0, 0x140($s0)
    ctx->pc = 0x1133a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1133a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1133a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1133a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1133a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1133ac: 0x0  nop
    ctx->pc = 0x1133acu;
    // NOP
    // 0x1133b0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1133B0u;
    {
        const bool branch_taken_0x1133b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1133B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133B0u;
        // 0x1133b4: 0x26020140  addiu       $v0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133b0) {
            ctx->pc = 0x1133E8u;
            goto label_1133e8;
        }
    }
    ctx->pc = 0x1133B8u;
    // 0x1133b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1133b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1133bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1133bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1133c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1133c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1133c4: 0x0  nop
    ctx->pc = 0x1133c4u;
    // NOP
    // 0x1133c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1133C8u;
    {
        const bool branch_taken_0x1133c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1133c8) {
            ctx->pc = 0x1133E8u;
            goto label_1133e8;
        }
    }
    ctx->pc = 0x1133D0u;
    // 0x1133d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1133d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1133d4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1133d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1133d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1133d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1133dc: 0x0  nop
    ctx->pc = 0x1133dcu;
    // NOP
    // 0x1133e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1133E0u;
    {
        const bool branch_taken_0x1133e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1133e0) {
            ctx->pc = 0x1133E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1133E0u;
            // 0x1133e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1133E8u;
            goto label_1133e8;
        }
    }
    ctx->pc = 0x1133E8u;
label_1133e8:
    // 0x1133e8: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1133E8u;
    {
        const bool branch_taken_0x1133e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1133ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133E8u;
        // 0x1133ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133e8) {
            ctx->pc = 0x11350Cu;
            goto label_11350c;
        }
    }
    ctx->pc = 0x1133F0u;
    // 0x1133f0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1133f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1133f4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1133f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1133f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1133f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133fc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1133fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x113400: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113408: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x113408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x11340c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11340Cu;
    {
        const bool branch_taken_0x11340c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11340c) {
            ctx->pc = 0x113410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11340Cu;
            // 0x113410: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11341Cu;
            goto label_11341c;
        }
    }
    ctx->pc = 0x113414u;
    // 0x113414: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113414u;
    {
        const bool branch_taken_0x113414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113414u;
        // 0x113418: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113414) {
            ctx->pc = 0x113424u;
            goto label_113424;
        }
    }
    ctx->pc = 0x11341Cu;
label_11341c:
    // 0x11341c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113420: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x113420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_113424:
    // 0x113424: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x113424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113428: 0x26050140  addiu       $a1, $s0, 0x140
    ctx->pc = 0x113428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x11342c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x11342Cu;
    SET_GPR_U32(ctx, 31, 0x113434u);
    ctx->pc = 0x113430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11342Cu;
    // 0x113430: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x11342Cu, 0x113434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113434u;
label_113434:
    // 0x113434: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x113434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x113438: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x113438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11343c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x11343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x113440: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x113440u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x113444: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x113444u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x113448: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x113448u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x11344c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x11344cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x113450: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x113450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x113454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113458: 0x0  nop
    ctx->pc = 0x113458u;
    // NOP
    // 0x11345c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11345cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113460: 0x0  nop
    ctx->pc = 0x113460u;
    // NOP
    // 0x113464: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x113464u;
    {
        const bool branch_taken_0x113464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x113464) {
            ctx->pc = 0x113468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113464u;
            // 0x113468: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113480u;
            goto label_113480;
        }
    }
    ctx->pc = 0x11346Cu;
    // 0x11346c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x11346cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113470: 0xfa010140  sqc2        $vf1, 0x140($s0)
    ctx->pc = 0x113470u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x113474: 0xa2000150  sb          $zero, 0x150($s0)
    ctx->pc = 0x113474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x113478: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x113478u;
    {
        const bool branch_taken_0x113478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113478u;
        // 0x11347c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113478) {
            ctx->pc = 0x11350Cu;
            goto label_11350c;
        }
    }
    ctx->pc = 0x113480u;
label_113480:
    // 0x113480: 0x26439a08  addiu       $v1, $s2, -0x65F8
    ctx->pc = 0x113480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
    // 0x113484: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11348c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x11348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x113490: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x113490u;
    {
        const bool branch_taken_0x113490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113490) {
            ctx->pc = 0x113494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113490u;
            // 0x113494: 0x92020150  lbu         $v0, 0x150($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1134E0u;
            goto label_1134e0;
        }
    }
    ctx->pc = 0x113498u;
    // 0x113498: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x113498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x11349c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11349cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1134a0: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1134a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1134a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1134A4u;
    {
        const bool branch_taken_0x1134a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1134A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134A4u;
        // 0x1134a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134a4) {
            ctx->pc = 0x1134C4u;
            goto label_1134c4;
        }
    }
    ctx->pc = 0x1134ACu;
    // 0x1134ac: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1134acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1134b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1134B0u;
    {
        const bool branch_taken_0x1134b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134b0) {
            ctx->pc = 0x1134B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1134B0u;
            // 0x1134b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1134C8u;
            goto label_1134c8;
        }
    }
    ctx->pc = 0x1134B8u;
    // 0x1134b8: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1134b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1134bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1134BCu;
    {
        const bool branch_taken_0x1134bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1134bc) {
            ctx->pc = 0x1134C8u;
            goto label_1134c8;
        }
    }
    ctx->pc = 0x1134C4u;
label_1134c4:
    // 0x1134c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1134c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1134c8:
    // 0x1134c8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1134C8u;
    {
        const bool branch_taken_0x1134c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1134c8) {
            ctx->pc = 0x1134CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1134C8u;
            // 0x1134cc: 0x92020150  lbu         $v0, 0x150($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1134E0u;
            goto label_1134e0;
        }
    }
    ctx->pc = 0x1134D0u;
    // 0x1134d0: 0x92020150  lbu         $v0, 0x150($s0)
    ctx->pc = 0x1134d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1134d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1134d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1134d8: 0xa2020150  sb          $v0, 0x150($s0)
    ctx->pc = 0x1134d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 336), (uint8_t)GPR_U32(ctx, 2));
    // 0x1134dc: 0x92020150  lbu         $v0, 0x150($s0)
    ctx->pc = 0x1134dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 336)));
label_1134e0:
    // 0x1134e0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1134e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1134e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1134e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1134e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1134e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1134ec: 0x0  nop
    ctx->pc = 0x1134ecu;
    // NOP
    // 0x1134f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1134f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1134f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1134f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1134f8: 0x0  nop
    ctx->pc = 0x1134f8u;
    // NOP
    // 0x1134fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1134FCu;
    {
        const bool branch_taken_0x1134fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x113500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134FCu;
        // 0x113500: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134fc) {
            ctx->pc = 0x113508u;
            goto label_113508;
        }
    }
    ctx->pc = 0x113504u;
    // 0x113504: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x113504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113508:
    // 0x113508: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x113508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11350c:
    // 0x11350c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11350cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113510: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x113510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113514: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x113514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113518: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x113518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11351c: 0x3e00008  jr          $ra
    ctx->pc = 0x11351Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11351Cu;
        // 0x113520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11351Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113524u;
    // 0x113524: 0x0  nop
    ctx->pc = 0x113524u;
    // NOP
    ctx->pc = 0x113528u;
}
