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

// Function: sub_002A5C48
// Address: 0x2a5c48 - 0x2a5d20
void sub_002A5C48_0x2a5c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5C48_0x2a5c48");
#endif

    switch (ctx->pc) {
        case 0x2a5c48u: goto label_2a5c48;
        case 0x2a5c4cu: goto label_2a5c4c;
        case 0x2a5c50u: goto label_2a5c50;
        case 0x2a5c54u: goto label_2a5c54;
        case 0x2a5c58u: goto label_2a5c58;
        case 0x2a5c5cu: goto label_2a5c5c;
        case 0x2a5c60u: goto label_2a5c60;
        case 0x2a5c64u: goto label_2a5c64;
        case 0x2a5c68u: goto label_2a5c68;
        case 0x2a5c6cu: goto label_2a5c6c;
        case 0x2a5c70u: goto label_2a5c70;
        case 0x2a5c74u: goto label_2a5c74;
        case 0x2a5c78u: goto label_2a5c78;
        case 0x2a5c7cu: goto label_2a5c7c;
        case 0x2a5c80u: goto label_2a5c80;
        case 0x2a5c84u: goto label_2a5c84;
        case 0x2a5c88u: goto label_2a5c88;
        case 0x2a5c8cu: goto label_2a5c8c;
        case 0x2a5c90u: goto label_2a5c90;
        case 0x2a5c94u: goto label_2a5c94;
        case 0x2a5c98u: goto label_2a5c98;
        case 0x2a5c9cu: goto label_2a5c9c;
        case 0x2a5ca0u: goto label_2a5ca0;
        case 0x2a5ca4u: goto label_2a5ca4;
        case 0x2a5ca8u: goto label_2a5ca8;
        case 0x2a5cacu: goto label_2a5cac;
        case 0x2a5cb0u: goto label_2a5cb0;
        case 0x2a5cb4u: goto label_2a5cb4;
        case 0x2a5cb8u: goto label_2a5cb8;
        case 0x2a5cbcu: goto label_2a5cbc;
        case 0x2a5cc0u: goto label_2a5cc0;
        case 0x2a5cc4u: goto label_2a5cc4;
        case 0x2a5cc8u: goto label_2a5cc8;
        case 0x2a5cccu: goto label_2a5ccc;
        case 0x2a5cd0u: goto label_2a5cd0;
        case 0x2a5cd4u: goto label_2a5cd4;
        case 0x2a5cd8u: goto label_2a5cd8;
        case 0x2a5cdcu: goto label_2a5cdc;
        case 0x2a5ce0u: goto label_2a5ce0;
        case 0x2a5ce4u: goto label_2a5ce4;
        case 0x2a5ce8u: goto label_2a5ce8;
        case 0x2a5cecu: goto label_2a5cec;
        case 0x2a5cf0u: goto label_2a5cf0;
        case 0x2a5cf4u: goto label_2a5cf4;
        case 0x2a5cf8u: goto label_2a5cf8;
        case 0x2a5cfcu: goto label_2a5cfc;
        case 0x2a5d00u: goto label_2a5d00;
        case 0x2a5d04u: goto label_2a5d04;
        case 0x2a5d08u: goto label_2a5d08;
        case 0x2a5d0cu: goto label_2a5d0c;
        case 0x2a5d10u: goto label_2a5d10;
        case 0x2a5d14u: goto label_2a5d14;
        case 0x2a5d18u: goto label_2a5d18;
        case 0x2a5d1cu: goto label_2a5d1c;
        default: break;
    }

    ctx->pc = 0x2a5c48u;

label_2a5c48:
    // 0x2a5c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a5c4c:
    // 0x2a5c4c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2a5c50:
    // 0x2a5c50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2a5c54:
    // 0x2a5c54: 0x244236f8  addiu       $v0, $v0, 0x36F8
    ctx->pc = 0x2a5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14072));
label_2a5c58:
    // 0x2a5c58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2a5c5c:
    // 0x2a5c5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a5c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5c60:
    // 0x2a5c60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a5c64:
    // 0x2a5c64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a5c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2a5c68:
    // 0x2a5c68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a5c6c:
    // 0x2a5c6c: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x2a5c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
label_2a5c70:
    // 0x2a5c70: 0x8e4402a4  lw          $a0, 0x2A4($s2)
    ctx->pc = 0x2a5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 676)));
