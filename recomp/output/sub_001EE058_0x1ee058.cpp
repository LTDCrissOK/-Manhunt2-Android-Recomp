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

// Function: sub_001EE058
// Address: 0x1ee058 - 0x1ee618
void sub_001EE058_0x1ee058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE058_0x1ee058");
#endif

    switch (ctx->pc) {
        case 0x1ee108u: goto label_1ee108;
        case 0x1ee114u: goto label_1ee114;
        case 0x1ee124u: goto label_1ee124;
        case 0x1ee148u: goto label_1ee148;
        case 0x1ee158u: goto label_1ee158;
        case 0x1ee424u: goto label_1ee424;
        case 0x1ee448u: goto label_1ee448;
        case 0x1ee45cu: goto label_1ee45c;
        case 0x1ee490u: goto label_1ee490;
        case 0x1ee4acu: goto label_1ee4ac;
        case 0x1ee4bcu: goto label_1ee4bc;
        case 0x1ee4e4u: goto label_1ee4e4;
        case 0x1ee4f8u: goto label_1ee4f8;
        case 0x1ee50cu: goto label_1ee50c;
        case 0x1ee5acu: goto label_1ee5ac;
        default: break;
    }

    ctx->pc = 0x1ee058u;

    // 0x1ee058: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ee058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ee05c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1ee05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ee060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ee064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ee064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ee068: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ee068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee06c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ee06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ee070: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ee070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee074: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1ee074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1ee078: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ee078u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee07c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ee07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ee080: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1ee080u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee084: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ee084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ee088: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ee088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ee08c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ee08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ee090: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ee090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1ee094: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ee094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ee098: 0x90f40008  lbu         $s4, 0x8($a3)
    ctx->pc = 0x1ee098u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ee09c: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE09Cu;
    {
        const bool branch_taken_0x1ee09c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE09Cu;
        // 0x1ee0a0: 0x90f30009  lbu         $s3, 0x9($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee09c) {
            ctx->pc = 0x1EE0C4u;
            goto label_1ee0c4;
        }
    }
    ctx->pc = 0x1EE0A4u;
    // 0x1ee0a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1ee0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ee0a8: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x1ee0a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0ac: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1ee0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1ee0b0: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1ee0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1ee0b4: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1ee0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1ee0b8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1ee0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ee0bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EE0BCu;
    {
        const bool branch_taken_0x1ee0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0BCu;
        // 0x1ee0c0: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0bc) {
            ctx->pc = 0x1EE0ECu;
            goto label_1ee0ec;
        }
    }
    ctx->pc = 0x1EE0C4u;
label_1ee0c4:
    // 0x1ee0c4: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE0C4u;
    {
        const bool branch_taken_0x1ee0c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee0c4) {
            ctx->pc = 0x1EE0ECu;
            goto label_1ee0ec;
        }
    }
    ctx->pc = 0x1EE0CCu;
    // 0x1ee0cc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1ee0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ee0d0: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x1ee0d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0d4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1ee0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1ee0d8: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1ee0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1ee0dc: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1ee0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1ee0e0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1ee0e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ee0e4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1ee0e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0e8: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x1ee0e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_1ee0ec:
    // 0x1ee0ec: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE0ECu;
    {
        const bool branch_taken_0x1ee0ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0ECu;
        // 0x1ee0f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0ec) {
            ctx->pc = 0x1EE0F8u;
            goto label_1ee0f8;
        }
    }
    ctx->pc = 0x1EE0F4u;
    // 0x1ee0f4: 0x8e510274  lw          $s1, 0x274($s2)
    ctx->pc = 0x1ee0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_1ee0f8:
    // 0x1ee0f8: 0x122000f4  beqz        $s1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x1EE0F8u;
    {
        const bool branch_taken_0x1ee0f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0F8u;
        // 0x1ee0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0f8) {
            ctx->pc = 0x1EE4CCu;
            goto label_1ee4cc;
        }
    }
    ctx->pc = 0x1EE100u;
    // 0x1ee100: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1EE100u;
    SET_GPR_U32(ctx, 31, 0x1EE108u);
    ctx->pc = 0x1EE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE100u;
    // 0x1ee104: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1EE100u, 0x1EE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE108u;
label_1ee108:
    // 0x1ee108: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ee108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee10c: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1EE10Cu;
    SET_GPR_U32(ctx, 31, 0x1EE114u);
    ctx->pc = 0x1EE110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE10Cu;
    // 0x1ee110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1EE10Cu, 0x1EE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE114u;
