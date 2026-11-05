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

// Function: sub_003EDA08
// Address: 0x3eda08 - 0x3eda70
void sub_003EDA08_0x3eda08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDA08_0x3eda08");
#endif

    switch (ctx->pc) {
        case 0x3eda30u: goto label_3eda30;
        case 0x3eda38u: goto label_3eda38;
        case 0x3eda48u: goto label_3eda48;
        default: break;
    }

    ctx->pc = 0x3eda08u;

label_3eda08:
    // 0x3eda08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eda08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3eda0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eda0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3eda10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eda10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3eda14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eda14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eda18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3eda1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3eda1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda20: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x3EDA20u;
    {
        const bool branch_taken_0x3eda20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA20u;
        // 0x3eda24: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eda20) {
            ctx->pc = 0x3EDA54u;
            goto label_3eda54;
        }
    }
    ctx->pc = 0x3EDA28u;
    // 0x3eda28: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3eda28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3eda2c: 0x0  nop
    ctx->pc = 0x3eda2cu;
    // NOP
label_3eda30:
    // 0x3eda30: 0xc0fb682  jal         func_3EDA08
    ctx->pc = 0x3EDA30u;
    SET_GPR_U32(ctx, 31, 0x3EDA38u);
    ctx->pc = 0x3EDA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDA30u;
    // 0x3eda34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDA08u;
    goto label_3eda08;
    ctx->pc = 0x3EDA38u;
label_3eda38:
    // 0x3eda38: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDA38u;
    {
        const bool branch_taken_0x3eda38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA38u;
        // 0x3eda3c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eda38) {
            ctx->pc = 0x3EDA48u;
            goto label_3eda48;
        }
    }
    ctx->pc = 0x3EDA40u;
    // 0x3eda40: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EDA40u;
    SET_GPR_U32(ctx, 31, 0x3EDA48u);
    ctx->pc = 0x3EDA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDA40u;
    // 0x3eda44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EDA40u, 0x3EDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDA48u;
label_3eda48:
    // 0x3eda48: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3eda48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda4c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3EDA4Cu;
    {
        const bool branch_taken_0x3eda4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eda4c) {
            ctx->pc = 0x3EDA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDA4Cu;
            // 0x3eda50: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eda30;
        }
    }
    ctx->pc = 0x3EDA54u;
label_3eda54:
    // 0x3eda54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eda54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eda58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eda58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eda5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eda5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eda60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eda60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eda64: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA64u;
        // 0x3eda68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDA6Cu;
    // 0x3eda6c: 0x0  nop
    ctx->pc = 0x3eda6cu;
    // NOP
    ctx->pc = 0x3eda70u;
}
