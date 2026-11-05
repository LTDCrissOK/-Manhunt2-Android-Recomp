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

// Function: sub_001AA330
// Address: 0x1aa330 - 0x1aa580
void sub_001AA330_0x1aa330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA330_0x1aa330");
#endif

    switch (ctx->pc) {
        case 0x1aa3c8u: goto label_1aa3c8;
        case 0x1aa3e8u: goto label_1aa3e8;
        case 0x1aa400u: goto label_1aa400;
        case 0x1aa42cu: goto label_1aa42c;
        case 0x1aa4a4u: goto label_1aa4a4;
        case 0x1aa544u: goto label_1aa544;
        case 0x1aa558u: goto label_1aa558;
        case 0x1aa564u: goto label_1aa564;
        default: break;
    }

    ctx->pc = 0x1aa330u;

    // 0x1aa330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa334: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1aa334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1aa338: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1aa338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1aa33c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aa33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa34c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aa34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aa350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aa354: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aa354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa35c: 0xc604016c  lwc1        $f4, 0x16C($s0)
    ctx->pc = 0x1aa35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1aa360: 0xc6030170  lwc1        $f3, 0x170($s0)
    ctx->pc = 0x1aa360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aa364: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x1aa364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1aa368: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x1aa368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1aa36c: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x1aa36cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1aa370: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1aa370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1aa374: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa378: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1aa378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa37c: 0x0  nop
    ctx->pc = 0x1aa37cu;
    // NOP
    // 0x1aa380: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1AA380u;
    {
        const bool branch_taken_0x1aa380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA380u;
        // 0x1aa384: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa380) {
            ctx->pc = 0x1AA3B0u;
            goto label_1aa3b0;
        }
    }
    ctx->pc = 0x1AA388u;
    // 0x1aa388: 0xc6000174  lwc1        $f0, 0x174($s0)
    ctx->pc = 0x1aa388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa38c: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x1aa38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa390: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1aa390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1aa394: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1aa394u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1aa398: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1aa398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa39c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa3a0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1aa3a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa3a4: 0x0  nop
    ctx->pc = 0x1aa3a4u;
    // NOP
    // 0x1aa3a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA3A8u;
    {
        const bool branch_taken_0x1aa3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa3a8) {
            ctx->pc = 0x1AA3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA3A8u;
            // 0x1aa3ac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3B0u;
            goto label_1aa3b0;
        }
    }
    ctx->pc = 0x1AA3B0u;
label_1aa3b0:
    // 0x1aa3b0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA3B0u;
    {
        const bool branch_taken_0x1aa3b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa3b0) {
            ctx->pc = 0x1AA3C0u;
            goto label_1aa3c0;
        }
    }
    ctx->pc = 0x1AA3B8u;
    // 0x1aa3b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA3B8u;
    {
        const bool branch_taken_0x1aa3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3B8u;
        // 0x1aa3bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3b8) {
            ctx->pc = 0x1AA3C8u;
            goto label_1aa3c8;
        }
    }
    ctx->pc = 0x1AA3C0u;
label_1aa3c0:
    // 0x1aa3c0: 0xc06a3b8  jal         func_1A8EE0
    ctx->pc = 0x1AA3C0u;
    SET_GPR_U32(ctx, 31, 0x1AA3C8u);
    ctx->pc = 0x1AA3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3C0u;
    // 0x1aa3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EE0u, 0x1AA3C0u, 0x1AA3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3C8u;
label_1aa3c8:
    // 0x1aa3c8: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x1aa3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1aa3cc: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1aa3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1aa3d0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA3D0u;
    {
        const bool branch_taken_0x1aa3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3D0u;
        // 0x1aa3d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3d0) {
            ctx->pc = 0x1AA3F0u;
            goto label_1aa3f0;
        }
    }
    ctx->pc = 0x1AA3D8u;
    // 0x1aa3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3e0: 0xc06a652  jal         func_1A9948
    ctx->pc = 0x1AA3E0u;
    SET_GPR_U32(ctx, 31, 0x1AA3E8u);
    ctx->pc = 0x1AA3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3E0u;
    // 0x1aa3e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9948u, 0x1AA3E0u, 0x1AA3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3E8u;
label_1aa3e8:
    // 0x1aa3e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA3E8u;
    {
        const bool branch_taken_0x1aa3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3E8u;
        // 0x1aa3ec: 0x8e030150  lw          $v1, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3e8) {
            ctx->pc = 0x1AA404u;
            goto label_1aa404;
        }
    }
    ctx->pc = 0x1AA3F0u;
