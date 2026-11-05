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

// Function: sub_002B9C00
// Address: 0x2b9c00 - 0x2b9fa0
void sub_002B9C00_0x2b9c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9C00_0x2b9c00");
#endif

    switch (ctx->pc) {
        case 0x2b9c24u: goto label_2b9c24;
        case 0x2b9c90u: goto label_2b9c90;
        case 0x2b9cb0u: goto label_2b9cb0;
        case 0x2b9cecu: goto label_2b9cec;
        case 0x2b9d08u: goto label_2b9d08;
        case 0x2b9d30u: goto label_2b9d30;
        case 0x2b9d50u: goto label_2b9d50;
        case 0x2b9d74u: goto label_2b9d74;
        case 0x2b9d98u: goto label_2b9d98;
        case 0x2b9dc0u: goto label_2b9dc0;
        case 0x2b9de0u: goto label_2b9de0;
        case 0x2b9e04u: goto label_2b9e04;
        case 0x2b9e24u: goto label_2b9e24;
        case 0x2b9e48u: goto label_2b9e48;
        case 0x2b9e68u: goto label_2b9e68;
        case 0x2b9e8cu: goto label_2b9e8c;
        case 0x2b9eb4u: goto label_2b9eb4;
        case 0x2b9ee8u: goto label_2b9ee8;
        case 0x2b9f10u: goto label_2b9f10;
        case 0x2b9f34u: goto label_2b9f34;
        case 0x2b9f78u: goto label_2b9f78;
        case 0x2b9f80u: goto label_2b9f80;
        default: break;
    }

    ctx->pc = 0x2b9c00u;

    // 0x2b9c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9c0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b9c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b9c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b9c18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b9c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b9c1c: 0xc0ee616  jal         func_3B9858
    ctx->pc = 0x2B9C1Cu;
    SET_GPR_U32(ctx, 31, 0x2B9C24u);
    ctx->pc = 0x2B9C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C1Cu;
    // 0x2b9c20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9858u, 0x2B9C1Cu, 0x2B9C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C24u;
label_2b9c24:
    // 0x2b9c24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2b9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2b9c28: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x2b9c28u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2b9c2c: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9C2Cu;
    {
        const bool branch_taken_0x2b9c2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c2c) {
            ctx->pc = 0x2B9C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9C2Cu;
            // 0x2b9c30: 0x86030004  lh          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9C40u;
            goto label_2b9c40;
        }
    }
    ctx->pc = 0x2B9C34u;
    // 0x2b9c34: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x2b9c34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b9c38: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x2B9C38u;
    {
        const bool branch_taken_0x2b9c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C38u;
        // 0x2b9c3c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c38) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9C40u;
label_2b9c40:
    // 0x2b9c40: 0x2c620052  sltiu       $v0, $v1, 0x52
    ctx->pc = 0x2b9c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
    // 0x2b9c44: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2B9C44u;
    {
        const bool branch_taken_0x2b9c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C44u;
        // 0x2b9c48: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c44) {
            ctx->pc = 0x2B9F48u;
            goto label_2b9f48;
        }
    }
    ctx->pc = 0x2B9C4Cu;
    // 0x2b9c4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b9c50: 0x2442fef0  addiu       $v0, $v0, -0x110
    ctx->pc = 0x2b9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967024));
    // 0x2b9c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b9c58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9c5c: 0x800008  jr          $a0
    ctx->pc = 0x2B9C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9C64u: goto label_2b9c64;
            case 0x2B9CF4u: goto label_2b9cf4;
            case 0x2B9D1Cu: goto label_2b9d1c;
            case 0x2B9D44u: goto label_2b9d44;
            case 0x2B9D84u: goto label_2b9d84;
            case 0x2B9DACu: goto label_2b9dac;
            case 0x2B9DD4u: goto label_2b9dd4;
            case 0x2B9E18u: goto label_2b9e18;
            case 0x2B9E3Cu: goto label_2b9e3c;
            case 0x2B9E5Cu: goto label_2b9e5c;
            case 0x2B9EA0u: goto label_2b9ea0;
            case 0x2B9F28u: goto label_2b9f28;
            case 0x2B9F48u: goto label_2b9f48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9C5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B9C64u;
