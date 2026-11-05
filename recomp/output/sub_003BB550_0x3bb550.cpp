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

// Function: sub_003BB550
// Address: 0x3bb550 - 0x3bb590
void sub_003BB550_0x3bb550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB550_0x3bb550");
#endif

    switch (ctx->pc) {
        case 0x3bb574u: goto label_3bb574;
        default: break;
    }

    ctx->pc = 0x3bb550u;

    // 0x3bb550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb554: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3bb554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3bb558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bb558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bb55c: 0x8062c908  lb          $v0, -0x36F8($v1)
    ctx->pc = 0x3bb55cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x42C908u));
    // 0x3bb560: 0x2470c908  addiu       $s0, $v1, -0x36F8
    ctx->pc = 0x3bb560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953224));
    // 0x3bb564: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB564u;
    {
        const bool branch_taken_0x3bb564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB564u;
        // 0x3bb568: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb564) {
            ctx->pc = 0x3BB574u;
            goto label_3bb574;
        }
    }
    ctx->pc = 0x3BB56Cu;
    // 0x3bb56c: 0xc0eed38  jal         func_3BB4E0
    ctx->pc = 0x3BB56Cu;
    SET_GPR_U32(ctx, 31, 0x3BB574u);
    ctx->pc = 0x3BB4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB4E0u, 0x3BB56Cu, 0x3BB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB574u;
label_3bb574:
    // 0x3bb574: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x3bb574u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bb578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb57c: 0x38420054  xori        $v0, $v0, 0x54
    ctx->pc = 0x3bb57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)84);
    // 0x3bb580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bb580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb584: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3bb584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3bb588: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB588u;
        // 0x3bb58c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB590u;
}
