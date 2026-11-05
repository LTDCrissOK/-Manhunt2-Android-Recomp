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

// Function: sub_0030B968
// Address: 0x30b968 - 0x30b9a0
void sub_0030B968_0x30b968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B968_0x30b968");
#endif

    switch (ctx->pc) {
        case 0x30b980u: goto label_30b980;
        case 0x30b988u: goto label_30b988;
        default: break;
    }

    ctx->pc = 0x30b968u;

    // 0x30b968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30b968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30b96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30b970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30b970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b974: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30b978: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x30B978u;
    SET_GPR_U32(ctx, 31, 0x30B980u);
    ctx->pc = 0x30B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B978u;
    // 0x30b97c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x30B978u, 0x30B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B980u;
label_30b980:
    // 0x30b980: 0xc074184  jal         func_1D0610
    ctx->pc = 0x30B980u;
    SET_GPR_U32(ctx, 31, 0x30B988u);
    ctx->pc = 0x30B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B980u;
    // 0x30b984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0610u, 0x30B980u, 0x30B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B988u;
label_30b988:
    // 0x30b988: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x30b988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x30b98c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30b98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b990: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30b990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30b994: 0x3e00008  jr          $ra
    ctx->pc = 0x30B994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B994u;
        // 0x30b998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B99Cu;
    // 0x30b99c: 0x0  nop
    ctx->pc = 0x30b99cu;
    // NOP
    ctx->pc = 0x30b9a0u;
}
