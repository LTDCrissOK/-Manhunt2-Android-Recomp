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

// Function: sub_0010E4B8
// Address: 0x10e4b8 - 0x10e4f0
void sub_0010E4B8_0x10e4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E4B8_0x10e4b8");
#endif

    switch (ctx->pc) {
        case 0x10e4b8u: goto label_10e4b8;
        case 0x10e4bcu: goto label_10e4bc;
        case 0x10e4c0u: goto label_10e4c0;
        case 0x10e4c4u: goto label_10e4c4;
        case 0x10e4c8u: goto label_10e4c8;
        case 0x10e4ccu: goto label_10e4cc;
        case 0x10e4d0u: goto label_10e4d0;
        case 0x10e4d4u: goto label_10e4d4;
        case 0x10e4d8u: goto label_10e4d8;
        case 0x10e4dcu: goto label_10e4dc;
        case 0x10e4e0u: goto label_10e4e0;
        case 0x10e4e4u: goto label_10e4e4;
        case 0x10e4e8u: goto label_10e4e8;
        case 0x10e4ecu: goto label_10e4ec;
        default: break;
    }

    ctx->pc = 0x10e4b8u;

label_10e4b8:
    // 0x10e4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e4bc:
    // 0x10e4bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e4c0:
    // 0x10e4c0: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e4c4:
    // 0x10e4c4: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_10e4c8:
    if (ctx->pc == 0x10E4C8u) {
        ctx->pc = 0x10E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4C4u;
        // 0x10e4c8: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4CCu;
        goto label_10e4cc;
    }
    ctx->pc = 0x10E4C4u;
    {
        const bool branch_taken_0x10e4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e4c4) {
            ctx->pc = 0x10E4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E4C4u;
            // 0x10e4c8: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E4D4u;
            goto label_10e4d4;
        }
    }
    ctx->pc = 0x10E4CCu;
label_10e4cc:
    // 0x10e4cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_10e4d0:
    if (ctx->pc == 0x10E4D0u) {
        ctx->pc = 0x10E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4CCu;
        // 0x10e4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4D4u;
        goto label_10e4d4;
    }
    ctx->pc = 0x10E4CCu;
    {
        const bool branch_taken_0x10e4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4CCu;
        // 0x10e4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4cc) {
            ctx->pc = 0x10E4E0u;
            goto label_10e4e0;
        }
    }
    ctx->pc = 0x10E4D4u;
label_10e4d4:
    // 0x10e4d4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x10e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_10e4d8:
    // 0x10e4d8: 0x40f809  jalr        $v0
label_10e4dc:
    if (ctx->pc == 0x10E4DCu) {
        ctx->pc = 0x10E4E0u;
        goto label_10e4e0;
    }
    ctx->pc = 0x10E4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E4E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E4D8u, 0x10E4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E4E0u;
label_10e4e0:
    // 0x10e4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e4e4:
    // 0x10e4e4: 0x3e00008  jr          $ra
label_10e4e8:
    if (ctx->pc == 0x10E4E8u) {
        ctx->pc = 0x10E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4E4u;
        // 0x10e4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4ECu;
        goto label_10e4ec;
    }
    ctx->pc = 0x10E4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4E4u;
        // 0x10e4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E4ECu;
label_10e4ec:
    // 0x10e4ec: 0x0  nop
    ctx->pc = 0x10e4ecu;
    // NOP
    ctx->pc = 0x10e4f0u;
}
