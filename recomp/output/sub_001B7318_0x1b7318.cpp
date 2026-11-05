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

// Function: sub_001B7318
// Address: 0x1b7318 - 0x1b7458
void sub_001B7318_0x1b7318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7318_0x1b7318");
#endif

    switch (ctx->pc) {
        case 0x1b7340u: goto label_1b7340;
        case 0x1b7350u: goto label_1b7350;
        case 0x1b7358u: goto label_1b7358;
        case 0x1b7400u: goto label_1b7400;
        default: break;
    }

    ctx->pc = 0x1b7318u;

    // 0x1b7318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b731c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7320: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b7320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b7324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b732c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7330: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b7330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b7334: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1b7334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b7338: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B7338u;
    SET_GPR_U32(ctx, 31, 0x1B7340u);
    ctx->pc = 0x1B733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7338u;
    // 0x1b733c: 0x8c910ff8  lw          $s1, 0xFF8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B7338u, 0x1B7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7340u;
label_1b7340:
    // 0x1b7340: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7340u;
    {
        const bool branch_taken_0x1b7340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7340) {
            ctx->pc = 0x1B7344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7340u;
            // 0x1b7344: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7370u;
            goto label_1b7370;
        }
    }
    ctx->pc = 0x1B7348u;
    // 0x1b7348: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B7348u;
    SET_GPR_U32(ctx, 31, 0x1B7350u);
    ctx->pc = 0x1B734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7348u;
    // 0x1b734c: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B7348u, 0x1B7350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7350u;
label_1b7350:
    // 0x1b7350: 0xc0d8f5a  jal         func_363D68
    ctx->pc = 0x1B7350u;
    SET_GPR_U32(ctx, 31, 0x1B7358u);
    ctx->pc = 0x1B7354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7350u;
    // 0x1b7354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D68u, 0x1B7350u, 0x1B7358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7358u;
label_1b7358:
    // 0x1b7358: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1b7358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1b735c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b735cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b7360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7364: 0x0  nop
    ctx->pc = 0x1b7364u;
    // NOP
    // 0x1b7368: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x1b7368u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b736c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1b736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b7370:
    // 0x1b7370: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x1b7370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1b7374: 0x8c6204b0  lw          $v0, 0x4B0($v1)
    ctx->pc = 0x1b7374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x1b7378: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1b7378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1b737c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B737Cu;
    {
        const bool branch_taken_0x1b737c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B737Cu;
        // 0x1b7380: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b737c) {
            ctx->pc = 0x1B73A8u;
            goto label_1b73a8;
        }
    }
    ctx->pc = 0x1B7384u;
    // 0x1b7384: 0x92220111  lbu         $v0, 0x111($s1)
    ctx->pc = 0x1b7384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 273)));
    // 0x1b7388: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x1b7388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x1b738c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B738Cu;
    {
        const bool branch_taken_0x1b738c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b738c) {
            ctx->pc = 0x1B7390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B738Cu;
            // 0x1b7390: 0x8ca31060  lw          $v1, 0x1060($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B73ACu;
            goto label_1b73ac;
        }
    }
    ctx->pc = 0x1B7394u;
    // 0x1b7394: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x1b7394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7398: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b7398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b739c: 0x0  nop
    ctx->pc = 0x1b739cu;
    // NOP
    // 0x1b73a0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1B73A0u;
    {
        const bool branch_taken_0x1b73a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b73a0) {
            ctx->pc = 0x1B73F8u;
            goto label_1b73f8;
        }
    }
    ctx->pc = 0x1B73A8u;
label_1b73a8:
    // 0x1b73a8: 0x8ca31060  lw          $v1, 0x1060($a1)
    ctx->pc = 0x1b73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4192)));
