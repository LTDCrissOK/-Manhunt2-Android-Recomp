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

// Function: sub_001CE9F0
// Address: 0x1ce9f0 - 0x1cea40
void sub_001CE9F0_0x1ce9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE9F0_0x1ce9f0");
#endif

    switch (ctx->pc) {
        case 0x1cea04u: goto label_1cea04;
        case 0x1cea30u: goto label_1cea30;
        default: break;
    }

    ctx->pc = 0x1ce9f0u;

    // 0x1ce9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce9f4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CE9F4u;
    {
        const bool branch_taken_0x1ce9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9F4u;
        // 0x1ce9f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9f4) {
            ctx->pc = 0x1CEA20u;
            goto label_1cea20;
        }
    }
    ctx->pc = 0x1CE9FCu;
    // 0x1ce9fc: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1CE9FCu;
    SET_GPR_U32(ctx, 31, 0x1CEA04u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1CE9FCu, 0x1CEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA04u;
label_1cea04:
    // 0x1cea04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cea04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea08: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CEA08u;
    {
        const bool branch_taken_0x1cea08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA08u;
        // 0x1cea0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea08) {
            ctx->pc = 0x1CEA30u;
            goto label_1cea30;
        }
    }
    ctx->pc = 0x1CEA10u;
    // 0x1cea10: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x1cea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1cea14: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x1cea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x1cea18: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEA18u;
    {
        const bool branch_taken_0x1cea18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cea18) {
            ctx->pc = 0x1CEA28u;
            goto label_1cea28;
        }
    }
    ctx->pc = 0x1CEA20u;
label_1cea20:
    // 0x1cea20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEA20u;
    {
        const bool branch_taken_0x1cea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA20u;
        // 0x1cea24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea20) {
            ctx->pc = 0x1CEA30u;
            goto label_1cea30;
        }
    }
    ctx->pc = 0x1CEA28u;
label_1cea28:
    // 0x1cea28: 0xc09855c  jal         func_261570
    ctx->pc = 0x1CEA28u;
    SET_GPR_U32(ctx, 31, 0x1CEA30u);
    ctx->pc = 0x261570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261570u, 0x1CEA28u, 0x1CEA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA30u;
label_1cea30:
    // 0x1cea30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cea30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cea34: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA34u;
        // 0x1cea38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA3Cu;
    // 0x1cea3c: 0x0  nop
    ctx->pc = 0x1cea3cu;
    // NOP
    ctx->pc = 0x1cea40u;
}
