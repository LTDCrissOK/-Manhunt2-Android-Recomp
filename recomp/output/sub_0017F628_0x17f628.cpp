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

// Function: sub_0017F628
// Address: 0x17f628 - 0x17f6c0
void sub_0017F628_0x17f628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F628_0x17f628");
#endif

    switch (ctx->pc) {
        case 0x17f664u: goto label_17f664;
        case 0x17f680u: goto label_17f680;
        default: break;
    }

    ctx->pc = 0x17f628u;

    // 0x17f628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f62c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f63c: 0x92020410  lbu         $v0, 0x410($s0)
    ctx->pc = 0x17f63cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x17f640: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17F640u;
    {
        const bool branch_taken_0x17f640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F640u;
        // 0x17f644: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f640) {
            ctx->pc = 0x17F6A4u;
            goto label_17f6a4;
        }
    }
    ctx->pc = 0x17F648u;
    // 0x17f648: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17f648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x17f64c: 0x8c43b03c  lw          $v1, -0x4FC4($v0)
    ctx->pc = 0x17f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48B03Cu));
    // 0x17f650: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F650u;
    {
        const bool branch_taken_0x17f650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F650u;
        // 0x17f654: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f650) {
            ctx->pc = 0x17F66Cu;
            goto label_17f66c;
        }
    }
    ctx->pc = 0x17F658u;
    // 0x17f658: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f65c: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x17F65Cu;
    SET_GPR_U32(ctx, 31, 0x17F664u);
    ctx->pc = 0x17F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F65Cu;
    // 0x17f660: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x17F65Cu, 0x17F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F664u;
label_17f664:
    // 0x17f664: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17F664u;
    {
        const bool branch_taken_0x17f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F664u;
        // 0x17f668: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f664) {
            ctx->pc = 0x17F6A8u;
            goto label_17f6a8;
        }
    }
    ctx->pc = 0x17F66Cu;
label_17f66c:
    // 0x17f66c: 0x92020410  lbu         $v0, 0x410($s0)
    ctx->pc = 0x17f66cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x17f670: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17F670u;
    {
        const bool branch_taken_0x17f670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F670u;
        // 0x17f674: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f670) {
            ctx->pc = 0x17F6A4u;
            goto label_17f6a4;
        }
    }
    ctx->pc = 0x17F678u;
    // 0x17f678: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17f678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f67c: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x17f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_17f680:
    // 0x17f680: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17f680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17f684: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x17f684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17f688: 0x50710007  beql        $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F688u;
    {
        const bool branch_taken_0x17f688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x17f688) {
            ctx->pc = 0x17F68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F688u;
            // 0x17f68c: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F6A8u;
            goto label_17f6a8;
        }
    }
    ctx->pc = 0x17F690u;
    // 0x17f690: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x17f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17f694: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x17f694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f698: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x17f698u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17f69c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17F69Cu;
    {
        const bool branch_taken_0x17f69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F69Cu;
        // 0x17f6a0: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f69c) {
            ctx->pc = 0x17F680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f680;
        }
    }
    ctx->pc = 0x17F6A4u;
label_17f6a4:
    // 0x17f6a4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_17f6a8:
    // 0x17f6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f6ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f6acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6B4u;
        // 0x17f6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F6BCu;
    // 0x17f6bc: 0x0  nop
    ctx->pc = 0x17f6bcu;
    // NOP
    ctx->pc = 0x17f6c0u;
}
