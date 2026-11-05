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

// Function: sub_003B1020
// Address: 0x3b1020 - 0x3b1058
void sub_003B1020_0x3b1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1020_0x3b1020");
#endif

    ctx->pc = 0x3b1020u;

    // 0x3b1020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b1024: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b1024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1028: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1028u;
    {
        const bool branch_taken_0x3b1028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1028u;
        // 0x3b102c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1028) {
            ctx->pc = 0x3B1048u;
            goto label_3b1048;
        }
    }
    ctx->pc = 0x3B1030u;
    // 0x3b1030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1038: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3b1038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3b103c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3b103cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3b1040: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3B1040u;
    ctx->pc = 0x3B1044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1040u;
    // 0x3b1044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3B1048u;
label_3b1048:
    // 0x3b1048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b104c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B104Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B104Cu;
        // 0x3b1050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B104Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1054u;
    // 0x3b1054: 0x0  nop
    ctx->pc = 0x3b1054u;
    // NOP
    ctx->pc = 0x3b1058u;
}
