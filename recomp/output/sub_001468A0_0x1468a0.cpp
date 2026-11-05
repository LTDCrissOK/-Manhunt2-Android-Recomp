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

// Function: sub_001468A0
// Address: 0x1468a0 - 0x146a50
void sub_001468A0_0x1468a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001468A0_0x1468a0");
#endif

    switch (ctx->pc) {
        case 0x1468f0u: goto label_1468f0;
        case 0x146918u: goto label_146918;
        case 0x146938u: goto label_146938;
        case 0x146940u: goto label_146940;
        case 0x146960u: goto label_146960;
        case 0x1469f0u: goto label_1469f0;
        case 0x146a10u: goto label_146a10;
        case 0x146a18u: goto label_146a18;
        default: break;
    }

    ctx->pc = 0x1468a0u;

    // 0x1468a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1468a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1468a4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1468a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1468a8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1468a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1468ac: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1468acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1468b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1468b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468b4: 0x8c620790  lw          $v0, 0x790($v1)
    ctx->pc = 0x1468b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0790u));
    // 0x1468b8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1468b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468bc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1468bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1468c0: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1468C0u;
    {
        const bool branch_taken_0x1468c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1468C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468C0u;
        // 0x1468c4: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468c0) {
            ctx->pc = 0x146A38u;
            goto label_146a38;
        }
    }
    ctx->pc = 0x1468C8u;
    // 0x1468c8: 0x8e230560  lw          $v1, 0x560($s1)
    ctx->pc = 0x1468c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x1468cc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1468ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1468d0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1468d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1468d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1468d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1468d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1468d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1468dc: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x1468dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1468e0: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1468E0u;
    {
        const bool branch_taken_0x1468e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1468E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468E0u;
        // 0x1468e4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468e0) {
            ctx->pc = 0x146A3Cu;
            goto label_146a3c;
        }
    }
    ctx->pc = 0x1468E8u;
    // 0x1468e8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1468E8u;
    SET_GPR_U32(ctx, 31, 0x1468F0u);
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1468E8u, 0x1468F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468F0u;
label_1468f0:
    // 0x1468f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1468f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468f4: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1468F4u;
    {
        const bool branch_taken_0x1468f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1468F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468F4u;
        // 0x1468f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468f4) {
            ctx->pc = 0x146A38u;
            goto label_146a38;
        }
    }
    ctx->pc = 0x1468FCu;
    // 0x1468fc: 0xc62c0568  lwc1        $f12, 0x568($s1)
    ctx->pc = 0x1468fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x146900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146904: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x146904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x146908: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x146908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14690c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x14690cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x146910: 0xc04107a  jal         func_1041E8
    ctx->pc = 0x146910u;
    SET_GPR_U32(ctx, 31, 0x146918u);
    ctx->pc = 0x146914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146910u;
    // 0x146914: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1041E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1041E8u, 0x146910u, 0x146918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146918u;
label_146918:
    // 0x146918: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146918u;
    {
        const bool branch_taken_0x146918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146918u;
        // 0x14691c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146918) {
            ctx->pc = 0x146958u;
            goto label_146958;
        }
    }
    ctx->pc = 0x146920u;
    // 0x146920: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x146920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x146924: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x146924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146928: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x146928u;
    {
        const bool branch_taken_0x146928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146928u;
        // 0x14692c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146928) {
            ctx->pc = 0x146A28u;
            goto label_146a28;
        }
    }
    ctx->pc = 0x146930u;
    // 0x146930: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x146930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146934: 0x0  nop
    ctx->pc = 0x146934u;
    // NOP
label_146938:
    // 0x146938: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x146938u;
    SET_GPR_U32(ctx, 31, 0x146940u);
    ctx->pc = 0x14693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146938u;
    // 0x14693c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x146938u, 0x146940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146940u;
label_146940:
    // 0x146940: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x146940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146944: 0x0  nop
    ctx->pc = 0x146944u;
    // NOP
    // 0x146948: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146948u;
    {
        const bool branch_taken_0x146948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146948) {
            ctx->pc = 0x14694Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146948u;
            // 0x14694c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146938;
        }
    }
    ctx->pc = 0x146950u;
    // 0x146950: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x146950u;
    {
        const bool branch_taken_0x146950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146950u;
        // 0x146954: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146950) {
            ctx->pc = 0x146A2Cu;
            goto label_146a2c;
        }
    }
    ctx->pc = 0x146958u;
