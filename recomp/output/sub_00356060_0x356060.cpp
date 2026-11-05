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

// Function: sub_00356060
// Address: 0x356060 - 0x3560b8
void sub_00356060_0x356060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356060_0x356060");
#endif

    switch (ctx->pc) {
        case 0x356088u: goto label_356088;
        case 0x35609cu: goto label_35609c;
        default: break;
    }

    ctx->pc = 0x356060u;

    // 0x356060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x356064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x356068: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x356068u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x35606c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356070: 0x8e22c528  lw          $v0, -0x3AD8($s1)
    ctx->pc = 0x356070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BC528u));
    // 0x356074: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x356074u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x356078: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x356078u;
    {
        const bool branch_taken_0x356078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356078u;
        // 0x35607c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356078) {
            ctx->pc = 0x35609Cu;
            goto label_35609c;
        }
    }
    ctx->pc = 0x356080u;
    // 0x356080: 0xc0d582e  jal         func_3560B8
    ctx->pc = 0x356080u;
    SET_GPR_U32(ctx, 31, 0x356088u);
    ctx->pc = 0x356084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356080u;
    // 0x356084: 0x2604c520  addiu       $a0, $s0, -0x3AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3560B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3560B8u, 0x356080u, 0x356088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356088u;
label_356088:
    // 0x356088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35608c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x35608cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x356090: 0xae22c528  sw          $v0, -0x3AD8($s1)
    ctx->pc = 0x356090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952232), GPR_U32(ctx, 2));
    // 0x356094: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x356094u;
    SET_GPR_U32(ctx, 31, 0x35609Cu);
    ctx->pc = 0x356098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356094u;
    // 0x356098: 0x24846038  addiu       $a0, $a0, 0x6038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x356094u, 0x35609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35609Cu;
label_35609c:
    // 0x35609c: 0x2602c520  addiu       $v0, $s0, -0x3AE0
    ctx->pc = 0x35609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952224));
    // 0x3560a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3560a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3560a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3560a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3560a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3560a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3560ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3560ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3560B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3560ACu;
        // 0x3560b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3560ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3560B4u;
    // 0x3560b4: 0x0  nop
    ctx->pc = 0x3560b4u;
    // NOP
    ctx->pc = 0x3560b8u;
}
