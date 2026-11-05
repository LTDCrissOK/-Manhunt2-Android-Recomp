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

// Function: sub_00118218
// Address: 0x118218 - 0x118248
void sub_00118218_0x118218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118218_0x118218");
#endif

    switch (ctx->pc) {
        case 0x118218u: goto label_118218;
        case 0x11821cu: goto label_11821c;
        case 0x118220u: goto label_118220;
        case 0x118224u: goto label_118224;
        case 0x118228u: goto label_118228;
        case 0x11822cu: goto label_11822c;
        case 0x118230u: goto label_118230;
        case 0x118234u: goto label_118234;
        case 0x118238u: goto label_118238;
        case 0x11823cu: goto label_11823c;
        case 0x118240u: goto label_118240;
        case 0x118244u: goto label_118244;
        default: break;
    }

    ctx->pc = 0x118218u;

label_118218:
    // 0x118218: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11821c:
    // 0x11821c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_118220:
    // 0x118220: 0x2444fffb  addiu       $a0, $v0, -0x5
    ctx->pc = 0x118220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_118224:
    // 0x118224: 0x2c830012  sltiu       $v1, $a0, 0x12
    ctx->pc = 0x118224u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_118228:
    // 0x118228: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_11822c:
    if (ctx->pc == 0x11822Cu) {
        ctx->pc = 0x11822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118228u;
        // 0x11822c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118230u;
        goto label_118230;
    }
    ctx->pc = 0x118228u;
    {
        const bool branch_taken_0x118228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118228u;
        // 0x11822c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118228) {
            ctx->pc = 0x11826Cu;
            return;
        }
    }
    ctx->pc = 0x118230u;
label_118230:
    // 0x118230: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_118234:
    // 0x118234: 0x2442b270  addiu       $v0, $v0, -0x4D90
    ctx->pc = 0x118234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947440));
label_118238:
    // 0x118238: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11823c:
    // 0x11823c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118240:
    // 0x118240: 0x800008  jr          $a0
label_118244:
    if (ctx->pc == 0x118244u) {
        ctx->pc = 0x118248u;
        goto label_fallthrough_0x118240;
    }
    ctx->pc = 0x118240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118240u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118240:
    ctx->pc = 0x118248u;
}
