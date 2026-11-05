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

// Function: sub_00120E90
// Address: 0x120e90 - 0x120ec0
void sub_00120E90_0x120e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120E90_0x120e90");
#endif

    switch (ctx->pc) {
        case 0x120eb4u: goto label_120eb4;
        default: break;
    }

    ctx->pc = 0x120e90u;

    // 0x120e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x120e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x120e94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x120e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x120e98: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120E98u;
    {
        const bool branch_taken_0x120e98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x120E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E98u;
        // 0x120e9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e98) {
            ctx->pc = 0x120EB4u;
            goto label_120eb4;
        }
    }
    ctx->pc = 0x120EA0u;
    // 0x120ea0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120EA0u;
    {
        const bool branch_taken_0x120ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x120EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EA0u;
        // 0x120ea4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ea0) {
            ctx->pc = 0x120EB8u;
            goto label_120eb8;
        }
    }
    ctx->pc = 0x120EA8u;
    // 0x120ea8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x120ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x120eac: 0xc047f5c  jal         func_11FD70
    ctx->pc = 0x120EACu;
    SET_GPR_U32(ctx, 31, 0x120EB4u);
    ctx->pc = 0x120EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120EACu;
    // 0x120eb0: 0x24849e60  addiu       $a0, $a0, -0x61A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD70u, 0x120EACu, 0x120EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EB4u;
label_120eb4:
    // 0x120eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120eb8:
    // 0x120eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x120EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EB8u;
        // 0x120ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120EC0u;
}
