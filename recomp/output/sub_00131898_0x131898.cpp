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

// Function: sub_00131898
// Address: 0x131898 - 0x1318c0
void sub_00131898_0x131898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131898_0x131898");
#endif

    switch (ctx->pc) {
        case 0x1318acu: goto label_1318ac;
        default: break;
    }

    ctx->pc = 0x131898u;

    // 0x131898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13189c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1318a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1318a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1318a4: 0xc04c7b6  jal         func_131ED8
    ctx->pc = 0x1318A4u;
    SET_GPR_U32(ctx, 31, 0x1318ACu);
    ctx->pc = 0x1318A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318A4u;
    // 0x1318a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED8u, 0x1318A4u, 0x1318ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318ACu;
label_1318ac:
    // 0x1318ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1318acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1318b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1318b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1318b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1318b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1318b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1318B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1318BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318B8u;
        // 0x1318bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1318B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1318C0u;
}
