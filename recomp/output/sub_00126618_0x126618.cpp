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

// Function: sub_00126618
// Address: 0x126618 - 0x1266c0
void sub_00126618_0x126618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126618_0x126618");
#endif

    switch (ctx->pc) {
        case 0x12664cu: goto label_12664c;
        case 0x126668u: goto label_126668;
        case 0x126674u: goto label_126674;
        case 0x126680u: goto label_126680;
        default: break;
    }

    ctx->pc = 0x126618u;

    // 0x126618: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12661c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126620: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x126620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x126624: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x126624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12662c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126630: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126634: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x126634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x126638: 0x9242023c  lbu         $v0, 0x23C($s2)
    ctx->pc = 0x126638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
    // 0x12663c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12663Cu;
    {
        const bool branch_taken_0x12663c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12663Cu;
        // 0x126640: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12663c) {
            ctx->pc = 0x126654u;
            goto label_126654;
        }
    }
    ctx->pc = 0x126644u;
    // 0x126644: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x126644u;
    {
        const bool branch_taken_0x126644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126644u;
        // 0x126648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126644) {
            ctx->pc = 0x1266A0u;
            goto label_1266a0;
        }
    }
    ctx->pc = 0x12664Cu;
label_12664c:
    // 0x12664c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12664Cu;
    {
        const bool branch_taken_0x12664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12664Cu;
        // 0x126650: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12664c) {
            ctx->pc = 0x1266A0u;
            goto label_1266a0;
        }
    }
    ctx->pc = 0x126654u;
label_126654:
    // 0x126654: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x126654u;
    {
        const bool branch_taken_0x126654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126654u;
        // 0x126658: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126654) {
            ctx->pc = 0x12669Cu;
            goto label_12669c;
        }
    }
    ctx->pc = 0x12665Cu;
    // 0x12665c: 0x2653007c  addiu       $s3, $s2, 0x7C
    ctx->pc = 0x12665cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x126660: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x126660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x126664: 0x0  nop
    ctx->pc = 0x126664u;
    // NOP
label_126668:
    // 0x126668: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x126668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x12666c: 0xc05a6b8  jal         func_169AE0
    ctx->pc = 0x12666Cu;
    SET_GPR_U32(ctx, 31, 0x126674u);
    ctx->pc = 0x126670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12666Cu;
    // 0x126670: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE0u, 0x12666Cu, 0x126674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126674u;
label_126674:
    // 0x126674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126678: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x126678u;
    SET_GPR_U32(ctx, 31, 0x126680u);
    ctx->pc = 0x12667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126678u;
    // 0x12667c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x126678u, 0x126680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126680u;
label_126680:
    // 0x126680: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x126680u;
    {
        const bool branch_taken_0x126680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126680u;
        // 0x126684: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126680) {
            ctx->pc = 0x12664Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12664c;
        }
    }
    ctx->pc = 0x126688u;
    // 0x126688: 0x9242023c  lbu         $v0, 0x23C($s2)
    ctx->pc = 0x126688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
    // 0x12668c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x12668cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x126690: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x126690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x126694: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x126694u;
    {
        const bool branch_taken_0x126694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126694u;
        // 0x126698: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126694) {
            ctx->pc = 0x126668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126668;
        }
    }
    ctx->pc = 0x12669Cu;
label_12669c:
    // 0x12669c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12669cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1266a0:
    // 0x1266a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1266a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1266a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1266a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1266a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1266a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1266ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1266acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1266b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1266b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1266b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1266b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1266b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1266B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1266BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266B8u;
        // 0x1266bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1266B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1266C0u;
}
