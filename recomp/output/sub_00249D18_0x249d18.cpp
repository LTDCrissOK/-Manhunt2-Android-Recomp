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

// Function: sub_00249D18
// Address: 0x249d18 - 0x249d70
void sub_00249D18_0x249d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249D18_0x249d18");
#endif

    switch (ctx->pc) {
        case 0x249d34u: goto label_249d34;
        default: break;
    }

    ctx->pc = 0x249d18u;

    // 0x249d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249d1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249d24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x249d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249d28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x249d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x249d2c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x249D2Cu;
    SET_GPR_U32(ctx, 31, 0x249D34u);
    ctx->pc = 0x249D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249D2Cu;
    // 0x249d30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x249D2Cu, 0x249D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D34u;
label_249d34:
    // 0x249d34: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x249d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x249d38: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x249d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x249d3c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249D3Cu;
    {
        const bool branch_taken_0x249d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D3Cu;
        // 0x249d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d3c) {
            ctx->pc = 0x249D4Cu;
            goto label_249d4c;
        }
    }
    ctx->pc = 0x249D44u;
    // 0x249d44: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x249d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x249d48: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x249d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_249d4c:
    // 0x249d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249d50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x249d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249d54: 0x3e00008  jr          $ra
    ctx->pc = 0x249D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D54u;
        // 0x249d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249D5Cu;
    // 0x249d5c: 0x0  nop
    ctx->pc = 0x249d5cu;
    // NOP
    // 0x249d60: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x249d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249d64: 0x0  nop
    ctx->pc = 0x249d64u;
    // NOP
    // 0x249d68: 0x27bd02b0  addiu       $sp, $sp, 0x2B0
    ctx->pc = 0x249d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x249d6c: 0x0  nop
    ctx->pc = 0x249d6cu;
    // NOP
    ctx->pc = 0x249d70u;
}
