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

// Function: sub_0010CE90
// Address: 0x10ce90 - 0x10cec8
void sub_0010CE90_0x10ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CE90_0x10ce90");
#endif

    switch (ctx->pc) {
        case 0x10cea8u: goto label_10cea8;
        case 0x10ceb4u: goto label_10ceb4;
        default: break;
    }

    ctx->pc = 0x10ce90u;

    // 0x10ce90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ce94: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10ce98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ce9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10ce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10cea0: 0xc041e04  jal         func_107810
    ctx->pc = 0x10CEA0u;
    SET_GPR_U32(ctx, 31, 0x10CEA8u);
    ctx->pc = 0x10CEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEA0u;
    // 0x10cea4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107810u, 0x10CEA0u, 0x10CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CEA8u;
label_10cea8:
    // 0x10cea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10cea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ceac: 0xc05a5e2  jal         func_169788
    ctx->pc = 0x10CEACu;
    SET_GPR_U32(ctx, 31, 0x10CEB4u);
    ctx->pc = 0x10CEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEACu;
    // 0x10ceb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169788u, 0x10CEACu, 0x10CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CEB4u;
label_10ceb4:
    // 0x10ceb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10ceb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ceb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10ceb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cec0: 0x3e00008  jr          $ra
    ctx->pc = 0x10CEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CEC0u;
        // 0x10cec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CEC8u;
}
