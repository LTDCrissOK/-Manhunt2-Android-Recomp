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

// Function: sub_001EA638
// Address: 0x1ea638 - 0x1ea6e0
void sub_001EA638_0x1ea638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA638_0x1ea638");
#endif

    switch (ctx->pc) {
        case 0x1ea690u: goto label_1ea690;
        default: break;
    }

    ctx->pc = 0x1ea638u;

    // 0x1ea638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ea63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ea640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ea644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ea644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ea648: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ea648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea64c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ea64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ea650: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ea650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea654: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x1ea654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1ea658: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1ea658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ea65c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ea65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ea660: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EA660u;
    {
        const bool branch_taken_0x1ea660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA660u;
        // 0x1ea664: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea660) {
            ctx->pc = 0x1EA6C4u;
            goto label_1ea6c4;
        }
    }
    ctx->pc = 0x1EA668u;
    // 0x1ea668: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x1ea668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x1ea66c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ea66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ea670: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EA670u;
    {
        const bool branch_taken_0x1ea670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA670u;
        // 0x1ea674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea670) {
            ctx->pc = 0x1EA6C8u;
            goto label_1ea6c8;
        }
    }
    ctx->pc = 0x1EA678u;
    // 0x1ea678: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1ea678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ea67c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1ea67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ea680: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA680u;
    {
        const bool branch_taken_0x1ea680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA680u;
        // 0x1ea684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea680) {
            ctx->pc = 0x1EA6C8u;
            goto label_1ea6c8;
        }
    }
    ctx->pc = 0x1EA688u;
    // 0x1ea688: 0xc07a9b8  jal         func_1EA6E0
    ctx->pc = 0x1EA688u;
    SET_GPR_U32(ctx, 31, 0x1EA690u);
    ctx->pc = 0x1EA68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA688u;
    // 0x1ea68c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA6E0u, 0x1EA688u, 0x1EA690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA690u;
label_1ea690:
    // 0x1ea690: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EA690u;
    {
        const bool branch_taken_0x1ea690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA690u;
        // 0x1ea694: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea690) {
            ctx->pc = 0x1EA6C4u;
            goto label_1ea6c4;
        }
    }
    ctx->pc = 0x1EA698u;
    // 0x1ea698: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1ea698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ea69c: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1ea69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x1ea6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea6a4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1ea6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1ea6a8: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x1ea6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x1ea6ac: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x1ea6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x1ea6b0: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x1ea6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x1ea6b4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1ea6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1ea6b8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1ea6b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ea6bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EA6BCu;
    {
        const bool branch_taken_0x1ea6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6BCu;
        // 0x1ea6c0: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6bc) {
            ctx->pc = 0x1EA6C8u;
            goto label_1ea6c8;
        }
    }
    ctx->pc = 0x1EA6C4u;
label_1ea6c4:
    // 0x1ea6c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea6c8:
    // 0x1ea6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea6cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ea6ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea6d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ea6d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea6d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ea6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ea6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6D8u;
        // 0x1ea6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA6E0u;
}
