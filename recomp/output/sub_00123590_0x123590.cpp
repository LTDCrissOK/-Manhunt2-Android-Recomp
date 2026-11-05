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

// Function: sub_00123590
// Address: 0x123590 - 0x123620
void sub_00123590_0x123590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123590_0x123590");
#endif

    switch (ctx->pc) {
        case 0x1235c0u: goto label_1235c0;
        case 0x1235d0u: goto label_1235d0;
        case 0x1235e0u: goto label_1235e0;
        case 0x1235f8u: goto label_1235f8;
        default: break;
    }

    ctx->pc = 0x123590u;

    // 0x123590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x123594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123598: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12359c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12359cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1235a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1235a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1235a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1235a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1235ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1235acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1235b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1235b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1235b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235b8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1235B8u;
    SET_GPR_U32(ctx, 31, 0x1235C0u);
    ctx->pc = 0x1235BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235B8u;
    // 0x1235bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1235B8u, 0x1235C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235C0u;
label_1235c0:
    // 0x1235c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1235C0u;
    {
        const bool branch_taken_0x1235c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235C0u;
        // 0x1235c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235c0) {
            ctx->pc = 0x123604u;
            goto label_123604;
        }
    }
    ctx->pc = 0x1235C8u;
    // 0x1235c8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1235C8u;
    SET_GPR_U32(ctx, 31, 0x1235D0u);
    ctx->pc = 0x1235CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235C8u;
    // 0x1235cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1235C8u, 0x1235D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235D0u;
label_1235d0:
    // 0x1235d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1235D0u;
    {
        const bool branch_taken_0x1235d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235D0u;
        // 0x1235d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235d0) {
            ctx->pc = 0x123604u;
            goto label_123604;
        }
    }
    ctx->pc = 0x1235D8u;
    // 0x1235d8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1235D8u;
    SET_GPR_U32(ctx, 31, 0x1235E0u);
    ctx->pc = 0x1235DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235D8u;
    // 0x1235dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1235D8u, 0x1235E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235E0u;
label_1235e0:
    // 0x1235e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1235E0u;
    {
        const bool branch_taken_0x1235e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235E0u;
        // 0x1235e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235e0) {
            ctx->pc = 0x123600u;
            goto label_123600;
        }
    }
    ctx->pc = 0x1235E8u;
    // 0x1235e8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1235e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1235ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1235ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235f0: 0xc042a82  jal         func_10AA08
    ctx->pc = 0x1235F0u;
    SET_GPR_U32(ctx, 31, 0x1235F8u);
    ctx->pc = 0x1235F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235F0u;
    // 0x1235f4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA08u, 0x1235F0u, 0x1235F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235F8u;
label_1235f8:
    // 0x1235f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1235F8u;
    {
        const bool branch_taken_0x1235f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F8u;
        // 0x1235fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f8) {
            ctx->pc = 0x123608u;
            goto label_123608;
        }
    }
    ctx->pc = 0x123600u;
label_123600:
    // 0x123600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123604:
    // 0x123604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123608:
    // 0x123608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12360c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12360cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123610: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123614: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x123614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123618: 0x3e00008  jr          $ra
    ctx->pc = 0x123618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123618u;
        // 0x12361c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123620u;
}
