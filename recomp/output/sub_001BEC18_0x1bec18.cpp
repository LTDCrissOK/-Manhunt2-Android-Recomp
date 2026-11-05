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

// Function: sub_001BEC18
// Address: 0x1bec18 - 0x1bec78
void sub_001BEC18_0x1bec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEC18_0x1bec18");
#endif

    switch (ctx->pc) {
        case 0x1bec34u: goto label_1bec34;
        case 0x1bec4cu: goto label_1bec4c;
        default: break;
    }

    ctx->pc = 0x1bec18u;

    // 0x1bec18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bec18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bec1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bec20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bec20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bec28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bec2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BEC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BEC34u);
    ctx->pc = 0x1BEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC2Cu;
    // 0x1bec30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BEC2Cu, 0x1BEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC34u;
label_1bec34:
    // 0x1bec34: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bec34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bec38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bec38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec3c: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1bec40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec44: 0xc06fb58  jal         func_1BED60
    ctx->pc = 0x1BEC44u;
    SET_GPR_U32(ctx, 31, 0x1BEC4Cu);
    ctx->pc = 0x1BEC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC44u;
    // 0x1bec48: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BEC44u, 0x1BEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC4Cu;
label_1bec4c:
    // 0x1bec4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bec4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bec50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bec54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bec54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bec58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bec5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC5Cu;
        // 0x1bec60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEC64u;
    // 0x1bec64: 0x0  nop
    ctx->pc = 0x1bec64u;
    // NOP
    // 0x1bec68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1bec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bec6c: 0x0  nop
    ctx->pc = 0x1bec6cu;
    // NOP
    // 0x1bec70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1bec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bec74: 0x0  nop
    ctx->pc = 0x1bec74u;
    // NOP
    ctx->pc = 0x1bec78u;
}
