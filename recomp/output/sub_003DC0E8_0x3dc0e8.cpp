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

// Function: sub_003DC0E8
// Address: 0x3dc0e8 - 0x3dc110
void sub_003DC0E8_0x3dc0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC0E8_0x3dc0e8");
#endif

    ctx->pc = 0x3dc0e8u;

    // 0x3dc0e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3dc0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc0ec: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x3dc0ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x3dc0f0: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x3dc0f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dc0f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dc0f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3dc0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3dc0fc: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DC0FCu;
    {
        const bool branch_taken_0x3dc0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3DC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0FCu;
        // 0x3dc100: 0xa4a2000e  sh          $v0, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc0fc) {
            ctx->pc = 0x3DC108u;
            goto label_3dc108;
        }
    }
    ctx->pc = 0x3DC104u;
    // 0x3dc104: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x3dc104u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_3dc108:
    // 0x3dc108: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC110u;
}
