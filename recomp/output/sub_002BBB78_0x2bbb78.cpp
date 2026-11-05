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

// Function: sub_002BBB78
// Address: 0x2bbb78 - 0x2bbbb8
void sub_002BBB78_0x2bbb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBB78_0x2bbb78");
#endif

    switch (ctx->pc) {
        case 0x2bbb8cu: goto label_2bbb8c;
        case 0x2bbb98u: goto label_2bbb98;
        default: break;
    }

    ctx->pc = 0x2bbb78u;

    // 0x2bbb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bbb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bbb7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbb80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bbb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bbb84: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2BBB84u;
    SET_GPR_U32(ctx, 31, 0x2BBB8Cu);
    ctx->pc = 0x2BBB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB84u;
    // 0x2bbb88: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2BBB84u, 0x2BBB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB8Cu;
label_2bbb8c:
    // 0x2bbb8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bbb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb90: 0xc0b0d2c  jal         func_2C34B0
    ctx->pc = 0x2BBB90u;
    SET_GPR_U32(ctx, 31, 0x2BBB98u);
    ctx->pc = 0x2BBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBB90u;
    // 0x2bbb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C34B0u, 0x2BBB90u, 0x2BBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBB98u;
label_2bbb98:
    // 0x2bbb98: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bbb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bbb9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bbb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbba0: 0x24633940  addiu       $v1, $v1, 0x3940
    ctx->pc = 0x2bbba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14656));
    // 0x2bbba4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bbba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bbba8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2bbba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2bbbac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbbacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBB0u;
        // 0x2bbbb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBBB8u;
}
