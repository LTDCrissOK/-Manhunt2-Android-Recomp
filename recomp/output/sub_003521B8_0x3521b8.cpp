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

// Function: sub_003521B8
// Address: 0x3521b8 - 0x352230
void sub_003521B8_0x3521b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003521B8_0x3521b8");
#endif

    ctx->pc = 0x3521b8u;

    // 0x3521b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3521b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3521bc: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3521BCu;
    {
        const bool branch_taken_0x3521bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3521bc) {
            ctx->pc = 0x352228u;
            goto label_352228;
        }
    }
    ctx->pc = 0x3521C4u;
    // 0x3521c4: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3521C4u;
    {
        const bool branch_taken_0x3521c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3521C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521C4u;
        // 0x3521c8: 0x3c06005c  lui         $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3521c4) {
            ctx->pc = 0x352228u;
            goto label_352228;
        }
    }
    ctx->pc = 0x3521CCu;
    // 0x3521cc: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x3521ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x3521d0: 0xacc0be50  sw          $zero, -0x41B0($a2)
    ctx->pc = 0x3521d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950480), GPR_U32(ctx, 0));
    // 0x3521d4: 0x24c2be50  addiu       $v0, $a2, -0x41B0
    ctx->pc = 0x3521d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950480));
    // 0x3521d8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3521d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3521dc: 0x24e3be60  addiu       $v1, $a3, -0x41A0
    ctx->pc = 0x3521dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950496));
    // 0x3521e0: 0xace0be60  sw          $zero, -0x41A0($a3)
    ctx->pc = 0x3521e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE60u, _value); } while (0);
    // 0x3521e4: 0x3c08005c  lui         $t0, 0x5C
    ctx->pc = 0x3521e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)92 << 16));
    // 0x3521e8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3521e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE6Cu, _value); } while (0);
    // 0x3521ec: 0x2504be70  addiu       $a0, $t0, -0x4190
    ctx->pc = 0x3521ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950512));
    // 0x3521f0: 0xad00be70  sw          $zero, -0x4190($t0)
    ctx->pc = 0x3521f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE70u, _value); } while (0);
    // 0x3521f4: 0x3c09005c  lui         $t1, 0x5C
    ctx->pc = 0x3521f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)92 << 16));
    // 0x3521f8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3521f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE7Cu, _value); } while (0);
    // 0x3521fc: 0x2525be80  addiu       $a1, $t1, -0x4180
    ctx->pc = 0x3521fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294950528));
    // 0x352200: 0xad20be80  sw          $zero, -0x4180($t1)
    ctx->pc = 0x352200u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE80u, _value); } while (0);
    // 0x352204: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x352204u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE8Cu, _value); } while (0);
    // 0x352208: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x352208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35220c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x35220cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x352210: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x352210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE64u, _value); } while (0);
    // 0x352214: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x352214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE68u, _value); } while (0);
    // 0x352218: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x352218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE74u, _value); } while (0);
    // 0x35221c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x35221cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE78u, _value); } while (0);
    // 0x352220: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x352220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE84u, _value); } while (0);
    // 0x352224: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x352224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBE88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBE88u, _value); } while (0);
label_352228:
    // 0x352228: 0x3e00008  jr          $ra
    ctx->pc = 0x352228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352230u;
}
