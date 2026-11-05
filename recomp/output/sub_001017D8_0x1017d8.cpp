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

// Function: sub_001017D8
// Address: 0x1017d8 - 0x1018e0
void sub_001017D8_0x1017d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001017D8_0x1017d8");
#endif

    switch (ctx->pc) {
        case 0x101820u: goto label_101820;
        case 0x101850u: goto label_101850;
        case 0x101860u: goto label_101860;
        case 0x101870u: goto label_101870;
        case 0x10189cu: goto label_10189c;
        case 0x1018b8u: goto label_1018b8;
        default: break;
    }

    ctx->pc = 0x1017d8u;

    // 0x1017d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1017d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1017dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1017dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1017e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1017e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1017e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1017e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1017e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1017e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1017ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1017f0: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x1017f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x1017f4: 0x9043072c  lbu         $v1, 0x72C($v0)
    ctx->pc = 0x1017f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F072Cu));
    // 0x1017f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1017f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1017fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101800: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x101804: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x101804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x101808: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x101808u;
    {
        const bool branch_taken_0x101808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101808u;
        // 0x10180c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101808) {
            ctx->pc = 0x101888u;
            goto label_101888;
        }
    }
    ctx->pc = 0x101810u;
    // 0x101810: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x101810u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x101814: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x101814u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x101818: 0x2351818  mult        $v1, $s1, $s5
    ctx->pc = 0x101818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10181c: 0x0  nop
    ctx->pc = 0x10181cu;
    // NOP
label_101820:
    // 0x101820: 0x8e420728  lw          $v0, 0x728($s2)
    ctx->pc = 0x101820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1832)));
    // 0x101824: 0x8e8495a8  lw          $a0, -0x6A58($s4)
    ctx->pc = 0x101824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940072)));
    // 0x101828: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x101828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10182c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x10182cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101830: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x101830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x101834: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101838: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10183c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10183Cu;
    {
        const bool branch_taken_0x10183c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10183c) {
            ctx->pc = 0x101840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10183Cu;
            // 0x101840: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101858u;
            goto label_101858;
        }
    }
    ctx->pc = 0x101844u;
    // 0x101844: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x101844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x101848: 0xc084a48  jal         func_212920
    ctx->pc = 0x101848u;
    SET_GPR_U32(ctx, 31, 0x101850u);
    ctx->pc = 0x10184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101848u;
    // 0x10184c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212920u, 0x101848u, 0x101850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101850u;
label_101850:
    // 0x101850: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x101850u;
    {
        const bool branch_taken_0x101850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101850u;
        // 0x101854: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101850) {
            ctx->pc = 0x101874u;
            goto label_101874;
        }
    }
    ctx->pc = 0x101858u;
label_101858:
    // 0x101858: 0xc0419f6  jal         func_1067D8
    ctx->pc = 0x101858u;
    SET_GPR_U32(ctx, 31, 0x101860u);
    ctx->pc = 0x10185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101858u;
    // 0x10185c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1067D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1067D8u, 0x101858u, 0x101860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101860u;
label_101860:
    // 0x101860: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x101860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101864: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x101864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x101868: 0xc0419f6  jal         func_1067D8
    ctx->pc = 0x101868u;
    SET_GPR_U32(ctx, 31, 0x101870u);
    ctx->pc = 0x10186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101868u;
    // 0x10186c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1067D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1067D8u, 0x101868u, 0x101870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101870u;
label_101870:
    // 0x101870: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x101870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_101874:
    // 0x101874: 0x9262072c  lbu         $v0, 0x72C($s3)
    ctx->pc = 0x101874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1836)));
    // 0x101878: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x101878u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10187c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10187cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101880: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x101880u;
    {
        const bool branch_taken_0x101880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101880u;
        // 0x101884: 0x2351818  mult        $v1, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x101880) {
            ctx->pc = 0x101820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101820;
        }
    }
    ctx->pc = 0x101888u;
label_101888:
    // 0x101888: 0x8e440728  lw          $a0, 0x728($s2)
    ctx->pc = 0x101888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1832)));
    // 0x10188c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10188Cu;
    {
        const bool branch_taken_0x10188c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x101890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10188Cu;
        // 0x101890: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10188c) {
            ctx->pc = 0x1018BCu;
            goto label_1018bc;
        }
    }
    ctx->pc = 0x101894u;
    // 0x101894: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x101894u;
    SET_GPR_U32(ctx, 31, 0x10189Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x101894u, 0x10189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10189Cu;
label_10189c:
    // 0x10189c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1018a0: 0xae400728  sw          $zero, 0x728($s2)
    ctx->pc = 0x1018a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1832), GPR_U32(ctx, 0));
    // 0x1018a4: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x1018a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x1018a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1018A8u;
    {
        const bool branch_taken_0x1018a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1018ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018A8u;
        // 0x1018ac: 0xa260072c  sb          $zero, 0x72C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1836), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018a8) {
            ctx->pc = 0x1018B8u;
            goto label_1018b8;
        }
    }
    ctx->pc = 0x1018B0u;
    // 0x1018b0: 0xc040638  jal         func_1018E0
    ctx->pc = 0x1018B0u;
    SET_GPR_U32(ctx, 31, 0x1018B8u);
    ctx->pc = 0x1018E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1018E0u, 0x1018B0u, 0x1018B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1018B8u;
label_1018b8:
    // 0x1018b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1018b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1018bc:
    // 0x1018bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1018bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1018c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1018c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1018c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1018c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1018c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1018c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1018cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1018ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1018d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1018d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1018d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1018D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1018D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018D4u;
        // 0x1018d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1018D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1018DCu;
    // 0x1018dc: 0x0  nop
    ctx->pc = 0x1018dcu;
    // NOP
    ctx->pc = 0x1018e0u;
}
