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

// Function: sub_001533D0
// Address: 0x1533d0 - 0x153418
void sub_001533D0_0x1533d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001533D0_0x1533d0");
#endif

    switch (ctx->pc) {
        case 0x1533f4u: goto label_1533f4;
        case 0x153404u: goto label_153404;
        default: break;
    }

    ctx->pc = 0x1533d0u;

    // 0x1533d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1533d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1533d4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1533d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1533d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1533d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1533dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1533dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1533e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1533e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533e4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1533e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1533e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1533e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1533ec: 0xc0551e4  jal         func_154790
    ctx->pc = 0x1533ECu;
    SET_GPR_U32(ctx, 31, 0x1533F4u);
    ctx->pc = 0x1533F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533ECu;
    // 0x1533f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x1533ECu, 0x1533F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533F4u;
label_1533f4:
    // 0x1533f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1533f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1533f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533fc: 0xc04d88a  jal         func_136228
    ctx->pc = 0x1533FCu;
    SET_GPR_U32(ctx, 31, 0x153404u);
    ctx->pc = 0x153400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533FCu;
    // 0x153400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x1533FCu, 0x153404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153404u;
label_153404:
    // 0x153404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x153404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x153408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15340c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15340cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153410: 0x3e00008  jr          $ra
    ctx->pc = 0x153410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153410u;
        // 0x153414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153418u;
}