label_146958:
    // 0x146958: 0xc051a94  jal         func_146A50
    ctx->pc = 0x146958u;
    SET_GPR_U32(ctx, 31, 0x146960u);
    ctx->pc = 0x14695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146958u;
    // 0x14695c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146A50u, 0x146958u, 0x146960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146960u;
label_146960:
    // 0x146960: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x146960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146964: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x146964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x146968: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x146968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x14696c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14696cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146970: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x146970u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x146974: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x146974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146978: 0x0  nop
    ctx->pc = 0x146978u;
    // NOP
    // 0x14697c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x14697Cu;
    {
        const bool branch_taken_0x14697c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14697Cu;
        // 0x146980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14697c) {
            ctx->pc = 0x1469B0u;
            goto label_1469b0;
        }
    }
    ctx->pc = 0x146984u;
    // 0x146984: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x146984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146988: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x146988u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x14698c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14698cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146990: 0x0  nop
    ctx->pc = 0x146990u;
    // NOP
    // 0x146994: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x146994u;
    {
        const bool branch_taken_0x146994 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146994u;
        // 0x146998: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146994) {
            ctx->pc = 0x1469B0u;
            goto label_1469b0;
        }
    }
    ctx->pc = 0x14699Cu;
    // 0x14699c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x14699cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1469a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1469a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1469a4: 0x0  nop
    ctx->pc = 0x1469a4u;
    // NOP
    // 0x1469a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1469A8u;
    {
        const bool branch_taken_0x1469a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1469a8) {
            ctx->pc = 0x1469ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1469A8u;
            // 0x1469ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1469B0u;
            goto label_1469b0;
        }
    }
    ctx->pc = 0x1469B0u;
label_1469b0:
    // 0x1469b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1469B0u;
    {
        const bool branch_taken_0x1469b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1469B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469B0u;
        // 0x1469b4: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469b0) {
            ctx->pc = 0x1469C4u;
            goto label_1469c4;
        }
    }
    ctx->pc = 0x1469B8u;
    // 0x1469b8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1469b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1469bc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1469bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1469c0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1469c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1469c4:
    // 0x1469c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1469c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469c8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1469c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1469cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1469ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469d0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1469d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469d4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1469d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1469d8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1469d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1469dc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1469dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1469e0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1469e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1469e4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1469e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1469e8: 0xc051ae8  jal         func_146BA0
    ctx->pc = 0x1469E8u;
    SET_GPR_U32(ctx, 31, 0x1469F0u);
    ctx->pc = 0x1469ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1469E8u;
    // 0x1469ec: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x146BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146BA0u, 0x1469E8u, 0x1469F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469F0u;
label_1469f0:
    // 0x1469f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1469f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1469f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1469f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1469f8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1469f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469fc: 0xae420790  sw          $v0, 0x790($s2)
    ctx->pc = 0x1469fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1936), GPR_U32(ctx, 2));
    // 0x146a00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x146A00u;
    {
        const bool branch_taken_0x146a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A00u;
        // 0x146a04: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a00) {
            ctx->pc = 0x146A28u;
            goto label_146a28;
        }
    }
    ctx->pc = 0x146A08u;
    // 0x146a08: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x146a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146a0c: 0x0  nop
    ctx->pc = 0x146a0cu;
    // NOP
label_146a10:
    // 0x146a10: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x146A10u;
    SET_GPR_U32(ctx, 31, 0x146A18u);
    ctx->pc = 0x146A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146A10u;
    // 0x146a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x146A10u, 0x146A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A18u;
label_146a18:
    // 0x146a18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x146a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146a1c: 0x0  nop
    ctx->pc = 0x146a1cu;
    // NOP
    // 0x146a20: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146A20u;
    {
        const bool branch_taken_0x146a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146a20) {
            ctx->pc = 0x146A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146A20u;
            // 0x146a24: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146a10;
        }
    }
    ctx->pc = 0x146A28u;
label_146a28:
    // 0x146a28: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x146a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_146a2c:
    // 0x146a2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x146a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x146a30: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x146a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x146a34: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x146a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_146a38:
    // 0x146a38: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x146a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_146a3c:
    // 0x146a3c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x146a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146a40: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x146a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146a44: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x146a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x146a48: 0x3e00008  jr          $ra
    ctx->pc = 0x146A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A48u;
        // 0x146a4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146A50u;
}
