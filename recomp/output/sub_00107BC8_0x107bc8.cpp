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

// Function: sub_00107BC8
// Address: 0x107bc8 - 0x107bf0
void sub_00107BC8_0x107bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107BC8_0x107bc8");
#endif

    switch (ctx->pc) {
        case 0x107be0u: goto label_107be0;
        default: break;
    }

    ctx->pc = 0x107bc8u;

    // 0x107bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107bcc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107BD0u;
    {
        const bool branch_taken_0x107bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BD0u;
        // 0x107bd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bd0) {
            ctx->pc = 0x107BE0u;
            goto label_107be0;
        }
    }
    ctx->pc = 0x107BD8u;
    // 0x107bd8: 0xc0455dc  jal         func_115770
    ctx->pc = 0x107BD8u;
    SET_GPR_U32(ctx, 31, 0x107BE0u);
    ctx->pc = 0x107BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BD8u;
    // 0x107bdc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115770u, 0x107BD8u, 0x107BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BE0u;
label_107be0:
    // 0x107be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107be4: 0x3e00008  jr          $ra
    ctx->pc = 0x107BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BE4u;
        // 0x107be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107BECu;
    // 0x107bec: 0x0  nop
    ctx->pc = 0x107becu;
    // NOP
    ctx->pc = 0x107bf0u;
}
