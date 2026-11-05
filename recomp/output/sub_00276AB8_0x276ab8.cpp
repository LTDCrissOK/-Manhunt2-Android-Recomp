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

// Function: sub_00276AB8
// Address: 0x276ab8 - 0x276b28
void sub_00276AB8_0x276ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276AB8_0x276ab8");
#endif

    switch (ctx->pc) {
        case 0x276ae0u: goto label_276ae0;
        case 0x276b08u: goto label_276b08;
        default: break;
    }

    ctx->pc = 0x276ab8u;

    // 0x276ab8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x276ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x276abc: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x276ABCu;
    {
        const bool branch_taken_0x276abc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x276AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276ABCu;
        // 0x276ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276abc) {
            ctx->pc = 0x276B20u;
            goto label_276b20;
        }
    }
    ctx->pc = 0x276AC4u;
    // 0x276ac4: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x276AC4u;
    {
        const bool branch_taken_0x276ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276ac4) {
            ctx->pc = 0x276B20u;
            goto label_276b20;
        }
    }
    ctx->pc = 0x276ACCu;
    // 0x276acc: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x276accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x276ad0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x276ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x276ad4: 0x24424790  addiu       $v0, $v0, 0x4790
    ctx->pc = 0x276ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18320));
    // 0x276ad8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x276ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x276adc: 0x0  nop
    ctx->pc = 0x276adcu;
    // NOP
label_276ae0:
    // 0x276ae0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x276ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x276ae4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x276ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x276ae8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x276ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x276aec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x276aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x276af0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x276AF0u;
    {
        const bool branch_taken_0x276af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x276AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AF0u;
        // 0x276af4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276af0) {
            ctx->pc = 0x276AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276ae0;
        }
    }
    ctx->pc = 0x276AF8u;
    // 0x276af8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x276af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x276afc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x276afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x276b00: 0x24424890  addiu       $v0, $v0, 0x4890
    ctx->pc = 0x276b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18576));
    // 0x276b04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x276b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_276b08:
    // 0x276b08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x276b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x276b0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x276b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x276b10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x276b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x276b14: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x276b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x276b18: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x276B18u;
    {
        const bool branch_taken_0x276b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x276B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B18u;
        // 0x276b1c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b18) {
            ctx->pc = 0x276B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276b08;
        }
    }
    ctx->pc = 0x276B20u;
label_276b20:
    // 0x276b20: 0x3e00008  jr          $ra
    ctx->pc = 0x276B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B20u;
        // 0x276b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276B28u;
}
