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

// Function: sub_001D9108
// Address: 0x1d9108 - 0x1d9178
void sub_001D9108_0x1d9108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9108_0x1d9108");
#endif

    switch (ctx->pc) {
        case 0x1d9130u: goto label_1d9130;
        default: break;
    }

    ctx->pc = 0x1d9108u;

    // 0x1d9108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d910c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d910cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d9110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9114: 0x244214e0  addiu       $v0, $v0, 0x14E0
    ctx->pc = 0x1d9114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x1d9118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d911c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9120: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9124: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9128: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D9128u;
    SET_GPR_U32(ctx, 31, 0x1D9130u);
    ctx->pc = 0x1D912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9128u;
    // 0x1d912c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D9128u, 0x1D9130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9130u;
label_1d9130:
    // 0x1d9130: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x1d9130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x1d9134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d9134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9138: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d9138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d913c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d913cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d9140: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d9140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d9144: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d9144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1d9148: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d9148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d914c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d914cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1d9150: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1d9150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1d9154: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x1d9154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d9158: 0xa2000031  sb          $zero, 0x31($s0)
    ctx->pc = 0x1d9158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d915c: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x1d915cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d9160: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1d9160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1d9164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d916c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d916cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9170: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9170u;
        // 0x1d9174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9178u;
}
