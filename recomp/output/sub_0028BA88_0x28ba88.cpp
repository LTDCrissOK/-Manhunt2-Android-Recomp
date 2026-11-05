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

// Function: sub_0028BA88
// Address: 0x28ba88 - 0x28baf0
void sub_0028BA88_0x28ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BA88_0x28ba88");
#endif

    switch (ctx->pc) {
        case 0x28bad0u: goto label_28bad0;
        default: break;
    }

    ctx->pc = 0x28ba88u;

    // 0x28ba88: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x28ba88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x28ba8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28ba90: 0x2503c5e8  addiu       $v1, $t0, -0x3A18
    ctx->pc = 0x28ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952424));
    // 0x28ba94: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28ba94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28ba98: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x28ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BC600u));
    // 0x28ba9c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x28ba9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x28baa0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x28baa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x28baa4: 0xac40a7b4  sw          $zero, -0x584C($v0)
    ctx->pc = 0x28baa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA7B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA7B4u, _value); } while (0);
    // 0x28baa8: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x28baa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BC604u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC604u, _value); } while (0);
    // 0x28baac: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28baacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28bab0: 0xad00c5e8  sw          $zero, -0x3A18($t0)
    ctx->pc = 0x28bab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC5E8u, _value); } while (0);
    // 0x28bab4: 0x24420f28  addiu       $v0, $v0, 0xF28
    ctx->pc = 0x28bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3880));
    // 0x28bab8: 0xaca0a7b8  sw          $zero, -0x5848($a1)
    ctx->pc = 0x28bab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA7B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA7B8u, _value); } while (0);
    // 0x28babc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x28babcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28bac0: 0xacc0a7bc  sw          $zero, -0x5844($a2)
    ctx->pc = 0x28bac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA7BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA7BCu, _value); } while (0);
    // 0x28bac4: 0xace0a7c0  sw          $zero, -0x5840($a3)
    ctx->pc = 0x28bac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA7C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA7C0u, _value); } while (0);
    // 0x28bac8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x28bac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC5ECu, _value); } while (0);
    // 0x28bacc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x28baccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC5F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC5F0u, _value); } while (0);
label_28bad0:
    // 0x28bad0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28bad4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28bad8: 0xac400140  sw          $zero, 0x140($v0)
    ctx->pc = 0x28bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
    // 0x28badc: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x28badcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
    // 0x28bae0: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28BAE0u;
    {
        const bool branch_taken_0x28bae0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x28BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAE0u;
        // 0x28bae4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bae0) {
            ctx->pc = 0x28BAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bad0;
        }
    }
    ctx->pc = 0x28BAE8u;
    // 0x28bae8: 0x3e00008  jr          $ra
    ctx->pc = 0x28BAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BAF0u;
}
