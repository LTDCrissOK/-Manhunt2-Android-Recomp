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

// Function: sub_00380F08
// Address: 0x380f08 - 0x381430
void sub_00380F08_0x380f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380F08_0x380f08");
#endif

    switch (ctx->pc) {
        case 0x380f50u: goto label_380f50;
        case 0x381108u: goto label_381108;
        case 0x381154u: goto label_381154;
        case 0x381198u: goto label_381198;
        case 0x381220u: goto label_381220;
        case 0x38126cu: goto label_38126c;
        default: break;
    }

    ctx->pc = 0x380f08u;

    // 0x380f08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x380f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x380f0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x380f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x380f10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x380f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x380f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x380f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x380f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x380f1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x380f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f20: 0x12000139  beqz        $s0, . + 4 + (0x139 << 2)
    ctx->pc = 0x380F20u;
    {
        const bool branch_taken_0x380f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x380F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F20u;
        // 0x380f24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f20) {
            ctx->pc = 0x381408u;
            goto label_381408;
        }
    }
    ctx->pc = 0x380F28u;
    // 0x380f28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x380f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380f2c: 0x10400137  beqz        $v0, . + 4 + (0x137 << 2)
    ctx->pc = 0x380F2Cu;
    {
        const bool branch_taken_0x380f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F2Cu;
        // 0x380f30: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f2c) {
            ctx->pc = 0x38140Cu;
            goto label_38140c;
        }
    }
    ctx->pc = 0x380F34u;
    // 0x380f34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x380f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x380f38: 0x10400133  beqz        $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x380F38u;
    {
        const bool branch_taken_0x380f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F38u;
        // 0x380f3c: 0x3a430004  xori        $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f38) {
            ctx->pc = 0x381408u;
            goto label_381408;
        }
    }
    ctx->pc = 0x380F40u;
    // 0x380f40: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x380f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x380f44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x380f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f48: 0x2411fffb  addiu       $s1, $zero, -0x5
    ctx->pc = 0x380f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x380f4c: 0x3900b  movn        $s2, $zero, $v1
    ctx->pc = 0x380f4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_380f50:
    // 0x380f50: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x380f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380f54: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x380f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x380f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380f5c: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x380f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x380f60: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x380F60u;
    {
        const bool branch_taken_0x380f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F60u;
        // 0x380f64: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f60) {
            ctx->pc = 0x381408u;
            goto label_381408;
        }
    }
    ctx->pc = 0x380F68u;
    // 0x380f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x380f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x380f6c: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x380f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x380f70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x380f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x380f74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x380f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380f78: 0x800008  jr          $a0
    ctx->pc = 0x380F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x380F80u: goto label_380f80;
            case 0x381024u: goto label_381024;
            case 0x3810ACu: goto label_3810ac;
            case 0x3810F4u: goto label_3810f4;
            case 0x381144u: goto label_381144;
            case 0x381194u: goto label_381194;
            case 0x3811ECu: goto label_3811ec;
            case 0x381210u: goto label_381210;
            case 0x38128Cu: goto label_38128c;
            case 0x3812D4u: goto label_3812d4;
            case 0x381324u: goto label_381324;
            case 0x381374u: goto label_381374;
            case 0x3813F8u: goto label_3813f8;
            case 0x381400u: goto label_381400;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380F78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x380F80u;
