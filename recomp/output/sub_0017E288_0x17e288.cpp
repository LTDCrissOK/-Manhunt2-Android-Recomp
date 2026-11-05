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

// Function: sub_0017E288
// Address: 0x17e288 - 0x17e2e0
void sub_0017E288_0x17e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E288_0x17e288");
#endif

    switch (ctx->pc) {
        case 0x17e2c8u: goto label_17e2c8;
        default: break;
    }

    ctx->pc = 0x17e288u;

    // 0x17e288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e28c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e290: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17e294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e298: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x17e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x17e29c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E29Cu;
    {
        const bool branch_taken_0x17e29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e29c) {
            ctx->pc = 0x17E2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E29Cu;
            // 0x17e2a0: 0x92020050  lbu         $v0, 0x50($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E2ACu;
            goto label_17e2ac;
        }
    }
    ctx->pc = 0x17E2A4u;
    // 0x17e2a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E2A4u;
    {
        const bool branch_taken_0x17e2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2A4u;
        // 0x17e2a8: 0xa2000050  sb          $zero, 0x50($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2a4) {
            ctx->pc = 0x17E2D0u;
            goto label_17e2d0;
        }
    }
    ctx->pc = 0x17E2ACu;
label_17e2ac:
    // 0x17e2ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e2b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17e2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17e2b4: 0x2c630005  sltiu       $v1, $v1, 0x5
    ctx->pc = 0x17e2b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x17e2b8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E2B8u;
    {
        const bool branch_taken_0x17e2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2B8u;
        // 0x17e2bc: 0xa2020050  sb          $v0, 0x50($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2b8) {
            ctx->pc = 0x17E2D0u;
            goto label_17e2d0;
        }
    }
    ctx->pc = 0x17E2C0u;
    // 0x17e2c0: 0xc05f5dc  jal         func_17D770
    ctx->pc = 0x17E2C0u;
    SET_GPR_U32(ctx, 31, 0x17E2C8u);
    ctx->pc = 0x17E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E2C0u;
    // 0x17e2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D770u, 0x17E2C0u, 0x17E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E2C8u;
label_17e2c8:
    // 0x17e2c8: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x17e2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e2cc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_17e2d0:
    // 0x17e2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e2d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17e2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2D8u;
        // 0x17e2dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E2E0u;
}