label_2b9c64:
    // 0x2b9c64: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b9c68: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9C68u;
    {
        const bool branch_taken_0x2b9c68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C68u;
        // 0x2b9c6c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c68) {
            ctx->pc = 0x2B9C7Cu;
            goto label_2b9c7c;
        }
    }
    ctx->pc = 0x2B9C70u;
    // 0x2b9c70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9c74: 0x564200c5  bnel        $s2, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2B9C74u;
    {
        const bool branch_taken_0x2b9c74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9c74) {
            ctx->pc = 0x2B9C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9C74u;
            // 0x2b9c78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9C7Cu;
label_2b9c7c:
    // 0x2b9c7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9c84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b9c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9c88: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x2B9C88u;
    SET_GPR_U32(ctx, 31, 0x2B9C90u);
    ctx->pc = 0x2B9C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C88u;
    // 0x2b9c8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9B10u, 0x2B9C88u, 0x2B9C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C90u;
label_2b9c90:
    // 0x2b9c90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2b9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2b9c94: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x2b9c94u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2b9c98: 0x122000bb  beqz        $s1, . + 4 + (0xBB << 2)
    ctx->pc = 0x2B9C98u;
    {
        const bool branch_taken_0x2b9c98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C98u;
        // 0x2b9c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c98) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9CA0u;
    // 0x2b9ca0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9ca4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b9ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9ca8: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x2B9CA8u;
    SET_GPR_U32(ctx, 31, 0x2B9CB0u);
    ctx->pc = 0x2B9CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CA8u;
    // 0x2b9cac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9B10u, 0x2B9CA8u, 0x2B9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CB0u;
label_2b9cb0:
    // 0x2b9cb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b9cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9cb4: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9CB4u;
    {
        const bool branch_taken_0x2b9cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CB4u;
        // 0x2b9cb8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cb4) {
            ctx->pc = 0x2B9CCCu;
            goto label_2b9ccc;
        }
    }
    ctx->pc = 0x2B9CBCu;
    // 0x2b9cbc: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9CBCu;
    {
        const bool branch_taken_0x2b9cbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CBCu;
        // 0x2b9cc0: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cbc) {
            ctx->pc = 0x2B9CD8u;
            goto label_2b9cd8;
        }
    }
    ctx->pc = 0x2B9CC4u;
    // 0x2b9cc4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2B9CC4u;
    {
        const bool branch_taken_0x2b9cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CC4u;
        // 0x2b9cc8: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cc4) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9CCCu;
label_2b9ccc:
    // 0x2b9ccc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2b9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b9cd0: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x2B9CD0u;
    {
        const bool branch_taken_0x2b9cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CD0u;
        // 0x2b9cd4: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cd0) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9CD8u;
label_2b9cd8:
    // 0x2b9cd8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2b9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b9cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ce0: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2b9ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9ce4: 0xc0ae7e8  jal         func_2B9FA0
    ctx->pc = 0x2B9CE4u;
    SET_GPR_U32(ctx, 31, 0x2B9CECu);
    ctx->pc = 0x2B9CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CE4u;
    // 0x2b9ce8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9FA0u, 0x2B9CE4u, 0x2B9CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CECu;
label_2b9cec:
    // 0x2b9cec: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2B9CECu;
    {
        const bool branch_taken_0x2b9cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CECu;
        // 0x2b9cf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cec) {
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9CF4u;
label_2b9cf4:
    // 0x2b9cf4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9cfc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b9cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9d00: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x2B9D00u;
    SET_GPR_U32(ctx, 31, 0x2B9D08u);
    ctx->pc = 0x2B9D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D00u;
    // 0x2b9d04: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9B10u, 0x2B9D00u, 0x2B9D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D08u;
label_2b9d08:
    // 0x2b9d08: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2B9D08u;
    {
        const bool branch_taken_0x2b9d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D08u;
        // 0x2b9d0c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d08) {
            ctx->pc = 0x2B9F40u;
            goto label_2b9f40;
        }
    }
    ctx->pc = 0x2B9D10u;
    // 0x2b9d10: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2b9d10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b9d14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b9d18: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2b9d18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_2b9d1c:
    // 0x2b9d1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9d24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b9d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9d28: 0xc0ee712  jal         func_3B9C48
    ctx->pc = 0x2B9D28u;
    SET_GPR_U32(ctx, 31, 0x2B9D30u);
    ctx->pc = 0x2B9D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D28u;
    // 0x2b9d2c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9C48u, 0x2B9D28u, 0x2B9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D30u;
label_2b9d30:
    // 0x2b9d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9d34: 0x54430095  bnel        $v0, $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x2B9D34u;
    {
        const bool branch_taken_0x2b9d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9d34) {
            ctx->pc = 0x2B9D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D34u;
            // 0x2b9d38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9D3Cu;
    // 0x2b9d3c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2B9D3Cu;
    {
        const bool branch_taken_0x2b9d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D3Cu;
        // 0x2b9d40: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d3c) {
            ctx->pc = 0x2B9F1Cu;
            goto label_2b9f1c;
        }
    }
    ctx->pc = 0x2B9D44u;
label_2b9d44:
    // 0x2b9d44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9d48: 0xc0ee664  jal         func_3B9990
    ctx->pc = 0x2B9D48u;
    SET_GPR_U32(ctx, 31, 0x2B9D50u);
    ctx->pc = 0x2B9D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D48u;
    // 0x2b9d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9990u, 0x2B9D48u, 0x2B9D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D50u;
label_2b9d50:
    // 0x2b9d50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9d54: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9D54u;
    {
        const bool branch_taken_0x2b9d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9d54) {
            ctx->pc = 0x2B9D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D54u;
            // 0x2b9d58: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D6Cu;
            goto label_2b9d6c;
        }
    }
    ctx->pc = 0x2B9D5Cu;
    // 0x2b9d5c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2b9d5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b9d60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b9d64: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2b9d64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9d68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9d6c:
    // 0x2b9d6c: 0xc0ee664  jal         func_3B9990
    ctx->pc = 0x2B9D6Cu;
    SET_GPR_U32(ctx, 31, 0x2B9D74u);
    ctx->pc = 0x2B9D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D6Cu;
    // 0x2b9d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9990u, 0x2B9D6Cu, 0x2B9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D74u;
label_2b9d74:
    // 0x2b9d74: 0x50400084  beql        $v0, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x2B9D74u;
    {
        const bool branch_taken_0x2b9d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d74) {
            ctx->pc = 0x2B9D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D74u;
            // 0x2b9d78: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9D7Cu;
    // 0x2b9d7c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2B9D7Cu;
    {
        const bool branch_taken_0x2b9d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D7Cu;
        // 0x2b9d80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d7c) {
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9D84u;
label_2b9d84:
    // 0x2b9d84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9d8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b9d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9d90: 0xc0ee6c4  jal         func_3B9B10
    ctx->pc = 0x2B9D90u;
    SET_GPR_U32(ctx, 31, 0x2B9D98u);
    ctx->pc = 0x2B9D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D90u;
    // 0x2b9d94: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9B10u, 0x2B9D90u, 0x2B9D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D98u;
label_2b9d98:
    // 0x2b9d98: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2B9D98u;
    {
        const bool branch_taken_0x2b9d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D98u;
        // 0x2b9d9c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d98) {
            ctx->pc = 0x2B9F40u;
            goto label_2b9f40;
        }
    }
    ctx->pc = 0x2B9DA0u;
    // 0x2b9da0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2b9da0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b9da4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b9da8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2b9da8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_2b9dac:
    // 0x2b9dac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b9db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9db8: 0xc0ee712  jal         func_3B9C48
    ctx->pc = 0x2B9DB8u;
    SET_GPR_U32(ctx, 31, 0x2B9DC0u);
    ctx->pc = 0x2B9DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DB8u;
    // 0x2b9dbc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9C48u, 0x2B9DB8u, 0x2B9DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DC0u;
label_2b9dc0:
    // 0x2b9dc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9dc4: 0x54430071  bnel        $v0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2B9DC4u;
    {
        const bool branch_taken_0x2b9dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9dc4) {
            ctx->pc = 0x2B9DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9DC4u;
            // 0x2b9dc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9DCCu;
    // 0x2b9dcc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2B9DCCu;
    {
        const bool branch_taken_0x2b9dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DCCu;
        // 0x2b9dd0: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9dcc) {
            ctx->pc = 0x2B9F1Cu;
            goto label_2b9f1c;
        }
    }
    ctx->pc = 0x2B9DD4u;
label_2b9dd4:
    // 0x2b9dd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9dd8: 0xc0ee664  jal         func_3B9990
    ctx->pc = 0x2B9DD8u;
    SET_GPR_U32(ctx, 31, 0x2B9DE0u);
    ctx->pc = 0x2B9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DD8u;
    // 0x2b9ddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9990u, 0x2B9DD8u, 0x2B9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DE0u;
label_2b9de0:
    // 0x2b9de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9de4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9DE4u;
    {
        const bool branch_taken_0x2b9de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9de4) {
            ctx->pc = 0x2B9DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9DE4u;
            // 0x2b9de8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9DFCu;
            goto label_2b9dfc;
        }
    }
    ctx->pc = 0x2B9DECu;
    // 0x2b9dec: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2b9decu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b9df0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b9df4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2b9df4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9df8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9dfc:
    // 0x2b9dfc: 0xc0ee664  jal         func_3B9990
    ctx->pc = 0x2B9DFCu;
    SET_GPR_U32(ctx, 31, 0x2B9E04u);
    ctx->pc = 0x2B9E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DFCu;
    // 0x2b9e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9990u, 0x2B9DFCu, 0x2B9E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E04u;
label_2b9e04:
    // 0x2b9e04: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x2B9E04u;
    {
        const bool branch_taken_0x2b9e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e04) {
            ctx->pc = 0x2B9E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E04u;
            // 0x2b9e08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9E0Cu;
    // 0x2b9e0c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2b9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b9e10: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2B9E10u;
    {
        const bool branch_taken_0x2b9e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E10u;
        // 0x2b9e14: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e10) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9E18u;
label_2b9e18:
    // 0x2b9e18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9e1c: 0xc0ee7d4  jal         func_3B9F50
    ctx->pc = 0x2B9E1Cu;
    SET_GPR_U32(ctx, 31, 0x2B9E24u);
    ctx->pc = 0x2B9E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E1Cu;
    // 0x2b9e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9F50u, 0x2B9E1Cu, 0x2B9E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E24u;
label_2b9e24:
    // 0x2b9e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9e28: 0x14430045  bne         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2B9E28u;
    {
        const bool branch_taken_0x2b9e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E28u;
        // 0x2b9e2c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e28) {
            ctx->pc = 0x2B9F40u;
            goto label_2b9f40;
        }
    }
    ctx->pc = 0x2B9E30u;
    // 0x2b9e30: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2b9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2b9e34: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2B9E34u;
    {
        const bool branch_taken_0x2b9e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E34u;
        // 0x2b9e38: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e34) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9E3Cu;
label_2b9e3c:
    // 0x2b9e3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9e40: 0xc0ee7f4  jal         func_3B9FD0
    ctx->pc = 0x2B9E40u;
    SET_GPR_U32(ctx, 31, 0x2B9E48u);
    ctx->pc = 0x2B9E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E40u;
    // 0x2b9e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9FD0u, 0x2B9E40u, 0x2B9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E48u;
label_2b9e48:
    // 0x2b9e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9e4c: 0x5443004f  bnel        $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2B9E4Cu;
    {
        const bool branch_taken_0x2b9e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9e4c) {
            ctx->pc = 0x2B9E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E4Cu;
            // 0x2b9e50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9E54u;
    // 0x2b9e54: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2B9E54u;
    {
        const bool branch_taken_0x2b9e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E54u;
        // 0x2b9e58: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e54) {
            ctx->pc = 0x2B9F1Cu;
            goto label_2b9f1c;
        }
    }
    ctx->pc = 0x2B9E5Cu;
label_2b9e5c:
    // 0x2b9e5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9e60: 0xc0ee664  jal         func_3B9990
    ctx->pc = 0x2B9E60u;
    SET_GPR_U32(ctx, 31, 0x2B9E68u);
    ctx->pc = 0x2B9E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E60u;
    // 0x2b9e64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9990u, 0x2B9E60u, 0x2B9E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E68u;
label_2b9e68:
    // 0x2b9e68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9e6c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9E6Cu;
    {
        const bool branch_taken_0x2b9e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9e6c) {
            ctx->pc = 0x2B9E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E6Cu;
            // 0x2b9e70: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E84u;
            goto label_2b9e84;
        }
    }
    ctx->pc = 0x2B9E74u;
    // 0x2b9e74: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2b9e74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b9e78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b9e7c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2b9e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9e80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9e84:
    // 0x2b9e84: 0xc0ee664  jal         func_3B9990
    ctx->pc = 0x2B9E84u;
    SET_GPR_U32(ctx, 31, 0x2B9E8Cu);
    ctx->pc = 0x2B9E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E84u;
    // 0x2b9e88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9990u, 0x2B9E84u, 0x2B9E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E8Cu;
label_2b9e8c:
    // 0x2b9e8c: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x2B9E8Cu;
    {
        const bool branch_taken_0x2b9e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e8c) {
            ctx->pc = 0x2B9E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E8Cu;
            // 0x2b9e90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9E94u;
    // 0x2b9e94: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2b9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b9e98: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2B9E98u;
    {
        const bool branch_taken_0x2b9e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E98u;
        // 0x2b9e9c: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e98) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9EA0u;
label_2b9ea0:
    // 0x2b9ea0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ea8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2b9ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9eac: 0xc0ee67c  jal         func_3B99F0
    ctx->pc = 0x2B9EACu;
    SET_GPR_U32(ctx, 31, 0x2B9EB4u);
    ctx->pc = 0x2B9EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9EACu;
    // 0x2b9eb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B99F0u, 0x2B9EACu, 0x2B9EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9EB4u;
label_2b9eb4:
    // 0x2b9eb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9EB4u;
    {
        const bool branch_taken_0x2b9eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EB4u;
        // 0x2b9eb8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9eb4) {
            ctx->pc = 0x2B9EC8u;
            goto label_2b9ec8;
        }
    }
    ctx->pc = 0x2B9EBCu;
    // 0x2b9ebc: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2b9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2b9ec0: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2b9ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9ec4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2b9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2b9ec8:
    // 0x2b9ec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9ecc: 0x24434e88  addiu       $v1, $v0, 0x4E88
    ctx->pc = 0x2b9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20104));
    // 0x2b9ed0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b9ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ed4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2b9ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9ed8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2b9ed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9edc: 0xa0404e88  sb          $zero, 0x4E88($v0)
    ctx->pc = 0x2b9edcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20104), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9ee0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b9ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9ee4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2b9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2b9ee8:
    // 0x2b9ee8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2b9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b9eec: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2b9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b9ef0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2b9ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b9ef4: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x2b9ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b9ef8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B9EF8u;
    {
        const bool branch_taken_0x2b9ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EF8u;
        // 0x2b9efc: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ef8) {
            ctx->pc = 0x2B9EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9ee8;
        }
    }
    ctx->pc = 0x2B9F00u;
    // 0x2b9f00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9f04: 0x24c64e88  addiu       $a2, $a2, 0x4E88
    ctx->pc = 0x2b9f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20104));
    // 0x2b9f08: 0xc0ee772  jal         func_3B9DC8
    ctx->pc = 0x2B9F08u;
    SET_GPR_U32(ctx, 31, 0x2B9F10u);
    ctx->pc = 0x2B9F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F08u;
    // 0x2b9f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DC8u, 0x2B9F08u, 0x2B9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F10u;
