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

// Function: sub_00302488
// Address: 0x302488 - 0x3024b8
void sub_00302488_0x302488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302488_0x302488");
#endif

    ctx->pc = 0x302488u;

    // 0x302488: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x302488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30248c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x30248cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x302490: 0x90a3b44c  lbu         $v1, -0x4BB4($a1)
    ctx->pc = 0x302490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB44Cu));
    // 0x302494: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x302494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x302498: 0x90c4b468  lbu         $a0, -0x4B98($a2)
    ctx->pc = 0x302498u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3FB468u));
    // 0x30249c: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x30249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x3024a0: 0xa0a3b44c  sb          $v1, -0x4BB4($a1)
    ctx->pc = 0x3024a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FB44Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB44Cu, _value); } while (0);
    // 0x3024a4: 0xa0c4b468  sb          $a0, -0x4B98($a2)
    ctx->pc = 0x3024a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3FB468u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB468u, _value); } while (0);
    // 0x3024a8: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x3024a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5958F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5958F8u, _value); } while (0);
    // 0x3024ac: 0xa04003d9  sb          $zero, 0x3D9($v0)
    ctx->pc = 0x3024acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x595C49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x595C49u, _value); } while (0);
    // 0x3024b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3024B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3024B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024B0u;
        // 0x3024b4: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3024B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3024B8u;
}