label_2a5c74:
    // 0x2a5c74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a5c78:
    if (ctx->pc == 0x2A5C78u) {
        ctx->pc = 0x2A5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C74u;
        // 0x2a5c78: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C7Cu;
        goto label_2a5c7c;
    }
    ctx->pc = 0x2A5C74u;
    {
        const bool branch_taken_0x2a5c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C74u;
        // 0x2a5c78: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c74) {
            ctx->pc = 0x2A5C84u;
            goto label_2a5c84;
        }
    }
    ctx->pc = 0x2A5C7Cu;
label_2a5c7c:
    // 0x2a5c7c: 0xc0a9d30  jal         func_2A74C0
label_2a5c80:
    if (ctx->pc == 0x2A5C80u) {
        ctx->pc = 0x2A5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C7Cu;
        // 0x2a5c80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C84u;
        goto label_2a5c84;
    }
    ctx->pc = 0x2A5C7Cu;
    SET_GPR_U32(ctx, 31, 0x2A5C84u);
    ctx->pc = 0x2A5C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C7Cu;
    // 0x2a5c80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74C0u, 0x2A5C7Cu, 0x2A5C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C84u;
label_2a5c84:
    // 0x2a5c84: 0x8e4402a8  lw          $a0, 0x2A8($s2)
    ctx->pc = 0x2a5c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
label_2a5c88:
    // 0x2a5c88: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a5c8c:
    if (ctx->pc == 0x2A5C8Cu) {
        ctx->pc = 0x2A5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C88u;
        // 0x2a5c8c: 0xae4002a4  sw          $zero, 0x2A4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5C90u;
        goto label_2a5c90;
    }
    ctx->pc = 0x2A5C88u;
    {
        const bool branch_taken_0x2a5c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C88u;
        // 0x2a5c8c: 0xae4002a4  sw          $zero, 0x2A4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5c88) {
            ctx->pc = 0x2A5CA0u;
            goto label_2a5ca0;
        }
    }
    ctx->pc = 0x2A5C90u;
label_2a5c90:
    // 0x2a5c90: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2a5c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2a5c94:
    // 0x2a5c94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a5c98:
    // 0x2a5c98: 0x40f809  jalr        $v0
label_2a5c9c:
    if (ctx->pc == 0x2A5C9Cu) {
        ctx->pc = 0x2A5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C98u;
        // 0x2a5c9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CA0u;
        goto label_2a5ca0;
    }
    ctx->pc = 0x2A5C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5CA0u);
        ctx->pc = 0x2A5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5C98u;
        // 0x2a5c9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5C98u, 0x2A5CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5CA0u;
label_2a5ca0:
    // 0x2a5ca0: 0x8e4402ac  lw          $a0, 0x2AC($s2)
    ctx->pc = 0x2a5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 684)));
label_2a5ca4:
    // 0x2a5ca4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a5ca8:
    if (ctx->pc == 0x2A5CA8u) {
        ctx->pc = 0x2A5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CA4u;
        // 0x2a5ca8: 0xae4002a8  sw          $zero, 0x2A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CACu;
        goto label_2a5cac;
    }
    ctx->pc = 0x2A5CA4u;
    {
        const bool branch_taken_0x2a5ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CA4u;
        // 0x2a5ca8: 0xae4002a8  sw          $zero, 0x2A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ca4) {
            ctx->pc = 0x2A5CBCu;
            goto label_2a5cbc;
        }
    }
    ctx->pc = 0x2A5CACu;
label_2a5cac:
    // 0x2a5cac: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2a5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2a5cb0:
    // 0x2a5cb0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a5cb4:
    // 0x2a5cb4: 0x40f809  jalr        $v0
label_2a5cb8:
    if (ctx->pc == 0x2A5CB8u) {
        ctx->pc = 0x2A5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CB4u;
        // 0x2a5cb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CBCu;
        goto label_2a5cbc;
    }
    ctx->pc = 0x2A5CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A5CBCu);
        ctx->pc = 0x2A5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CB4u;
        // 0x2a5cb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5CB4u, 0x2A5CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5CBCu;
label_2a5cbc:
    // 0x2a5cbc: 0xae4002ac  sw          $zero, 0x2AC($s2)
    ctx->pc = 0x2a5cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 0));
label_2a5cc0:
    // 0x2a5cc0: 0xc0a9680  jal         func_2A5A00
label_2a5cc4:
    if (ctx->pc == 0x2A5CC4u) {
        ctx->pc = 0x2A5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CC0u;
        // 0x2a5cc4: 0x2651027c  addiu       $s1, $s2, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 636));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CC8u;
        goto label_2a5cc8;
    }
    ctx->pc = 0x2A5CC0u;
    SET_GPR_U32(ctx, 31, 0x2A5CC8u);
    ctx->pc = 0x2A5CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CC0u;
    // 0x2a5cc4: 0x2651027c  addiu       $s1, $s2, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5A00u, 0x2A5CC0u, 0x2A5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CC8u;