label_1aa3f0:
    // 0x1aa3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3f8: 0xc06a652  jal         func_1A9948
    ctx->pc = 0x1AA3F8u;
    SET_GPR_U32(ctx, 31, 0x1AA400u);
    ctx->pc = 0x1AA3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3F8u;
    // 0x1aa3fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9948u, 0x1AA3F8u, 0x1AA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA400u;
label_1aa400:
    // 0x1aa400: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1aa400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1aa404:
    // 0x1aa404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aa404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa408: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1aa408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1aa40c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aa40cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aa410: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AA410u;
    {
        const bool branch_taken_0x1aa410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA410u;
        // 0x1aa414: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa410) {
            ctx->pc = 0x1AA44Cu;
            goto label_1aa44c;
        }
    }
    ctx->pc = 0x1AA418u;
    // 0x1aa418: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1aa418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1aa41c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AA41Cu;
    {
        const bool branch_taken_0x1aa41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa41c) {
            ctx->pc = 0x1AA420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA41Cu;
            // 0x1aa420: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA450u;
            goto label_1aa450;
        }
    }
    ctx->pc = 0x1AA424u;
    // 0x1aa424: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1AA424u;
    SET_GPR_U32(ctx, 31, 0x1AA42Cu);
    ctx->pc = 0x1AA428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA424u;
    // 0x1aa428: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1AA424u, 0x1AA42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA42Cu;
label_1aa42c:
    // 0x1aa42c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA42Cu;
    {
        const bool branch_taken_0x1aa42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa42c) {
            ctx->pc = 0x1AA430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA42Cu;
            // 0x1aa430: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA450u;
            goto label_1aa450;
        }
    }
    ctx->pc = 0x1AA434u;
    // 0x1aa434: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1aa434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1aa438: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1aa438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1aa43c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA43Cu;
    {
        const bool branch_taken_0x1aa43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA43Cu;
        // 0x1aa440: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa43c) {
            ctx->pc = 0x1AA44Cu;
            goto label_1aa44c;
        }
    }
    ctx->pc = 0x1AA444u;
    // 0x1aa444: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA444u;
    {
        const bool branch_taken_0x1aa444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa444) {
            ctx->pc = 0x1AA450u;
            goto label_1aa450;
        }
    }
    ctx->pc = 0x1AA44Cu;
label_1aa44c:
    // 0x1aa44c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1aa44cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa450:
    // 0x1aa450: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA450u;
    {
        const bool branch_taken_0x1aa450 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa450) {
            ctx->pc = 0x1AA470u;
            goto label_1aa470;
        }
    }
    ctx->pc = 0x1AA458u;
    // 0x1aa458: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1aa458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1aa45c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aa460: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aa460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1aa464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aa464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa468: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x1aa468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x1aa46c: 0x2c720001  sltiu       $s2, $v1, 0x1
    ctx->pc = 0x1aa46cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1aa470:
    // 0x1aa470: 0x56400020  bnel        $s2, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AA470u;
    {
        const bool branch_taken_0x1aa470 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa470) {
            ctx->pc = 0x1AA474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA470u;
            // 0x1aa474: 0xc6000198  lwc1        $f0, 0x198($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA4F4u;
            goto label_1aa4f4;
        }
    }
    ctx->pc = 0x1AA478u;
    // 0x1aa478: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1aa478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1aa47c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aa47cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa480: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1aa480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1aa484: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aa484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aa488: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AA488u;
    {
        const bool branch_taken_0x1aa488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA488u;
        // 0x1aa48c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa488) {
            ctx->pc = 0x1AA4C4u;
            goto label_1aa4c4;
        }
    }
    ctx->pc = 0x1AA490u;
    // 0x1aa490: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1aa490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1aa494: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AA494u;
    {
        const bool branch_taken_0x1aa494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa494) {
            ctx->pc = 0x1AA498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA494u;
            // 0x1aa498: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA4C8u;
            goto label_1aa4c8;
        }
    }
    ctx->pc = 0x1AA49Cu;
    // 0x1aa49c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1AA49Cu;
    SET_GPR_U32(ctx, 31, 0x1AA4A4u);
    ctx->pc = 0x1AA4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA49Cu;
    // 0x1aa4a0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1AA49Cu, 0x1AA4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA4A4u;
