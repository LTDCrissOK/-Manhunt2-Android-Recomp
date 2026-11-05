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

// Function: sub_002BB670
// Address: 0x2bb670 - 0x2bb6c0
void sub_002BB670_0x2bb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB670_0x2bb670");
#endif

    switch (ctx->pc) {
        case 0x2bb698u: goto label_2bb698;
        default: break;
    }

    ctx->pc = 0x2bb670u;

    // 0x2bb670: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2bb670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2bb674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bb674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb678: 0x28420203  slti        $v0, $v0, 0x203
    ctx->pc = 0x2bb678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)515) ? 1 : 0);
    // 0x2bb67c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB67Cu;
    {
        const bool branch_taken_0x2bb67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB67Cu;
        // 0x2bb680: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb67c) {
            ctx->pc = 0x2BB68Cu;
            goto label_2bb68c;
        }
    }
    ctx->pc = 0x2BB684u;
    // 0x2bb684: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB684u;
        // 0x2bb688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB68Cu;
label_2bb68c:
    // 0x2bb68c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bb68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb690: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB690u;
    {
        const bool branch_taken_0x2bb690 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2BB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB690u;
        // 0x2bb694: 0x2443cdd8  addiu       $v1, $v0, -0x3228 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb690) {
            ctx->pc = 0x2BB6B0u;
            goto label_2bb6b0;
        }
    }
    ctx->pc = 0x2BB698u;
label_2bb698:
    // 0x2bb698: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2bb698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb69c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2bb69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2bb6a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2bb6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2bb6a4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2bb6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bb6a8: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BB6A8u;
    {
        const bool branch_taken_0x2bb6a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6A8u;
        // 0x2bb6ac: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6a8) {
            ctx->pc = 0x2BB698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb698;
        }
    }
    ctx->pc = 0x2BB6B0u;
label_2bb6b0:
    // 0x2bb6b0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2bb6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bb6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6B4u;
        // 0x2bb6b8: 0x24c2cdd8  addiu       $v0, $a2, -0x3228 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB6BCu;
    // 0x2bb6bc: 0x0  nop
    ctx->pc = 0x2bb6bcu;
    // NOP
    ctx->pc = 0x2bb6c0u;
}
