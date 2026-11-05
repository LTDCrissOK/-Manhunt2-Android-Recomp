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

// Function: sub_0027C8C8
// Address: 0x27c8c8 - 0x27c900
void sub_0027C8C8_0x27c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C8C8_0x27c8c8");
#endif

    switch (ctx->pc) {
        case 0x27c8e8u: goto label_27c8e8;
        default: break;
    }

    ctx->pc = 0x27c8c8u;

    // 0x27c8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27c8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27c8cc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27c8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27c8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c8d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27c8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c8d8: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x27c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCBA8u));
    // 0x27c8dc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x27c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27c8e0: 0xc0c291e  jal         func_30A478
    ctx->pc = 0x27C8E0u;
    SET_GPR_U32(ctx, 31, 0x27C8E8u);
    ctx->pc = 0x27C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8E0u;
    // 0x27c8e4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A478u, 0x27C8E0u, 0x27C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8E8u;
label_27c8e8:
    // 0x27c8e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27c8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27c8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c8f0: 0xac62a300  sw          $v0, -0x5D00($v1)
    ctx->pc = 0x27c8f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA300u, _value); } while (0);
    // 0x27c8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x27C8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8F4u;
        // 0x27c8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C8FCu;
    // 0x27c8fc: 0x0  nop
    ctx->pc = 0x27c8fcu;
    // NOP
    ctx->pc = 0x27c900u;
}
