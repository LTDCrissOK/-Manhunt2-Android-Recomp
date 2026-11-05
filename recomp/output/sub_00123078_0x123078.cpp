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

// Function: sub_00123078
// Address: 0x123078 - 0x1230f8
void sub_00123078_0x123078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123078_0x123078");
#endif

    switch (ctx->pc) {
        case 0x1230a8u: goto label_1230a8;
        case 0x1230b8u: goto label_1230b8;
        case 0x1230d0u: goto label_1230d0;
        default: break;
    }

    ctx->pc = 0x123078u;

    // 0x123078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12307c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123080: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123084: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12308c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12308cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123090: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123094: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x123094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123098: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12309c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12309cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230a0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1230A0u;
    SET_GPR_U32(ctx, 31, 0x1230A8u);
    ctx->pc = 0x1230A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230A0u;
    // 0x1230a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1230A0u, 0x1230A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230A8u;
label_1230a8:
    // 0x1230a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1230A8u;
    {
        const bool branch_taken_0x1230a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230A8u;
        // 0x1230ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230a8) {
            ctx->pc = 0x1230DCu;
            goto label_1230dc;
        }
    }
    ctx->pc = 0x1230B0u;
    // 0x1230b0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1230B0u;
    SET_GPR_U32(ctx, 31, 0x1230B8u);
    ctx->pc = 0x1230B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230B0u;
    // 0x1230b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1230B0u, 0x1230B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230B8u;
label_1230b8:
    // 0x1230b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1230B8u;
    {
        const bool branch_taken_0x1230b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230B8u;
        // 0x1230bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230b8) {
            ctx->pc = 0x1230D8u;
            goto label_1230d8;
        }
    }
    ctx->pc = 0x1230C0u;
    // 0x1230c0: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x1230c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1230c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1230c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230c8: 0xc04285a  jal         func_10A168
    ctx->pc = 0x1230C8u;
    SET_GPR_U32(ctx, 31, 0x1230D0u);
    ctx->pc = 0x1230CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230C8u;
    // 0x1230cc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A168u, 0x1230C8u, 0x1230D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230D0u;
label_1230d0:
    // 0x1230d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1230D0u;
    {
        const bool branch_taken_0x1230d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230D0u;
        // 0x1230d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230d0) {
            ctx->pc = 0x1230E0u;
            goto label_1230e0;
        }
    }
    ctx->pc = 0x1230D8u;
label_1230d8:
    // 0x1230d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1230d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1230dc:
    // 0x1230dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1230dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1230e0:
    // 0x1230e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1230e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1230e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1230e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1230e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1230e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1230ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1230ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1230f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1230F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1230F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230F0u;
        // 0x1230f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1230F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1230F8u;
}
