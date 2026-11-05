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

// Function: sub_0017C000
// Address: 0x17c000 - 0x17c030
void sub_0017C000_0x17c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C000_0x17c000");
#endif

    switch (ctx->pc) {
        case 0x17c024u: goto label_17c024;
        default: break;
    }

    ctx->pc = 0x17c000u;

    // 0x17c000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c008: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17c00c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C00Cu;
    {
        const bool branch_taken_0x17c00c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C00Cu;
        // 0x17c010: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c00c) {
            ctx->pc = 0x17C028u;
            goto label_17c028;
        }
    }
    ctx->pc = 0x17C014u;
    // 0x17c014: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C014u;
    {
        const bool branch_taken_0x17c014 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C014u;
        // 0x17c018: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c014) {
            ctx->pc = 0x17C028u;
            goto label_17c028;
        }
    }
    ctx->pc = 0x17C01Cu;
    // 0x17c01c: 0xc05f00c  jal         func_17C030
    ctx->pc = 0x17C01Cu;
    SET_GPR_U32(ctx, 31, 0x17C024u);
    ctx->pc = 0x17C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C030u, 0x17C01Cu, 0x17C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C024u;
label_17c024:
    // 0x17c024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c028:
    // 0x17c028: 0x3e00008  jr          $ra
    ctx->pc = 0x17C028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C028u;
        // 0x17c02c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C030u;
}
