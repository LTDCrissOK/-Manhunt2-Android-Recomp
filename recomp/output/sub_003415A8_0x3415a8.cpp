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

// Function: sub_003415A8
// Address: 0x3415a8 - 0x3415d0
void sub_003415A8_0x3415a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003415A8_0x3415a8");
#endif

    ctx->pc = 0x3415a8u;

    // 0x3415a8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3415a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3415ac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3415acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3415b0: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x3415b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x3415b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3415b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3415b8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3415b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3415bc: 0xac440084  sw          $a0, 0x84($v0)
    ctx->pc = 0x3415bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x66CBACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CBACu, _value); } while (0);
    // 0x3415c0: 0xac46008c  sw          $a2, 0x8C($v0)
    ctx->pc = 0x3415c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x66CBB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CBB4u, _value); } while (0);
    // 0x3415c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3415C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3415C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415C4u;
        // 0x3415c8: 0xac450088  sw          $a1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3415C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3415CCu;
    // 0x3415cc: 0x0  nop
    ctx->pc = 0x3415ccu;
    // NOP
    ctx->pc = 0x3415d0u;
}
