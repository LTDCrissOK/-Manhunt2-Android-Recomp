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

// Function: sub_00118390
// Address: 0x118390 - 0x1183c0
void sub_00118390_0x118390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118390_0x118390");
#endif

    switch (ctx->pc) {
        case 0x118390u: goto label_118390;
        case 0x118394u: goto label_118394;
        case 0x118398u: goto label_118398;
        case 0x11839cu: goto label_11839c;
        case 0x1183a0u: goto label_1183a0;
        case 0x1183a4u: goto label_1183a4;
        case 0x1183a8u: goto label_1183a8;
        case 0x1183acu: goto label_1183ac;
        case 0x1183b0u: goto label_1183b0;
        case 0x1183b4u: goto label_1183b4;
        case 0x1183b8u: goto label_1183b8;
        case 0x1183bcu: goto label_1183bc;
        default: break;
    }

    ctx->pc = 0x118390u;

label_118390:
    // 0x118390: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118394:
    // 0x118394: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x118394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_118398:
    // 0x118398: 0x2444fffd  addiu       $a0, $v0, -0x3
    ctx->pc = 0x118398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_11839c:
    // 0x11839c: 0x2c830014  sltiu       $v1, $a0, 0x14
    ctx->pc = 0x11839cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_1183a0:
    // 0x1183a0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1183a4:
    if (ctx->pc == 0x1183A4u) {
        ctx->pc = 0x1183A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183A0u;
        // 0x1183a4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1183A8u;
        goto label_1183a8;
    }
    ctx->pc = 0x1183A0u;
    {
        const bool branch_taken_0x1183a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183A0u;
        // 0x1183a4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183a0) {
            ctx->pc = 0x118408u;
            return;
        }
    }
    ctx->pc = 0x1183A8u;
label_1183a8:
    // 0x1183a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1183a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1183ac:
    // 0x1183ac: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x1183acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
label_1183b0:
    // 0x1183b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1183b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1183b4:
    // 0x1183b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1183b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1183b8:
    // 0x1183b8: 0x800008  jr          $a0
label_1183bc:
    if (ctx->pc == 0x1183BCu) {
        ctx->pc = 0x1183C0u;
        goto label_fallthrough_0x1183b8;
    }
    ctx->pc = 0x1183B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1183B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1183b8:
    ctx->pc = 0x1183C0u;
}
