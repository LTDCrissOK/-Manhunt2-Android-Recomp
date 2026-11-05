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

// Function: sub_003760F0
// Address: 0x3760f0 - 0x376138
void sub_003760F0_0x3760f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003760F0_0x3760f0");
#endif

    ctx->pc = 0x3760f0u;

    // 0x3760f0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x3760f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x3760f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3760f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3760f8: 0x8d04cd68  lw          $a0, -0x3298($t0)
    ctx->pc = 0x3760f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCD68u));
    // 0x3760fc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3760fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376100: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x376100u;
    {
        const bool branch_taken_0x376100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x376104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376100u;
        // 0x376104: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376100) {
            ctx->pc = 0x37610Cu;
            goto label_37610c;
        }
    }
    ctx->pc = 0x376108u;
    // 0x376108: 0xd  break       0
    ctx->pc = 0x376108u;
    runtime->handleBreak(rdram, ctx);
label_37610c:
    // 0x37610c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x376110: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x376110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x376114: 0x244260d0  addiu       $v0, $v0, 0x60D0
    ctx->pc = 0x376114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24784));
    // 0x376118: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x376118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37611c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x37611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x376120: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x376120u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x376124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x376124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x376128: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x376128u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x37612c: 0x3e00008  jr          $ra
    ctx->pc = 0x37612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37612Cu;
        // 0x376130: 0xad05cd68  sw          $a1, -0x3298($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294954344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37612Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376134u;
    // 0x376134: 0x0  nop
    ctx->pc = 0x376134u;
    // NOP
    ctx->pc = 0x376138u;
}
