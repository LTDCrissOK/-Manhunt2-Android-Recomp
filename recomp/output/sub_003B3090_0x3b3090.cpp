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

// Function: sub_003B3090
// Address: 0x3b3090 - 0x3b30e0
void sub_003B3090_0x3b3090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3090_0x3b3090");
#endif

    switch (ctx->pc) {
        case 0x3b30b8u: goto label_3b30b8;
        default: break;
    }

    ctx->pc = 0x3b3090u;

    // 0x3b3090: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b3090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3b3094: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b3094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b3098: 0x8c4393f4  lw          $v1, -0x6C0C($v0)
    ctx->pc = 0x3b3098u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6593F4u));
    // 0x3b309c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b30a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b30a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b30a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b30a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b30a8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B30A8u;
    {
        const bool branch_taken_0x3b30a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30A8u;
        // 0x3b30ac: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b30a8) {
            ctx->pc = 0x3B30D0u;
            goto label_3b30d0;
        }
    }
    ctx->pc = 0x3B30B0u;
    // 0x3b30b0: 0xc0ecbfc  jal         func_3B2FF0
    ctx->pc = 0x3B30B0u;
    SET_GPR_U32(ctx, 31, 0x3B30B8u);
    ctx->pc = 0x3B2FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FF0u, 0x3B30B0u, 0x3B30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B30B8u;
label_3b30b8:
    // 0x3b30b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b30b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b30bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B30BCu;
    {
        const bool branch_taken_0x3b30bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30BCu;
        // 0x3b30c0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b30bc) {
            ctx->pc = 0x3B30D0u;
            goto label_3b30d0;
        }
    }
    ctx->pc = 0x3B30C4u;
    // 0x3b30c4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3b30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3b30c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b30c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b30cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b30ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3b30d0:
    // 0x3b30d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b30d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b30d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b30d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b30d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B30D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30D8u;
        // 0x3b30dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B30D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B30E0u;
}
