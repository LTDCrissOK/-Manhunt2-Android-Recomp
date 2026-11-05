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

// Function: sub_003DF6A0
// Address: 0x3df6a0 - 0x3df780
void sub_003DF6A0_0x3df6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF6A0_0x3df6a0");
#endif

    ctx->pc = 0x3df6a0u;

    // 0x3df6a0: 0x8c8204f4  lw          $v0, 0x4F4($a0)
    ctx->pc = 0x3df6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1268)));
    // 0x3df6a4: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x3df6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x3df6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6A8u;
        // 0x3df6ac: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF6B0u;
    // 0x3df6b0: 0xac8204f4  sw          $v0, 0x4F4($a0)
    ctx->pc = 0x3df6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1268), GPR_U32(ctx, 2));
    // 0x3df6b4: 0x0  nop
    ctx->pc = 0x3df6b4u;
    // NOP
    // 0x3df6b8: 0xac8204f4  sw          $v0, 0x4F4($a0)
    ctx->pc = 0x3df6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1268), GPR_U32(ctx, 2));
    // 0x3df6bc: 0x0  nop
    ctx->pc = 0x3df6bcu;
    // NOP
    // 0x3df6c0: 0xa0850321  sb          $a1, 0x321($a0)
    ctx->pc = 0x3df6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 801), (uint8_t)GPR_U32(ctx, 5));
    // 0x3df6c4: 0x0  nop
    ctx->pc = 0x3df6c4u;
    // NOP
    // 0x3df6c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3df6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3df6cc: 0x0  nop
    ctx->pc = 0x3df6ccu;
    // NOP
    // 0x3df6d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3df6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3df6d4: 0x0  nop
    ctx->pc = 0x3df6d4u;
    // NOP
    // 0x3df6d8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3df6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x3df6dc: 0x0  nop
    ctx->pc = 0x3df6dcu;
    // NOP
    // 0x3df6e0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3df6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x3df6e4: 0x0  nop
    ctx->pc = 0x3df6e4u;
    // NOP
    // 0x3df6e8: 0x0  nop
    ctx->pc = 0x3df6e8u;
    // NOP
    // 0x3df6ec: 0x0  nop
    ctx->pc = 0x3df6ecu;
    // NOP
    // 0x3df6f0: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x3df6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x3df6f4: 0x0  nop
    ctx->pc = 0x3df6f4u;
    // NOP
    // 0x3df6f8: 0x0  nop
    ctx->pc = 0x3df6f8u;
    // NOP
    // 0x3df6fc: 0x0  nop
    ctx->pc = 0x3df6fcu;
    // NOP
    // 0x3df700: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3df700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3df704: 0x0  nop
    ctx->pc = 0x3df704u;
    // NOP
    // 0x3df708: 0x0  nop
    ctx->pc = 0x3df708u;
    // NOP
    // 0x3df70c: 0x0  nop
    ctx->pc = 0x3df70cu;
    // NOP
    // 0x3df710: 0x0  nop
    ctx->pc = 0x3df710u;
    // NOP
    // 0x3df714: 0x0  nop
    ctx->pc = 0x3df714u;
    // NOP
    // 0x3df718: 0x0  nop
    ctx->pc = 0x3df718u;
    // NOP
    // 0x3df71c: 0x0  nop
    ctx->pc = 0x3df71cu;
    // NOP
    // 0x3df720: 0x0  nop
    ctx->pc = 0x3df720u;
    // NOP
    // 0x3df724: 0x0  nop
    ctx->pc = 0x3df724u;
    // NOP
    // 0x3df728: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x3df728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x3df72c: 0x0  nop
    ctx->pc = 0x3df72cu;
    // NOP
    // 0x3df730: 0x0  nop
    ctx->pc = 0x3df730u;
    // NOP
    // 0x3df734: 0x0  nop
    ctx->pc = 0x3df734u;
    // NOP
    // 0x3df738: 0x0  nop
    ctx->pc = 0x3df738u;
    // NOP
    // 0x3df73c: 0x0  nop
    ctx->pc = 0x3df73cu;
    // NOP
    // 0x3df740: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x3df740u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x3df744: 0x0  nop
    ctx->pc = 0x3df744u;
    // NOP
    // 0x3df748: 0x0  nop
    ctx->pc = 0x3df748u;
    // NOP
    // 0x3df74c: 0x0  nop
    ctx->pc = 0x3df74cu;
    // NOP
    // 0x3df750: 0x0  nop
    ctx->pc = 0x3df750u;
    // NOP
    // 0x3df754: 0x0  nop
    ctx->pc = 0x3df754u;
    // NOP
    // 0x3df758: 0x0  nop
    ctx->pc = 0x3df758u;
    // NOP
    // 0x3df75c: 0x0  nop
    ctx->pc = 0x3df75cu;
    // NOP
    // 0x3df760: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3df760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3df764: 0x0  nop
    ctx->pc = 0x3df764u;
    // NOP
    // 0x3df768: 0x0  nop
    ctx->pc = 0x3df768u;
    // NOP
    // 0x3df76c: 0x0  nop
    ctx->pc = 0x3df76cu;
    // NOP
    // 0x3df770: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x3df770u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x3df774: 0x0  nop
    ctx->pc = 0x3df774u;
    // NOP
    // 0x3df778: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x3df778u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x3df77c: 0x0  nop
    ctx->pc = 0x3df77cu;
    // NOP
    ctx->pc = 0x3df780u;
}
