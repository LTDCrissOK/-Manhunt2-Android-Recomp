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

// Function: sub_0014C648
// Address: 0x14c648 - 0x14c778
void sub_0014C648_0x14c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C648_0x14c648");
#endif

    switch (ctx->pc) {
        case 0x14c694u: goto label_14c694;
        case 0x14c6c8u: goto label_14c6c8;
        case 0x14c6d0u: goto label_14c6d0;
        case 0x14c6e8u: goto label_14c6e8;
        case 0x14c718u: goto label_14c718;
        default: break;
    }

    ctx->pc = 0x14c648u;

    // 0x14c648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14c64c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14c64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c650: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x14c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14c654: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14c654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14c658: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x14c658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x14c65c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14c65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c660: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14c660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14c664: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14c664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14c668: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14c668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14c66c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14c670: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14c670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14c674: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x14c678: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14c67c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14c680: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c684: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14c688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c68c: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x14C68Cu;
    SET_GPR_U32(ctx, 31, 0x14C694u);
    ctx->pc = 0x14C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C68Cu;
    // 0x14c690: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x14C68Cu, 0x14C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C694u;
label_14c694:
    // 0x14c694: 0xc6610668  lwc1        $f1, 0x668($s3)
    ctx->pc = 0x14c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14c698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14c69c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14c69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c6a0: 0x0  nop
    ctx->pc = 0x14c6a0u;
    // NOP
    // 0x14c6a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c6a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c6a8: 0x0  nop
    ctx->pc = 0x14c6a8u;
    // NOP
    // 0x14c6ac: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x14C6ACu;
    {
        const bool branch_taken_0x14c6ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6ACu;
        // 0x14c6b0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6ac) {
            ctx->pc = 0x14C754u;
            goto label_14c754;
        }
    }
    ctx->pc = 0x14C6B4u;
    // 0x14c6b4: 0x92910022  lbu         $s1, 0x22($s4)
    ctx->pc = 0x14c6b4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x14c6b8: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x14C6B8u;
    {
        const bool branch_taken_0x14c6b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6B8u;
        // 0x14c6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6b8) {
            ctx->pc = 0x14C758u;
            goto label_14c758;
        }
    }
    ctx->pc = 0x14C6C0u;
    // 0x14c6c0: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x14C6C0u;
    {
        const bool branch_taken_0x14c6c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6C0u;
        // 0x14c6c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6c0) {
            ctx->pc = 0x14C758u;
            goto label_14c758;
        }
    }
    ctx->pc = 0x14C6C8u;
label_14c6c8:
    // 0x14c6c8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x14C6C8u;
    SET_GPR_U32(ctx, 31, 0x14C6D0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x14C6C8u, 0x14C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6D0u;
label_14c6d0:
    // 0x14c6d0: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x14c6d0u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14c6d4: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C6D4u;
    {
        const bool branch_taken_0x14c6d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6d4) {
            ctx->pc = 0x14C6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C6D4u;
            // 0x14c6d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C6DCu;
            goto label_14c6dc;
        }
    }
    ctx->pc = 0x14C6DCu;
label_14c6dc:
    // 0x14c6dc: 0x2810  mfhi        $a1
    ctx->pc = 0x14c6dcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x14c6e0: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x14C6E0u;
    SET_GPR_U32(ctx, 31, 0x14C6E8u);
    ctx->pc = 0x14C6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C6E0u;
    // 0x14c6e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x14C6E0u, 0x14C6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6E8u;
label_14c6e8:
    // 0x14c6e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14c6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6ec: 0x50c00016  beql        $a2, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14C6ECu;
    {
        const bool branch_taken_0x14c6ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6ec) {
            ctx->pc = 0x14C6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C6ECu;
            // 0x14c6f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C748u;
            goto label_14c748;
        }
    }
    ctx->pc = 0x14C6F4u;
    // 0x14c6f4: 0x90c20014  lbu         $v0, 0x14($a2)
    ctx->pc = 0x14c6f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x14c6f8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x14C6F8u;
    {
        const bool branch_taken_0x14c6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6f8) {
            ctx->pc = 0x14C6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C6F8u;
            // 0x14c6fc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C748u;
            goto label_14c748;
        }
    }
    ctx->pc = 0x14C700u;
    // 0x14c700: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x14c700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14c704: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x14C704u;
    {
        const bool branch_taken_0x14c704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C704u;
        // 0x14c708: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c704) {
            ctx->pc = 0x14C744u;
            goto label_14c744;
        }
    }
    ctx->pc = 0x14C70Cu;
    // 0x14c70c: 0x8e650664  lw          $a1, 0x664($s3)
    ctx->pc = 0x14c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x14c710: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14C710u;
    SET_GPR_U32(ctx, 31, 0x14C718u);
    ctx->pc = 0x14C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C710u;
    // 0x14c714: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14C710u, 0x14C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C718u;
label_14c718:
    // 0x14c718: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x14c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14c71c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x14c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14c720: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x14c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14c724: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14c724u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x14c728: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x14c728u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14c72c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x14c72cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14c730: 0xc6600668  lwc1        $f0, 0x668($s3)
    ctx->pc = 0x14c730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c738: 0x0  nop
    ctx->pc = 0x14c738u;
    // NOP
    // 0x14c73c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14C73Cu;
    {
        const bool branch_taken_0x14c73c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C73Cu;
        // 0x14c740: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c73c) {
            ctx->pc = 0x14C758u;
            goto label_14c758;
        }
    }
    ctx->pc = 0x14C744u;
label_14c744:
    // 0x14c744: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14c744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_14c748:
    // 0x14c748: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x14c748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14c74c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x14C74Cu;
    {
        const bool branch_taken_0x14c74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c74c) {
            ctx->pc = 0x14C6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c6c8;
        }
    }
    ctx->pc = 0x14C754u;
label_14c754:
    // 0x14c754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14c754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c758:
    // 0x14c758: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14c758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c75c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14c75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c760: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14c760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c764: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14c764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c768: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x14c768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c76c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x14c76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14c770: 0x3e00008  jr          $ra
    ctx->pc = 0x14C770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C770u;
        // 0x14c774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C778u;
}
