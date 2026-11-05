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

// Function: sub_0010E8B0
// Address: 0x10e8b0 - 0x10e8e8
void sub_0010E8B0_0x10e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E8B0_0x10e8b0");
#endif

    switch (ctx->pc) {
        case 0x10e8b0u: goto label_10e8b0;
        case 0x10e8b4u: goto label_10e8b4;
        case 0x10e8b8u: goto label_10e8b8;
        case 0x10e8bcu: goto label_10e8bc;
        case 0x10e8c0u: goto label_10e8c0;
        case 0x10e8c4u: goto label_10e8c4;
        case 0x10e8c8u: goto label_10e8c8;
        case 0x10e8ccu: goto label_10e8cc;
        case 0x10e8d0u: goto label_10e8d0;
        case 0x10e8d4u: goto label_10e8d4;
        case 0x10e8d8u: goto label_10e8d8;
        case 0x10e8dcu: goto label_10e8dc;
        case 0x10e8e0u: goto label_10e8e0;
        case 0x10e8e4u: goto label_10e8e4;
        default: break;
    }

    ctx->pc = 0x10e8b0u;

label_10e8b0:
    // 0x10e8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e8b4:
    // 0x10e8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e8b8:
    // 0x10e8b8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e8bc:
    // 0x10e8bc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_10e8c0:
    if (ctx->pc == 0x10E8C0u) {
        ctx->pc = 0x10E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8BCu;
        // 0x10e8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E8C4u;
        goto label_10e8c4;
    }
    ctx->pc = 0x10E8BCu;
    {
        const bool branch_taken_0x10e8bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8BCu;
        // 0x10e8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8bc) {
            ctx->pc = 0x10E8DCu;
            goto label_10e8dc;
        }
    }
    ctx->pc = 0x10E8C4u;
label_10e8c4:
    // 0x10e8c4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e8c8:
    // 0x10e8c8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x10e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_10e8cc:
    // 0x10e8cc: 0x40f809  jalr        $v0
label_10e8d0:
    if (ctx->pc == 0x10E8D0u) {
        ctx->pc = 0x10E8D4u;
        goto label_10e8d4;
    }
    ctx->pc = 0x10E8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E8D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E8CCu, 0x10E8D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E8D4u;
label_10e8d4:
    // 0x10e8d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e8d8:
    if (ctx->pc == 0x10E8D8u) {
        ctx->pc = 0x10E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8D4u;
        // 0x10e8d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E8DCu;
        goto label_10e8dc;
    }
    ctx->pc = 0x10E8D4u;
    {
        const bool branch_taken_0x10e8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8D4u;
        // 0x10e8d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8d4) {
            ctx->pc = 0x10E8E0u;
            goto label_10e8e0;
        }
    }
    ctx->pc = 0x10E8DCu;
label_10e8dc:
    // 0x10e8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e8e0:
    // 0x10e8e0: 0x3e00008  jr          $ra
label_10e8e4:
    if (ctx->pc == 0x10E8E4u) {
        ctx->pc = 0x10E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8E0u;
        // 0x10e8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E8E8u;
        goto label_fallthrough_0x10e8e0;
    }
    ctx->pc = 0x10E8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8E0u;
        // 0x10e8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e8e0:
    ctx->pc = 0x10E8E8u;
}
