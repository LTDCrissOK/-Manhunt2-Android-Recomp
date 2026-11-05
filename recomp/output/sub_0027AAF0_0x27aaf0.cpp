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

// Function: sub_0027AAF0
// Address: 0x27aaf0 - 0x27ab30
void sub_0027AAF0_0x27aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AAF0_0x27aaf0");
#endif

    switch (ctx->pc) {
        case 0x27ab10u: goto label_27ab10;
        case 0x27ab1cu: goto label_27ab1c;
        default: break;
    }

    ctx->pc = 0x27aaf0u;

    // 0x27aaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27aaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27aaf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27aaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aafc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27ab00: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ab04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ab04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab08: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x27AB08u;
    SET_GPR_U32(ctx, 31, 0x27AB10u);
    ctx->pc = 0x27AB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB08u;
    // 0x27ab0c: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x27AB08u, 0x27AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB10u;
label_27ab10:
    // 0x27ab10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ab10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab14: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27AB14u;
    SET_GPR_U32(ctx, 31, 0x27AB1Cu);
    ctx->pc = 0x27AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB14u;
    // 0x27ab18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27AB14u, 0x27AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB1Cu;
label_27ab1c:
    // 0x27ab1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ab1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ab20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27ab20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x27AB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB24u;
        // 0x27ab28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AB2Cu;
    // 0x27ab2c: 0x0  nop
    ctx->pc = 0x27ab2cu;
    // NOP
    ctx->pc = 0x27ab30u;
}
