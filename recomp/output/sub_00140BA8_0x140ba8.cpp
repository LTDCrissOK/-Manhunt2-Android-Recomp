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

// Function: sub_00140BA8
// Address: 0x140ba8 - 0x140bf0
void sub_00140BA8_0x140ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140BA8_0x140ba8");
#endif

    switch (ctx->pc) {
        case 0x140bccu: goto label_140bcc;
        case 0x140bdcu: goto label_140bdc;
        default: break;
    }

    ctx->pc = 0x140ba8u;

    // 0x140ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140bac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x140bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x140bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bbc: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x140bbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x140bc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140bc4: 0xc0503ca  jal         func_140F28
    ctx->pc = 0x140BC4u;
    SET_GPR_U32(ctx, 31, 0x140BCCu);
    ctx->pc = 0x140BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BC4u;
    // 0x140bc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F28u, 0x140BC4u, 0x140BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BCCu;
label_140bcc:
    // 0x140bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x140bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bd4: 0xc04d88a  jal         func_136228
    ctx->pc = 0x140BD4u;
    SET_GPR_U32(ctx, 31, 0x140BDCu);
    ctx->pc = 0x140BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BD4u;
    // 0x140bd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x140BD4u, 0x140BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BDCu;
label_140bdc:
    // 0x140bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140be0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140be8: 0x3e00008  jr          $ra
    ctx->pc = 0x140BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BE8u;
        // 0x140bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140BF0u;
}
