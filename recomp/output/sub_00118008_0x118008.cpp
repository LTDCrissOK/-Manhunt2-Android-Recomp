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

// Function: sub_00118008
// Address: 0x118008 - 0x118038
void sub_00118008_0x118008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118008_0x118008");
#endif

    switch (ctx->pc) {
        case 0x118008u: goto label_118008;
        case 0x11800cu: goto label_11800c;
        case 0x118010u: goto label_118010;
        case 0x118014u: goto label_118014;
        case 0x118018u: goto label_118018;
        case 0x11801cu: goto label_11801c;
        case 0x118020u: goto label_118020;
        case 0x118024u: goto label_118024;
        case 0x118028u: goto label_118028;
        case 0x11802cu: goto label_11802c;
        case 0x118030u: goto label_118030;
        case 0x118034u: goto label_118034;
        default: break;
    }

    ctx->pc = 0x118008u;

label_118008:
    // 0x118008: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11800c:
    // 0x11800c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x11800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_118010:
    // 0x118010: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x118010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_118014:
    // 0x118014: 0x2c830013  sltiu       $v1, $a0, 0x13
    ctx->pc = 0x118014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_118018:
    // 0x118018: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_11801c:
    if (ctx->pc == 0x11801Cu) {
        ctx->pc = 0x11801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118018u;
        // 0x11801c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118020u;
        goto label_118020;
    }
    ctx->pc = 0x118018u;
    {
        const bool branch_taken_0x118018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118018u;
        // 0x11801c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118018) {
            ctx->pc = 0x11805Cu;
            return;
        }
    }
    ctx->pc = 0x118020u;
label_118020:
    // 0x118020: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_118024:
    // 0x118024: 0x2442b150  addiu       $v0, $v0, -0x4EB0
    ctx->pc = 0x118024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947152));
label_118028:
    // 0x118028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11802c:
    // 0x11802c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118030:
    // 0x118030: 0x800008  jr          $a0
label_118034:
    if (ctx->pc == 0x118034u) {
        ctx->pc = 0x118038u;
        goto label_fallthrough_0x118030;
    }
    ctx->pc = 0x118030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118030u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118030:
    ctx->pc = 0x118038u;
}
