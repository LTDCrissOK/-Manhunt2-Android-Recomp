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

// Function: sub_0029AD48
// Address: 0x29ad48 - 0x29ad88
void sub_0029AD48_0x29ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AD48_0x29ad48");
#endif

    switch (ctx->pc) {
        case 0x29ad5cu: goto label_29ad5c;
        default: break;
    }

    ctx->pc = 0x29ad48u;

    // 0x29ad48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ad48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ad4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ad4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ad50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29ad54: 0xc0a42a6  jal         func_290A98
    ctx->pc = 0x29AD54u;
    SET_GPR_U32(ctx, 31, 0x29AD5Cu);
    ctx->pc = 0x29AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD54u;
    // 0x29ad58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A98u, 0x29AD54u, 0x29AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD5Cu;
label_29ad5c:
    // 0x29ad5c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29ad60: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x29ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x29ad64: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x29ad64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x29ad68: 0x24633338  addiu       $v1, $v1, 0x3338
    ctx->pc = 0x29ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13112));
    // 0x29ad6c: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x29ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x29ad70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ad70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ad74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ad78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29ad78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ad7c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD7Cu;
        // 0x29ad80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AD84u;
    // 0x29ad84: 0x0  nop
    ctx->pc = 0x29ad84u;
    // NOP
    ctx->pc = 0x29ad88u;
}