label_380f80:
    // 0x380f80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x380f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x380f84: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x380F84u;
    {
        const bool branch_taken_0x380f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F84u;
        // 0x380f88: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380f84) {
            ctx->pc = 0x381380u;
            goto label_381380;
        }
    }
    ctx->pc = 0x380F8Cu;
    // 0x380f8c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x380f8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x380f90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x380f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x380f94: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x380f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380f98: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x380f98u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x380f9c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x380f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x380fa0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x380fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x380fa4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x380fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x380fa8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x380fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380fac: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x380facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x380fb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x380fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x380fb4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x380fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x380fb8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x380fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x380fbc: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x380FBCu;
    {
        const bool branch_taken_0x380fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x380FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380FBCu;
        // 0x380fc0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380fbc) {
            ctx->pc = 0x380FECu;
            goto label_380fec;
        }
    }
    ctx->pc = 0x380FC4u;
    // 0x380fc4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x380fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380fc8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x380fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x380fcc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x380fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x380fd0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x380fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x380fd4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x380fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x380fd8: 0x24638210  addiu       $v1, $v1, -0x7DF0
    ctx->pc = 0x380fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935056));
    // 0x380fdc: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x380fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x380fe0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x380fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380fe4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x380FE4u;
    {
        const bool branch_taken_0x380fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380FE4u;
        // 0x380fe8: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380fe4) {
            ctx->pc = 0x380F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380f50;
        }
    }
    ctx->pc = 0x380FECu;
label_380fec:
    // 0x380fec: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x380fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380ff0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x380ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x380ff4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x380ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x380ff8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x380ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x380ffc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x380ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x381000: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x381000u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x381004: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x381004u;
    {
        const bool branch_taken_0x381004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x381008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381004u;
        // 0x381008: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381004) {
            ctx->pc = 0x38101Cu;
            goto label_38101c;
        }
    }
    ctx->pc = 0x38100Cu;
    // 0x38100c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x38100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x381010: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x381010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x381014: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x381014u;
    {
        const bool branch_taken_0x381014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381014u;
        // 0x381018: 0x24428230  addiu       $v0, $v0, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381014) {
            ctx->pc = 0x3813DCu;
            goto label_3813dc;
        }
    }
    ctx->pc = 0x38101Cu;
label_38101c:
    // 0x38101c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x381020: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x381020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_381024:
    // 0x381024: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x381024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x381028: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x381028u;
    {
        const bool branch_taken_0x381028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381028u;
        // 0x38102c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381028) {
            ctx->pc = 0x381380u;
            goto label_381380;
        }
    }
    ctx->pc = 0x381030u;
    // 0x381030: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x381030u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381034: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x381034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x381038: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x381038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x38103c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x38103cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x381040: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x381040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x381044: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x381044u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x381048: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x381048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38104c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x38104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381050: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x381050u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x381054: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x381054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x381058: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x381058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x38105c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x38105Cu;
    {
        const bool branch_taken_0x38105c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38105c) {
            ctx->pc = 0x381060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38105Cu;
            // 0x381060: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x381064u;
            goto label_381064;
        }
    }
    ctx->pc = 0x381064u;
label_381064:
    // 0x381064: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x381064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x381068: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x381068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x38106c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x38106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x381070: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x381070u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x381074: 0x1810  mfhi        $v1
    ctx->pc = 0x381074u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x381078: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x381078u;
    {
        const bool branch_taken_0x381078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381078u;
        // 0x38107c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381078) {
            ctx->pc = 0x381090u;
            goto label_381090;
        }
    }
    ctx->pc = 0x381080u;
    // 0x381080: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x381080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x381084: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x381084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x381088: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x381088u;
    {
        const bool branch_taken_0x381088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381088u;
        // 0x38108c: 0x24428248  addiu       $v0, $v0, -0x7DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381088) {
            ctx->pc = 0x3813DCu;
            goto label_3813dc;
        }
    }
    ctx->pc = 0x381090u;
label_381090:
    // 0x381090: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x381090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x381094: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381094u;
    {
        const bool branch_taken_0x381094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381094u;
        // 0x381098: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381094) {
            ctx->pc = 0x3810A8u;
            goto label_3810a8;
        }
    }
    ctx->pc = 0x38109Cu;
    // 0x38109c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x38109cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3810a0: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x3810A0u;
    {
        const bool branch_taken_0x3810a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3810A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3810A0u;
        // 0x3810a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3810a0) {
            ctx->pc = 0x380F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380f50;
        }
    }
    ctx->pc = 0x3810A8u;
