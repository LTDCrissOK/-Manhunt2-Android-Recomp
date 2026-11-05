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

// Function: sub_0020ABD0
// Address: 0x20abd0 - 0x20ac08
void sub_0020ABD0_0x20abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ABD0_0x20abd0");
#endif

    ctx->pc = 0x20abd0u;

    // 0x20abd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x20abd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20abd4: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20ABD4u;
    {
        const bool branch_taken_0x20abd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x20abd4) {
            ctx->pc = 0x20AC00u;
            goto label_20ac00;
        }
    }
    ctx->pc = 0x20ABDCu;
    // 0x20abdc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20ABDCu;
    {
        const bool branch_taken_0x20abdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABDCu;
        // 0x20abe0: 0x3c03004a  lui         $v1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abdc) {
            ctx->pc = 0x20AC00u;
            goto label_20ac00;
        }
    }
    ctx->pc = 0x20ABE4u;
    // 0x20abe4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20abe8: 0x2464c100  addiu       $a0, $v1, -0x3F00
    ctx->pc = 0x20abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x20abec: 0xac65c100  sw          $a1, -0x3F00($v1)
    ctx->pc = 0x20abecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951168), GPR_U32(ctx, 5));
    // 0x20abf0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x20abf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20abf4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20abf8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x20abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x20abfc: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x20abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_20ac00:
    // 0x20ac00: 0x3e00008  jr          $ra
    ctx->pc = 0x20AC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AC08u;
}
