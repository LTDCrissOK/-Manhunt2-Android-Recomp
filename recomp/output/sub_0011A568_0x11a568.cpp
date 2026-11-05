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

// Function: sub_0011A568
// Address: 0x11a568 - 0x11a5a0
void sub_0011A568_0x11a568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A568_0x11a568");
#endif

    switch (ctx->pc) {
        case 0x11a578u: goto label_11a578;
        default: break;
    }

    ctx->pc = 0x11a568u;

    // 0x11a568: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11a568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11a56c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a570: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11a574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a578:
    // 0x11a578: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x11a578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11a57c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11a580: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11a580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11a584: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a588: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x11a588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x11a58c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A58Cu;
    {
        const bool branch_taken_0x11a58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A58Cu;
        // 0x11a590: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a58c) {
            ctx->pc = 0x11A578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a578;
        }
    }
    ctx->pc = 0x11A594u;
    // 0x11a594: 0x3e00008  jr          $ra
    ctx->pc = 0x11A594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A59Cu;
    // 0x11a59c: 0x0  nop
    ctx->pc = 0x11a59cu;
    // NOP
    ctx->pc = 0x11a5a0u;
}