label_3810a8:
    // 0x3810a8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3810a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3810ac:
    // 0x3810ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3810acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3810b0: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x3810B0u;
    {
        const bool branch_taken_0x3810b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3810B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3810B0u;
        // 0x3810b4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3810b0) {
            ctx->pc = 0x381380u;
            goto label_381380;
        }
    }
    ctx->pc = 0x3810B8u;
    // 0x3810b8: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3810b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3810bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3810bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3810c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3810c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3810c4: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3810c4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3810c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3810c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3810cc: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3810ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3810d0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3810d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3810d4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3810d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3810d8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3810d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3810dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3810dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3810e0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3810e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3810e4: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x3810e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    // 0x3810e8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3810e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3810ec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3810ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3810f0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3810f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3810f4:
    // 0x3810f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3810f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3810f8: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3810F8u;
    {
        const bool branch_taken_0x3810f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3810FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3810F8u;
        // 0x3810fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3810f8) {
            ctx->pc = 0x381380u;
            goto label_381380;
        }
    }
    ctx->pc = 0x381100u;
    // 0x381100: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x381100u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381104: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x381104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_381108:
    // 0x381108: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x381108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38110c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x38110cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x381110: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x381110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x381114: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x381114u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x381118: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x381118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38111c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x38111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381120: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x381120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x381124: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x381124u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x381128: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x381128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38112c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x38112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x381130: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x381130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x381134: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x381134u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x381138: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x381138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x38113c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x38113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381140: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x381140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_381144:
    // 0x381144: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x381144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x381148: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x381148u;
    {
        const bool branch_taken_0x381148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381148u;
        // 0x38114c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381148) {
            ctx->pc = 0x381380u;
            goto label_381380;
        }
    }
    ctx->pc = 0x381150u;
    // 0x381150: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x381150u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_381154:
    // 0x381154: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x381154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x381158: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x381158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38115c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x38115cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x381160: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x381160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x381164: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x381164u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x381168: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x381168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38116c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x38116cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381170: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x381170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x381174: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x381174u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x381178: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x381178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38117c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x38117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x381180: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x381180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x381184: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x381184u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x381188: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x381188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x38118c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x38118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381190: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x381190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_381194:
    // 0x381194: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x381194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_381198:
    // 0x381198: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x381198u;
    {
        const bool branch_taken_0x381198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381198u;
        // 0x38119c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381198) {
            ctx->pc = 0x381380u;
            goto label_381380;
        }
    }
    ctx->pc = 0x3811A0u;
    // 0x3811a0: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3811a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3811a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3811a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3811a8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3811a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3811ac: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3811acu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3811b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3811b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3811b4: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3811b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3811b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3811b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3811bc: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x3811bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3811c0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3811c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3811c4: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3811c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3811c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3811c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3811cc: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x3811ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3811d0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x3811d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x3811d4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3811d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3811d8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3811d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3811dc: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x3811dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3811e0: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x3811e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x3811e4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x3811E4u;
    {
        const bool branch_taken_0x3811e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3811E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811E4u;
        // 0x3811e8: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811e4) {
            ctx->pc = 0x38140Cu;
            goto label_38140c;
        }
    }
    ctx->pc = 0x3811ECu;
label_3811ec:
    // 0x3811ec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3811ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3811f0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3811f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3811f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3811f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3811f8: 0x24638260  addiu       $v1, $v1, -0x7DA0
    ctx->pc = 0x3811f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935136));
    // 0x3811fc: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3811fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x381200: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x381200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x381204: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x381204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381208: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x381208u;
    {
        const bool branch_taken_0x381208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381208u;
        // 0x38120c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381208) {
            ctx->pc = 0x38140Cu;
            goto label_38140c;
        }
    }
    ctx->pc = 0x381210u;
