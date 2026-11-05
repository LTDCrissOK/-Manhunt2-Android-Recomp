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

// Function: sub_0012B428
// Address: 0x12b428 - 0x12b468
void sub_0012B428_0x12b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B428_0x12b428");
#endif

    switch (ctx->pc) {
        case 0x12b440u: goto label_12b440;
        default: break;
    }

    ctx->pc = 0x12b428u;

    // 0x12b428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b42c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12B42Cu;
    {
        const bool branch_taken_0x12b42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B42Cu;
        // 0x12b430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b42c) {
            ctx->pc = 0x12B45Cu;
            goto label_12b45c;
        }
    }
    ctx->pc = 0x12B434u;
    // 0x12b434: 0x24860085  addiu       $a2, $a0, 0x85
    ctx->pc = 0x12b434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 133));
    // 0x12b438: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x12b438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12b43c: 0x0  nop
    ctx->pc = 0x12b43cu;
    // NOP
label_12b440:
    // 0x12b440: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x12b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12b444: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x12b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x12b448: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x12b448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b44c: 0x2ca20041  sltiu       $v0, $a1, 0x41
    ctx->pc = 0x12b44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x12b450: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12B450u;
    {
        const bool branch_taken_0x12b450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B450u;
        // 0x12b454: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b450) {
            ctx->pc = 0x12B440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b440;
        }
    }
    ctx->pc = 0x12B458u;
    // 0x12b458: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12b458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_12b45c:
    // 0x12b45c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B464u;
    // 0x12b464: 0x0  nop
    ctx->pc = 0x12b464u;
    // NOP
    ctx->pc = 0x12b468u;
}
