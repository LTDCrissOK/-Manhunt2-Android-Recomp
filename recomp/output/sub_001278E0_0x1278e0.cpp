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

// Function: sub_001278E0
// Address: 0x1278e0 - 0x127928
void sub_001278E0_0x1278e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001278E0_0x1278e0");
#endif

    switch (ctx->pc) {
        case 0x127914u: goto label_127914;
        default: break;
    }

    ctx->pc = 0x1278e0u;

    // 0x1278e0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1278e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1278e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1278e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1278e8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1278e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1278ec: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1278ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1278f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1278f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1278f4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1278f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1278f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1278f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1278fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1278fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x127900: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x127900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x127904: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127904u;
    {
        const bool branch_taken_0x127904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127904u;
        // 0x127908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127904) {
            ctx->pc = 0x12791Cu;
            goto label_12791c;
        }
    }
    ctx->pc = 0x12790Cu;
    // 0x12790c: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x12790Cu;
    SET_GPR_U32(ctx, 31, 0x127914u);
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x12790Cu, 0x127914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127914u;
label_127914:
    // 0x127914: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127914u;
    {
        const bool branch_taken_0x127914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127914u;
        // 0x127918: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127914) {
            ctx->pc = 0x127920u;
            goto label_127920;
        }
    }
    ctx->pc = 0x12791Cu;
label_12791c:
    // 0x12791c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12791cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_127920:
    // 0x127920: 0x3e00008  jr          $ra
    ctx->pc = 0x127920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127920u;
        // 0x127924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127928u;
}
