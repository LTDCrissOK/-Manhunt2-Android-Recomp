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

// Function: sub_002E1148
// Address: 0x2e1148 - 0x2e1178
void sub_002E1148_0x2e1148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1148_0x2e1148");
#endif

    switch (ctx->pc) {
        case 0x2e115cu: goto label_2e115c;
        case 0x2e1164u: goto label_2e1164;
        default: break;
    }

    ctx->pc = 0x2e1148u;

    // 0x2e1148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e114c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1150: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e1150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e1154: 0xc0b7868  jal         func_2DE1A0
    ctx->pc = 0x2E1154u;
    SET_GPR_U32(ctx, 31, 0x2E115Cu);
    ctx->pc = 0x2E1158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1154u;
    // 0x2e1158: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE1A0u, 0x2E1154u, 0x2E115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E115Cu;
label_2e115c:
    // 0x2e115c: 0xc0b849c  jal         func_2E1270
    ctx->pc = 0x2E115Cu;
    SET_GPR_U32(ctx, 31, 0x2E1164u);
    ctx->pc = 0x2E1160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E115Cu;
    // 0x2e1160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1270u, 0x2E115Cu, 0x2E1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1164u;
label_2e1164:
    // 0x2e1164: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e1164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e1168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e116c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e116cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1170: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1170u;
        // 0x2e1174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1178u;
}
