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

// Function: sub_003EDF98
// Address: 0x3edf98 - 0x3edfe0
void sub_003EDF98_0x3edf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDF98_0x3edf98");
#endif

    switch (ctx->pc) {
        case 0x3edfbcu: goto label_3edfbc;
        default: break;
    }

    ctx->pc = 0x3edf98u;

    // 0x3edf98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3edf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3edf9c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3edf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3edfa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3edfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3edfa4: 0x24423fd0  addiu       $v0, $v0, 0x3FD0
    ctx->pc = 0x3edfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16336));
    // 0x3edfa8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3edfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3edfac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDFACu;
    {
        const bool branch_taken_0x3edfac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDFACu;
        // 0x3edfb0: 0xac820070  sw          $v0, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edfac) {
            ctx->pc = 0x3EDFBCu;
            goto label_3edfbc;
        }
    }
    ctx->pc = 0x3EDFB4u;
    // 0x3edfb4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EDFB4u;
    SET_GPR_U32(ctx, 31, 0x3EDFBCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EDFB4u, 0x3EDFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDFBCu;
label_3edfbc:
    // 0x3edfbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3edfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDFC0u;
        // 0x3edfc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDFC8u;
    // 0x3edfc8: 0xac8200d4  sw          $v0, 0xD4($a0)
    ctx->pc = 0x3edfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
    // 0x3edfcc: 0x0  nop
    ctx->pc = 0x3edfccu;
    // NOP
    // 0x3edfd0: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x3edfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
    // 0x3edfd4: 0x0  nop
    ctx->pc = 0x3edfd4u;
    // NOP
    // 0x3edfd8: 0xe48000c0  swc1        $f0, 0xC0($a0)
    ctx->pc = 0x3edfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x3edfdc: 0x0  nop
    ctx->pc = 0x3edfdcu;
    // NOP
    ctx->pc = 0x3edfe0u;
}
