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

// Function: sub_003A41A0
// Address: 0x3a41a0 - 0x3a4218
void sub_003A41A0_0x3a41a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A41A0_0x3a41a0");
#endif

    switch (ctx->pc) {
        case 0x3a41b4u: goto label_3a41b4;
        case 0x3a41d0u: goto label_3a41d0;
        default: break;
    }

    ctx->pc = 0x3a41a0u;

    // 0x3a41a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a41a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a41a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a41a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a41a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a41a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a41ac: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A41ACu;
    SET_GPR_U32(ctx, 31, 0x3A41B4u);
    ctx->pc = 0x3A41B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A41ACu;
    // 0x3a41b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A41ACu, 0x3A41B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A41B4u;
label_3a41b4:
    // 0x3a41b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a41b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a41b8: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A41B8u;
    {
        const bool branch_taken_0x3a41b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A41B8u;
        // 0x3a41bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a41b8) {
            ctx->pc = 0x3A4208u;
            goto label_3a4208;
        }
    }
    ctx->pc = 0x3A41C0u;
    // 0x3a41c0: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x3a41c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3a41c4: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x3a41c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x3a41c8: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x3a41c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3a41cc: 0x0  nop
    ctx->pc = 0x3a41ccu;
    // NOP
label_3a41d0:
    // 0x3a41d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a41d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a41d4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a41d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a41d8: 0xc7282b  sltu        $a1, $a2, $a3
    ctx->pc = 0x3a41d8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3a41dc: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A41DCu;
    {
        const bool branch_taken_0x3a41dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x3A41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A41DCu;
        // 0x3a41e0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a41dc) {
            ctx->pc = 0x3A41ECu;
            goto label_3a41ec;
        }
    }
    ctx->pc = 0x3A41E4u;
    // 0x3a41e4: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x3a41e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3a41e8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3a41e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3a41ec:
    // 0x3a41ec: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x3a41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x3a41f0: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x3a41f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x3a41f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A41F4u;
    {
        const bool branch_taken_0x3a41f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A41F4u;
        // 0x3a41f8: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a41f4) {
            ctx->pc = 0x3A4200u;
            goto label_3a4200;
        }
    }
    ctx->pc = 0x3A41FCu;
    // 0x3a41fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3a41fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_3a4200:
    // 0x3a4200: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3A4200u;
    {
        const bool branch_taken_0x3a4200 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4200u;
        // 0x3a4204: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4200) {
            ctx->pc = 0x3A41D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a41d0;
        }
    }
    ctx->pc = 0x3A4208u;
label_3a4208:
    // 0x3a4208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a4208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a420c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a420cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4210: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4210u;
        // 0x3a4214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4218u;
}
