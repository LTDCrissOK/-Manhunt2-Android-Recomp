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

// Function: sub_00155C90
// Address: 0x155c90 - 0x155da0
void sub_00155C90_0x155c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155C90_0x155c90");
#endif

    switch (ctx->pc) {
        case 0x155cb8u: goto label_155cb8;
        case 0x155cf0u: goto label_155cf0;
        case 0x155d04u: goto label_155d04;
        case 0x155d18u: goto label_155d18;
        case 0x155d2cu: goto label_155d2c;
        case 0x155d40u: goto label_155d40;
        case 0x155d54u: goto label_155d54;
        case 0x155d68u: goto label_155d68;
        case 0x155d74u: goto label_155d74;
        case 0x155d84u: goto label_155d84;
        default: break;
    }

    ctx->pc = 0x155c90u;

    // 0x155c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155c94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155c98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155c9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x155c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x155ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x155ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x155ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ca8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x155ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x155cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cb0: 0xc04633e  jal         func_118CF8
    ctx->pc = 0x155CB0u;
    SET_GPR_U32(ctx, 31, 0x155CB8u);
    ctx->pc = 0x155CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CB0u;
    // 0x155cb4: 0xae260468  sw          $a2, 0x468($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CF8u, 0x155CB0u, 0x155CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CB8u;
label_155cb8:
    // 0x155cb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x155cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cbc: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x155cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x155cc0: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x155cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x155cc4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x155CC4u;
    {
        const bool branch_taken_0x155cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CC4u;
        // 0x155cc8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cc4) {
            ctx->pc = 0x155D68u;
            goto label_155d68;
        }
    }
    ctx->pc = 0x155CCCu;
    // 0x155ccc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155cd0: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x155cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x155cd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x155cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155cd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155cdc: 0x800008  jr          $a0
    ctx->pc = 0x155CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155CE4u: goto label_155ce4;
            case 0x155CF8u: goto label_155cf8;
            case 0x155D0Cu: goto label_155d0c;
            case 0x155D20u: goto label_155d20;
            case 0x155D34u: goto label_155d34;
            case 0x155D48u: goto label_155d48;
            case 0x155D5Cu: goto label_155d5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155CDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x155CE4u;
label_155ce4:
    // 0x155ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ce8: 0xc0558d4  jal         func_156350
    ctx->pc = 0x155CE8u;
    SET_GPR_U32(ctx, 31, 0x155CF0u);
    ctx->pc = 0x155CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CE8u;
    // 0x155cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x155CE8u, 0x155CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CF0u;
label_155cf0:
    // 0x155cf0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x155CF0u;
    {
        const bool branch_taken_0x155cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CF0u;
        // 0x155cf4: 0xae320520  sw          $s2, 0x520($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cf0) {
            ctx->pc = 0x155D6Cu;
            goto label_155d6c;
        }
    }
    ctx->pc = 0x155CF8u;
label_155cf8:
    // 0x155cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cfc: 0xc0558e0  jal         func_156380
    ctx->pc = 0x155CFCu;
    SET_GPR_U32(ctx, 31, 0x155D04u);
    ctx->pc = 0x155D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CFCu;
    // 0x155d00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x155CFCu, 0x155D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D04u;
label_155d04:
    // 0x155d04: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x155D04u;
    {
        const bool branch_taken_0x155d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D04u;
        // 0x155d08: 0xae320520  sw          $s2, 0x520($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d04) {
            ctx->pc = 0x155D6Cu;
            goto label_155d6c;
        }
    }
    ctx->pc = 0x155D0Cu;
label_155d0c:
    // 0x155d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d10: 0xc0558e2  jal         func_156388
    ctx->pc = 0x155D10u;
    SET_GPR_U32(ctx, 31, 0x155D18u);
    ctx->pc = 0x155D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D10u;
    // 0x155d14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156388u, 0x155D10u, 0x155D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D18u;
label_155d18:
    // 0x155d18: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x155D18u;
    {
        const bool branch_taken_0x155d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D18u;
        // 0x155d1c: 0xae320520  sw          $s2, 0x520($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d18) {
            ctx->pc = 0x155D6Cu;
            goto label_155d6c;
        }
    }
    ctx->pc = 0x155D20u;
label_155d20:
    // 0x155d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d24: 0xc0558f0  jal         func_1563C0
    ctx->pc = 0x155D24u;
    SET_GPR_U32(ctx, 31, 0x155D2Cu);
    ctx->pc = 0x155D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D24u;
    // 0x155d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1563C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1563C0u, 0x155D24u, 0x155D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D2Cu;
label_155d2c:
    // 0x155d2c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x155D2Cu;
    {
        const bool branch_taken_0x155d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D2Cu;
        // 0x155d30: 0xae320520  sw          $s2, 0x520($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d2c) {
            ctx->pc = 0x155D6Cu;
            goto label_155d6c;
        }
    }
    ctx->pc = 0x155D34u;
label_155d34:
    // 0x155d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d38: 0xc055912  jal         func_156448
    ctx->pc = 0x155D38u;
    SET_GPR_U32(ctx, 31, 0x155D40u);
    ctx->pc = 0x155D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D38u;
    // 0x155d3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156448u, 0x155D38u, 0x155D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D40u;
label_155d40:
    // 0x155d40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x155D40u;
    {
        const bool branch_taken_0x155d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D40u;
        // 0x155d44: 0xae320520  sw          $s2, 0x520($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d40) {
            ctx->pc = 0x155D6Cu;
            goto label_155d6c;
        }
    }
    ctx->pc = 0x155D48u;
label_155d48:
    // 0x155d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d4c: 0xc055926  jal         func_156498
    ctx->pc = 0x155D4Cu;
    SET_GPR_U32(ctx, 31, 0x155D54u);
    ctx->pc = 0x155D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D4Cu;
    // 0x155d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156498u, 0x155D4Cu, 0x155D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D54u;
label_155d54:
    // 0x155d54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x155D54u;
    {
        const bool branch_taken_0x155d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D54u;
        // 0x155d58: 0xae320520  sw          $s2, 0x520($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d54) {
            ctx->pc = 0x155D6Cu;
            goto label_155d6c;
        }
    }
    ctx->pc = 0x155D5Cu;
label_155d5c:
    // 0x155d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d60: 0xc055938  jal         func_1564E0
    ctx->pc = 0x155D60u;
    SET_GPR_U32(ctx, 31, 0x155D68u);
    ctx->pc = 0x155D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D60u;
    // 0x155d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1564E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1564E0u, 0x155D60u, 0x155D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D68u;
label_155d68:
    // 0x155d68: 0xae320520  sw          $s2, 0x520($s1)
    ctx->pc = 0x155d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 18));
label_155d6c:
    // 0x155d6c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x155D6Cu;
    SET_GPR_U32(ctx, 31, 0x155D74u);
    ctx->pc = 0x155D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D6Cu;
    // 0x155d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x155D6Cu, 0x155D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D74u;
label_155d74:
    // 0x155d74: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x155d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x155d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d7c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x155D7Cu;
    SET_GPR_U32(ctx, 31, 0x155D84u);
    ctx->pc = 0x155D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D7Cu;
    // 0x155d80: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x155D7Cu, 0x155D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D84u;
label_155d84:
    // 0x155d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155d8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155d8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155d90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x155d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155d94: 0x3e00008  jr          $ra
    ctx->pc = 0x155D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D94u;
        // 0x155d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155D9Cu;
    // 0x155d9c: 0x0  nop
    ctx->pc = 0x155d9cu;
    // NOP
    ctx->pc = 0x155da0u;
}
