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

// Function: sub_001BD1A0
// Address: 0x1bd1a0 - 0x1bd3b8
void sub_001BD1A0_0x1bd1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD1A0_0x1bd1a0");
#endif

    switch (ctx->pc) {
        case 0x1bd200u: goto label_1bd200;
        case 0x1bd2ecu: goto label_1bd2ec;
        case 0x1bd340u: goto label_1bd340;
        case 0x1bd348u: goto label_1bd348;
        case 0x1bd358u: goto label_1bd358;
        case 0x1bd364u: goto label_1bd364;
        case 0x1bd374u: goto label_1bd374;
        default: break;
    }

    ctx->pc = 0x1bd1a0u;

    // 0x1bd1a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bd1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bd1a4: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1bd1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1bd1a8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1bd1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1bd1ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bd1acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1b0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1bd1b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1bd1b4: 0x26700260  addiu       $s0, $s3, 0x260
    ctx->pc = 0x1bd1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 608));
    // 0x1bd1b8: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1bd1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1bd1bc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1bd1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1bd1c0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1bd1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1bd1c4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1bd1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1bd1c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1bd1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bd1cc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1bd1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd1d0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1bd1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd1d4: 0x0  nop
    ctx->pc = 0x1bd1d4u;
    // NOP
    // 0x1bd1d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD1D8u;
    {
        const bool branch_taken_0x1bd1d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1D8u;
        // 0x1bd1dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1d8) {
            ctx->pc = 0x1BD1E4u;
            goto label_1bd1e4;
        }
    }
    ctx->pc = 0x1BD1E0u;
    // 0x1bd1e0: 0x26620270  addiu       $v0, $s3, 0x270
    ctx->pc = 0x1bd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 624));
label_1bd1e4:
    // 0x1bd1e4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1BD1E4u;
    {
        const bool branch_taken_0x1bd1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1E4u;
        // 0x1bd1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1e4) {
            ctx->pc = 0x1BD390u;
            goto label_1bd390;
        }
    }
    ctx->pc = 0x1BD1ECu;
    // 0x1bd1ec: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1bd1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1bd1f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bd1f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bd1f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd1f8: 0xc06fcb6  jal         func_1BF2D8
    ctx->pc = 0x1BD1F8u;
    SET_GPR_U32(ctx, 31, 0x1BD200u);
    ctx->pc = 0x1BD1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1F8u;
    // 0x1bd1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF2D8u, 0x1BD1F8u, 0x1BD200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD200u;
label_1bd200:
    // 0x1bd200: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1BD200u;
    {
        const bool branch_taken_0x1bd200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD200u;
        // 0x1bd204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd200) {
            ctx->pc = 0x1BD38Cu;
            goto label_1bd38c;
        }
    }
    ctx->pc = 0x1BD208u;
    // 0x1bd208: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1bd208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd20c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1bd20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd210: 0x0  nop
    ctx->pc = 0x1bd210u;
    // NOP
    // 0x1bd214: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD214u;
    {
        const bool branch_taken_0x1bd214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD214u;
        // 0x1bd218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd214) {
            ctx->pc = 0x1BD220u;
            goto label_1bd220;
        }
    }
    ctx->pc = 0x1BD21Cu;
    // 0x1bd21c: 0x26620270  addiu       $v0, $s3, 0x270
    ctx->pc = 0x1bd21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 624));
label_1bd220:
    // 0x1bd220: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1bd220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd224: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1bd224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1bd228: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1bd228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1bd22c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd230: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bd230u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bd234: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bd234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd238: 0x0  nop
    ctx->pc = 0x1bd238u;
    // NOP
    // 0x1bd23c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1BD23Cu;
    {
        const bool branch_taken_0x1bd23c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD23Cu;
        // 0x1bd240: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd23c) {
            ctx->pc = 0x1BD274u;
            goto label_1bd274;
        }
    }
    ctx->pc = 0x1BD244u;
    // 0x1bd244: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1bd244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd248: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bd248u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bd24c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bd24cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd250: 0x0  nop
    ctx->pc = 0x1bd250u;
    // NOP
    // 0x1bd254: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD254u;
    {
        const bool branch_taken_0x1bd254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd254) {
            ctx->pc = 0x1BD274u;
            goto label_1bd274;
        }
    }
    ctx->pc = 0x1BD25Cu;
    // 0x1bd25c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1bd25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd260: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bd260u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bd264: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bd264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd268: 0x0  nop
    ctx->pc = 0x1bd268u;
    // NOP
    // 0x1bd26c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BD26Cu;
    {
        const bool branch_taken_0x1bd26c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd26c) {
            ctx->pc = 0x1BD270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD26Cu;
            // 0x1bd270: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD274u;
            goto label_1bd274;
        }
    }
    ctx->pc = 0x1BD274u;