label_1aa4a4:
    // 0x1aa4a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA4A4u;
    {
        const bool branch_taken_0x1aa4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa4a4) {
            ctx->pc = 0x1AA4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA4A4u;
            // 0x1aa4a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA4C8u;
            goto label_1aa4c8;
        }
    }
    ctx->pc = 0x1AA4ACu;
    // 0x1aa4ac: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1aa4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1aa4b0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1aa4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1aa4b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA4B4u;
    {
        const bool branch_taken_0x1aa4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4B4u;
        // 0x1aa4b8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4b4) {
            ctx->pc = 0x1AA4C4u;
            goto label_1aa4c4;
        }
    }
    ctx->pc = 0x1AA4BCu;
    // 0x1aa4bc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA4BCu;
    {
        const bool branch_taken_0x1aa4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa4bc) {
            ctx->pc = 0x1AA4C8u;
            goto label_1aa4c8;
        }
    }
    ctx->pc = 0x1AA4C4u;
label_1aa4c4:
    // 0x1aa4c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1aa4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa4c8:
    // 0x1aa4c8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA4C8u;
    {
        const bool branch_taken_0x1aa4c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa4c8) {
            ctx->pc = 0x1AA4E8u;
            goto label_1aa4e8;
        }
    }
    ctx->pc = 0x1AA4D0u;
    // 0x1aa4d0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1aa4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1aa4d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aa4d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aa4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1aa4dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aa4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa4e0: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x1aa4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x1aa4e4: 0x2c720001  sltiu       $s2, $v1, 0x1
    ctx->pc = 0x1aa4e4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1aa4e8:
    // 0x1aa4e8: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1AA4E8u;
    {
        const bool branch_taken_0x1aa4e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4E8u;
        // 0x1aa4ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4e8) {
            ctx->pc = 0x1AA524u;
            goto label_1aa524;
        }
    }
    ctx->pc = 0x1AA4F0u;
    // 0x1aa4f0: 0xc6000198  lwc1        $f0, 0x198($s0)
    ctx->pc = 0x1aa4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa4f4:
    // 0x1aa4f4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1aa4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1aa4f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1aa4f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1aa4fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aa4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aa500: 0xc6020194  lwc1        $f2, 0x194($s0)
    ctx->pc = 0x1aa500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aa504: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa508: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1aa508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa50c: 0x0  nop
    ctx->pc = 0x1aa50cu;
    // NOP
    // 0x1aa510: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA510u;
    {
        const bool branch_taken_0x1aa510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA510u;
        // 0x1aa514: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa510) {
            ctx->pc = 0x1AA534u;
            goto label_1aa534;
        }
    }
    ctx->pc = 0x1AA518u;
    // 0x1aa518: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x1aa518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa51c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA51Cu;
    {
        const bool branch_taken_0x1aa51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA51Cu;
        // 0x1aa520: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa51c) {
            ctx->pc = 0x1AA530u;
            goto label_1aa530;
        }
    }
    ctx->pc = 0x1AA524u;
label_1aa524:
    // 0x1aa524: 0xc6000194  lwc1        $f0, 0x194($s0)
    ctx->pc = 0x1aa524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa528: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x1aa528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa52c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1aa52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1aa530:
    // 0x1aa530: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x1aa530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
label_1aa534:
    // 0x1aa534: 0x5260000c  beql        $s3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1AA534u;
    {
        const bool branch_taken_0x1aa534 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa534) {
            ctx->pc = 0x1AA538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA534u;
            // 0x1aa538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA568u;
            goto label_1aa568;
        }
    }
    ctx->pc = 0x1AA53Cu;
    // 0x1aa53c: 0xc06a1c4  jal         func_1A8710
    ctx->pc = 0x1AA53Cu;
    SET_GPR_U32(ctx, 31, 0x1AA544u);
    ctx->pc = 0x1AA540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA53Cu;
    // 0x1aa540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8710u, 0x1AA53Cu, 0x1AA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA544u;
label_1aa544:
    // 0x1aa544: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA544u;
    {
        const bool branch_taken_0x1aa544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa544) {
            ctx->pc = 0x1AA548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA544u;
            // 0x1aa548: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA568u;
            goto label_1aa568;
        }
    }
    ctx->pc = 0x1AA54Cu;
    // 0x1aa54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa550: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x1AA550u;
    SET_GPR_U32(ctx, 31, 0x1AA558u);
    ctx->pc = 0x1AA554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA550u;
    // 0x1aa554: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x1AA550u, 0x1AA558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA558u;
label_1aa558:
    // 0x1aa558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa55c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1AA55Cu;
    SET_GPR_U32(ctx, 31, 0x1AA564u);
    ctx->pc = 0x1AA560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA55Cu;
    // 0x1aa560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1AA55Cu, 0x1AA564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA564u;
label_1aa564:
    // 0x1aa564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa568:
    // 0x1aa568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa56c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa570: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aa570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa578: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA578u;
        // 0x1aa57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA580u;
}
