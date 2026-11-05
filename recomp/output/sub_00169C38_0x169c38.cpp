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

// Function: sub_00169C38
// Address: 0x169c38 - 0x169c88
void sub_00169C38_0x169c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169C38_0x169c38");
#endif

    switch (ctx->pc) {
        case 0x169c60u: goto label_169c60;
        case 0x169c70u: goto label_169c70;
        default: break;
    }

    ctx->pc = 0x169c38u;

    // 0x169c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169c40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169c4c: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x169c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169c50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169C50u;
    {
        const bool branch_taken_0x169c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C50u;
        // 0x169c54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c50) {
            ctx->pc = 0x169C64u;
            goto label_169c64;
        }
    }
    ctx->pc = 0x169C58u;
    // 0x169c58: 0xc05a798  jal         func_169E60
    ctx->pc = 0x169C58u;
    SET_GPR_U32(ctx, 31, 0x169C60u);
    ctx->pc = 0x169C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C58u;
    // 0x169c5c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169C58u, 0x169C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C60u;
label_169c60:
    // 0x169c60: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x169c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_169c64:
    // 0x169c64: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x169c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169c68: 0xc046190  jal         func_118640
    ctx->pc = 0x169C68u;
    SET_GPR_U32(ctx, 31, 0x169C70u);
    ctx->pc = 0x169C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C68u;
    // 0x169c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x169C68u, 0x169C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C70u;
label_169c70:
    // 0x169c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x169C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C7Cu;
        // 0x169c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169C84u;
    // 0x169c84: 0x0  nop
    ctx->pc = 0x169c84u;
    // NOP
    ctx->pc = 0x169c88u;
}
