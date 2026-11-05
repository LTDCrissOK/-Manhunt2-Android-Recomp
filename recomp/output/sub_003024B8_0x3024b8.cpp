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

// Function: sub_003024B8
// Address: 0x3024b8 - 0x302500
void sub_003024B8_0x3024b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003024B8_0x3024b8");
#endif

    ctx->pc = 0x3024b8u;

    // 0x3024b8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x3024b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x3024bc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3024bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3024c0: 0x24635870  addiu       $v1, $v1, 0x5870
    ctx->pc = 0x3024c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
    // 0x3024c4: 0x90e6b44c  lbu         $a2, -0x4BB4($a3)
    ctx->pc = 0x3024c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x3FB44Cu));
    // 0x3024c8: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x3024c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5958F0u));
    // 0x3024cc: 0x3402e100  ori         $v0, $zero, 0xE100
    ctx->pc = 0x3024ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57600);
    // 0x3024d0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x3024d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x3024d4: 0xa0e6b44c  sb          $a2, -0x4BB4($a3)
    ctx->pc = 0x3024d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3FB44Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB44Cu, _value); } while (0);
    // 0x3024d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3024d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3024dc: 0x9105b468  lbu         $a1, -0x4B98($t0)
    ctx->pc = 0x3024dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x3FB468u));
    // 0x3024e0: 0x248212c0  addiu       $v0, $a0, 0x12C0
    ctx->pc = 0x3024e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x3024e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3024e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3024e8: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x3024e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5958F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5958F8u, _value); } while (0);
    // 0x3024ec: 0xa105b468  sb          $a1, -0x4B98($t0)
    ctx->pc = 0x3024ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3FB468u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB468u, _value); } while (0);
    // 0x3024f0: 0xa06903d9  sb          $t1, 0x3D9($v1)
    ctx->pc = 0x3024f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x595C49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x595C49u, _value); } while (0);
    // 0x3024f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3024F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3024F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024F4u;
        // 0x3024f8: 0xac640084  sw          $a0, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3024F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3024FCu;
    // 0x3024fc: 0x0  nop
    ctx->pc = 0x3024fcu;
    // NOP
    ctx->pc = 0x302500u;
}