label_381210:
    // 0x381210: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x381210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x381214: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x381214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381218: 0xc0e0604  jal         func_381810
    ctx->pc = 0x381218u;
    SET_GPR_U32(ctx, 31, 0x381220u);
    ctx->pc = 0x38121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381218u;
    // 0x38121c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381810u, 0x381218u, 0x381220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381220u;
label_381220:
    // 0x381220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x381220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381224: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x381224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x381228: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x381228u;
    {
        const bool branch_taken_0x381228 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x381228) {
            ctx->pc = 0x38122Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381228u;
            // 0x38122c: 0x251880a  movz        $s1, $s2, $s1 (Delay Slot)
            if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381248u;
            goto label_381248;
        }
    }
    ctx->pc = 0x381230u;
    // 0x381230: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x381230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381234: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x381234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x381238: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x381238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x38123c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x38123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381240: 0x1000ff43  b           . + 4 + (-0xBD << 2)
    ctx->pc = 0x381240u;
    {
        const bool branch_taken_0x381240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381240u;
        // 0x381244: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381240) {
            ctx->pc = 0x380F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380f50;
        }
    }
    ctx->pc = 0x381248u;
label_381248:
    // 0x381248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x381248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38124c: 0x1622006f  bne         $s1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x38124Cu;
    {
        const bool branch_taken_0x38124c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x381250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38124Cu;
        // 0x381250: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38124c) {
            ctx->pc = 0x38140Cu;
            goto label_38140c;
        }
    }
    ctx->pc = 0x381254u;
    // 0x381254: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x381254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x381258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38125c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x38125cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381260: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x381260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x381264: 0xc0e08f0  jal         func_3823C0
    ctx->pc = 0x381264u;
    SET_GPR_U32(ctx, 31, 0x38126Cu);
    ctx->pc = 0x381268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381264u;
    // 0x381268: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3823C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3823C0u, 0x381264u, 0x38126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38126Cu;
label_38126c:
    // 0x38126c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x38126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381270: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x381270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x381274: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x381274u;
    {
        const bool branch_taken_0x381274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381274u;
        // 0x381278: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381274) {
            ctx->pc = 0x381284u;
            goto label_381284;
        }
    }
    ctx->pc = 0x38127Cu;
    // 0x38127c: 0x1000ff34  b           . + 4 + (-0xCC << 2)
    ctx->pc = 0x38127Cu;
    {
        const bool branch_taken_0x38127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38127Cu;
        // 0x381280: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38127c) {
            ctx->pc = 0x380F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380f50;
        }
    }
    ctx->pc = 0x381284u;
label_381284:
    // 0x381284: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x381284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x381288: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x381288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_38128c:
    // 0x38128c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x38128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x381290: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x381290u;
    {
        const bool branch_taken_0x381290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381290u;
        // 0x381294: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381290) {
            ctx->pc = 0x381380u;
            goto label_381380;
        }
    }
    ctx->pc = 0x381298u;
    // 0x381298: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x381298u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38129c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3812a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3812a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3812a4: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3812a4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3812a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3812a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3812ac: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3812acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3812b0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3812b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3812b4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3812b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3812b8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3812b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3812bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3812bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3812c0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3812c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3812c4: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x3812c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    // 0x3812c8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3812c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3812cc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3812ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3812d0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3812d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3812d4:
    // 0x3812d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3812d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3812d8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3812D8u;
    {
        const bool branch_taken_0x3812d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3812DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3812D8u;
        // 0x3812dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3812d8) {
            ctx->pc = 0x381380u;
            goto label_381380;
        }
    }
    ctx->pc = 0x3812E0u;
    // 0x3812e0: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x3812e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3812e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3812e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3812e8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3812e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3812ec: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x3812ecu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3812f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3812f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3812f4: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3812f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3812f8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3812f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3812fc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3812fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381300: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x381300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x381304: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x381304u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x381308: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x381308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38130c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x38130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x381310: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x381310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x381314: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x381314u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x381318: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x381318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x38131c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x38131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381320: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x381320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_381324:
    // 0x381324: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x381324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x381328: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x381328u;
    {
        const bool branch_taken_0x381328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381328u;
        // 0x38132c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381328) {
            ctx->pc = 0x381380u;
            goto label_381380;
        }
    }
    ctx->pc = 0x381330u;
    // 0x381330: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x381330u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x381334: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x381334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x381338: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x381338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x38133c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x38133cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x381340: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x381340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x381344: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x381344u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x381348: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x381348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38134c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x38134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381350: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x381350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x381354: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x381354u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x381358: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x381358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38135c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x38135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x381360: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x381360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x381364: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x381364u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x381368: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x381368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x38136c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x38136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381370: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x381370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_381374:
    // 0x381374: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x381374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x381378: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x381378u;
    {
        const bool branch_taken_0x381378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x381378) {
            ctx->pc = 0x38137Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381378u;
            // 0x38137c: 0xde030008  ld          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381388u;
            goto label_381388;
        }
    }
    ctx->pc = 0x381380u;
