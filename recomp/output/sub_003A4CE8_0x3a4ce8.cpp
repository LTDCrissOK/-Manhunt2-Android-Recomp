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

// Function: sub_003A4CE8
// Address: 0x3a4ce8 - 0x3a4d80
void sub_003A4CE8_0x3a4ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4CE8_0x3a4ce8");
#endif

    switch (ctx->pc) {
        case 0x3a4d0cu: goto label_3a4d0c;
        case 0x3a4d18u: goto label_3a4d18;
        case 0x3a4d20u: goto label_3a4d20;
        case 0x3a4d38u: goto label_3a4d38;
        case 0x3a4d4cu: goto label_3a4d4c;
        default: break;
    }

    ctx->pc = 0x3a4ce8u;

    // 0x3a4ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a4cec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a4cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a4cf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a4cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4cf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a4cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a4cf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a4cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a4cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a4cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a4d00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a4d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a4d04: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A4D04u;
    SET_GPR_U32(ctx, 31, 0x3A4D0Cu);
    ctx->pc = 0x3A4D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4D04u;
    // 0x3a4d08: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A4D04u, 0x3A4D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4D0Cu;
label_3a4d0c:
    // 0x3a4d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a4d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4d10: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A4D10u;
    SET_GPR_U32(ctx, 31, 0x3A4D18u);
    ctx->pc = 0x3A4D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4D10u;
    // 0x3a4d14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A4D10u, 0x3A4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4D18u;
label_3a4d18:
    // 0x3a4d18: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4D18u;
    {
        const bool branch_taken_0x3a4d18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a4d18) {
            ctx->pc = 0x3A4D28u;
            goto label_3a4d28;
        }
    }
    ctx->pc = 0x3A4D20u;
label_3a4d20:
    // 0x3a4d20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A4D20u;
    {
        const bool branch_taken_0x3a4d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D20u;
        // 0x3a4d24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d20) {
            ctx->pc = 0x3A4D60u;
            goto label_3a4d60;
        }
    }
    ctx->pc = 0x3A4D28u;
label_3a4d28:
    // 0x3a4d28: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A4D28u;
    {
        const bool branch_taken_0x3a4d28 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3A4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D28u;
        // 0x3a4d2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d28) {
            ctx->pc = 0x3A4D5Cu;
            goto label_3a4d5c;
        }
    }
    ctx->pc = 0x3A4D30u;
    // 0x3a4d30: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x3a4d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3a4d34: 0x0  nop
    ctx->pc = 0x3a4d34u;
    // NOP
label_3a4d38:
    // 0x3a4d38: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3a4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3a4d3c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x3a4d3cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4d40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a4d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a4d44: 0xc0e9324  jal         func_3A4C90
    ctx->pc = 0x3A4D44u;
    SET_GPR_U32(ctx, 31, 0x3A4D4Cu);
    ctx->pc = 0x3A4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4D44u;
    // 0x3a4d48: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4C90u, 0x3A4D44u, 0x3A4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4D4Cu;
label_3a4d4c:
    // 0x3a4d4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A4D4Cu;
    {
        const bool branch_taken_0x3a4d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D4Cu;
        // 0x3a4d50: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d4c) {
            ctx->pc = 0x3A4D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4d20;
        }
    }
    ctx->pc = 0x3A4D54u;
    // 0x3a4d54: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A4D54u;
    {
        const bool branch_taken_0x3a4d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D54u;
        // 0x3a4d58: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d54) {
            ctx->pc = 0x3A4D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4d38;
        }
    }
    ctx->pc = 0x3A4D5Cu;
label_3a4d5c:
    // 0x3a4d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4d60:
    // 0x3a4d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a4d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4d64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a4d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4d68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a4d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4d6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a4d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a4d70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a4d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4d74: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D74u;
        // 0x3a4d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4D7Cu;
    // 0x3a4d7c: 0x0  nop
    ctx->pc = 0x3a4d7cu;
    // NOP
    ctx->pc = 0x3a4d80u;
}
