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

// Function: sub_00190670
// Address: 0x190670 - 0x190780
void sub_00190670_0x190670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190670_0x190670");
#endif

    switch (ctx->pc) {
        case 0x19068cu: goto label_19068c;
        case 0x1906a4u: goto label_1906a4;
        default: break;
    }

    ctx->pc = 0x190670u;

    // 0x190670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x190674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190678: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x190678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19067c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19067cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190684: 0xc061a12  jal         func_186848
    ctx->pc = 0x190684u;
    SET_GPR_U32(ctx, 31, 0x19068Cu);
    ctx->pc = 0x190688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190684u;
    // 0x190688: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190684u, 0x19068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19068Cu;
label_19068c:
    // 0x19068c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x19068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x190690: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x190690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190694: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x190694u;
    {
        const bool branch_taken_0x190694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x190694) {
            ctx->pc = 0x190698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190694u;
            // 0x190698: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1906CCu;
            goto label_1906cc;
        }
    }
    ctx->pc = 0x19069Cu;
    // 0x19069c: 0xc061a12  jal         func_186848
    ctx->pc = 0x19069Cu;
    SET_GPR_U32(ctx, 31, 0x1906A4u);
    ctx->pc = 0x1906A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19069Cu;
    // 0x1906a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19069Cu, 0x1906A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906A4u;
label_1906a4:
    // 0x1906a4: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1906a8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1906ac: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1906acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1906b0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1906B0u;
    {
        const bool branch_taken_0x1906b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906b0) {
            ctx->pc = 0x1906B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1906B0u;
            // 0x1906b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1906BCu;
            goto label_1906bc;
        }
    }
    ctx->pc = 0x1906B8u;
    // 0x1906b8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1906bc:
    // 0x1906bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1906bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1906c0: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1906C0u;
    {
        const bool branch_taken_0x1906c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1906C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906C0u;
        // 0x1906c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906c0) {
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x1906C8u;
    // 0x1906c8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1906cc:
    // 0x1906cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1906CCu;
    {
        const bool branch_taken_0x1906cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1906D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906CCu;
        // 0x1906d0: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906cc) {
            ctx->pc = 0x1906E4u;
            goto label_1906e4;
        }
    }
    ctx->pc = 0x1906D4u;
    // 0x1906d4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1906D4u;
    {
        const bool branch_taken_0x1906d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1906D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906D4u;
        // 0x1906d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906d4) {
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x1906DCu;
    // 0x1906dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1906DCu;
    {
        const bool branch_taken_0x1906dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1906E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906DCu;
        // 0x1906e0: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906dc) {
            ctx->pc = 0x1906F0u;
            goto label_1906f0;
        }
    }
    ctx->pc = 0x1906E4u;
label_1906e4:
    // 0x1906e4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1906E4u;
    {
        const bool branch_taken_0x1906e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1906E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906E4u;
        // 0x1906e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906e4) {
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x1906ECu;
    // 0x1906ec: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1906f0:
    // 0x1906f0: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1906F0u;
    {
        const bool branch_taken_0x1906f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906f0) {
            ctx->pc = 0x1906F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1906F0u;
            // 0x1906f4: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190730u;
            goto label_190730;
        }
    }
    ctx->pc = 0x1906F8u;
    // 0x1906f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1906f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1906fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1906fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190700: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190704: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x190704u;
    {
        const bool branch_taken_0x190704 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x190704) {
            ctx->pc = 0x190708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190704u;
            // 0x190708: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190730u;
            goto label_190730;
        }
    }
    ctx->pc = 0x19070Cu;
    // 0x19070c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x190710: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x190710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x190714: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190714u;
    {
        const bool branch_taken_0x190714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190714u;
        // 0x190718: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190714) {
            ctx->pc = 0x190720u;
            goto label_190720;
        }
    }
    ctx->pc = 0x19071Cu;
    // 0x19071c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_190720:
    // 0x190720: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190720u;
    {
        const bool branch_taken_0x190720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x190720) {
            ctx->pc = 0x190724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190720u;
            // 0x190724: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190730u;
            goto label_190730;
        }
    }
    ctx->pc = 0x190728u;
    // 0x190728: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x190728u;
    {
        const bool branch_taken_0x190728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190728u;
        // 0x19072c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190728) {
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x190730u;
label_190730:
    // 0x190730: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x190730u;
    {
        const bool branch_taken_0x190730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190730u;
        // 0x190734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190730) {
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x190738u;
    // 0x190738: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x190738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19073c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19073cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190744: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190744u;
    {
        const bool branch_taken_0x190744 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x190748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190744u;
        // 0x190748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190744) {
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x19074Cu;
    // 0x19074c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x190750: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x190750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x190754: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190754u;
    {
        const bool branch_taken_0x190754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x190758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190754u;
        // 0x190758: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190754) {
            ctx->pc = 0x190760u;
            goto label_190760;
        }
    }
    ctx->pc = 0x19075Cu;
    // 0x19075c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_190760:
    // 0x190760: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x190760u;
    {
        const bool branch_taken_0x190760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x190764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190760u;
        // 0x190764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190760) {
            ctx->pc = 0x19076Cu;
            goto label_19076c;
        }
    }
    ctx->pc = 0x190768u;
    // 0x190768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x190768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19076c:
    // 0x19076c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19076cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x190774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190778: 0x3e00008  jr          $ra
    ctx->pc = 0x190778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190778u;
        // 0x19077c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190780u;
}
