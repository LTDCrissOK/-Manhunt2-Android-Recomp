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

// Function: sub_0014E0D8
// Address: 0x14e0d8 - 0x14e118
void sub_0014E0D8_0x14e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E0D8_0x14e0d8");
#endif

    switch (ctx->pc) {
        case 0x14e0fcu: goto label_14e0fc;
        default: break;
    }

    ctx->pc = 0x14e0d8u;

    // 0x14e0d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e0dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14e0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14e0e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14e0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e0e8: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x14e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14e0ec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E0ECu;
    {
        const bool branch_taken_0x14e0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e0ec) {
            ctx->pc = 0x14E0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E0ECu;
            // 0x14e0f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E10Cu;
            goto label_14e10c;
        }
    }
    ctx->pc = 0x14E0F4u;
    // 0x14e0f4: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x14E0F4u;
    SET_GPR_U32(ctx, 31, 0x14E0FCu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x14E0F4u, 0x14E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0FCu;
label_14e0fc:
    // 0x14e0fc: 0xae000968  sw          $zero, 0x968($s0)
    ctx->pc = 0x14e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 0));
    // 0x14e100: 0xae0008d8  sw          $zero, 0x8D8($s0)
    ctx->pc = 0x14e100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 0));
    // 0x14e104: 0xae000914  sw          $zero, 0x914($s0)
    ctx->pc = 0x14e104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 0));
    // 0x14e108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14e108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14e10c:
    // 0x14e10c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14e10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e110: 0x3e00008  jr          $ra
    ctx->pc = 0x14E110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E110u;
        // 0x14e114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E118u;
}
