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

// Function: sub_0014D7D0
// Address: 0x14d7d0 - 0x14d818
void sub_0014D7D0_0x14d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D7D0_0x14d7d0");
#endif

    switch (ctx->pc) {
        case 0x14d7f4u: goto label_14d7f4;
        default: break;
    }

    ctx->pc = 0x14d7d0u;

    // 0x14d7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d7d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d7d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d7e0: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x14d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14d7e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D7E4u;
    {
        const bool branch_taken_0x14d7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d7e4) {
            ctx->pc = 0x14D7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D7E4u;
            // 0x14d7e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D808u;
            goto label_14d808;
        }
    }
    ctx->pc = 0x14D7ECu;
    // 0x14d7ec: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x14D7ECu;
    SET_GPR_U32(ctx, 31, 0x14D7F4u);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x14D7ECu, 0x14D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7F4u;
label_14d7f4:
    // 0x14d7f4: 0xae00056c  sw          $zero, 0x56C($s0)
    ctx->pc = 0x14d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 0));
    // 0x14d7f8: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x14d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x14d7fc: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x14d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x14d800: 0xae000568  sw          $zero, 0x568($s0)
    ctx->pc = 0x14d800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 0));
    // 0x14d804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d808:
    // 0x14d808: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d80c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D80Cu;
        // 0x14d810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D814u;
    // 0x14d814: 0x0  nop
    ctx->pc = 0x14d814u;
    // NOP
    ctx->pc = 0x14d818u;
}
