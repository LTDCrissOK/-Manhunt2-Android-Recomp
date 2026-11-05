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

// Function: sub_001356F8
// Address: 0x1356f8 - 0x135728
void sub_001356F8_0x1356f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001356F8_0x1356f8");
#endif

    switch (ctx->pc) {
        case 0x1356f8u: goto label_1356f8;
        case 0x1356fcu: goto label_1356fc;
        case 0x135700u: goto label_135700;
        case 0x135704u: goto label_135704;
        case 0x135708u: goto label_135708;
        case 0x13570cu: goto label_13570c;
        case 0x135710u: goto label_135710;
        case 0x135714u: goto label_135714;
        case 0x135718u: goto label_135718;
        case 0x13571cu: goto label_13571c;
        case 0x135720u: goto label_135720;
        case 0x135724u: goto label_135724;
        default: break;
    }

    ctx->pc = 0x1356f8u;

label_1356f8:
    // 0x1356f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1356f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1356fc:
    // 0x1356fc: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x1356fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_135700:
    // 0x135700: 0x2444ffbf  addiu       $a0, $v0, -0x41
    ctx->pc = 0x135700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967231));
label_135704:
    // 0x135704: 0x2c830021  sltiu       $v1, $a0, 0x21
    ctx->pc = 0x135704u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_135708:
    // 0x135708: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_13570c:
    if (ctx->pc == 0x13570Cu) {
        ctx->pc = 0x13570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135708u;
        // 0x13570c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135710u;
        goto label_135710;
    }
    ctx->pc = 0x135708u;
    {
        const bool branch_taken_0x135708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135708u;
        // 0x13570c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135708) {
            ctx->pc = 0x135744u;
            return;
        }
    }
    ctx->pc = 0x135710u;
label_135710:
    // 0x135710: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x135710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_135714:
    // 0x135714: 0x2442e490  addiu       $v0, $v0, -0x1B70
    ctx->pc = 0x135714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960272));
label_135718:
    // 0x135718: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13571c:
    // 0x13571c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13571cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_135720:
    // 0x135720: 0x800008  jr          $a0
label_135724:
    if (ctx->pc == 0x135724u) {
        ctx->pc = 0x135728u;
        goto label_fallthrough_0x135720;
    }
    ctx->pc = 0x135720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135720u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x135720:
    ctx->pc = 0x135728u;
}
