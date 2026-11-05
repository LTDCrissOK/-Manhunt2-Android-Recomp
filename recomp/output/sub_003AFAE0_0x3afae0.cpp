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

// Function: sub_003AFAE0
// Address: 0x3afae0 - 0x3afb68
void sub_003AFAE0_0x3afae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFAE0_0x3afae0");
#endif

    switch (ctx->pc) {
        case 0x3afb10u: goto label_3afb10;
        default: break;
    }

    ctx->pc = 0x3afae0u;

    // 0x3afae0: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x3afae0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x3afae4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3afae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3afae8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x3afae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x3afaec: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x3afaecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3afaf0: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AFAF0u;
    {
        const bool branch_taken_0x3afaf0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3AFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFAF0u;
        // 0x3afaf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afaf0) {
            ctx->pc = 0x3AFB3Cu;
            goto label_3afb3c;
        }
    }
    ctx->pc = 0x3AFAF8u;
    // 0x3afaf8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3afaf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3afafc: 0x54490004  bnel        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFAFCu;
    {
        const bool branch_taken_0x3afafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3afafc) {
            ctx->pc = 0x3AFB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFAFCu;
            // 0x3afb00: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFB10u;
            goto label_3afb10;
        }
    }
    ctx->pc = 0x3AFB04u;
    // 0x3afb04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3AFB04u;
    {
        const bool branch_taken_0x3afb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB04u;
        // 0x3afb08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb04) {
            ctx->pc = 0x3AFB3Cu;
            goto label_3afb3c;
        }
    }
    ctx->pc = 0x3AFB0Cu;
    // 0x3afb0c: 0x0  nop
    ctx->pc = 0x3afb0cu;
    // NOP
label_3afb10:
    // 0x3afb10: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x3afb10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3afb14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AFB14u;
    {
        const bool branch_taken_0x3afb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB14u;
        // 0x3afb18: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb14) {
            ctx->pc = 0x3AFB3Cu;
            goto label_3afb3c;
        }
    }
    ctx->pc = 0x3AFB1Cu;
    // 0x3afb1c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3afb1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3afb20: 0x0  nop
    ctx->pc = 0x3afb20u;
    // NOP
    // 0x3afb24: 0x0  nop
    ctx->pc = 0x3afb24u;
    // NOP
    // 0x3afb28: 0x0  nop
    ctx->pc = 0x3afb28u;
    // NOP
    // 0x3afb2c: 0x5449fff8  bnel        $v0, $t1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3AFB2Cu;
    {
        const bool branch_taken_0x3afb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3afb2c) {
            ctx->pc = 0x3AFB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFB2Cu;
            // 0x3afb30: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3afb10;
        }
    }
    ctx->pc = 0x3AFB34u;
    // 0x3afb34: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x3afb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3afb38: 0xe2400b  movn        $t0, $a3, $v0
    ctx->pc = 0x3afb38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
label_3afb3c:
    // 0x3afb3c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3afb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3afb40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3afb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3afb44: 0x51020004  beql        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFB44u;
    {
        const bool branch_taken_0x3afb44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x3afb44) {
            ctx->pc = 0x3AFB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFB44u;
            // 0x3afb48: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFB58u;
            goto label_3afb58;
        }
    }
    ctx->pc = 0x3AFB4Cu;
    // 0x3afb4c: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x3afb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x3afb50: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AFB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB50u;
        // 0x3afb54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFB58u;
label_3afb58:
    // 0x3afb58: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB58u;
        // 0x3afb5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFB60u;
    // 0x3afb60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3afb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3afb64: 0x0  nop
    ctx->pc = 0x3afb64u;
    // NOP
    ctx->pc = 0x3afb68u;
}
