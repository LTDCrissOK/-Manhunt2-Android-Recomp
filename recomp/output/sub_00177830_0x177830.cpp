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

// Function: sub_00177830
// Address: 0x177830 - 0x177930
void sub_00177830_0x177830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177830_0x177830");
#endif

    switch (ctx->pc) {
        case 0x177870u: goto label_177870;
        case 0x177888u: goto label_177888;
        case 0x1778a8u: goto label_1778a8;
        case 0x1778e4u: goto label_1778e4;
        default: break;
    }

    ctx->pc = 0x177830u;

    // 0x177830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17783c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17783cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177840: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177844: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x177844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177848: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17784c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17784cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177850: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x177850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x177854: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x177854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177858: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x177858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17785c: 0x92020158  lbu         $v0, 0x158($s0)
    ctx->pc = 0x17785cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x177860: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x177860u;
    {
        const bool branch_taken_0x177860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177860u;
        // 0x177864: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177860) {
            ctx->pc = 0x17790Cu;
            goto label_17790c;
        }
    }
    ctx->pc = 0x177868u;
    // 0x177868: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x177868u;
    SET_GPR_U32(ctx, 31, 0x177870u);
    ctx->pc = 0x17786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177868u;
    // 0x17786c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x177868u, 0x177870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177870u;
label_177870:
    // 0x177870: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177874: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x177874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x177878: 0x50a20025  beql        $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x177878u;
    {
        const bool branch_taken_0x177878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x177878) {
            ctx->pc = 0x17787Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177878u;
            // 0x17787c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177910u;
            goto label_177910;
        }
    }
    ctx->pc = 0x177880u;
    // 0x177880: 0xc05e034  jal         func_1780D0
    ctx->pc = 0x177880u;
    SET_GPR_U32(ctx, 31, 0x177888u);
    ctx->pc = 0x177884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177880u;
    // 0x177884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D0u, 0x177880u, 0x177888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177888u;
label_177888:
    // 0x177888: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x177888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17788c: 0x260700d8  addiu       $a3, $s0, 0xD8
    ctx->pc = 0x17788cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x177890: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x177894: 0x260600dc  addiu       $a2, $s0, 0xDC
    ctx->pc = 0x177894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x177898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17789c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17789cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1778a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1778a4: 0x0  nop
    ctx->pc = 0x1778a4u;
    // NOP
label_1778a8:
    // 0x1778a8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x1778a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1778ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1778acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1778b0: 0x50490012  beql        $v0, $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1778B0u;
    {
        const bool branch_taken_0x1778b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x1778b0) {
            ctx->pc = 0x1778B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1778B0u;
            // 0x1778b4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1778FCu;
            goto label_1778fc;
        }
    }
    ctx->pc = 0x1778B8u;
    // 0x1778b8: 0x1448000c  bne         $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1778B8u;
    {
        const bool branch_taken_0x1778b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x1778BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778B8u;
        // 0x1778bc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778b8) {
            ctx->pc = 0x1778ECu;
            goto label_1778ec;
        }
    }
    ctx->pc = 0x1778C0u;
    // 0x1778c0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x1778c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1778c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1778c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1778c8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1778C8u;
    {
        const bool branch_taken_0x1778c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778C8u;
        // 0x1778cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778c8) {
            ctx->pc = 0x177910u;
            goto label_177910;
        }
    }
    ctx->pc = 0x1778D0u;
    // 0x1778d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1778d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1778d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1778d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778dc: 0xc05e3cc  jal         func_178F30
    ctx->pc = 0x1778DCu;
    SET_GPR_U32(ctx, 31, 0x1778E4u);
    ctx->pc = 0x1778E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778DCu;
    // 0x1778e0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F30u, 0x1778DCu, 0x1778E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778E4u;
label_1778e4:
    // 0x1778e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1778E4u;
    {
        const bool branch_taken_0x1778e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778E4u;
        // 0x1778e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778e4) {
            ctx->pc = 0x177910u;
            goto label_177910;
        }
    }
    ctx->pc = 0x1778ECu;
label_1778ec:
    // 0x1778ec: 0x92030158  lbu         $v1, 0x158($s0)
    ctx->pc = 0x1778ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1778f0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1778f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1778f4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1778F4u;
    {
        const bool branch_taken_0x1778f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1778F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778F4u;
        // 0x1778f8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778f4) {
            ctx->pc = 0x17790Cu;
            goto label_17790c;
        }
    }
    ctx->pc = 0x1778FCu;
label_1778fc:
    // 0x1778fc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1778fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177900: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x177900u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x177904: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x177904u;
    {
        const bool branch_taken_0x177904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177904u;
        // 0x177908: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177904) {
            ctx->pc = 0x1778A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1778a8;
        }
    }
    ctx->pc = 0x17790Cu;
label_17790c:
    // 0x17790c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17790cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177910:
    // 0x177910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177914: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x177914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177918: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x177918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17791c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17791cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177920: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x177920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177924: 0x3e00008  jr          $ra
    ctx->pc = 0x177924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177924u;
        // 0x177928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17792Cu;
    // 0x17792c: 0x0  nop
    ctx->pc = 0x17792cu;
    // NOP
    ctx->pc = 0x177930u;
}
