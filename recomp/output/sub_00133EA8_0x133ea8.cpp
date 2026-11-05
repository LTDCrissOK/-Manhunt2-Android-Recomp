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

// Function: sub_00133EA8
// Address: 0x133ea8 - 0x133ee8
void sub_00133EA8_0x133ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133EA8_0x133ea8");
#endif

    switch (ctx->pc) {
        case 0x133ec4u: goto label_133ec4;
        case 0x133ed4u: goto label_133ed4;
        default: break;
    }

    ctx->pc = 0x133ea8u;

    // 0x133ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133eb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x133eb8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x133eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x133ebc: 0xc041d1e  jal         func_107478
    ctx->pc = 0x133EBCu;
    SET_GPR_U32(ctx, 31, 0x133EC4u);
    ctx->pc = 0x133EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EBCu;
    // 0x133ec0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107478u, 0x133EBCu, 0x133EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EC4u;
label_133ec4:
    // 0x133ec4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x133ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x133ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ecc: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x133ECCu;
    SET_GPR_U32(ctx, 31, 0x133ED4u);
    ctx->pc = 0x133ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133ECCu;
    // 0x133ed0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC60u, 0x133ECCu, 0x133ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133ED4u;
label_133ed4:
    // 0x133ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133ed8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133edc: 0x3e00008  jr          $ra
    ctx->pc = 0x133EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EDCu;
        // 0x133ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133EE4u;
    // 0x133ee4: 0x0  nop
    ctx->pc = 0x133ee4u;
    // NOP
    ctx->pc = 0x133ee8u;
}
