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

// Function: sub_00265630
// Address: 0x265630 - 0x265770
void sub_00265630_0x265630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265630_0x265630");
#endif

    switch (ctx->pc) {
        case 0x2656d0u: goto label_2656d0;
        case 0x265704u: goto label_265704;
        case 0x26574cu: goto label_26574c;
        default: break;
    }

    ctx->pc = 0x265630u;

    // 0x265630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x265630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x265634: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x265634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x265638: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x265638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x26563c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26563cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265640: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x265640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x265644: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x265644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265648: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x265648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26564c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x265650: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x265650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x265654: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x265654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x265658: 0x92020320  lbu         $v0, 0x320($s0)
    ctx->pc = 0x265658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x26565c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26565Cu;
    {
        const bool branch_taken_0x26565c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26565Cu;
        // 0x265660: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26565c) {
            ctx->pc = 0x2656B0u;
            goto label_2656b0;
        }
    }
    ctx->pc = 0x265664u;
    // 0x265664: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x265664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x265668: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x265668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x26566c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26566cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x265670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x265670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x265674: 0xc46000f4  lwc1        $f0, 0xF4($v1)
    ctx->pc = 0x265674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265678: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x265678u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26567c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26567cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265680: 0x0  nop
    ctx->pc = 0x265680u;
    // NOP
    // 0x265684: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x265684u;
    {
        const bool branch_taken_0x265684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265684u;
        // 0x265688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265684) {
            ctx->pc = 0x2656A4u;
            goto label_2656a4;
        }
    }
    ctx->pc = 0x26568Cu;
    // 0x26568c: 0xc46000f8  lwc1        $f0, 0xF8($v1)
    ctx->pc = 0x26568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265690: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x265690u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x265694: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x265694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265698: 0x0  nop
    ctx->pc = 0x265698u;
    // NOP
    // 0x26569c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26569Cu;
    {
        const bool branch_taken_0x26569c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26569c) {
            ctx->pc = 0x2656A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26569Cu;
            // 0x2656a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2656A4u;
            goto label_2656a4;
        }
    }
    ctx->pc = 0x2656A4u;
label_2656a4:
    // 0x2656a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2656a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2656a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2656A8u;
    {
        const bool branch_taken_0x2656a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2656a8) {
            ctx->pc = 0x2656ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2656A8u;
            // 0x2656ac: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2656B8u;
            goto label_2656b8;
        }
    }
    ctx->pc = 0x2656B0u;
label_2656b0:
    // 0x2656b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2656B0u;
    {
        const bool branch_taken_0x2656b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656B0u;
        // 0x2656b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656b0) {
            ctx->pc = 0x26574Cu;
            goto label_26574c;
        }
    }
    ctx->pc = 0x2656B8u;
label_2656b8:
    // 0x2656b8: 0x261202f0  addiu       $s2, $s0, 0x2F0
    ctx->pc = 0x2656b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2656bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2656bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2656c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2656c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2656c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2656c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2656c8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x2656C8u;
    SET_GPR_U32(ctx, 31, 0x2656D0u);
    ctx->pc = 0x2656CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2656C8u;
    // 0x2656cc: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x2656C8u, 0x2656D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656D0u;
label_2656d0:
    // 0x2656d0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2656d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2656d4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2656d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2656d8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2656d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2656dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2656dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2656e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2656e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2656e4: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2656e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2656e8: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x2656e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x2656ec: 0x26110300  addiu       $s1, $s0, 0x300
    ctx->pc = 0x2656ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x2656f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2656f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2656f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2656f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2656f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2656f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2656fc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x2656FCu;
    SET_GPR_U32(ctx, 31, 0x265704u);
    ctx->pc = 0x265700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2656FCu;
    // 0x265700: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x2656FCu, 0x265704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265704u;
label_265704:
    // 0x265704: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x265704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265708: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x265708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26570c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x26570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x265710: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x265710u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x265714: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x265714u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x265718: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x265718u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x26571c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26571cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265720: 0x0  nop
    ctx->pc = 0x265720u;
    // NOP
    // 0x265724: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x265724u;
    {
        const bool branch_taken_0x265724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x265724) {
            ctx->pc = 0x265728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265724u;
            // 0x265728: 0xae1102e8  sw          $s1, 0x2E8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265738u;
            goto label_265738;
        }
    }
    ctx->pc = 0x26572Cu;
    // 0x26572c: 0xae1202e8  sw          $s2, 0x2E8($s0)
    ctx->pc = 0x26572cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 18));
    // 0x265730: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x265730u;
    {
        const bool branch_taken_0x265730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265730u;
        // 0x265734: 0xae1102ec  sw          $s1, 0x2EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265730) {
            ctx->pc = 0x26573Cu;
            goto label_26573c;
        }
    }
    ctx->pc = 0x265738u;
label_265738:
    // 0x265738: 0xae1202ec  sw          $s2, 0x2EC($s0)
    ctx->pc = 0x265738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 18));
label_26573c:
    // 0x26573c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26573cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265740: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x265740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265744: 0xc09bbe6  jal         func_26EF98
    ctx->pc = 0x265744u;
    SET_GPR_U32(ctx, 31, 0x26574Cu);
    ctx->pc = 0x265748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265744u;
    // 0x265748: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF98u, 0x265744u, 0x26574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26574Cu;
label_26574c:
    // 0x26574c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26574cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265750: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x265750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x265754: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x265754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265758: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x265758u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26575c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x26575cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265760: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x265760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x265764: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x265764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x265768: 0x3e00008  jr          $ra
    ctx->pc = 0x265768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265768u;
        // 0x26576c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265770u;
}
