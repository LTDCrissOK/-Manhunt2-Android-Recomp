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

// Function: sub_001187F8
// Address: 0x1187f8 - 0x118828
void sub_001187F8_0x1187f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001187F8_0x1187f8");
#endif

    switch (ctx->pc) {
        case 0x1187f8u: goto label_1187f8;
        case 0x1187fcu: goto label_1187fc;
        case 0x118800u: goto label_118800;
        case 0x118804u: goto label_118804;
        case 0x118808u: goto label_118808;
        case 0x11880cu: goto label_11880c;
        case 0x118810u: goto label_118810;
        case 0x118814u: goto label_118814;
        case 0x118818u: goto label_118818;
        case 0x11881cu: goto label_11881c;
        case 0x118820u: goto label_118820;
        case 0x118824u: goto label_118824;
        default: break;
    }

    ctx->pc = 0x1187f8u;

label_1187f8:
    // 0x1187f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1187f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1187fc:
    // 0x1187fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1187fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_118800:
    // 0x118800: 0x2444fff1  addiu       $a0, $v0, -0xF
    ctx->pc = 0x118800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_118804:
    // 0x118804: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x118804u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_118808:
    // 0x118808: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_11880c:
    if (ctx->pc == 0x11880Cu) {
        ctx->pc = 0x11880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118808u;
        // 0x11880c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118810u;
        goto label_118810;
    }
    ctx->pc = 0x118808u;
    {
        const bool branch_taken_0x118808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118808u;
        // 0x11880c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118808) {
            ctx->pc = 0x11884Cu;
            return;
        }
    }
    ctx->pc = 0x118810u;
label_118810:
    // 0x118810: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_118814:
    // 0x118814: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x118814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
label_118818:
    // 0x118818: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11881c:
    // 0x11881c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118820:
    // 0x118820: 0x800008  jr          $a0
label_118824:
    if (ctx->pc == 0x118824u) {
        ctx->pc = 0x118828u;
        goto label_fallthrough_0x118820;
    }
    ctx->pc = 0x118820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118820u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118820:
    ctx->pc = 0x118828u;
}