label_2a5cc8:
    // 0x2a5cc8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_2a5ccc:
    if (ctx->pc == 0x2A5CCCu) {
        ctx->pc = 0x2A5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CC8u;
        // 0x2a5ccc: 0x26500294  addiu       $s0, $s2, 0x294 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 660));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CD0u;
        goto label_2a5cd0;
    }
    ctx->pc = 0x2A5CC8u;
    {
        const bool branch_taken_0x2a5cc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CC8u;
        // 0x2a5ccc: 0x26500294  addiu       $s0, $s2, 0x294 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5cc8) {
            ctx->pc = 0x2A5CF8u;
            goto label_2a5cf8;
        }
    }
    ctx->pc = 0x2A5CD0u;
label_2a5cd0:
    // 0x2a5cd0: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
label_2a5cd4:
    if (ctx->pc == 0x2A5CD4u) {
        ctx->pc = 0x2A5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CD0u;
        // 0x2a5cd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CD8u;
        goto label_2a5cd8;
    }
    ctx->pc = 0x2A5CD0u;
    {
        const bool branch_taken_0x2a5cd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CD0u;
        // 0x2a5cd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5cd0) {
            ctx->pc = 0x2A5CFCu;
            goto label_2a5cfc;
        }
    }
    ctx->pc = 0x2A5CD8u;
label_2a5cd8:
    // 0x2a5cd8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x2a5cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_2a5cdc:
    // 0x2a5cdc: 0x0  nop
    ctx->pc = 0x2a5cdcu;
    // NOP
label_2a5ce0:
    // 0x2a5ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ce4:
    // 0x2a5ce4: 0xc0d7412  jal         func_35D048
label_2a5ce8:
    if (ctx->pc == 0x2A5CE8u) {
        ctx->pc = 0x2A5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CE4u;
        // 0x2a5ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CECu;
        goto label_2a5cec;
    }
    ctx->pc = 0x2A5CE4u;
    SET_GPR_U32(ctx, 31, 0x2A5CECu);
    ctx->pc = 0x2A5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CE4u;
    // 0x2a5ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A5CE4u, 0x2A5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CECu;
label_2a5cec:
    // 0x2a5cec: 0x0  nop
    ctx->pc = 0x2a5cecu;
    // NOP
label_2a5cf0:
    // 0x2a5cf0: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
label_2a5cf4:
    if (ctx->pc == 0x2A5CF4u) {
        ctx->pc = 0x2A5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CF0u;
        // 0x2a5cf4: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5CF8u;
        goto label_2a5cf8;
    }
    ctx->pc = 0x2A5CF0u;
    {
        const bool branch_taken_0x2a5cf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x2A5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CF0u;
        // 0x2a5cf4: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5cf0) {
            ctx->pc = 0x2A5CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5ce0;
        }
    }
    ctx->pc = 0x2A5CF8u;
label_2a5cf8:
    // 0x2a5cf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a5cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a5cfc:
    // 0x2a5cfc: 0xc0a7622  jal         func_29D888
label_2a5d00:
    if (ctx->pc == 0x2A5D00u) {
        ctx->pc = 0x2A5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5CFCu;
        // 0x2a5d00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D04u;
        goto label_2a5d04;
    }
    ctx->pc = 0x2A5CFCu;
    SET_GPR_U32(ctx, 31, 0x2A5D04u);
    ctx->pc = 0x2A5D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CFCu;
    // 0x2a5d00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D888u, 0x2A5CFCu, 0x2A5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D04u;
label_2a5d04:
    // 0x2a5d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a5d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5d08:
    // 0x2a5d08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a5d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a5d0c:
    // 0x2a5d0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a5d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5d10:
    // 0x2a5d10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a5d10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2a5d14:
    // 0x2a5d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a5d18:
    // 0x2a5d18: 0x3e00008  jr          $ra
label_2a5d1c:
    if (ctx->pc == 0x2A5D1Cu) {
        ctx->pc = 0x2A5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D18u;
        // 0x2a5d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5D20u;
        goto label_fallthrough_0x2a5d18;
    }
    ctx->pc = 0x2A5D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D18u;
        // 0x2a5d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a5d18:
    ctx->pc = 0x2A5D20u;
}
