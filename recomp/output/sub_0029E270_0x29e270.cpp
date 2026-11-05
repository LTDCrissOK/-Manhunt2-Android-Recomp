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

// Function: sub_0029E270
// Address: 0x29e270 - 0x29e2c0
void sub_0029E270_0x29e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E270_0x29e270");
#endif

    switch (ctx->pc) {
        case 0x29e28cu: goto label_29e28c;
        case 0x29e2acu: goto label_29e2ac;
        default: break;
    }

    ctx->pc = 0x29e270u;

    // 0x29e270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e274: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29e274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29e278: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29e278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e280: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29e280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29e284: 0xc0a7cde  jal         func_29F378
    ctx->pc = 0x29E284u;
    SET_GPR_U32(ctx, 31, 0x29E28Cu);
    ctx->pc = 0x29E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E284u;
    // 0x29e288: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F378u, 0x29E284u, 0x29E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E28Cu;
label_29e28c:
    // 0x29e28c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e294: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x29e294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29e298: 0xae020208  sw          $v0, 0x208($s0)
    ctx->pc = 0x29e298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
    // 0x29e29c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29e29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2a0: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x29e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x29e2a4: 0xc0a7c20  jal         func_29F080
    ctx->pc = 0x29E2A4u;
    SET_GPR_U32(ctx, 31, 0x29E2ACu);
    ctx->pc = 0x29E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E2A4u;
    // 0x29e2a8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F080u, 0x29E2A4u, 0x29E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E2ACu;
label_29e2ac:
    // 0x29e2ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29e2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e2b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29e2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x29E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2B4u;
        // 0x29e2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E2BCu;
    // 0x29e2bc: 0x0  nop
    ctx->pc = 0x29e2bcu;
    // NOP
    ctx->pc = 0x29e2c0u;
}
