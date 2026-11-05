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

// Function: sub_00299FE8
// Address: 0x299fe8 - 0x29a020
void sub_00299FE8_0x299fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299FE8_0x299fe8");
#endif

    switch (ctx->pc) {
        case 0x299ffcu: goto label_299ffc;
        case 0x29a00cu: goto label_29a00c;
        default: break;
    }

    ctx->pc = 0x299fe8u;

    // 0x299fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299ff0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x299ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x299ff4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299FF4u;
    SET_GPR_U32(ctx, 31, 0x299FFCu);
    ctx->pc = 0x299FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299FF4u;
    // 0x299ff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299FF4u, 0x299FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299FFCu;
label_299ffc:
    // 0x299ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x299ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29a000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a004: 0xc0a7272  jal         func_29C9C8
    ctx->pc = 0x29A004u;
    SET_GPR_U32(ctx, 31, 0x29A00Cu);
    ctx->pc = 0x29A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A004u;
    // 0x29a008: 0x8ca60080  lw          $a2, 0x80($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C9C8u, 0x29A004u, 0x29A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A00Cu;
label_29a00c:
    // 0x29a00c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a00cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29a010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29a014: 0x3e00008  jr          $ra
    ctx->pc = 0x29A014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A014u;
        // 0x29a018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A01Cu;
    // 0x29a01c: 0x0  nop
    ctx->pc = 0x29a01cu;
    // NOP
    ctx->pc = 0x29a020u;
}
