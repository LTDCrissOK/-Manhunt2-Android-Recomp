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

// Function: sub_00103570
// Address: 0x103570 - 0x1036b8
void sub_00103570_0x103570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103570_0x103570");
#endif

    switch (ctx->pc) {
        case 0x1035c8u: goto label_1035c8;
        case 0x1035d8u: goto label_1035d8;
        case 0x103620u: goto label_103620;
        case 0x10362cu: goto label_10362c;
        case 0x103694u: goto label_103694;
        default: break;
    }

    ctx->pc = 0x103570u;

    // 0x103570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x103570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x103574: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x103574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x103578: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x103578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x10357c: 0x8c620700  lw          $v0, 0x700($v1)
    ctx->pc = 0x10357cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0700u));
    // 0x103580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103584: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x103584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x103588: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x103588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10358c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x10358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x103590: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x103590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x103594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103594u;
    {
        const bool branch_taken_0x103594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103594u;
        // 0x103598: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103594) {
            ctx->pc = 0x1035A4u;
            goto label_1035a4;
        }
    }
    ctx->pc = 0x10359Cu;
    // 0x10359c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x10359Cu;
    {
        const bool branch_taken_0x10359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10359Cu;
        // 0x1035a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10359c) {
            ctx->pc = 0x103698u;
            goto label_103698;
        }
    }
    ctx->pc = 0x1035A4u;
label_1035a4:
    // 0x1035a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1035a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1035a8: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1035a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1035ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1035acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1035b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1035b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1035b4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1035b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1035b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1035b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1035bc: 0x0  nop
    ctx->pc = 0x1035bcu;
    // NOP
    // 0x1035c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1035c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1035c4: 0x0  nop
    ctx->pc = 0x1035c4u;
    // NOP
label_1035c8:
    // 0x1035c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1035c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1035ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035d0: 0xc041acc  jal         func_106B30
    ctx->pc = 0x1035D0u;
    SET_GPR_U32(ctx, 31, 0x1035D8u);
    ctx->pc = 0x1035D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1035D0u;
    // 0x1035d4: 0x4614a500  add.s       $f20, $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106B30u, 0x1035D0u, 0x1035D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1035D8u;
label_1035d8:
    // 0x1035d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1035d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1035dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1035dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1035e0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1035e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1035e4: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1035E4u;
    {
        const bool branch_taken_0x1035e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1035E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035E4u;
        // 0x1035e8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035e4) {
            ctx->pc = 0x1035F0u;
            goto label_1035f0;
        }
    }
    ctx->pc = 0x1035ECu;
    // 0x1035ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1035ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1035f0:
    // 0x1035f0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1035F0u;
    {
        const bool branch_taken_0x1035f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035F0u;
        // 0x1035f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035f0) {
            ctx->pc = 0x1035C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1035c8;
        }
    }
    ctx->pc = 0x1035F8u;
    // 0x1035f8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1035f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1035fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1035fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103600: 0xc454a4d8  lwc1        $f20, -0x5B28($v0)
    ctx->pc = 0x103600u;
    { uint32_t bits = FAST_READ32(0x43A4D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103604: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x103604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103608: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x103608u;
    {
        const bool branch_taken_0x103608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103608u;
        // 0x10360c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103608) {
            ctx->pc = 0x103614u;
            goto label_103614;
        }
    }
    ctx->pc = 0x103610u;
    // 0x103610: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x103610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_103614:
    // 0x103614: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x103614u;
    {
        const bool branch_taken_0x103614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x103618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103614u;
        // 0x103618: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103614) {
            ctx->pc = 0x103680u;
            goto label_103680;
        }
    }
    ctx->pc = 0x10361Cu;
    // 0x10361c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x10361cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_103620:
    // 0x103620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103624: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x103624u;
    SET_GPR_U32(ctx, 31, 0x10362Cu);
    ctx->pc = 0x103628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103624u;
    // 0x103628: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x103624u, 0x10362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10362Cu;
label_10362c:
    // 0x10362c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x10362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x103630: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x103630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x103634: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x103634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x103638: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x103638u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x10363c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x10363cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x103640: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x103640u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x103644: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x103644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103648: 0x0  nop
    ctx->pc = 0x103648u;
    // NOP
    // 0x10364c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10364Cu;
    {
        const bool branch_taken_0x10364c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10364Cu;
        // 0x103650: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10364c) {
            ctx->pc = 0x10365Cu;
            goto label_10365c;
        }
    }
    ctx->pc = 0x103654u;
    // 0x103654: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x103654u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x103658: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x103658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10365c:
    // 0x10365c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103660: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103660u;
    {
        const bool branch_taken_0x103660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x103664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103660u;
        // 0x103664: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103660) {
            ctx->pc = 0x103678u;
            goto label_103678;
        }
    }
    ctx->pc = 0x103668u;
    // 0x103668: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x103668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x10366c: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10366Cu;
    {
        const bool branch_taken_0x10366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x103670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10366Cu;
        // 0x103670: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10366c) {
            ctx->pc = 0x103678u;
            goto label_103678;
        }
    }
    ctx->pc = 0x103674u;
    // 0x103674: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x103674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_103678:
    // 0x103678: 0x1600ffe9  bnez        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x103678u;
    {
        const bool branch_taken_0x103678 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103678u;
        // 0x10367c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103678) {
            ctx->pc = 0x103620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103620;
        }
    }
    ctx->pc = 0x103680u;
label_103680:
    // 0x103680: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x103680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103684: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103684u;
    {
        const bool branch_taken_0x103684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x103688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103684u;
        // 0x103688: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103684) {
            ctx->pc = 0x103698u;
            goto label_103698;
        }
    }
    ctx->pc = 0x10368Cu;
    // 0x10368c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x10368Cu;
    SET_GPR_U32(ctx, 31, 0x103694u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x10368Cu, 0x103694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103694u;
label_103694:
    // 0x103694: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x103694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103698:
    // 0x103698: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x103698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10369c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x10369cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1036a0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1036a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1036a4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1036a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1036a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1036a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1036ac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1036acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1036b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1036B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1036B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036B0u;
        // 0x1036b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1036B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1036B8u;
}
