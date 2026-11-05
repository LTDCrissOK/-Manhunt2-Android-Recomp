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

// Function: sub_002A8280
// Address: 0x2a8280 - 0x2a82c0
void sub_002A8280_0x2a8280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8280_0x2a8280");
#endif

    ctx->pc = 0x2a8280u;

    // 0x2a8280: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a8280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a8284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a8284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8288: 0x244237b8  addiu       $v0, $v0, 0x37B8
    ctx->pc = 0x2a8288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14264));
    // 0x2a828c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8290: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x2a8290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x2a8294: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2a8294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x2a8298: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a8298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a829c: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x2a829cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x2a82a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a82a4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2a82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2a82a8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2a82a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2a82ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2a82acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2a82b0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2a82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2a82b4: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x2a82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x2a82b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A82B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82B8u;
        // 0x2a82bc: 0xa0800030  sb          $zero, 0x30($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A82B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A82C0u;
}
