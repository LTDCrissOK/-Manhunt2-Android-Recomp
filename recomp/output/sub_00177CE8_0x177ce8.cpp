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

// Function: sub_00177CE8
// Address: 0x177ce8 - 0x177db0
void sub_00177CE8_0x177ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177CE8_0x177ce8");
#endif

    switch (ctx->pc) {
        case 0x177d20u: goto label_177d20;
        case 0x177d40u: goto label_177d40;
        case 0x177d60u: goto label_177d60;
        case 0x177d70u: goto label_177d70;
        default: break;
    }

    ctx->pc = 0x177ce8u;

    // 0x177ce8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177cf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177cfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177d00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x177d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x177d04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x177d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x177d08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x177d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x177d0c: 0x92020158  lbu         $v0, 0x158($s0)
    ctx->pc = 0x177d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x177d10: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x177D10u;
    {
        const bool branch_taken_0x177d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D10u;
        // 0x177d14: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d10) {
            ctx->pc = 0x177D8Cu;
            goto label_177d8c;
        }
    }
    ctx->pc = 0x177D18u;
    // 0x177d18: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x177D18u;
    SET_GPR_U32(ctx, 31, 0x177D20u);
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x177D18u, 0x177D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D20u;
label_177d20:
    // 0x177d20: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x177d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x177d24: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x177D24u;
    {
        const bool branch_taken_0x177d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x177D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D24u;
        // 0x177d28: 0x261400dc  addiu       $s4, $s0, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d24) {
            ctx->pc = 0x177D8Cu;
            goto label_177d8c;
        }
    }
    ctx->pc = 0x177D2Cu;
    // 0x177d2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d30: 0x261300d8  addiu       $s3, $s0, 0xD8
    ctx->pc = 0x177d30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x177d34: 0x24150021  addiu       $s5, $zero, 0x21
    ctx->pc = 0x177d34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x177d38: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x177d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x177d3c: 0x0  nop
    ctx->pc = 0x177d3cu;
    // NOP
label_177d40:
    // 0x177d40: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x177d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x177d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177d48: 0x1075000b  beq         $v1, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x177D48u;
    {
        const bool branch_taken_0x177d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x177D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D48u;
        // 0x177d4c: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d48) {
            ctx->pc = 0x177D78u;
            goto label_177d78;
        }
    }
    ctx->pc = 0x177D50u;
    // 0x177d50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x177d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x177d54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177d58: 0xc05e3f6  jal         func_178FD8
    ctx->pc = 0x177D58u;
    SET_GPR_U32(ctx, 31, 0x177D60u);
    ctx->pc = 0x177D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D58u;
    // 0x177d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178FD8u, 0x177D58u, 0x177D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D60u;
label_177d60:
    // 0x177d60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177D60u;
    {
        const bool branch_taken_0x177d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D60u;
        // 0x177d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d60) {
            ctx->pc = 0x177D78u;
            goto label_177d78;
        }
    }
    ctx->pc = 0x177D68u;
    // 0x177d68: 0xc05e4e0  jal         func_179380
    ctx->pc = 0x177D68u;
    SET_GPR_U32(ctx, 31, 0x177D70u);
    ctx->pc = 0x177D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D68u;
    // 0x177d6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179380u, 0x177D68u, 0x177D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D70u;
label_177d70:
    // 0x177d70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x177D70u;
    {
        const bool branch_taken_0x177d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D70u;
        // 0x177d74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d70) {
            ctx->pc = 0x177D90u;
            goto label_177d90;
        }
    }
    ctx->pc = 0x177D78u;
label_177d78:
    // 0x177d78: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x177d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x177d7c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x177d7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177d80: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x177d80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x177d84: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x177D84u;
    {
        const bool branch_taken_0x177d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D84u;
        // 0x177d88: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d84) {
            ctx->pc = 0x177D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177d40;
        }
    }
    ctx->pc = 0x177D8Cu;
label_177d8c:
    // 0x177d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177d90:
    // 0x177d90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177d94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x177d94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177d98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x177d98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177d9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x177d9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177da0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x177da0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177da4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177da8: 0x3e00008  jr          $ra
    ctx->pc = 0x177DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DA8u;
        // 0x177dac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177DB0u;
}
