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

// Function: sub_001BEB60
// Address: 0x1beb60 - 0x1bebb8
void sub_001BEB60_0x1beb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEB60_0x1beb60");
#endif

    switch (ctx->pc) {
        case 0x1beb7cu: goto label_1beb7c;
        case 0x1beba0u: goto label_1beba0;
        default: break;
    }

    ctx->pc = 0x1beb60u;

    // 0x1beb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1beb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1beb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1beb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1beb68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1beb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1beb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1beb70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1beb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1beb74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BEB74u;
    SET_GPR_U32(ctx, 31, 0x1BEB7Cu);
    ctx->pc = 0x1BEB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB74u;
    // 0x1beb78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BEB74u, 0x1BEB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB7Cu;
label_1beb7c:
    // 0x1beb7c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1beb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1beb80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1beb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1beb84: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1beb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1beb88: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x1beb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x1beb8c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1beb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1beb90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1beb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb94: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1beb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1beb98: 0xc06fb70  jal         func_1BEDC0
    ctx->pc = 0x1BEB98u;
    SET_GPR_U32(ctx, 31, 0x1BEBA0u);
    ctx->pc = 0x1BEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB98u;
    // 0x1beb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEDC0u, 0x1BEB98u, 0x1BEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBA0u;
label_1beba0:
    // 0x1beba0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1beba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1beba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1beba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bebac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bebacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bebb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBB0u;
        // 0x1bebb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEBB8u;
}
