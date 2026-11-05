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

// Function: sub_0016AFC0
// Address: 0x16afc0 - 0x16b0d8
void sub_0016AFC0_0x16afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AFC0_0x16afc0");
#endif

    switch (ctx->pc) {
        case 0x16b008u: goto label_16b008;
        case 0x16b064u: goto label_16b064;
        case 0x16b074u: goto label_16b074;
        case 0x16b084u: goto label_16b084;
        case 0x16b09cu: goto label_16b09c;
        case 0x16b0b4u: goto label_16b0b4;
        default: break;
    }

    ctx->pc = 0x16afc0u;

    // 0x16afc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16afc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16afc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afc8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16afcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16afccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16afd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16afd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16afdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16afdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16afe0: 0x9223002c  lbu         $v1, 0x2C($s1)
    ctx->pc = 0x16afe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16afe4: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x16afe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16afe8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16AFE8u;
    {
        const bool branch_taken_0x16afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFE8u;
        // 0x16afec: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afe8) {
            ctx->pc = 0x16B058u;
            goto label_16b058;
        }
    }
    ctx->pc = 0x16AFF0u;
    // 0x16aff0: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x16aff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aff4: 0x26280008  addiu       $t0, $s1, 0x8
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x16aff8: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x16aff8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16affc: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x16affcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16b000: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16b000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16b004: 0x0  nop
    ctx->pc = 0x16b004u;
    // NOP
label_16b008:
    // 0x16b008: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x16b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x16b00c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b010: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16b010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b014: 0x106b000c  beq         $v1, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x16B014u;
    {
        const bool branch_taken_0x16b014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x16B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B014u;
        // 0x16b018: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b014) {
            ctx->pc = 0x16B048u;
            goto label_16b048;
        }
    }
    ctx->pc = 0x16B01Cu;
    // 0x16b01c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16b020: 0x104a0008  beq         $v0, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B020u;
    {
        const bool branch_taken_0x16b020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x16B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B020u;
        // 0x16b024: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b020) {
            ctx->pc = 0x16B044u;
            goto label_16b044;
        }
    }
    ctx->pc = 0x16B028u;
    // 0x16b028: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x16b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16b02c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x16b02cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x16b030: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x16b030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16b034: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x16b034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16b038: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16b03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b040: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x16b040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16b044:
    // 0x16b044: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x16b044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16b048:
    // 0x16b048: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16b048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16b04c: 0xa9182b  sltu        $v1, $a1, $t1
    ctx->pc = 0x16b04cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x16b050: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x16B050u;
    {
        const bool branch_taken_0x16b050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B050u;
        // 0x16b054: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b050) {
            ctx->pc = 0x16B008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b008;
        }
    }
    ctx->pc = 0x16B058u;
label_16b058:
    // 0x16b058: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16b058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b05c: 0xc05acaa  jal         func_16B2A8
    ctx->pc = 0x16B05Cu;
    SET_GPR_U32(ctx, 31, 0x16B064u);
    ctx->pc = 0x16B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B05Cu;
    // 0x16b060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B2A8u, 0x16B05Cu, 0x16B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B064u;
label_16b064:
    // 0x16b064: 0x263000d0  addiu       $s0, $s1, 0xD0
    ctx->pc = 0x16b064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x16b068: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x16b068u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x16b06c: 0xc05abe0  jal         func_16AF80
    ctx->pc = 0x16B06Cu;
    SET_GPR_U32(ctx, 31, 0x16B074u);
    ctx->pc = 0x16B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B06Cu;
    // 0x16b070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF80u, 0x16B06Cu, 0x16B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B074u;
label_16b074:
    // 0x16b074: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16b074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b07c: 0xc046304  jal         func_118C10
    ctx->pc = 0x16B07Cu;
    SET_GPR_U32(ctx, 31, 0x16B084u);
    ctx->pc = 0x16B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B07Cu;
    // 0x16b080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x16B07Cu, 0x16B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B084u;
label_16b084:
    // 0x16b084: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16b084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b088: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16b08c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B08Cu;
    {
        const bool branch_taken_0x16b08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B08Cu;
        // 0x16b090: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b08c) {
            ctx->pc = 0x16B0A4u;
            goto label_16b0a4;
        }
    }
    ctx->pc = 0x16B094u;
    // 0x16b094: 0xc05acda  jal         func_16B368
    ctx->pc = 0x16B094u;
    SET_GPR_U32(ctx, 31, 0x16B09Cu);
    ctx->pc = 0x16B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B094u;
    // 0x16b098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B368u, 0x16B094u, 0x16B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B09Cu;
label_16b09c:
    // 0x16b09c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16B09Cu;
    {
        const bool branch_taken_0x16b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B09Cu;
        // 0x16b0a0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b09c) {
            ctx->pc = 0x16B0B8u;
            goto label_16b0b8;
        }
    }
    ctx->pc = 0x16B0A4u;
label_16b0a4:
    // 0x16b0a4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B0A4u;
    {
        const bool branch_taken_0x16b0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0A4u;
        // 0x16b0a8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0a4) {
            ctx->pc = 0x16B0BCu;
            goto label_16b0bc;
        }
    }
    ctx->pc = 0x16B0ACu;
    // 0x16b0ac: 0xc05acf6  jal         func_16B3D8
    ctx->pc = 0x16B0ACu;
    SET_GPR_U32(ctx, 31, 0x16B0B4u);
    ctx->pc = 0x16B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B0ACu;
    // 0x16b0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B3D8u, 0x16B0ACu, 0x16B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B0B4u;
label_16b0b4:
    // 0x16b0b4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x16b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_16b0b8:
    // 0x16b0b8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16b0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b0bc:
    // 0x16b0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16b0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b0c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16b0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b0c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16b0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b0c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16b0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16b0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x16B0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0CCu;
        // 0x16b0d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B0D4u;
    // 0x16b0d4: 0x0  nop
    ctx->pc = 0x16b0d4u;
    // NOP
    ctx->pc = 0x16b0d8u;
}