label_1ee114:
    // 0x1ee114: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE114u;
    {
        const bool branch_taken_0x1ee114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee114) {
            ctx->pc = 0x1EE118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE114u;
            // 0x1ee118: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE130u;
            goto label_1ee130;
        }
    }
    ctx->pc = 0x1EE11Cu;
    // 0x1ee11c: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1EE11Cu;
    SET_GPR_U32(ctx, 31, 0x1EE124u);
    ctx->pc = 0x1EE120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE11Cu;
    // 0x1ee120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1EE11Cu, 0x1EE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE124u;
label_1ee124:
    // 0x1ee124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee128: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EE128u;
    {
        const bool branch_taken_0x1ee128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ee128) {
            ctx->pc = 0x1EE12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE128u;
            // 0x1ee12c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE130u;
            goto label_1ee130;
        }
    }
    ctx->pc = 0x1EE130u;
label_1ee130:
    // 0x1ee130: 0x1260012b  beqz        $s3, . + 4 + (0x12B << 2)
    ctx->pc = 0x1EE130u;
    {
        const bool branch_taken_0x1ee130 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE130u;
        // 0x1ee134: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee130) {
            ctx->pc = 0x1EE5E0u;
            goto label_1ee5e0;
        }
    }
    ctx->pc = 0x1EE138u;
    // 0x1ee138: 0x1282012a  beq         $s4, $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x1EE138u;
    {
        const bool branch_taken_0x1ee138 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE138u;
        // 0x1ee13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee138) {
            ctx->pc = 0x1EE5E4u;
            goto label_1ee5e4;
        }
    }
    ctx->pc = 0x1EE140u;
    // 0x1ee140: 0xc098b72  jal         func_262DC8
    ctx->pc = 0x1EE140u;
    SET_GPR_U32(ctx, 31, 0x1EE148u);
    ctx->pc = 0x1EE144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE140u;
    // 0x1ee144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DC8u, 0x1EE140u, 0x1EE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE148u;
label_1ee148:
    // 0x1ee148: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE148u;
    {
        const bool branch_taken_0x1ee148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE148u;
        // 0x1ee14c: 0x26a3fffa  addiu       $v1, $s5, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee148) {
            ctx->pc = 0x1EE160u;
            goto label_1ee160;
        }
    }
    ctx->pc = 0x1EE150u;
    // 0x1ee150: 0xc098b98  jal         func_262E60
    ctx->pc = 0x1EE150u;
    SET_GPR_U32(ctx, 31, 0x1EE158u);
    ctx->pc = 0x1EE154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE150u;
    // 0x1ee154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E60u, 0x1EE150u, 0x1EE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE158u;
label_1ee158:
    // 0x1ee158: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1EE158u;
    {
        const bool branch_taken_0x1ee158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE158u;
        // 0x1ee15c: 0x26a3fffa  addiu       $v1, $s5, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee158) {
            ctx->pc = 0x1EE454u;
            goto label_1ee454;
        }
    }
    ctx->pc = 0x1EE160u;
