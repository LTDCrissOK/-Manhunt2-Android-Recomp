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

// Function: sub_003EDF28
// Address: 0x3edf28 - 0x3edf68
void sub_003EDF28_0x3edf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDF28_0x3edf28");
#endif

    switch (ctx->pc) {
        case 0x3edf4cu: goto label_3edf4c;
        default: break;
    }

    ctx->pc = 0x3edf28u;

    // 0x3edf28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3edf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3edf2c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3edf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3edf30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3edf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3edf34: 0x24423fd0  addiu       $v0, $v0, 0x3FD0
    ctx->pc = 0x3edf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16336));
    // 0x3edf38: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3edf38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3edf3c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDF3Cu;
    {
        const bool branch_taken_0x3edf3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF3Cu;
        // 0x3edf40: 0xac820070  sw          $v0, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edf3c) {
            ctx->pc = 0x3EDF4Cu;
            goto label_3edf4c;
        }
    }
    ctx->pc = 0x3EDF44u;
    // 0x3edf44: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EDF44u;
    SET_GPR_U32(ctx, 31, 0x3EDF4Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EDF44u, 0x3EDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDF4Cu;
label_3edf4c:
    // 0x3edf4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3edf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edf50: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF50u;
        // 0x3edf54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDF58u;
    // 0x3edf58: 0x0  nop
    ctx->pc = 0x3edf58u;
    // NOP
    // 0x3edf5c: 0x0  nop
    ctx->pc = 0x3edf5cu;
    // NOP
    // 0x3edf60: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3edf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3edf64: 0x0  nop
    ctx->pc = 0x3edf64u;
    // NOP
    ctx->pc = 0x3edf68u;
}
