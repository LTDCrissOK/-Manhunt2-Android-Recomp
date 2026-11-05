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

// Function: sub_001457E8
// Address: 0x1457e8 - 0x145828
void sub_001457E8_0x1457e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001457E8_0x1457e8");
#endif

    switch (ctx->pc) {
        case 0x1457fcu: goto label_1457fc;
        case 0x145814u: goto label_145814;
        default: break;
    }

    ctx->pc = 0x1457e8u;

    // 0x1457e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1457e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1457ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1457ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1457f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1457f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1457f4: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x1457F4u;
    SET_GPR_U32(ctx, 31, 0x1457FCu);
    ctx->pc = 0x1457F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1457F4u;
    // 0x1457f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x1457F4u, 0x1457FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457FCu;
label_1457fc:
    // 0x1457fc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1457fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x145800: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x145800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x145804: 0x24630900  addiu       $v1, $v1, 0x900
    ctx->pc = 0x145804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
    // 0x145808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14580c: 0xc0516ca  jal         func_145B28
    ctx->pc = 0x14580Cu;
    SET_GPR_U32(ctx, 31, 0x145814u);
    ctx->pc = 0x145810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14580Cu;
    // 0x145810: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145B28u, 0x14580Cu, 0x145814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145814u;
label_145814:
    // 0x145814: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x145814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145818: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x145818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14581c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14581cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145820: 0x3e00008  jr          $ra
    ctx->pc = 0x145820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145820u;
        // 0x145824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145828u;
}