label_1ee160:
    // 0x1ee160: 0x2c620086  sltiu       $v0, $v1, 0x86
    ctx->pc = 0x1ee160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)134) ? 1 : 0);
    // 0x1ee164: 0x1040011e  beqz        $v0, . + 4 + (0x11E << 2)
    ctx->pc = 0x1EE164u;
    {
        const bool branch_taken_0x1ee164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE164u;
        // 0x1ee168: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee164) {
            ctx->pc = 0x1EE5E0u;
            goto label_1ee5e0;
        }
    }
    ctx->pc = 0x1EE16Cu;
    // 0x1ee16c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ee16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee170: 0x2442e710  addiu       $v0, $v0, -0x18F0
    ctx->pc = 0x1ee170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960912));
    // 0x1ee174: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ee174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee178: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ee178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee17c: 0x800008  jr          $a0
    ctx->pc = 0x1EE17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE184u: goto label_1ee184;
            case 0x1EE194u: goto label_1ee194;
            case 0x1EE1A4u: goto label_1ee1a4;
            case 0x1EE1B4u: goto label_1ee1b4;
            case 0x1EE1C4u: goto label_1ee1c4;
            case 0x1EE1D4u: goto label_1ee1d4;
            case 0x1EE1E4u: goto label_1ee1e4;
            case 0x1EE1F4u: goto label_1ee1f4;
            case 0x1EE204u: goto label_1ee204;
            case 0x1EE214u: goto label_1ee214;
            case 0x1EE224u: goto label_1ee224;
            case 0x1EE234u: goto label_1ee234;
            case 0x1EE244u: goto label_1ee244;
            case 0x1EE254u: goto label_1ee254;
            case 0x1EE264u: goto label_1ee264;
            case 0x1EE274u: goto label_1ee274;
            case 0x1EE284u: goto label_1ee284;
            case 0x1EE294u: goto label_1ee294;
            case 0x1EE2A4u: goto label_1ee2a4;
            case 0x1EE2B4u: goto label_1ee2b4;
            case 0x1EE2C4u: goto label_1ee2c4;
            case 0x1EE2D4u: goto label_1ee2d4;
            case 0x1EE2E4u: goto label_1ee2e4;
            case 0x1EE2F4u: goto label_1ee2f4;
            case 0x1EE304u: goto label_1ee304;
            case 0x1EE314u: goto label_1ee314;
            case 0x1EE324u: goto label_1ee324;
            case 0x1EE334u: goto label_1ee334;
            case 0x1EE344u: goto label_1ee344;
            case 0x1EE354u: goto label_1ee354;
            case 0x1EE364u: goto label_1ee364;
            case 0x1EE374u: goto label_1ee374;
            case 0x1EE384u: goto label_1ee384;
            case 0x1EE394u: goto label_1ee394;
            case 0x1EE3A4u: goto label_1ee3a4;
            case 0x1EE3B4u: goto label_1ee3b4;
            case 0x1EE3C4u: goto label_1ee3c4;
            case 0x1EE3D4u: goto label_1ee3d4;
            case 0x1EE3E4u: goto label_1ee3e4;
            case 0x1EE3F4u: goto label_1ee3f4;
            case 0x1EE404u: goto label_1ee404;
            case 0x1EE5E0u: goto label_1ee5e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE17Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EE184u;
