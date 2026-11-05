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

// Function: sub_003E4100
// Address: 0x3e4100 - 0x3e4130
void sub_003E4100_0x3e4100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4100_0x3e4100");
#endif

    switch (ctx->pc) {
        case 0x3e4124u: goto label_3e4124;
        default: break;
    }

    ctx->pc = 0x3e4100u;

    // 0x3e4100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e4100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e4104: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e4104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e4108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e4108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e410c: 0x244238e0  addiu       $v0, $v0, 0x38E0
    ctx->pc = 0x3e410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14560));
    // 0x3e4110: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3e4110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e4114: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E4114u;
    {
        const bool branch_taken_0x3e4114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4114u;
        // 0x3e4118: 0xac820c04  sw          $v0, 0xC04($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4114) {
            ctx->pc = 0x3E4124u;
            goto label_3e4124;
        }
    }
    ctx->pc = 0x3E411Cu;
    // 0x3e411c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E411Cu;
    SET_GPR_U32(ctx, 31, 0x3E4124u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E411Cu, 0x3E4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4124u;
label_3e4124:
    // 0x3e4124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e4124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e4128: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4128u;
        // 0x3e412c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4130u;
}
