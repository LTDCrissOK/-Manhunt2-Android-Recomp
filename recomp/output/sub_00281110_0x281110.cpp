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

// Function: sub_00281110
// Address: 0x281110 - 0x281158
void sub_00281110_0x281110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281110_0x281110");
#endif

    switch (ctx->pc) {
        case 0x281130u: goto label_281130;
        case 0x281138u: goto label_281138;
        case 0x281140u: goto label_281140;
        case 0x281148u: goto label_281148;
        default: break;
    }

    ctx->pc = 0x281110u;

    // 0x281110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281114: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281118: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x281118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28111c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281120: 0x24a5a008  addiu       $a1, $a1, -0x5FF8
    ctx->pc = 0x281120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942728));
    // 0x281124: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281128: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x281128u;
    SET_GPR_U32(ctx, 31, 0x281130u);
    ctx->pc = 0x28112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281128u;
    // 0x28112c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x281128u, 0x281130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281130u;
label_281130:
    // 0x281130: 0xc0d9a30  jal         func_3668C0
    ctx->pc = 0x281130u;
    SET_GPR_U32(ctx, 31, 0x281138u);
    ctx->pc = 0x3668C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3668C0u, 0x281130u, 0x281138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281138u;
label_281138:
    // 0x281138: 0xc0a6bf0  jal         func_29AFC0
    ctx->pc = 0x281138u;
    SET_GPR_U32(ctx, 31, 0x281140u);
    ctx->pc = 0x29AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFC0u, 0x281138u, 0x281140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281140u;
label_281140:
    // 0x281140: 0xc0a6c2e  jal         func_29B0B8
    ctx->pc = 0x281140u;
    SET_GPR_U32(ctx, 31, 0x281148u);
    ctx->pc = 0x281144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281140u;
    // 0x281144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B0B8u, 0x281140u, 0x281148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281148u;
label_281148:
    // 0x281148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28114c: 0x3e00008  jr          $ra
    ctx->pc = 0x28114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28114Cu;
        // 0x281150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281154u;
    // 0x281154: 0x0  nop
    ctx->pc = 0x281154u;
    // NOP
    ctx->pc = 0x281158u;
}
