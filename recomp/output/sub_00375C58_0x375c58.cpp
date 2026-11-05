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

// Function: sub_00375C58
// Address: 0x375c58 - 0x375c80
void sub_00375C58_0x375c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375C58_0x375c58");
#endif

    ctx->pc = 0x375c58u;

    // 0x375c58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x375c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x375c5c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x375c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x375c60: 0xfc4060c0  sd          $zero, 0x60C0($v0)
    ctx->pc = 0x375c60u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C60C0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6C60C0u, _value); } while (0);
    // 0x375c64: 0x244360c0  addiu       $v1, $v0, 0x60C0
    ctx->pc = 0x375c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x375c68: 0x2485cd60  addiu       $a1, $a0, -0x32A0
    ctx->pc = 0x375c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954336));
    // 0x375c6c: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x375c6cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C60C8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6C60C8u, _value); } while (0);
    // 0x375c70: 0xac80cd60  sw          $zero, -0x32A0($a0)
    ctx->pc = 0x375c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FCD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD60u, _value); } while (0);
    // 0x375c74: 0x3e00008  jr          $ra
    ctx->pc = 0x375C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C74u;
        // 0x375c78: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375C7Cu;
    // 0x375c7c: 0x0  nop
    ctx->pc = 0x375c7cu;
    // NOP
    ctx->pc = 0x375c80u;
}