label_381380:
    // 0x381380: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x381380u;
    {
        const bool branch_taken_0x381380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381380u;
        // 0x381384: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381380) {
            ctx->pc = 0x38140Cu;
            goto label_38140c;
        }
    }
    ctx->pc = 0x381388u;
label_381388:
    // 0x381388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x381388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38138c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x38138cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x381390: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x381390u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x381394: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x381394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x381398: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x381398u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x38139c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x38139cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3813a0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3813a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3813a4: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3813a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3813a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3813a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3813ac: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3813acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3813b0: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3813b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x3813b4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3813b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3813b8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3813b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3813bc: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x3813bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3813c0: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x3813c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3813c4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3813C4u;
    {
        const bool branch_taken_0x3813c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3813C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813C4u;
        // 0x3813c8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3813c4) {
            ctx->pc = 0x3813F0u;
            goto label_3813f0;
        }
    }
    ctx->pc = 0x3813CCu;
    // 0x3813cc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3813ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3813d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3813d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3813d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3813d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3813d8: 0x24428270  addiu       $v0, $v0, -0x7D90
    ctx->pc = 0x3813d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935152));
label_3813dc:
    // 0x3813dc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3813dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3813e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3813e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3813e4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3813e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3813e8: 0x1000fed9  b           . + 4 + (-0x127 << 2)
    ctx->pc = 0x3813E8u;
    {
        const bool branch_taken_0x3813e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3813ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813E8u;
        // 0x3813ec: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3813e8) {
            ctx->pc = 0x380F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380f50;
        }
    }
    ctx->pc = 0x3813F0u;
label_3813f0:
    // 0x3813f0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3813f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3813f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3813f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3813f8:
    // 0x3813f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3813F8u;
    {
        const bool branch_taken_0x3813f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3813FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813F8u;
        // 0x3813fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3813f8) {
            ctx->pc = 0x38140Cu;
            goto label_38140c;
        }
    }
    ctx->pc = 0x381400u;
label_381400:
    // 0x381400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x381400u;
    {
        const bool branch_taken_0x381400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381400u;
        // 0x381404: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381400) {
            ctx->pc = 0x38140Cu;
            goto label_38140c;
        }
    }
    ctx->pc = 0x381408u;
label_381408:
    // 0x381408: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x381408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_38140c:
    // 0x38140c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38140cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x381410: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x381410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381414: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x381414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38141c: 0x3e00008  jr          $ra
    ctx->pc = 0x38141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38141Cu;
        // 0x381420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381424u;
    // 0x381424: 0x0  nop
    ctx->pc = 0x381424u;
    // NOP
    // 0x381428: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x381428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38142c: 0x0  nop
    ctx->pc = 0x38142cu;
    // NOP
    ctx->pc = 0x381430u;
}