label_1ee184:
    // 0x1ee184: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee188: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee18c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1EE18Cu;
    {
        const bool branch_taken_0x1ee18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE18Cu;
        // 0x1ee190: 0x2442de58  addiu       $v0, $v0, -0x21A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee18c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE194u;
label_1ee194:
    // 0x1ee194: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee198: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee19c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1EE19Cu;
    {
        const bool branch_taken_0x1ee19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE19Cu;
        // 0x1ee1a0: 0x2442de70  addiu       $v0, $v0, -0x2190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee19c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE1A4u;
label_1ee1a4:
    // 0x1ee1a4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee1a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee1ac: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1EE1ACu;
    {
        const bool branch_taken_0x1ee1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1ACu;
        // 0x1ee1b0: 0x2442de88  addiu       $v0, $v0, -0x2178 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1ac) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE1B4u;
label_1ee1b4:
    // 0x1ee1b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee1b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee1bc: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1EE1BCu;
    {
        const bool branch_taken_0x1ee1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1BCu;
        // 0x1ee1c0: 0x2442dea0  addiu       $v0, $v0, -0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1bc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE1C4u;
label_1ee1c4:
    // 0x1ee1c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee1c8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee1cc: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1EE1CCu;
    {
        const bool branch_taken_0x1ee1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1CCu;
        // 0x1ee1d0: 0x2442de70  addiu       $v0, $v0, -0x2190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1cc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE1D4u;
label_1ee1d4:
    // 0x1ee1d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee1d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee1dc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1EE1DCu;
    {
        const bool branch_taken_0x1ee1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1DCu;
        // 0x1ee1e0: 0x2442deb8  addiu       $v0, $v0, -0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1dc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE1E4u;
label_1ee1e4:
    // 0x1ee1e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee1e8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee1ec: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1EE1ECu;
    {
        const bool branch_taken_0x1ee1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1ECu;
        // 0x1ee1f0: 0x2442ded0  addiu       $v0, $v0, -0x2130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1ec) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE1F4u;
label_1ee1f4:
    // 0x1ee1f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee1f8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee1fc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1EE1FCu;
    {
        const bool branch_taken_0x1ee1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1FCu;
        // 0x1ee200: 0x2442def0  addiu       $v0, $v0, -0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1fc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE204u;
label_1ee204:
    // 0x1ee204: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee208: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee20c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1EE20Cu;
    {
        const bool branch_taken_0x1ee20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE20Cu;
        // 0x1ee210: 0x2442e0a0  addiu       $v0, $v0, -0x1F60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee20c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE214u;
label_1ee214:
    // 0x1ee214: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee218: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee21c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1EE21Cu;
    {
        const bool branch_taken_0x1ee21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE21Cu;
        // 0x1ee220: 0x2442df08  addiu       $v0, $v0, -0x20F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee21c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE224u;
label_1ee224:
    // 0x1ee224: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee228: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee22c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1EE22Cu;
    {
        const bool branch_taken_0x1ee22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE22Cu;
        // 0x1ee230: 0x2442df20  addiu       $v0, $v0, -0x20E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee22c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE234u;
label_1ee234:
    // 0x1ee234: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee238: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee23c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1EE23Cu;
    {
        const bool branch_taken_0x1ee23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE23Cu;
        // 0x1ee240: 0x2442df38  addiu       $v0, $v0, -0x20C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee23c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE244u;
label_1ee244:
    // 0x1ee244: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee248: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee24c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1EE24Cu;
    {
        const bool branch_taken_0x1ee24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE24Cu;
        // 0x1ee250: 0x2442df50  addiu       $v0, $v0, -0x20B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee24c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE254u;
label_1ee254:
    // 0x1ee254: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee258: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee25c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1EE25Cu;
    {
        const bool branch_taken_0x1ee25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE25Cu;
        // 0x1ee260: 0x2442df68  addiu       $v0, $v0, -0x2098 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee25c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE264u;
label_1ee264:
    // 0x1ee264: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee268: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee26c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1EE26Cu;
    {
        const bool branch_taken_0x1ee26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE26Cu;
        // 0x1ee270: 0x2442df80  addiu       $v0, $v0, -0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee26c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE274u;
label_1ee274:
    // 0x1ee274: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee278: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee27c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1EE27Cu;
    {
        const bool branch_taken_0x1ee27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE27Cu;
        // 0x1ee280: 0x2442df98  addiu       $v0, $v0, -0x2068 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee27c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE284u;
label_1ee284:
    // 0x1ee284: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee288: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee28c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1EE28Cu;
    {
        const bool branch_taken_0x1ee28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE28Cu;
        // 0x1ee290: 0x2442dfb0  addiu       $v0, $v0, -0x2050 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee28c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE294u;
label_1ee294:
    // 0x1ee294: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee298: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee29c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1EE29Cu;
    {
        const bool branch_taken_0x1ee29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE29Cu;
        // 0x1ee2a0: 0x2442dfd0  addiu       $v0, $v0, -0x2030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee29c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE2A4u;
label_1ee2a4:
    // 0x1ee2a4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee2a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee2ac: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1EE2ACu;
    {
        const bool branch_taken_0x1ee2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2ACu;
        // 0x1ee2b0: 0x2442dfe8  addiu       $v0, $v0, -0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2ac) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE2B4u;
label_1ee2b4:
    // 0x1ee2b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee2b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee2bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1EE2BCu;
    {
        const bool branch_taken_0x1ee2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2BCu;
        // 0x1ee2c0: 0x2442e008  addiu       $v0, $v0, -0x1FF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2bc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE2C4u;
label_1ee2c4:
    // 0x1ee2c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee2c8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee2cc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1EE2CCu;
    {
        const bool branch_taken_0x1ee2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2CCu;
        // 0x1ee2d0: 0x2442e028  addiu       $v0, $v0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2cc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE2D4u;
label_1ee2d4:
    // 0x1ee2d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee2d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee2dc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1EE2DCu;
    {
        const bool branch_taken_0x1ee2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2DCu;
        // 0x1ee2e0: 0x2442e048  addiu       $v0, $v0, -0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2dc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE2E4u;
label_1ee2e4:
    // 0x1ee2e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee2e8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee2ec: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1EE2ECu;
    {
        const bool branch_taken_0x1ee2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2ECu;
        // 0x1ee2f0: 0x2442e060  addiu       $v0, $v0, -0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2ec) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE2F4u;
label_1ee2f4:
    // 0x1ee2f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee2f8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee2fc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1EE2FCu;
    {
        const bool branch_taken_0x1ee2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2FCu;
        // 0x1ee300: 0x2442e078  addiu       $v0, $v0, -0x1F88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2fc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE304u;
label_1ee304:
    // 0x1ee304: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee308: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee30c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1EE30Cu;
    {
        const bool branch_taken_0x1ee30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE30Cu;
        // 0x1ee310: 0x2442e0b8  addiu       $v0, $v0, -0x1F48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee30c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE314u;
label_1ee314:
    // 0x1ee314: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee318: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee31c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1EE31Cu;
    {
        const bool branch_taken_0x1ee31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE31Cu;
        // 0x1ee320: 0x2442e0d8  addiu       $v0, $v0, -0x1F28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee31c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE324u;
label_1ee324:
    // 0x1ee324: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee328: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee32c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1EE32Cu;
    {
        const bool branch_taken_0x1ee32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE32Cu;
        // 0x1ee330: 0x2442e0f8  addiu       $v0, $v0, -0x1F08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee32c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE334u;
label_1ee334:
    // 0x1ee334: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee338: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee33c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1EE33Cu;
    {
        const bool branch_taken_0x1ee33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE33Cu;
        // 0x1ee340: 0x2442e110  addiu       $v0, $v0, -0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee33c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE344u;
label_1ee344:
    // 0x1ee344: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee348: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee34c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1EE34Cu;
    {
        const bool branch_taken_0x1ee34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE34Cu;
        // 0x1ee350: 0x2442e130  addiu       $v0, $v0, -0x1ED0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee34c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE354u;
label_1ee354:
    // 0x1ee354: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee358: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee35c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1EE35Cu;
    {
        const bool branch_taken_0x1ee35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE35Cu;
        // 0x1ee360: 0x2442e150  addiu       $v0, $v0, -0x1EB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee35c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE364u;
label_1ee364:
    // 0x1ee364: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee368: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee36c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1EE36Cu;
    {
        const bool branch_taken_0x1ee36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE36Cu;
        // 0x1ee370: 0x2442e170  addiu       $v0, $v0, -0x1E90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee36c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE374u;
label_1ee374:
    // 0x1ee374: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee378: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee37c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1EE37Cu;
    {
        const bool branch_taken_0x1ee37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE37Cu;
        // 0x1ee380: 0x2442e190  addiu       $v0, $v0, -0x1E70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee37c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE384u;
label_1ee384:
    // 0x1ee384: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee388: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee38c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1EE38Cu;
    {
        const bool branch_taken_0x1ee38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE38Cu;
        // 0x1ee390: 0x2442e1b0  addiu       $v0, $v0, -0x1E50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee38c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE394u;
label_1ee394:
    // 0x1ee394: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee398: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee39c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1EE39Cu;
    {
        const bool branch_taken_0x1ee39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE39Cu;
        // 0x1ee3a0: 0x2442e1c8  addiu       $v0, $v0, -0x1E38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee39c) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE3A4u;
label_1ee3a4:
    // 0x1ee3a4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee3a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee3ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EE3ACu;
    {
        const bool branch_taken_0x1ee3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3ACu;
        // 0x1ee3b0: 0x2442e1e8  addiu       $v0, $v0, -0x1E18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3ac) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE3B4u;
label_1ee3b4:
    // 0x1ee3b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee3b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee3bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1EE3BCu;
    {
        const bool branch_taken_0x1ee3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3BCu;
        // 0x1ee3c0: 0x2442e208  addiu       $v0, $v0, -0x1DF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3bc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE3C4u;
label_1ee3c4:
    // 0x1ee3c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee3c8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee3cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE3CCu;
    {
        const bool branch_taken_0x1ee3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3CCu;
        // 0x1ee3d0: 0x2442e228  addiu       $v0, $v0, -0x1DD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3cc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE3D4u;
label_1ee3d4:
    // 0x1ee3d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee3d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee3dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EE3DCu;
    {
        const bool branch_taken_0x1ee3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3DCu;
        // 0x1ee3e0: 0x2442e248  addiu       $v0, $v0, -0x1DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3dc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE3E4u;
label_1ee3e4:
    // 0x1ee3e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee3e8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee3ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE3ECu;
    {
        const bool branch_taken_0x1ee3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3ECu;
        // 0x1ee3f0: 0x2442e268  addiu       $v0, $v0, -0x1D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3ec) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE3F4u;
label_1ee3f4:
    // 0x1ee3f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee3f8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee3fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE3FCu;
    {
        const bool branch_taken_0x1ee3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3FCu;
        // 0x1ee400: 0x2442e280  addiu       $v0, $v0, -0x1D80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3fc) {
            ctx->pc = 0x1EE410u;
            goto label_1ee410;
        }
    }
    ctx->pc = 0x1EE404u;
label_1ee404:
    // 0x1ee404: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee408: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee40c: 0x2442e298  addiu       $v0, $v0, -0x1D68
    ctx->pc = 0x1ee40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959768));
label_1ee410:
    // 0x1ee410: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ee410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ee414: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ee414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ee418: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ee418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee41c: 0xc07ba8c  jal         func_1EEA30
    ctx->pc = 0x1EE41Cu;
    SET_GPR_U32(ctx, 31, 0x1EE424u);
    ctx->pc = 0x1EE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE41Cu;
    // 0x1ee420: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEA30u, 0x1EE41Cu, 0x1EE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE424u;
label_1ee424:
    // 0x1ee424: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x1ee424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x1ee428: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x1ee428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x1ee42c: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x1ee42cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x1ee430: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x1ee430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    // 0x1ee434: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ee434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee438: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ee438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ee43c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ee43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1ee440: 0xc0c3516  jal         func_30D458
    ctx->pc = 0x1EE440u;
    SET_GPR_U32(ctx, 31, 0x1EE448u);
    ctx->pc = 0x1EE444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE440u;
    // 0x1ee444: 0xae050028  sw          $a1, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D458u, 0x1EE440u, 0x1EE448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE448u;
label_1ee448:
    // 0x1ee448: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1ee448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1ee44c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1EE44Cu;
    {
        const bool branch_taken_0x1ee44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE44Cu;
        // 0x1ee450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee44c) {
            ctx->pc = 0x1EE5D0u;
            goto label_1ee5d0;
        }
    }
    ctx->pc = 0x1EE454u;
label_1ee454:
    // 0x1ee454: 0xc098b78  jal         func_262DE0
    ctx->pc = 0x1EE454u;
    SET_GPR_U32(ctx, 31, 0x1EE45Cu);
    ctx->pc = 0x1EE458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE454u;
    // 0x1ee458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DE0u, 0x1EE454u, 0x1EE45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE45Cu;
label_1ee45c:
    // 0x1ee45c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EE45Cu;
    {
        const bool branch_taken_0x1ee45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE45Cu;
        // 0x1ee460: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee45c) {
            ctx->pc = 0x1EE4A4u;
            goto label_1ee4a4;
        }
    }
    ctx->pc = 0x1EE464u;
    // 0x1ee464: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ee464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1ee468: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ee468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ee46c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ee46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee470: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee474: 0x2442dbe0  addiu       $v0, $v0, -0x2420
    ctx->pc = 0x1ee474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958048));
    // 0x1ee478: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ee478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ee47c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ee47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee480: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ee480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ee484: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ee484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee488: 0xc07ba8c  jal         func_1EEA30
    ctx->pc = 0x1EE488u;
    SET_GPR_U32(ctx, 31, 0x1EE490u);
    ctx->pc = 0x1EE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE488u;
    // 0x1ee48c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEA30u, 0x1EE488u, 0x1EE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE490u;
label_1ee490:
    // 0x1ee490: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ee490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee494: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ee494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1ee498: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1ee498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1ee49c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1EE49Cu;
    {
        const bool branch_taken_0x1ee49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE49Cu;
        // 0x1ee4a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee49c) {
            ctx->pc = 0x1EE5D0u;
            goto label_1ee5d0;
        }
    }
    ctx->pc = 0x1EE4A4u;
label_1ee4a4:
    // 0x1ee4a4: 0xc098b88  jal         func_262E20
    ctx->pc = 0x1EE4A4u;
    SET_GPR_U32(ctx, 31, 0x1EE4ACu);
    ctx->pc = 0x1EE4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE4A4u;
    // 0x1ee4a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E20u, 0x1EE4A4u, 0x1EE4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4ACu;
label_1ee4ac:
    // 0x1ee4ac: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1EE4ACu;
    {
        const bool branch_taken_0x1ee4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4ACu;
        // 0x1ee4b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4ac) {
            ctx->pc = 0x1EE5E4u;
            goto label_1ee5e4;
        }
    }
    ctx->pc = 0x1EE4B4u;
    // 0x1ee4b4: 0xc098b98  jal         func_262E60
    ctx->pc = 0x1EE4B4u;
    SET_GPR_U32(ctx, 31, 0x1EE4BCu);
    ctx->pc = 0x1EE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE4B4u;
    // 0x1ee4b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E60u, 0x1EE4B4u, 0x1EE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4BCu;
label_1ee4bc:
    // 0x1ee4bc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1EE4BCu;
    {
        const bool branch_taken_0x1ee4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4BCu;
        // 0x1ee4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4bc) {
            ctx->pc = 0x1EE5E0u;
            goto label_1ee5e0;
        }
    }
    ctx->pc = 0x1EE4C4u;
    // 0x1ee4c4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1EE4C4u;
    {
        const bool branch_taken_0x1ee4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4C4u;
        // 0x1ee4c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4c4) {
            ctx->pc = 0x1EE5E8u;
            goto label_1ee5e8;
        }
    }
    ctx->pc = 0x1EE4CCu;
label_1ee4cc:
    // 0x1ee4cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ee4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ee4d0: 0x8c52bd50  lw          $s2, -0x42B0($v0)
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1ee4d4: 0x12400043  beqz        $s2, . + 4 + (0x43 << 2)
    ctx->pc = 0x1EE4D4u;
    {
        const bool branch_taken_0x1ee4d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4D4u;
        // 0x1ee4d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4d4) {
            ctx->pc = 0x1EE5E4u;
            goto label_1ee5e4;
        }
    }
    ctx->pc = 0x1EE4DCu;
    // 0x1ee4dc: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1EE4DCu;
    SET_GPR_U32(ctx, 31, 0x1EE4E4u);
    ctx->pc = 0x1EE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE4DCu;
    // 0x1ee4e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1EE4DCu, 0x1EE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4E4u;
label_1ee4e4:
    // 0x1ee4e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ee4e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4e8: 0x1220003e  beqz        $s1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EE4E8u;
    {
        const bool branch_taken_0x1ee4e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4E8u;
        // 0x1ee4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4e8) {
            ctx->pc = 0x1EE5E4u;
            goto label_1ee5e4;
        }
    }
    ctx->pc = 0x1EE4F0u;
    // 0x1ee4f0: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1EE4F0u;
    SET_GPR_U32(ctx, 31, 0x1EE4F8u);
    ctx->pc = 0x1EE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE4F0u;
    // 0x1ee4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1EE4F0u, 0x1EE4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4F8u;
label_1ee4f8:
    // 0x1ee4f8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1ee4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1ee4fc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE4FCu;
    {
        const bool branch_taken_0x1ee4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4FCu;
        // 0x1ee500: 0x2682ffe1  addiu       $v0, $s4, -0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4fc) {
            ctx->pc = 0x1EE51Cu;
            goto label_1ee51c;
        }
    }
    ctx->pc = 0x1EE504u;
    // 0x1ee504: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1EE504u;
    SET_GPR_U32(ctx, 31, 0x1EE50Cu);
    ctx->pc = 0x1EE508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE504u;
    // 0x1ee508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1EE504u, 0x1EE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE50Cu;
label_1ee50c:
    // 0x1ee50c: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x1ee50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1ee510: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1EE510u;
    {
        const bool branch_taken_0x1ee510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE510u;
        // 0x1ee514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee510) {
            ctx->pc = 0x1EE5E4u;
            goto label_1ee5e4;
        }
    }
    ctx->pc = 0x1EE518u;
    // 0x1ee518: 0x2682ffe1  addiu       $v0, $s4, -0x1F
    ctx->pc = 0x1ee518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967265));
label_1ee51c:
    // 0x1ee51c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ee51cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ee520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE520u;
    {
        const bool branch_taken_0x1ee520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE520u;
        // 0x1ee524: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee520) {
            ctx->pc = 0x1EE530u;
            goto label_1ee530;
        }
    }
    ctx->pc = 0x1EE528u;
    // 0x1ee528: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE528u;
    {
        const bool branch_taken_0x1ee528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE528u;
        // 0x1ee52c: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee528) {
            ctx->pc = 0x1EE544u;
            goto label_1ee544;
        }
    }
    ctx->pc = 0x1EE530u;
label_1ee530:
    // 0x1ee530: 0x2662ffe1  addiu       $v0, $s3, -0x1F
    ctx->pc = 0x1ee530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1ee534: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ee534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ee538: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EE538u;
    {
        const bool branch_taken_0x1ee538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE538u;
        // 0x1ee53c: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee538) {
            ctx->pc = 0x1EE5E0u;
            goto label_1ee5e0;
        }
    }
    ctx->pc = 0x1EE540u;
    // 0x1ee540: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x1ee540u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ee544:
    // 0x1ee544: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x1ee544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x1ee548: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1ee548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ee54c: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x1ee54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x1ee550: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE550u;
    {
        const bool branch_taken_0x1ee550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE550u;
        // 0x1ee554: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee550) {
            ctx->pc = 0x1EE578u;
            goto label_1ee578;
        }
    }
    ctx->pc = 0x1EE558u;
    // 0x1ee558: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1ee558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1ee55c: 0x2842045d  slti        $v0, $v0, 0x45D
    ctx->pc = 0x1ee55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1117) ? 1 : 0);
    // 0x1ee560: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE560u;
    {
        const bool branch_taken_0x1ee560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE560u;
        // 0x1ee564: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee560) {
            ctx->pc = 0x1EE574u;
            goto label_1ee574;
        }
    }
    ctx->pc = 0x1EE568u;
    // 0x1ee568: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee56c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EE56Cu;
    {
        const bool branch_taken_0x1ee56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE56Cu;
        // 0x1ee570: 0x2442dbe0  addiu       $v0, $v0, -0x2420 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee56c) {
            ctx->pc = 0x1EE598u;
            goto label_1ee598;
        }
    }
    ctx->pc = 0x1EE574u;
label_1ee574:
    // 0x1ee574: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1ee574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ee578:
    // 0x1ee578: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE578u;
    {
        const bool branch_taken_0x1ee578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee578) {
            ctx->pc = 0x1EE57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE578u;
            // 0x1ee57c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE590u;
            goto label_1ee590;
        }
    }
    ctx->pc = 0x1EE580u;
    // 0x1ee580: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ee580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ee584: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ee584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee588: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE588u;
    {
        const bool branch_taken_0x1ee588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE588u;
        // 0x1ee58c: 0x2442deb8  addiu       $v0, $v0, -0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee588) {
            ctx->pc = 0x1EE598u;
            goto label_1ee598;
        }
    }
    ctx->pc = 0x1EE590u;
label_1ee590:
    // 0x1ee590: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ee590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee594: 0x2442e700  addiu       $v0, $v0, -0x1900
    ctx->pc = 0x1ee594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960896));
label_1ee598:
    // 0x1ee598: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ee598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ee59c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ee59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ee5a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ee5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5a4: 0xc07ba8c  jal         func_1EEA30
    ctx->pc = 0x1EE5A4u;
    SET_GPR_U32(ctx, 31, 0x1EE5ACu);
    ctx->pc = 0x1EE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE5A4u;
    // 0x1ee5a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEA30u, 0x1EE5A4u, 0x1EE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE5ACu;
label_1ee5ac:
    // 0x1ee5ac: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1ee5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee5b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ee5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee5b4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ee5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ee5b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ee5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee5bc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ee5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1ee5c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee5c4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1ee5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1ee5c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee5cc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1ee5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1ee5d0:
    // 0x1ee5d0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1ee5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1ee5d4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ee5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ee5d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE5D8u;
    {
        const bool branch_taken_0x1ee5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5D8u;
        // 0x1ee5dc: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5d8) {
            ctx->pc = 0x1EE5E4u;
            goto label_1ee5e4;
        }
    }
    ctx->pc = 0x1EE5E0u;
label_1ee5e0:
    // 0x1ee5e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee5e4:
    // 0x1ee5e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee5e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee5e8:
    // 0x1ee5e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ee5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ee5ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ee5ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee5f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ee5f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ee5f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ee5f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee5f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ee5f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ee5fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee600: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ee600u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee604: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ee604u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee608: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ee608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ee60c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE60Cu;
        // 0x1ee610: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE614u;
    // 0x1ee614: 0x0  nop
    ctx->pc = 0x1ee614u;
    // NOP
    ctx->pc = 0x1ee618u;
}