label_1b73ac:
    // 0x1b73ac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b73acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b73b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B73B0u;
    {
        const bool branch_taken_0x1b73b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73B0u;
        // 0x1b73b4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73b0) {
            ctx->pc = 0x1B73C0u;
            goto label_1b73c0;
        }
    }
    ctx->pc = 0x1B73B8u;
    // 0x1b73b8: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B73B8u;
    {
        const bool branch_taken_0x1b73b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b73b8) {
            ctx->pc = 0x1B73BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B73B8u;
            // 0x1b73bc: 0xc60000c0  lwc1        $f0, 0xC0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B73ECu;
            goto label_1b73ec;
        }
    }
    ctx->pc = 0x1B73C0u;
label_1b73c0:
    // 0x1b73c0: 0x8ca20fe4  lw          $v0, 0xFE4($a1)
    ctx->pc = 0x1b73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4068)));
    // 0x1b73c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b73c8: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x1b73c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1b73cc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B73CCu;
    {
        const bool branch_taken_0x1b73cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b73cc) {
            ctx->pc = 0x1B73D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B73CCu;
            // 0x1b73d0: 0xc60000c0  lwc1        $f0, 0xC0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B73ECu;
            goto label_1b73ec;
        }
    }
    ctx->pc = 0x1B73D4u;
    // 0x1b73d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b73d8: 0x2442fff2  addiu       $v0, $v0, -0xE
    ctx->pc = 0x1b73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967282));
    // 0x1b73dc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b73dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b73e0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B73E0u;
    {
        const bool branch_taken_0x1b73e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73E0u;
        // 0x1b73e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73e0) {
            ctx->pc = 0x1B7440u;
            goto label_1b7440;
        }
    }
    ctx->pc = 0x1B73E8u;
    // 0x1b73e8: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x1b73e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b73ec:
    // 0x1b73ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b73ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b73f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B73F0u;
    {
        const bool branch_taken_0x1b73f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73F0u;
        // 0x1b73f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73f0) {
            ctx->pc = 0x1B742Cu;
            goto label_1b742c;
        }
    }
    ctx->pc = 0x1B73F8u;
label_1b73f8:
    // 0x1b73f8: 0xc072fae  jal         func_1CBEB8
    ctx->pc = 0x1B73F8u;
    SET_GPR_U32(ctx, 31, 0x1B7400u);
    ctx->pc = 0x1B73FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73F8u;
    // 0x1b73fc: 0x8c840ff8  lw          $a0, 0xFF8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBEB8u, 0x1B73F8u, 0x1B7400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7400u;
label_1b7400:
    // 0x1b7400: 0xc601014c  lwc1        $f1, 0x14C($s0)
    ctx->pc = 0x1b7400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7408: 0x0  nop
    ctx->pc = 0x1b7408u;
    // NOP
    // 0x1b740c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1B740Cu;
    {
        const bool branch_taken_0x1b740c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B740Cu;
        // 0x1b7410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b740c) {
            ctx->pc = 0x1B7440u;
            goto label_1b7440;
        }
    }
    ctx->pc = 0x1B7414u;
    // 0x1b7414: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b7414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b7418: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b741c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b741cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7420: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x1b7420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7424: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b7424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b7428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b742c:
    // 0x1b742c: 0x0  nop
    ctx->pc = 0x1b742cu;
    // NOP
    // 0x1b7430: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7430u;
    {
        const bool branch_taken_0x1b7430 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7430u;
        // 0x1b7434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7430) {
            ctx->pc = 0x1B7444u;
            goto label_1b7444;
        }
    }
    ctx->pc = 0x1B7438u;
    // 0x1b7438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7438u;
    {
        const bool branch_taken_0x1b7438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7438u;
        // 0x1b743c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7438) {
            ctx->pc = 0x1B7444u;
            goto label_1b7444;
        }
    }
    ctx->pc = 0x1B7440u;
label_1b7440:
    // 0x1b7440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7444:
    // 0x1b7444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b744c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b7450: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7450u;
        // 0x1b7454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7458u;
}
