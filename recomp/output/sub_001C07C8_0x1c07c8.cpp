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

// Function: sub_001C07C8
// Address: 0x1c07c8 - 0x1c0818
void sub_001C07C8_0x1c07c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C07C8_0x1c07c8");
#endif

    switch (ctx->pc) {
        case 0x1c0804u: goto label_1c0804;
        default: break;
    }

    ctx->pc = 0x1c07c8u;

    // 0x1c07c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c07c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c07cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c07d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c07d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c07d4: 0x8c8504bc  lw          $a1, 0x4BC($a0)
    ctx->pc = 0x1c07d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1212)));
    // 0x1c07d8: 0x8ca201a0  lw          $v0, 0x1A0($a1)
    ctx->pc = 0x1c07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x1c07dc: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C07DCu;
    {
        const bool branch_taken_0x1c07dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c07dc) {
            ctx->pc = 0x1C07E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C07DCu;
            // 0x1c07e0: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C07ECu;
            goto label_1c07ec;
        }
    }
    ctx->pc = 0x1C07E4u;
    // 0x1c07e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C07E4u;
    {
        const bool branch_taken_0x1c07e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07E4u;
        // 0x1c07e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07e4) {
            ctx->pc = 0x1C080Cu;
            goto label_1c080c;
        }
    }
    ctx->pc = 0x1C07ECu;
label_1c07ec:
    // 0x1c07ec: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1c07ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1c07f0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1c07f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1c07f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C07F4u;
    {
        const bool branch_taken_0x1c07f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07F4u;
        // 0x1c07f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07f4) {
            ctx->pc = 0x1C080Cu;
            goto label_1c080c;
        }
    }
    ctx->pc = 0x1C07FCu;
    // 0x1c07fc: 0xc06f13c  jal         func_1BC4F0
    ctx->pc = 0x1C07FCu;
    SET_GPR_U32(ctx, 31, 0x1C0804u);
    ctx->pc = 0x1BC4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC4F0u, 0x1C07FCu, 0x1C0804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0804u;
label_1c0804:
    // 0x1c0804: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0804u;
    {
        const bool branch_taken_0x1c0804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0804u;
        // 0x1c0808: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0804) {
            ctx->pc = 0x1C0810u;
            goto label_1c0810;
        }
    }
    ctx->pc = 0x1C080Cu;
label_1c080c:
    // 0x1c080c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0810:
    // 0x1c0810: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0810u;
        // 0x1c0814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0818u;
}
