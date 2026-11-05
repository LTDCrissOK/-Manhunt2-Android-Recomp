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

// Function: sub_002A09D0
// Address: 0x2a09d0 - 0x2a0a58
void sub_002A09D0_0x2a09d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A09D0_0x2a09d0");
#endif

    switch (ctx->pc) {
        case 0x2a0a00u: goto label_2a0a00;
        case 0x2a0a0cu: goto label_2a0a0c;
        default: break;
    }

    ctx->pc = 0x2a09d0u;

    // 0x2a09d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a09d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a09d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a09dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a09dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a09e0: 0x2450a960  addiu       $s0, $v0, -0x56A0
    ctx->pc = 0x2a09e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945120));
    // 0x2a09e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a09e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a09e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a09e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a09ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a09ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a09f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a09f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a09f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a09f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a09f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a09f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a09fc: 0x0  nop
    ctx->pc = 0x2a09fcu;
    // NOP
label_2a0a00:
    // 0x2a0a00: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2a0a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a0a04: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A0A04u;
    SET_GPR_U32(ctx, 31, 0x2A0A0Cu);
    ctx->pc = 0x2A0A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0A04u;
    // 0x2a0a08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A0A04u, 0x2A0A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A0Cu;
label_2a0a0c:
    // 0x2a0a0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0a10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A10u;
    {
        const bool branch_taken_0x2a0a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A10u;
        // 0x2a0a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a10) {
            ctx->pc = 0x2A0A24u;
            goto label_2a0a24;
        }
    }
    ctx->pc = 0x2A0A18u;
    // 0x2a0a18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a0a1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0A1Cu;
    {
        const bool branch_taken_0x2a0a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A1Cu;
        // 0x2a0a20: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a1c) {
            ctx->pc = 0x2A0A38u;
            goto label_2a0a38;
        }
    }
    ctx->pc = 0x2A0A24u;
label_2a0a24:
    // 0x2a0a24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a0a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a0a28: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2a0a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a0a2c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A0A2Cu;
    {
        const bool branch_taken_0x2a0a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A2Cu;
        // 0x2a0a30: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a2c) {
            ctx->pc = 0x2A0A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0a00;
        }
    }
    ctx->pc = 0x2A0A34u;
    // 0x2a0a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0a38:
    // 0x2a0a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0a3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a0a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a0a40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a0a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0a44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a0a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a0a48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a0a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A4Cu;
        // 0x2a0a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0A54u;
    // 0x2a0a54: 0x0  nop
    ctx->pc = 0x2a0a54u;
    // NOP
    ctx->pc = 0x2a0a58u;
}
