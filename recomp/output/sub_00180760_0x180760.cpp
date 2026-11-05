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

// Function: sub_00180760
// Address: 0x180760 - 0x180868
void sub_00180760_0x180760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180760_0x180760");
#endif

    switch (ctx->pc) {
        case 0x180820u: goto label_180820;
        default: break;
    }

    ctx->pc = 0x180760u;

    // 0x180760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180764: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x180764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180768: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x180768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18076c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x180770: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x180770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x180774: 0x90c20412  lbu         $v0, 0x412($a2)
    ctx->pc = 0x180774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1042)));
    // 0x180778: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x180778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18077c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x18077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x180780: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x180780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x180784: 0x10430033  beq         $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x180784u;
    {
        const bool branch_taken_0x180784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x180788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180784u;
        // 0x180788: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180784) {
            ctx->pc = 0x180854u;
            goto label_180854;
        }
    }
    ctx->pc = 0x18078Cu;
    // 0x18078c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x18078Cu;
    {
        const bool branch_taken_0x18078c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18078Cu;
        // 0x180790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18078c) {
            ctx->pc = 0x180858u;
            goto label_180858;
        }
    }
    ctx->pc = 0x180794u;
    // 0x180794: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x180798: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x18079c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18079cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807a0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1807a4: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1807a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1807a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1807a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1807ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1807acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1807b0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1807b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1807B4u;
    {
        const bool branch_taken_0x1807b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1807b4) {
            ctx->pc = 0x1807B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1807B4u;
            // 0x1807b8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1807C4u;
            goto label_1807c4;
        }
    }
    ctx->pc = 0x1807BCu;
    // 0x1807bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1807BCu;
    {
        const bool branch_taken_0x1807bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1807C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807BCu;
        // 0x1807c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807bc) {
            ctx->pc = 0x1807CCu;
            goto label_1807cc;
        }
    }
    ctx->pc = 0x1807C4u;
label_1807c4:
    // 0x1807c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1807c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1807c8: 0x24670070  addiu       $a3, $v1, 0x70
    ctx->pc = 0x1807c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1807cc:
    // 0x1807cc: 0x90c30412  lbu         $v1, 0x412($a2)
    ctx->pc = 0x1807ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1042)));
    // 0x1807d0: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x1807d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x1807d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1807d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1807d8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1807dc: 0x8c700020  lw          $s0, 0x20($v1)
    ctx->pc = 0x1807dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1807e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1807e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1807e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1807e8: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1807ec: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1807f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1807f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1807f8: 0x8ca30108  lw          $v1, 0x108($a1)
    ctx->pc = 0x1807f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x1807fc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1807FCu;
    {
        const bool branch_taken_0x1807fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1807fc) {
            ctx->pc = 0x180800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1807FCu;
            // 0x180800: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18080Cu;
            goto label_18080c;
        }
    }
    ctx->pc = 0x180804u;
    // 0x180804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x180804u;
    {
        const bool branch_taken_0x180804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180804u;
        // 0x180808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180804) {
            ctx->pc = 0x180814u;
            goto label_180814;
        }
    }
    ctx->pc = 0x18080Cu;
label_18080c:
    // 0x18080c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180810: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x180810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_180814:
    // 0x180814: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x180814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180818: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x180818u;
    SET_GPR_U32(ctx, 31, 0x180820u);
    ctx->pc = 0x18081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180818u;
    // 0x18081c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x180818u, 0x180820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180820u;
label_180820:
    // 0x180820: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x180820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180824: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x180824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x180828: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x180828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18082c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18082cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x180830: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x180830u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x180834: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x180834u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x180838: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x180838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x18083c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18083cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180840: 0x0  nop
    ctx->pc = 0x180840u;
    // NOP
    // 0x180844: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180848: 0x0  nop
    ctx->pc = 0x180848u;
    // NOP
    // 0x18084c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18084Cu;
    {
        const bool branch_taken_0x18084c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18084Cu;
        // 0x180850: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18084c) {
            ctx->pc = 0x180858u;
            goto label_180858;
        }
    }
    ctx->pc = 0x180854u;
label_180854:
    // 0x180854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180858:
    // 0x180858: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x180858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18085c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18085cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180860: 0x3e00008  jr          $ra
    ctx->pc = 0x180860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180860u;
        // 0x180864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180868u;
}
