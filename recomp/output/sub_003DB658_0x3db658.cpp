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

// Function: sub_003DB658
// Address: 0x3db658 - 0x3db698
void sub_003DB658_0x3db658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB658_0x3db658");
#endif

    switch (ctx->pc) {
        case 0x3db688u: goto label_3db688;
        default: break;
    }

    ctx->pc = 0x3db658u;

    // 0x3db658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db65c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3db65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3db660: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3db660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3db664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db668: 0x24420328  addiu       $v0, $v0, 0x328
    ctx->pc = 0x3db668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 808));
    // 0x3db66c: 0x24630338  addiu       $v1, $v1, 0x338
    ctx->pc = 0x3db66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 824));
    // 0x3db670: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x3db670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x3db674: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3db674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3db678: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB678u;
    {
        const bool branch_taken_0x3db678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB678u;
        // 0x3db67c: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db678) {
            ctx->pc = 0x3DB688u;
            goto label_3db688;
        }
    }
    ctx->pc = 0x3DB680u;
    // 0x3db680: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DB680u;
    SET_GPR_U32(ctx, 31, 0x3DB688u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DB680u, 0x3DB688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB688u;
label_3db688:
    // 0x3db688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db68c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB68Cu;
        // 0x3db690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB694u;
    // 0x3db694: 0x0  nop
    ctx->pc = 0x3db694u;
    // NOP
    ctx->pc = 0x3db698u;
}
