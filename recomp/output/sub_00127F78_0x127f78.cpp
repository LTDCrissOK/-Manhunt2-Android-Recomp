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

// Function: sub_00127F78
// Address: 0x127f78 - 0x1280a8
void sub_00127F78_0x127f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127F78_0x127f78");
#endif

    switch (ctx->pc) {
        case 0x127fa4u: goto label_127fa4;
        case 0x127fb0u: goto label_127fb0;
        case 0x127fd4u: goto label_127fd4;
        case 0x127ff8u: goto label_127ff8;
        case 0x128060u: goto label_128060;
        case 0x128068u: goto label_128068;
        case 0x128090u: goto label_128090;
        default: break;
    }

    ctx->pc = 0x127f78u;

    // 0x127f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x127f7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x127f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x127f80: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x127f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x127f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x127f8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x127f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x127f90: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x127f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x127f94: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x127F94u;
    {
        const bool branch_taken_0x127f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F94u;
        // 0x127f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f94) {
            ctx->pc = 0x128090u;
            goto label_128090;
        }
    }
    ctx->pc = 0x127F9Cu;
    // 0x127f9c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x127F9Cu;
    SET_GPR_U32(ctx, 31, 0x127FA4u);
    ctx->pc = 0x127FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F9Cu;
    // 0x127fa0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x127F9Cu, 0x127FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FA4u;
label_127fa4:
    // 0x127fa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x127FA4u;
    {
        const bool branch_taken_0x127fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FA4u;
        // 0x127fa8: 0x92020e80  lbu         $v0, 0xE80($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fa4) {
            ctx->pc = 0x127FB8u;
            goto label_127fb8;
        }
    }
    ctx->pc = 0x127FACu;
    // 0x127fac: 0x0  nop
    ctx->pc = 0x127facu;
    // NOP
label_127fb0:
    // 0x127fb0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x127fb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127fb4: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x127fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
label_127fb8:
    // 0x127fb8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x127fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127fbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x127FBCu;
    {
        const bool branch_taken_0x127fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FBCu;
        // 0x127fc0: 0x111140  sll         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fbc) {
            ctx->pc = 0x127FDCu;
            goto label_127fdc;
        }
    }
    ctx->pc = 0x127FC4u;
    // 0x127fc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x127fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127fc8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x127fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x127fcc: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x127FCCu;
    SET_GPR_U32(ctx, 31, 0x127FD4u);
    ctx->pc = 0x127FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127FCCu;
    // 0x127fd0: 0x8c450a84  lw          $a1, 0xA84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x127FCCu, 0x127FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FD4u;
label_127fd4:
    // 0x127fd4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x127FD4u;
    {
        const bool branch_taken_0x127fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FD4u;
        // 0x127fd8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fd4) {
            ctx->pc = 0x127FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127fb0;
        }
    }
    ctx->pc = 0x127FDCu;
label_127fdc:
    // 0x127fdc: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x127FDCu;
    {
        const bool branch_taken_0x127fdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FDCu;
        // 0x127fe0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fdc) {
            ctx->pc = 0x128088u;
            goto label_128088;
        }
    }
    ctx->pc = 0x127FE4u;
    // 0x127fe4: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x127fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x127fe8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x127fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127fec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x127FECu;
    {
        const bool branch_taken_0x127fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FECu;
        // 0x127ff0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fec) {
            ctx->pc = 0x128048u;
            goto label_128048;
        }
    }
    ctx->pc = 0x127FF4u;
    // 0x127ff4: 0x0  nop
    ctx->pc = 0x127ff4u;
    // NOP
label_127ff8:
    // 0x127ff8: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x127ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x127ffc: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x127ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x128000: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x128000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x128004: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x128004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x128008: 0x24630a80  addiu       $v1, $v1, 0xA80
    ctx->pc = 0x128008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2688));
    // 0x12800c: 0x24840a80  addiu       $a0, $a0, 0xA80
    ctx->pc = 0x12800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2688));
    // 0x128010: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x128010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128014: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x128014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x128018: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x128018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x12801c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x128020: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x128020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x128024: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x128024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x128028: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x128028u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12802c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x12802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x128030: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x128030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x128034: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x128034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128038: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x128038u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12803c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x12803cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128040: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x128040u;
    {
        const bool branch_taken_0x128040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128040u;
        // 0x128044: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128040) {
            ctx->pc = 0x127FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127ff8;
        }
    }
    ctx->pc = 0x128048u;
label_128048:
    // 0x128048: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x128048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x12804c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12804cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128050: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x128050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128054: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x128054u;
    {
        const bool branch_taken_0x128054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128054) {
            ctx->pc = 0x128058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128054u;
            // 0x128058: 0xa2110e80  sb          $s1, 0xE80($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 3712), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128084u;
            goto label_128084;
        }
    }
    ctx->pc = 0x12805Cu;
    // 0x12805c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12805cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128060:
    // 0x128060: 0xc049fd4  jal         func_127F50
    ctx->pc = 0x128060u;
    SET_GPR_U32(ctx, 31, 0x128068u);
    ctx->pc = 0x128064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128060u;
    // 0x128064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F50u, 0x128060u, 0x128068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128068u;
label_128068:
    // 0x128068: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x128068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12806c: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x12806cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x128070: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x128070u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x128074: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x128074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128078: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x128078u;
    {
        const bool branch_taken_0x128078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128078u;
        // 0x12807c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128078) {
            ctx->pc = 0x128060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128060;
        }
    }
    ctx->pc = 0x128080u;
    // 0x128080: 0xa2110e80  sb          $s1, 0xE80($s0)
    ctx->pc = 0x128080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3712), (uint8_t)GPR_U32(ctx, 17));
label_128084:
    // 0x128084: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_128088:
    // 0x128088: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x128088u;
    SET_GPR_U32(ctx, 31, 0x128090u);
    ctx->pc = 0x12808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128088u;
    // 0x12808c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x128088u, 0x128090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128090u;
label_128090:
    // 0x128090: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x128090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128094: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x128094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x128098: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x128098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12809c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12809cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1280a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1280A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1280A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280A0u;
        // 0x1280a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1280A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1280A8u;
}
