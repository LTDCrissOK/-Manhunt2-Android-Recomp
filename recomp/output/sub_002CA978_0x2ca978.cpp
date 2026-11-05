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

// Function: sub_002CA978
// Address: 0x2ca978 - 0x2ca9b0
void sub_002CA978_0x2ca978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA978_0x2ca978");
#endif

    switch (ctx->pc) {
        case 0x2ca9a4u: goto label_2ca9a4;
        default: break;
    }

    ctx->pc = 0x2ca978u;

    // 0x2ca978: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ca978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ca97c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca97cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca980: 0x90e6b44c  lbu         $a2, -0x4BB4($a3)
    ctx->pc = 0x2ca980u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x3FB44Cu));
    // 0x2ca984: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ca984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ca988: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ca988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca98c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2ca98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2ca990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca994: 0xaca2b464  sw          $v0, -0x4B9C($a1)
    ctx->pc = 0x2ca994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FB464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB464u, _value); } while (0);
    // 0x2ca998: 0xa0668d50  sb          $a2, -0x72B0($v1)
    ctx->pc = 0x2ca998u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x578D50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x578D50u, _value); } while (0);
    // 0x2ca99c: 0xc0b28c4  jal         func_2CA310
    ctx->pc = 0x2CA99Cu;
    SET_GPR_U32(ctx, 31, 0x2CA9A4u);
    ctx->pc = 0x2CA9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA99Cu;
    // 0x2ca9a0: 0xa0e0b44c  sb          $zero, -0x4BB4($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294947916), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA310u, 0x2CA99Cu, 0x2CA9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9A4u;
label_2ca9a4:
    // 0x2ca9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9A8u;
        // 0x2ca9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA9B0u;
}
