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

// Function: sub_00140890
// Address: 0x140890 - 0x1408d0
void sub_00140890_0x140890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140890_0x140890");
#endif

    switch (ctx->pc) {
        case 0x1408a4u: goto label_1408a4;
        case 0x1408bcu: goto label_1408bc;
        default: break;
    }

    ctx->pc = 0x140890u;

    // 0x140890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x140898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14089c: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x14089Cu;
    SET_GPR_U32(ctx, 31, 0x1408A4u);
    ctx->pc = 0x1408A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14089Cu;
    // 0x1408a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x14089Cu, 0x1408A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408A4u;
label_1408a4:
    // 0x1408a4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1408a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1408a8: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x1408a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x1408ac: 0x24630778  addiu       $v1, $v1, 0x778
    ctx->pc = 0x1408acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1912));
    // 0x1408b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1408b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1408b4: 0xc050316  jal         func_140C58
    ctx->pc = 0x1408B4u;
    SET_GPR_U32(ctx, 31, 0x1408BCu);
    ctx->pc = 0x1408B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1408B4u;
    // 0x1408b8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140C58u, 0x1408B4u, 0x1408BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408BCu;
label_1408bc:
    // 0x1408bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1408bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1408c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1408c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1408c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1408c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1408c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1408C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1408CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408C8u;
        // 0x1408cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1408C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1408D0u;
}
