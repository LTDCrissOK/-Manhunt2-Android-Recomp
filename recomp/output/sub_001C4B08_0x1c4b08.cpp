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

// Function: sub_001C4B08
// Address: 0x1c4b08 - 0x1c4b48
void sub_001C4B08_0x1c4b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4B08_0x1c4b08");
#endif

    ctx->pc = 0x1c4b08u;

    // 0x1c4b08: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c4b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b0c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x1c4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1c4b10: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1c4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c4b14: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1c4b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1c4b18: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4B18u;
    {
        const bool branch_taken_0x1c4b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B18u;
        // 0x1c4b1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b18) {
            ctx->pc = 0x1C4B3Cu;
            goto label_1c4b3c;
        }
    }
    ctx->pc = 0x1C4B20u;
    // 0x1c4b20: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x1c4b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1c4b24: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1c4b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c4b28: 0x8cc30064  lw          $v1, 0x64($a2)
    ctx->pc = 0x1c4b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x1c4b2c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1c4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c4b30: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1c4b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c4b34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4b38: 0x8c6401bc  lw          $a0, 0x1BC($v1)
    ctx->pc = 0x1c4b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_1c4b3c:
    // 0x1c4b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B3Cu;
        // 0x1c4b40: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4B44u;
    // 0x1c4b44: 0x0  nop
    ctx->pc = 0x1c4b44u;
    // NOP
    ctx->pc = 0x1c4b48u;
}