label_2b9f10:
    // 0x2b9f10: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B9F10u;
    {
        const bool branch_taken_0x2b9f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f10) {
            ctx->pc = 0x2B9F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9F10u;
            // 0x2b9f14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9F18u;
    // 0x2b9f18: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2b9f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2b9f1c:
    // 0x2b9f1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b9f20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B9F20u;
    {
        const bool branch_taken_0x2b9f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F20u;
        // 0x2b9f24: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f20) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9F28u;
label_2b9f28:
    // 0x2b9f28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9f2c: 0xc0ee616  jal         func_3B9858
    ctx->pc = 0x2B9F2Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F34u);
    ctx->pc = 0x2B9F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F2Cu;
    // 0x2b9f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9858u, 0x2B9F2Cu, 0x2B9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F34u;
label_2b9f34:
    // 0x2b9f34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b9f38: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B9F38u;
    {
        const bool branch_taken_0x2b9f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F38u;
        // 0x2b9f3c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f38) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9F40u;
label_2b9f40:
    // 0x2b9f40: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B9F40u;
    {
        const bool branch_taken_0x2b9f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F40u;
        // 0x2b9f44: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f40) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9F48u;
label_2b9f48:
    // 0x2b9f48: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b9f4c: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B9F4Cu;
    {
        const bool branch_taken_0x2b9f4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F4Cu;
        // 0x2b9f50: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f4c) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9F54u;
    // 0x2b9f54: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9F54u;
    {
        const bool branch_taken_0x2b9f54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F54u;
        // 0x2b9f58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f54) {
            ctx->pc = 0x2B9F64u;
            goto label_2b9f64;
        }
    }
    ctx->pc = 0x2B9F5Cu;
    // 0x2b9f5c: 0x5642000b  bnel        $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B9F5Cu;
    {
        const bool branch_taken_0x2b9f5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9f5c) {
            ctx->pc = 0x2B9F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9F5Cu;
            // 0x2b9f60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F8Cu;
            goto label_2b9f8c;
        }
    }
    ctx->pc = 0x2B9F64u;
label_2b9f64:
    // 0x2b9f64: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2b9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b9f68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b9f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9f6c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2b9f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9f70: 0xc0ae7e8  jal         func_2B9FA0
    ctx->pc = 0x2B9F70u;
    SET_GPR_U32(ctx, 31, 0x2B9F78u);
    ctx->pc = 0x2B9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F70u;
    // 0x2b9f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9FA0u, 0x2B9F70u, 0x2B9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F78u;
label_2b9f78:
    // 0x2b9f78: 0xc0ae864  jal         func_2BA190
    ctx->pc = 0x2B9F78u;
    SET_GPR_U32(ctx, 31, 0x2B9F80u);
    ctx->pc = 0x2B9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F78u;
    // 0x2b9f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA190u, 0x2B9F78u, 0x2B9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F80u;
label_2b9f80:
    // 0x2b9f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9f84: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2b9f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2b9f88:
    // 0x2b9f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9f8c:
    // 0x2b9f8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b9f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9f90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b9f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9f94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b9f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F98u;
        // 0x2b9f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9FA0u;
}
