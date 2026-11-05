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

// Function: sub_00142D80
// Address: 0x142d80 - 0x142dd0
void sub_00142D80_0x142d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142D80_0x142d80");
#endif

    switch (ctx->pc) {
        case 0x142d9cu: goto label_142d9c;
        case 0x142da4u: goto label_142da4;
        case 0x142db8u: goto label_142db8;
        default: break;
    }

    ctx->pc = 0x142d80u;

    // 0x142d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142d88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142d90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142d94: 0xc050bfc  jal         func_142FF0
    ctx->pc = 0x142D94u;
    SET_GPR_U32(ctx, 31, 0x142D9Cu);
    ctx->pc = 0x142D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D94u;
    // 0x142d98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142FF0u, 0x142D94u, 0x142D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D9Cu;
label_142d9c:
    // 0x142d9c: 0xc04e56a  jal         func_1395A8
    ctx->pc = 0x142D9Cu;
    SET_GPR_U32(ctx, 31, 0x142DA4u);
    ctx->pc = 0x142DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D9Cu;
    // 0x142da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1395A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1395A8u, 0x142D9Cu, 0x142DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DA4u;
label_142da4:
    // 0x142da4: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x142da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x142da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142dac: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x142dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x142db0: 0xc04d89a  jal         func_136268
    ctx->pc = 0x142DB0u;
    SET_GPR_U32(ctx, 31, 0x142DB8u);
    ctx->pc = 0x142DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DB0u;
    // 0x142db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x142DB0u, 0x142DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DB8u;
label_142db8:
    // 0x142db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x142DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DC4u;
        // 0x142dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142DCCu;
    // 0x142dcc: 0x0  nop
    ctx->pc = 0x142dccu;
    // NOP
    ctx->pc = 0x142dd0u;
}
