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

// Function: sub_00152CB8
// Address: 0x152cb8 - 0x152cf8
void sub_00152CB8_0x152cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152CB8_0x152cb8");
#endif

    switch (ctx->pc) {
        case 0x152cdcu: goto label_152cdc;
        default: break;
    }

    ctx->pc = 0x152cb8u;

    // 0x152cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152cc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x152cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x152cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cc8: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x152cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x152ccc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x152CCCu;
    {
        const bool branch_taken_0x152ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152ccc) {
            ctx->pc = 0x152CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CCCu;
            // 0x152cd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152CECu;
            goto label_152cec;
        }
    }
    ctx->pc = 0x152CD4u;
    // 0x152cd4: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x152CD4u;
    SET_GPR_U32(ctx, 31, 0x152CDCu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x152CD4u, 0x152CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CDCu;
label_152cdc:
    // 0x152cdc: 0xae000528  sw          $zero, 0x528($s0)
    ctx->pc = 0x152cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
    // 0x152ce0: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x152ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x152ce4: 0xae000524  sw          $zero, 0x524($s0)
    ctx->pc = 0x152ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 0));
    // 0x152ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152cec:
    // 0x152cec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x152cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x152CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CF0u;
        // 0x152cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152CF8u;
}
