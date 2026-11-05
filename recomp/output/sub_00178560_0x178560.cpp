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

// Function: sub_00178560
// Address: 0x178560 - 0x1785b0
void sub_00178560_0x178560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178560_0x178560");
#endif

    switch (ctx->pc) {
        case 0x178580u: goto label_178580;
        case 0x178588u: goto label_178588;
        default: break;
    }

    ctx->pc = 0x178560u;

    // 0x178560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178564: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178568: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17856c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17856cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17857c: 0x0  nop
    ctx->pc = 0x17857cu;
    // NOP
label_178580:
    // 0x178580: 0xc05e16c  jal         func_1785B0
    ctx->pc = 0x178580u;
    SET_GPR_U32(ctx, 31, 0x178588u);
    ctx->pc = 0x178584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178580u;
    // 0x178584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1785B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1785B0u, 0x178580u, 0x178588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178588u;
label_178588:
    // 0x178588: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x178588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17858c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17858cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178590: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x178590u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x178594: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x178594u;
    {
        const bool branch_taken_0x178594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178594u;
        // 0x178598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178594) {
            ctx->pc = 0x178580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178580;
        }
    }
    ctx->pc = 0x17859Cu;
    // 0x17859c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17859cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1785a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1785a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1785a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1785a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1785a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1785A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785A8u;
        // 0x1785ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1785A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1785B0u;
}
