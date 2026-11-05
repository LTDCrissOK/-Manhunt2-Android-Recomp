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

// Function: sub_0029C9C8
// Address: 0x29c9c8 - 0x29ca58
void sub_0029C9C8_0x29c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C9C8_0x29c9c8");
#endif

    switch (ctx->pc) {
        case 0x29c9f8u: goto label_29c9f8;
        case 0x29ca04u: goto label_29ca04;
        case 0x29ca18u: goto label_29ca18;
        default: break;
    }

    ctx->pc = 0x29c9c8u;

    // 0x29c9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29c9cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c9d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29c9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29c9d4: 0x249000f8  addiu       $s0, $a0, 0xF8
    ctx->pc = 0x29c9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    // 0x29c9d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29c9dc: 0x24910108  addiu       $s1, $a0, 0x108
    ctx->pc = 0x29c9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    // 0x29c9e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29c9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29c9e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29c9e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29c9ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29c9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x29c9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x29c9f4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29c9f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29c9f8:
    // 0x29c9f8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29c9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29c9fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29C9FCu;
    SET_GPR_U32(ctx, 31, 0x29CA04u);
    ctx->pc = 0x29CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9FCu;
    // 0x29ca00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C9FCu, 0x29CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA04u;
label_29ca04:
    // 0x29ca04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ca08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CA08u;
    {
        const bool branch_taken_0x29ca08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA08u;
        // 0x29ca0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca08) {
            ctx->pc = 0x29CA20u;
            goto label_29ca20;
        }
    }
    ctx->pc = 0x29CA10u;
    // 0x29ca10: 0xc0a6d94  jal         func_29B650
    ctx->pc = 0x29CA10u;
    SET_GPR_U32(ctx, 31, 0x29CA18u);
    ctx->pc = 0x29CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA10u;
    // 0x29ca14: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B650u, 0x29CA10u, 0x29CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA18u;
label_29ca18:
    // 0x29ca18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29CA18u;
    {
        const bool branch_taken_0x29ca18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA18u;
        // 0x29ca1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca18) {
            ctx->pc = 0x29CA38u;
            goto label_29ca38;
        }
    }
    ctx->pc = 0x29CA20u;
label_29ca20:
    // 0x29ca20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29ca20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29ca24: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x29ca24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x29ca28: 0x2a420032  slti        $v0, $s2, 0x32
    ctx->pc = 0x29ca28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x29ca2c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x29CA2Cu;
    {
        const bool branch_taken_0x29ca2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA2Cu;
        // 0x29ca30: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca2c) {
            ctx->pc = 0x29C9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c9f8;
        }
    }
    ctx->pc = 0x29CA34u;
    // 0x29ca34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ca34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ca38:
    // 0x29ca38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ca38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ca3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ca3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ca40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29ca40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ca44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29ca44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ca48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x29ca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29ca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x29CA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA4Cu;
        // 0x29ca50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CA54u;
    // 0x29ca54: 0x0  nop
    ctx->pc = 0x29ca54u;
    // NOP
    ctx->pc = 0x29ca58u;
}
