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

// Function: sub_001C3658
// Address: 0x1c3658 - 0x1c36a0
void sub_001C3658_0x1c3658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3658_0x1c3658");
#endif

    ctx->pc = 0x1c3658u;

    // 0x1c3658: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c3658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c365c: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C365Cu;
    {
        const bool branch_taken_0x1c365c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c365c) {
            ctx->pc = 0x1C3698u;
            goto label_1c3698;
        }
    }
    ctx->pc = 0x1C3664u;
    // 0x1c3664: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3664u;
    {
        const bool branch_taken_0x1c3664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3664u;
        // 0x1c3668: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3664) {
            ctx->pc = 0x1C3698u;
            goto label_1c3698;
        }
    }
    ctx->pc = 0x1C366Cu;
    // 0x1c366c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1c366cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x1c3670: 0x2482f160  addiu       $v0, $a0, -0xEA0
    ctx->pc = 0x1c3670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963552));
    // 0x1c3674: 0xac80f160  sw          $zero, -0xEA0($a0)
    ctx->pc = 0x1c3674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963552), GPR_U32(ctx, 0));
    // 0x1c3678: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1c3678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1c367c: 0x24a3f170  addiu       $v1, $a1, -0xE90
    ctx->pc = 0x1c367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1c3680: 0xaca0f170  sw          $zero, -0xE90($a1)
    ctx->pc = 0x1c3680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F170u, _value); } while (0);
    // 0x1c3684: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1c3684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F17Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F17Cu, _value); } while (0);
    // 0x1c3688: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c3688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c368c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1c368cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1c3690: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c3690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F174u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F174u, _value); } while (0);
    // 0x1c3694: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1c3694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48F178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F178u, _value); } while (0);
label_1c3698:
    // 0x1c3698: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C36A0u;
}
