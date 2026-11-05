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

// Function: sub_0020BA38
// Address: 0x20ba38 - 0x20ba78
void sub_0020BA38_0x20ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BA38_0x20ba38");
#endif

    switch (ctx->pc) {
        case 0x20ba48u: goto label_20ba48;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba64u: goto label_20ba64;
        default: break;
    }

    ctx->pc = 0x20ba38u;

    // 0x20ba38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ba38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ba3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ba40: 0xc0ef4b8  jal         func_3BD2E0
    ctx->pc = 0x20BA40u;
    SET_GPR_U32(ctx, 31, 0x20BA48u);
    ctx->pc = 0x20BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA40u;
    // 0x20ba44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD2E0u, 0x20BA40u, 0x20BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA48u;
label_20ba48:
    // 0x20ba48: 0xc0ef772  jal         func_3BDDC8
    ctx->pc = 0x20BA48u;
    SET_GPR_U32(ctx, 31, 0x20BA50u);
    ctx->pc = 0x3BDDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDDC8u, 0x20BA48u, 0x20BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA50u;
label_20ba50:
    // 0x20ba50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20ba54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ba54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba58: 0xac6294b8  sw          $v0, -0x6B48($v1)
    ctx->pc = 0x20ba58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F94B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F94B8u, _value); } while (0);
    // 0x20ba5c: 0xc0ef7be  jal         func_3BDEF8
    ctx->pc = 0x20BA5Cu;
    SET_GPR_U32(ctx, 31, 0x20BA64u);
    ctx->pc = 0x20BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA5Cu;
    // 0x20ba60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDEF8u, 0x20BA5Cu, 0x20BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA64u;
label_20ba64:
    // 0x20ba64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ba68: 0x3e00008  jr          $ra
    ctx->pc = 0x20BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA68u;
        // 0x20ba6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA70u;
    // 0x20ba70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20ba74: 0x0  nop
    ctx->pc = 0x20ba74u;
    // NOP
    ctx->pc = 0x20ba78u;
}