label_1bd274:
    // 0x1bd274: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1BD274u;
    {
        const bool branch_taken_0x1bd274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD274u;
        // 0x1bd278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd274) {
            ctx->pc = 0x1BD390u;
            goto label_1bd390;
        }
    }
    ctx->pc = 0x1BD27Cu;
    // 0x1bd27c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x1bd27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bd280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd284: 0x0  nop
    ctx->pc = 0x1bd284u;
    // NOP
    // 0x1bd288: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bd288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd28c: 0x0  nop
    ctx->pc = 0x1bd28cu;
    // NOP
    // 0x1bd290: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD290u;
    {
        const bool branch_taken_0x1bd290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD290u;
        // 0x1bd294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd290) {
            ctx->pc = 0x1BD29Cu;
            goto label_1bd29c;
        }
    }
    ctx->pc = 0x1BD298u;
    // 0x1bd298: 0x26620270  addiu       $v0, $s3, 0x270
    ctx->pc = 0x1bd298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 624));
label_1bd29c:
    // 0x1bd29c: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x1bd29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1bd2a0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bd2a4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1bd2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bd2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2ac: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1bd2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd2b0: 0x267101e0  addiu       $s1, $s3, 0x1E0
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
    // 0x1bd2b4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1bd2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd2b8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1bd2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1bd2bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bd2bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bd2c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd2c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd2c4: 0x0  nop
    ctx->pc = 0x1bd2c4u;
    // NOP
    // 0x1bd2c8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1bd2c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd2cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1bd2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bd2d0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1bd2d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1bd2d4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1bd2d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1bd2d8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1bd2d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bd2dc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1bd2dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bd2e0: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1bd2e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1bd2e4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BD2E4u;
    SET_GPR_U32(ctx, 31, 0x1BD2ECu);
    ctx->pc = 0x1BD2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2E4u;
    // 0x1bd2e8: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BD2E4u, 0x1BD2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2ECu;
label_1bd2ec:
    // 0x1bd2ec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bd2f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd2f4: 0x24540f90  addiu       $s4, $v0, 0xF90
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1bd2f8: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x1bd2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x1bd2fc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1bd2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1bd300: 0xafbd0024  sw          $sp, 0x24($sp)
    ctx->pc = 0x1bd300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 29));
    // 0x1bd304: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1bd304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd308: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1bd308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd30c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1bd30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd310: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1bd310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1bd314: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1bd314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1bd318: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1bd318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1bd31c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1bd31cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd320: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1bd320u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd324: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bd324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bd328: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1bd328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bd32c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bd32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bd330: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd334: 0x24521380  addiu       $s2, $v0, 0x1380
    ctx->pc = 0x1bd334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1bd338: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BD338u;
    SET_GPR_U32(ctx, 31, 0x1BD340u);
    ctx->pc = 0x1BD33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD338u;
    // 0x1bd33c: 0xafb20074  sw          $s2, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BD338u, 0x1BD340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD340u;
label_1bd340:
    // 0x1bd340: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BD340u;
    SET_GPR_U32(ctx, 31, 0x1BD348u);
    ctx->pc = 0x1BD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD340u;
    // 0x1bd344: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BD340u, 0x1BD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD348u;
label_1bd348:
    // 0x1bd348: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bd348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd34c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd350: 0xc06fc2a  jal         func_1BF0A8
    ctx->pc = 0x1BD350u;
    SET_GPR_U32(ctx, 31, 0x1BD358u);
    ctx->pc = 0x1BD354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD350u;
    // 0x1bd354: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0A8u, 0x1BD350u, 0x1BD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD358u;
label_1bd358:
    // 0x1bd358: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1bd358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bd35c: 0xc06fcc8  jal         func_1BF320
    ctx->pc = 0x1BD35Cu;
    SET_GPR_U32(ctx, 31, 0x1BD364u);
    ctx->pc = 0x1BD360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD35Cu;
    // 0x1bd360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF320u, 0x1BD35Cu, 0x1BD364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD364u;
label_1bd364:
    // 0x1bd364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd36c: 0xc06f688  jal         func_1BDA20
    ctx->pc = 0x1BD36Cu;
    SET_GPR_U32(ctx, 31, 0x1BD374u);
    ctx->pc = 0x1BD370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD36Cu;
    // 0x1bd370: 0x8c8600e4  lw          $a2, 0xE4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA20u, 0x1BD36Cu, 0x1BD374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD374u;
label_1bd374:
    // 0x1bd374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD374u;
    {
        const bool branch_taken_0x1bd374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD374u;
        // 0x1bd378: 0xafb20074  sw          $s2, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd374) {
            ctx->pc = 0x1BD388u;
            goto label_1bd388;
        }
    }
    ctx->pc = 0x1BD37Cu;
    // 0x1bd37c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bd37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD380u;
    {
        const bool branch_taken_0x1bd380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD380u;
        // 0x1bd384: 0xafb40028  sw          $s4, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd380) {
            ctx->pc = 0x1BD390u;
            goto label_1bd390;
        }
    }
    ctx->pc = 0x1BD388u;
label_1bd388:
    // 0x1bd388: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x1bd388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
label_1bd38c:
    // 0x1bd38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd390:
    // 0x1bd390: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1bd390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bd394: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1bd394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1bd398: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1bd398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bd39c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1bd39cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bd3a0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1bd3a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bd3a4: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1bd3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1bd3a8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1bd3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bd3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3ACu;
        // 0x1bd3b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD3B4u;
    // 0x1bd3b4: 0x0  nop
    ctx->pc = 0x1bd3b4u;
    // NOP
    ctx->pc = 0x1bd3b8u;
}
