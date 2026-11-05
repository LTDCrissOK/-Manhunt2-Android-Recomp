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

// Function: sub_002C2F08
// Address: 0x2c2f08 - 0x2c2f58
void sub_002C2F08_0x2c2f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2F08_0x2c2f08");
#endif

    switch (ctx->pc) {
        case 0x2c2f2cu: goto label_2c2f2c;
        case 0x2c2f34u: goto label_2c2f34;
        default: break;
    }

    ctx->pc = 0x2c2f08u;

    // 0x2c2f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2f0c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2c2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2c2f10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2f14: 0x24423d68  addiu       $v0, $v0, 0x3D68
    ctx->pc = 0x2c2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15720));
    // 0x2c2f18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c2f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c2f20: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2c2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2c2f24: 0xc0b0586  jal         func_2C1618
    ctx->pc = 0x2C2F24u;
    SET_GPR_U32(ctx, 31, 0x2C2F2Cu);
    ctx->pc = 0x2C2F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F24u;
    // 0x2c2f28: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1618u, 0x2C2F24u, 0x2C2F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F2Cu;
label_2c2f2c:
    // 0x2c2f2c: 0xc0af78a  jal         func_2BDE28
    ctx->pc = 0x2C2F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C2F34u);
    ctx->pc = 0x2C2F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F2Cu;
    // 0x2c2f30: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDE28u, 0x2C2F2Cu, 0x2C2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F34u;
label_2c2f34:
    // 0x2c2f34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f38: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2c2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2c2f3c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c2f40: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2c2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2c2f44: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2c2f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2c2f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c2f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2f4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c2f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2f50: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F50u;
        // 0x2c2f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2F58u;
}
