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

// Function: sub_003ED898
// Address: 0x3ed898 - 0x3ed8c0
void sub_003ED898_0x3ed898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED898_0x3ed898");
#endif

    ctx->pc = 0x3ed898u;

    // 0x3ed898: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ed898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed89c: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x3ed89cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3ed8a0: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x3ed8a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ed8a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ed8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ed8a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3ed8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ed8ac: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3ED8ACu;
    {
        const bool branch_taken_0x3ed8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3ED8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED8ACu;
        // 0x3ed8b0: 0xa4a2000c  sh          $v0, 0xC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed8ac) {
            ctx->pc = 0x3ED8B8u;
            goto label_3ed8b8;
        }
    }
    ctx->pc = 0x3ED8B4u;
    // 0x3ed8b4: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x3ed8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_3ed8b8:
    // 0x3ed8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED8C0u;
}
