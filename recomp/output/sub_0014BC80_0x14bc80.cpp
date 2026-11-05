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

// Function: sub_0014BC80
// Address: 0x14bc80 - 0x14bcc8
void sub_0014BC80_0x14bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BC80_0x14bc80");
#endif

    switch (ctx->pc) {
        case 0x14bca4u: goto label_14bca4;
        case 0x14bcb4u: goto label_14bcb4;
        default: break;
    }

    ctx->pc = 0x14bc80u;

    // 0x14bc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14bc84: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14bc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bc88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bc8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14bc90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14bc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc94: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14bc94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14bc98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14bc9c: 0xc053062  jal         func_14C188
    ctx->pc = 0x14BC9Cu;
    SET_GPR_U32(ctx, 31, 0x14BCA4u);
    ctx->pc = 0x14BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC9Cu;
    // 0x14bca0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C188u, 0x14BC9Cu, 0x14BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCA4u;
label_14bca4:
    // 0x14bca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14bca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcac: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14BCACu;
    SET_GPR_U32(ctx, 31, 0x14BCB4u);
    ctx->pc = 0x14BCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BCACu;
    // 0x14bcb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14BCACu, 0x14BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCB4u;
label_14bcb4:
    // 0x14bcb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bcb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14bcb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bcbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x14BCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCC0u;
        // 0x14bcc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BCC8u;
}
