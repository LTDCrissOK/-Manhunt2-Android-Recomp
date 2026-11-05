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

// Function: sub_002689A8
// Address: 0x2689a8 - 0x2689e0
void sub_002689A8_0x2689a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002689A8_0x2689a8");
#endif

    ctx->pc = 0x2689a8u;

    // 0x2689a8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2689a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2689ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2689acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689b0: 0x8cc49dc0  lw          $a0, -0x6240($a2)
    ctx->pc = 0x2689b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9DC0u));
    // 0x2689b4: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x2689b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2689b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2689B8u;
    {
        const bool branch_taken_0x2689b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2689BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689B8u;
        // 0x2689bc: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689b8) {
            ctx->pc = 0x2689D8u;
            goto label_2689d8;
        }
    }
    ctx->pc = 0x2689C0u;
    // 0x2689c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2689c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2689c4: 0x2442aed0  addiu       $v0, $v0, -0x5130
    ctx->pc = 0x2689c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946512));
    // 0x2689c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2689c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2689cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2689ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2689d0: 0xacc49dc0  sw          $a0, -0x6240($a2)
    ctx->pc = 0x2689d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294942144), GPR_U32(ctx, 4));
    // 0x2689d4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2689d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2689d8:
    // 0x2689d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2689D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2689D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2689E0u;
}
