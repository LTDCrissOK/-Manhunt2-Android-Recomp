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

// Function: sub_00281188
// Address: 0x281188 - 0x2811c8
void sub_00281188_0x281188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281188_0x281188");
#endif

    switch (ctx->pc) {
        case 0x2811a4u: goto label_2811a4;
        case 0x2811b4u: goto label_2811b4;
        default: break;
    }

    ctx->pc = 0x281188u;

    // 0x281188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28118c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x281190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x281194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28119c: 0xc0a6bf0  jal         func_29AFC0
    ctx->pc = 0x28119Cu;
    SET_GPR_U32(ctx, 31, 0x2811A4u);
    ctx->pc = 0x2811A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28119Cu;
    // 0x2811a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFC0u, 0x28119Cu, 0x2811A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811A4u;
label_2811a4:
    // 0x2811a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2811a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2811a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811ac: 0xc0a6d1a  jal         func_29B468
    ctx->pc = 0x2811ACu;
    SET_GPR_U32(ctx, 31, 0x2811B4u);
    ctx->pc = 0x2811B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811ACu;
    // 0x2811b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B468u, 0x2811ACu, 0x2811B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811B4u;
label_2811b4:
    // 0x2811b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2811b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2811b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2811b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2811bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2811bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2811c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2811C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2811C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811C0u;
        // 0x2811c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2811C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2811C8u;
}
