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

// Function: sub_0033CA10
// Address: 0x33ca10 - 0x33cb68
void sub_0033CA10_0x33ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CA10_0x33ca10");
#endif

    switch (ctx->pc) {
        case 0x33ca44u: goto label_33ca44;
        case 0x33ca68u: goto label_33ca68;
        case 0x33ca78u: goto label_33ca78;
        case 0x33ca84u: goto label_33ca84;
        case 0x33cae4u: goto label_33cae4;
        case 0x33caf8u: goto label_33caf8;
        case 0x33cb2cu: goto label_33cb2c;
        case 0x33cb40u: goto label_33cb40;
        default: break;
    }

    ctx->pc = 0x33ca10u;

label_33ca10:
    // 0x33ca10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33ca14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33ca18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33ca1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33ca1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ca20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x33ca24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33ca2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33ca30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33ca30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33ca34: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x33ca38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33ca3c: 0xc0cf346  jal         func_33CD18
    ctx->pc = 0x33CA3Cu;
    SET_GPR_U32(ctx, 31, 0x33CA44u);
    ctx->pc = 0x33CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CA3Cu;
    // 0x33ca40: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CD18u, 0x33CA3Cu, 0x33CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA44u;
label_33ca44:
    // 0x33ca44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33ca44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca48: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x33ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33ca4c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x33ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33ca50: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x33ca50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33ca54: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x33CA54u;
    {
        const bool branch_taken_0x33ca54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA54u;
        // 0x33ca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca54) {
            ctx->pc = 0x33CB10u;
            goto label_33cb10;
        }
    }
    ctx->pc = 0x33CA5Cu;
    // 0x33ca5c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x33ca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ca60: 0xc0c24de  jal         func_309378
    ctx->pc = 0x33CA60u;
    SET_GPR_U32(ctx, 31, 0x33CA68u);
    ctx->pc = 0x33CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CA60u;
    // 0x33ca64: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x33CA60u, 0x33CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA68u;
label_33ca68:
    // 0x33ca68: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x33ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33ca6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ca6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca70: 0xc0c24de  jal         func_309378
    ctx->pc = 0x33CA70u;
    SET_GPR_U32(ctx, 31, 0x33CA78u);
    ctx->pc = 0x33CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CA70u;
    // 0x33ca74: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x33CA70u, 0x33CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA78u;
label_33ca78:
    // 0x33ca78: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x33ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ca7c: 0xc0c49d2  jal         func_312748
    ctx->pc = 0x33CA7Cu;
    SET_GPR_U32(ctx, 31, 0x33CA84u);
    ctx->pc = 0x33CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CA7Cu;
    // 0x33ca80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x33CA7Cu, 0x33CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA84u;
label_33ca84:
    // 0x33ca84: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x33ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x33ca88: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x33ca88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca8c: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x33ca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x33ca90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33ca94: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x33ca94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x33ca98: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x33ca98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33ca9c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x33CA9Cu;
    {
        const bool branch_taken_0x33ca9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ca9c) {
            ctx->pc = 0x33CAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CA9Cu;
            // 0x33caa0: 0xa0d30000  sb          $s3, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CAA4u;
            goto label_33caa4;
        }
    }
    ctx->pc = 0x33CAA4u;
label_33caa4:
    // 0x33caa4: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x33caa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x33caa8: 0x80d40000  lb          $s4, 0x0($a2)
    ctx->pc = 0x33caa8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33caac: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x33caacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x33cab0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33cab4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x33cab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x33cab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33cabc: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x33cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x33cac0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x33cac0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x33cac4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33CAC4u;
    {
        const bool branch_taken_0x33cac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x33CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAC4u;
        // 0x33cac8: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cac4) {
            ctx->pc = 0x33CAD4u;
            goto label_33cad4;
        }
    }
    ctx->pc = 0x33CACCu;
    // 0x33cacc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cad0: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x33cad0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_33cad4:
    // 0x33cad4: 0x80b00001  lb          $s0, 0x1($a1)
    ctx->pc = 0x33cad4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x33cad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cadc: 0xc0cf362  jal         func_33CD88
    ctx->pc = 0x33CADCu;
    SET_GPR_U32(ctx, 31, 0x33CAE4u);
    ctx->pc = 0x33CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CADCu;
    // 0x33cae0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CD88u, 0x33CADCu, 0x33CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CAE4u;
label_33cae4:
    // 0x33cae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33cae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33caec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x33caecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33caf0: 0xc0cf374  jal         func_33CDD0
    ctx->pc = 0x33CAF0u;
    SET_GPR_U32(ctx, 31, 0x33CAF8u);
    ctx->pc = 0x33CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CAF0u;
    // 0x33caf4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CDD0u, 0x33CAF0u, 0x33CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CAF8u;
label_33caf8:
    // 0x33caf8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33cafc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33cb00: 0x2463c210  addiu       $v1, $v1, -0x3DF0
    ctx->pc = 0x33cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
    // 0x33cb04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cb08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33cb0c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x33cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_33cb10:
    // 0x33cb10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cb14: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33CB14u;
    {
        const bool branch_taken_0x33cb14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB14u;
        // 0x33cb18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb14) {
            ctx->pc = 0x33CB40u;
            goto label_33cb40;
        }
    }
    ctx->pc = 0x33CB1Cu;
    // 0x33cb1c: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33CB1Cu;
    {
        const bool branch_taken_0x33cb1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x33CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB1Cu;
        // 0x33cb20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb1c) {
            ctx->pc = 0x33CB48u;
            goto label_33cb48;
        }
    }
    ctx->pc = 0x33CB24u;
    // 0x33cb24: 0xc0cf252  jal         func_33C948
    ctx->pc = 0x33CB24u;
    SET_GPR_U32(ctx, 31, 0x33CB2Cu);
    ctx->pc = 0x33CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB24u;
    // 0x33cb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C948u, 0x33CB24u, 0x33CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CB2Cu;
label_33cb2c:
    // 0x33cb2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cb30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33cb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cb34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33cb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cb38: 0xc0cf284  jal         func_33CA10
    ctx->pc = 0x33CB38u;
    SET_GPR_U32(ctx, 31, 0x33CB40u);
    ctx->pc = 0x33CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB38u;
    // 0x33cb3c: 0x240703e9  addiu       $a3, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CA10u;
    goto label_33ca10;
    ctx->pc = 0x33CB40u;
label_33cb40:
    // 0x33cb40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cb44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cb48:
    // 0x33cb48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33cb48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33cb4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33cb4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cb50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33cb50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33cb54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33cb54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33cb58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33cb58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33cb5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33cb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33cb60: 0x3e00008  jr          $ra
    ctx->pc = 0x33CB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB60u;
        // 0x33cb64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CB68u;
}
