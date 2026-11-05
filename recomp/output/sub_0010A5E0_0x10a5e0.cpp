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

// Function: sub_0010A5E0
// Address: 0x10a5e0 - 0x10a6b0
void sub_0010A5E0_0x10a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A5E0_0x10a5e0");
#endif

    switch (ctx->pc) {
        case 0x10a610u: goto label_10a610;
        case 0x10a63cu: goto label_10a63c;
        case 0x10a64cu: goto label_10a64c;
        case 0x10a688u: goto label_10a688;
        default: break;
    }

    ctx->pc = 0x10a5e0u;

    // 0x10a5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a5e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10a5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10a5f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10a5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a5fc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x10a5fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a600: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10a604: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10a608: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A608u;
    SET_GPR_U32(ctx, 31, 0x10A610u);
    ctx->pc = 0x10A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A608u;
    // 0x10a60c: 0x2613000c  addiu       $s3, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A608u, 0x10A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A610u;
label_10a610:
    // 0x10a610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a614: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x10a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10a618: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a61c: 0x8c72001c  lw          $s2, 0x1C($v1)
    ctx->pc = 0x10a61cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10a620: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x10a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x10a624: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10A624u;
    {
        const bool branch_taken_0x10a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A624u;
        // 0x10a628: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a624) {
            ctx->pc = 0x10A690u;
            goto label_10a690;
        }
    }
    ctx->pc = 0x10A62Cu;
    // 0x10a62c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a634: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10A634u;
    SET_GPR_U32(ctx, 31, 0x10A63Cu);
    ctx->pc = 0x10A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A634u;
    // 0x10a638: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10A634u, 0x10A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A63Cu;
label_10a63c:
    // 0x10a63c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10a63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a644: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A644u;
    SET_GPR_U32(ctx, 31, 0x10A64Cu);
    ctx->pc = 0x10A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A644u;
    // 0x10a648: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A644u, 0x10A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A64Cu;
label_10a64c:
    // 0x10a64c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10a64cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a650: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10a654: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A654u;
    {
        const bool branch_taken_0x10a654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A654u;
        // 0x10a658: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a654) {
            ctx->pc = 0x10A664u;
            goto label_10a664;
        }
    }
    ctx->pc = 0x10A65Cu;
    // 0x10a65c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10A65Cu;
    {
        const bool branch_taken_0x10a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A65Cu;
        // 0x10a660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a65c) {
            ctx->pc = 0x10A690u;
            goto label_10a690;
        }
    }
    ctx->pc = 0x10A664u;
label_10a664:
    // 0x10a664: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x10a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10a668: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a66c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x10a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10a670: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x10a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x10a674: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A674u;
    {
        const bool branch_taken_0x10a674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a674) {
            ctx->pc = 0x10A678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A674u;
            // 0x10a678: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A690u;
            goto label_10a690;
        }
    }
    ctx->pc = 0x10A67Cu;
    // 0x10a67c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10a680: 0xc044158  jal         func_110560
    ctx->pc = 0x10A680u;
    SET_GPR_U32(ctx, 31, 0x10A688u);
    ctx->pc = 0x10A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A680u;
    // 0x10a684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110560u, 0x10A680u, 0x10A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A688u;
label_10a688:
    // 0x10a688: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x10a688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x10a68c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10a68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10a690:
    // 0x10a690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a69c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10a69cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a6a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10a6a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a6a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10a6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6A8u;
        // 0x10a6ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A6B0u;
}
