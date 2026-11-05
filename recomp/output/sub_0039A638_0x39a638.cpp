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

// Function: sub_0039A638
// Address: 0x39a638 - 0x39a6b8
void sub_0039A638_0x39a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A638_0x39a638");
#endif

    switch (ctx->pc) {
        case 0x39a65cu: goto label_39a65c;
        case 0x39a670u: goto label_39a670;
        case 0x39a684u: goto label_39a684;
        default: break;
    }

    ctx->pc = 0x39a638u;

    // 0x39a638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39a63c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39a640: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x39a640u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x39a644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39a648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39a64c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39a650: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39a654: 0xc0e6a6c  jal         func_39A9B0
    ctx->pc = 0x39A654u;
    SET_GPR_U32(ctx, 31, 0x39A65Cu);
    ctx->pc = 0x39A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A654u;
    // 0x39a658: 0x26649cf4  addiu       $a0, $s3, -0x630C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941940));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9B0u, 0x39A654u, 0x39A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A65Cu;
label_39a65c:
    // 0x39a65c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x39A65Cu;
    {
        const bool branch_taken_0x39a65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A65Cu;
        // 0x39a660: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a65c) {
            ctx->pc = 0x39A698u;
            goto label_39a698;
        }
    }
    ctx->pc = 0x39A664u;
    // 0x39a664: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39a664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a668: 0x24509d00  addiu       $s0, $v0, -0x6300
    ctx->pc = 0x39a668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941952));
    // 0x39a66c: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x39a66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_39a670:
    // 0x39a670: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x39a670u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39a674: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A674u;
    {
        const bool branch_taken_0x39a674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x39a674) {
            ctx->pc = 0x39A678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A674u;
            // 0x39a678: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A688u;
            goto label_39a688;
        }
    }
    ctx->pc = 0x39A67Cu;
    // 0x39a67c: 0xc0e68c6  jal         func_39A318
    ctx->pc = 0x39A67Cu;
    SET_GPR_U32(ctx, 31, 0x39A684u);
    ctx->pc = 0x39A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A67Cu;
    // 0x39a680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A318u, 0x39A67Cu, 0x39A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A684u;
label_39a684:
    // 0x39a684: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39a684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39a688:
    // 0x39a688: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x39A688u;
    {
        const bool branch_taken_0x39a688 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x39A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A688u;
        // 0x39a68c: 0x26100068  addiu       $s0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a688) {
            ctx->pc = 0x39A670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a670;
        }
    }
    ctx->pc = 0x39A690u;
    // 0x39a690: 0x26629cf4  addiu       $v0, $s3, -0x630C
    ctx->pc = 0x39a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941940));
    // 0x39a694: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39a694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_39a698:
    // 0x39a698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a69c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39a69cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39a6a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39a6a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a6a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39a6a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39a6a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39a6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x39A6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6ACu;
        // 0x39a6b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A6B4u;
    // 0x39a6b4: 0x0  nop
    ctx->pc = 0x39a6b4u;
    // NOP
    ctx->pc = 0x39a6b8u;
}
