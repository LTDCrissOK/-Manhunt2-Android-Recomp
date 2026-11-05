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

// Function: sub_001CC170
// Address: 0x1cc170 - 0x1cc1a8
void sub_001CC170_0x1cc170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC170_0x1cc170");
#endif

    switch (ctx->pc) {
        case 0x1cc198u: goto label_1cc198;
        default: break;
    }

    ctx->pc = 0x1cc170u;

    // 0x1cc170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc178: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc17c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC17Cu;
    {
        const bool branch_taken_0x1cc17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC17Cu;
        // 0x1cc180: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc17c) {
            ctx->pc = 0x1CC19Cu;
            goto label_1cc19c;
        }
    }
    ctx->pc = 0x1CC184u;
    // 0x1cc184: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cc184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cc188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC188u;
    {
        const bool branch_taken_0x1cc188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc188) {
            ctx->pc = 0x1CC19Cu;
            goto label_1cc19c;
        }
    }
    ctx->pc = 0x1CC190u;
    // 0x1cc190: 0xc073608  jal         func_1CD820
    ctx->pc = 0x1CC190u;
    SET_GPR_U32(ctx, 31, 0x1CC198u);
    ctx->pc = 0x1CC194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC190u;
    // 0x1cc194: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD820u, 0x1CC190u, 0x1CC198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC198u;
label_1cc198:
    // 0x1cc198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc19c:
    // 0x1cc19c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC19Cu;
        // 0x1cc1a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC1A4u;
    // 0x1cc1a4: 0x0  nop
    ctx->pc = 0x1cc1a4u;
    // NOP
    ctx->pc = 0x1cc1a8u;
}
