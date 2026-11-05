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

// Function: sub_00246058
// Address: 0x246058 - 0x2460a0
void sub_00246058_0x246058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246058_0x246058");
#endif

    ctx->pc = 0x246058u;

    // 0x246058: 0x8ca50334  lw          $a1, 0x334($a1)
    ctx->pc = 0x246058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
    // 0x24605c: 0x8ca40150  lw          $a0, 0x150($a1)
    ctx->pc = 0x24605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x246060: 0x2482fff7  addiu       $v0, $a0, -0x9
    ctx->pc = 0x246060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x246064: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x246064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x246068: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246068u;
    {
        const bool branch_taken_0x246068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246068u;
        // 0x24606c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246068) {
            ctx->pc = 0x246084u;
            goto label_246084;
        }
    }
    ctx->pc = 0x246070u;
    // 0x246070: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x246070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x246074: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x246074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x246078: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24607c: 0x2463ff7d  addiu       $v1, $v1, -0x83
    ctx->pc = 0x24607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967165));
    // 0x246080: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x246080u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_246084:
    // 0x246084: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x246084u;
    {
        const bool branch_taken_0x246084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246084u;
        // 0x246088: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246084) {
            ctx->pc = 0x246098u;
            goto label_246098;
        }
    }
    ctx->pc = 0x24608Cu;
    // 0x24608c: 0x24426a00  addiu       $v0, $v0, 0x6A00
    ctx->pc = 0x24608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
    // 0x246090: 0xa4400104  sh          $zero, 0x104($v0)
    ctx->pc = 0x246090u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 260), (uint16_t)GPR_U32(ctx, 0));
    // 0x246094: 0xa44000ec  sh          $zero, 0xEC($v0)
    ctx->pc = 0x246094u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 236), (uint16_t)GPR_U32(ctx, 0));
label_246098:
    // 0x246098: 0x3e00008  jr          $ra
    ctx->pc = 0x246098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2460A0u;
}
