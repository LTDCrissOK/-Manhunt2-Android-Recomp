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

// Function: sub_0037C4D0
// Address: 0x37c4d0 - 0x37c528
void sub_0037C4D0_0x37c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C4D0_0x37c4d0");
#endif

    switch (ctx->pc) {
        case 0x37c4f8u: goto label_37c4f8;
        case 0x37c510u: goto label_37c510;
        default: break;
    }

    ctx->pc = 0x37c4d0u;

    // 0x37c4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37c4d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x37c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x37c4d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x37c4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c4dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37c4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c4e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x37c4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x37c4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37c4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c4e8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37c4ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37c4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37c4f0: 0xc0dffaa  jal         func_37FEA8
    ctx->pc = 0x37C4F0u;
    SET_GPR_U32(ctx, 31, 0x37C4F8u);
    ctx->pc = 0x37C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C4F0u;
    // 0x37c4f4: 0x24a5c800  addiu       $a1, $a1, -0x3800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FEA8u, 0x37C4F0u, 0x37C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C4F8u;
label_37c4f8:
    // 0x37c4f8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37c4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c500: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x37c500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x37c504: 0x24a5c898  addiu       $a1, $a1, -0x3768
    ctx->pc = 0x37c504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953112));
    // 0x37c508: 0xc0dffaa  jal         func_37FEA8
    ctx->pc = 0x37C508u;
    SET_GPR_U32(ctx, 31, 0x37C510u);
    ctx->pc = 0x37C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C508u;
    // 0x37c50c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FEA8u, 0x37C508u, 0x37C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C510u;
label_37c510:
    // 0x37c510: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x37c510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x37c514: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x37c514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c518: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x37c518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c51c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37c51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c520: 0x3e00008  jr          $ra
    ctx->pc = 0x37C520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C520u;
        // 0x37c524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C528u;
}
