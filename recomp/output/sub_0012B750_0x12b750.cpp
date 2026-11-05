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

// Function: sub_0012B750
// Address: 0x12b750 - 0x12b798
void sub_0012B750_0x12b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B750_0x12b750");
#endif

    switch (ctx->pc) {
        case 0x12b76cu: goto label_12b76c;
        case 0x12b784u: goto label_12b784;
        default: break;
    }

    ctx->pc = 0x12b750u;

    // 0x12b750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b764: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B764u;
    SET_GPR_U32(ctx, 31, 0x12B76Cu);
    ctx->pc = 0x12B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B764u;
    // 0x12b768: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B764u, 0x12B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B76Cu;
label_12b76c:
    // 0x12b76c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12b770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b774: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12b774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12b778: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12b778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b77c: 0xc04b024  jal         func_12C090
    ctx->pc = 0x12B77Cu;
    SET_GPR_U32(ctx, 31, 0x12B784u);
    ctx->pc = 0x12B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B77Cu;
    // 0x12b780: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C090u, 0x12B77Cu, 0x12B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B784u;
label_12b784:
    // 0x12b784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b78c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b790: 0x3e00008  jr          $ra
    ctx->pc = 0x12B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B790u;
        // 0x12b794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B798u;
}
