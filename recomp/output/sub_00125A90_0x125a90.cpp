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

// Function: sub_00125A90
// Address: 0x125a90 - 0x125be0
void sub_00125A90_0x125a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125A90_0x125a90");
#endif

    switch (ctx->pc) {
        case 0x125b04u: goto label_125b04;
        case 0x125b18u: goto label_125b18;
        case 0x125b2cu: goto label_125b2c;
        case 0x125b38u: goto label_125b38;
        case 0x125b5cu: goto label_125b5c;
        default: break;
    }

    ctx->pc = 0x125a90u;

    // 0x125a90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x125a94: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x125a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x125a98: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x125a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x125a9c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x125a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x125aa0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x125aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125aa4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x125aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x125aa8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x125aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x125aac: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x125aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x125ab0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x125ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x125ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x125ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125ab8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x125ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x125abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ac0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x125ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x125ac4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x125ac4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ac8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x125ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x125acc: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x125accu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ad0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x125ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x125ad4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x125ad4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ad8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x125ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x125adc: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x125adcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ae0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x125ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x125ae4: 0x8c52020c  lw          $s2, 0x20C($v0)
    ctx->pc = 0x125ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x125ae8: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x125AE8u;
    {
        const bool branch_taken_0x125ae8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AE8u;
        // 0x125aec: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ae8) {
            ctx->pc = 0x125BB0u;
            goto label_125bb0;
        }
    }
    ctx->pc = 0x125AF0u;
    // 0x125af0: 0x8e420238  lw          $v0, 0x238($s2)
    ctx->pc = 0x125af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x125af4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125AF4u;
    {
        const bool branch_taken_0x125af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AF4u;
        // 0x125af8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125af4) {
            ctx->pc = 0x125B08u;
            goto label_125b08;
        }
    }
    ctx->pc = 0x125AFCu;
    // 0x125afc: 0xc04973e  jal         func_125CF8
    ctx->pc = 0x125AFCu;
    SET_GPR_U32(ctx, 31, 0x125B04u);
    ctx->pc = 0x125B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125AFCu;
    // 0x125b00: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CF8u, 0x125AFCu, 0x125B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B04u;
label_125b04:
    // 0x125b04: 0xae400238  sw          $zero, 0x238($s2)
    ctx->pc = 0x125b04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
label_125b08:
    // 0x125b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x125b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b10: 0xc049f04  jal         func_127C10
    ctx->pc = 0x125B10u;
    SET_GPR_U32(ctx, 31, 0x125B18u);
    ctx->pc = 0x125B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B10u;
    // 0x125b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x125B10u, 0x125B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B18u;
label_125b18:
    // 0x125b18: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x125b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125b1c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x125B1Cu;
    {
        const bool branch_taken_0x125b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x125B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B1Cu;
        // 0x125b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b1c) {
            ctx->pc = 0x125B30u;
            goto label_125b30;
        }
    }
    ctx->pc = 0x125B24u;
    // 0x125b24: 0xc04970e  jal         func_125C38
    ctx->pc = 0x125B24u;
    SET_GPR_U32(ctx, 31, 0x125B2Cu);
    ctx->pc = 0x125B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B24u;
    // 0x125b28: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x125B24u, 0x125B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B2Cu;
label_125b2c:
    // 0x125b2c: 0xa2400234  sb          $zero, 0x234($s2)
    ctx->pc = 0x125b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 564), (uint8_t)GPR_U32(ctx, 0));
label_125b30:
    // 0x125b30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b34: 0x92220a70  lbu         $v0, 0xA70($s1)
    ctx->pc = 0x125b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2672)));
label_125b38:
    // 0x125b38: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x125b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x125b3c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x125B3Cu;
    {
        const bool branch_taken_0x125b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B3Cu;
        // 0x125b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b3c) {
            ctx->pc = 0x125B9Cu;
            goto label_125b9c;
        }
    }
    ctx->pc = 0x125B44u;
    // 0x125b44: 0x92300a70  lbu         $s0, 0xA70($s1)
    ctx->pc = 0x125b44u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2672)));
    // 0x125b48: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x125b48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x125b4c: 0x26100870  addiu       $s0, $s0, 0x870
    ctx->pc = 0x125b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x125b50: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x125b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x125b54: 0xc049ef6  jal         func_127BD8
    ctx->pc = 0x125B54u;
    SET_GPR_U32(ctx, 31, 0x125B5Cu);
    ctx->pc = 0x125B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B54u;
    // 0x125b58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BD8u, 0x125B54u, 0x125B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B5Cu;
label_125b5c:
    // 0x125b5c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x125b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x125b60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125b64: 0xae1e0008  sw          $fp, 0x8($s0)
    ctx->pc = 0x125b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 30));
    // 0x125b68: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x125b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x125b6c: 0xae17000c  sw          $s7, 0xC($s0)
    ctx->pc = 0x125b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 23));
    // 0x125b70: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x125b70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x125b74: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x125b74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x125b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125b7c: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x125b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x125b80: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x125b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x125b84: 0x92420234  lbu         $v0, 0x234($s2)
    ctx->pc = 0x125b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x125b88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125b8c: 0xa2420234  sb          $v0, 0x234($s2)
    ctx->pc = 0x125b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 564), (uint8_t)GPR_U32(ctx, 2));
    // 0x125b90: 0x92230a70  lbu         $v1, 0xA70($s1)
    ctx->pc = 0x125b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2672)));
    // 0x125b94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x125b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x125b98: 0xa2230a70  sb          $v1, 0xA70($s1)
    ctx->pc = 0x125b98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2672), (uint8_t)GPR_U32(ctx, 3));
label_125b9c:
    // 0x125b9c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x125b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x125ba0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x125ba0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x125ba4: 0x2e630002  sltiu       $v1, $s3, 0x2
    ctx->pc = 0x125ba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125ba8: 0x5460ffe3  bnel        $v1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x125BA8u;
    {
        const bool branch_taken_0x125ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x125ba8) {
            ctx->pc = 0x125BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125BA8u;
            // 0x125bac: 0x92220a70  lbu         $v0, 0xA70($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125b38;
        }
    }
    ctx->pc = 0x125BB0u;
label_125bb0:
    // 0x125bb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x125bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125bb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x125bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125bb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x125bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125bbc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x125bbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125bc0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x125bc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125bc4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x125bc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x125bc8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x125bc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125bcc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x125bccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125bd0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x125bd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125bd4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x125bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x125BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BD8u;
        // 0x125bdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125BE0u;
}
