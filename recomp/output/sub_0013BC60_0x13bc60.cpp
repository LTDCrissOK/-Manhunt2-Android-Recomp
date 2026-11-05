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

// Function: sub_0013BC60
// Address: 0x13bc60 - 0x13bdc0
void sub_0013BC60_0x13bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BC60_0x13bc60");
#endif

    switch (ctx->pc) {
        case 0x13bcc0u: goto label_13bcc0;
        case 0x13bcdcu: goto label_13bcdc;
        case 0x13bd00u: goto label_13bd00;
        case 0x13bd14u: goto label_13bd14;
        case 0x13bd2cu: goto label_13bd2c;
        case 0x13bd44u: goto label_13bd44;
        case 0x13bd6cu: goto label_13bd6c;
        default: break;
    }

    ctx->pc = 0x13bc60u;

    // 0x13bc60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13bc64: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13bc64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13bc68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13bc6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13bc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13bc70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13bc74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13bc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13bc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13bc7c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13bc80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13bc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13bc84: 0x24549a08  addiu       $s4, $v0, -0x65F8
    ctx->pc = 0x13bc84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13bc88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13bc8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13bc8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13bc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13bc94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13bc98: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13bc9c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x13bc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13bca0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x13bca0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bca4: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x13bca4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13bca8: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x13bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x13bcac: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x13bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13bcb0: 0x5080002f  beql        $a0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x13BCB0u;
    {
        const bool branch_taken_0x13bcb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bcb0) {
            ctx->pc = 0x13BCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BCB0u;
            // 0x13bcb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BD70u;
            goto label_13bd70;
        }
    }
    ctx->pc = 0x13BCB8u;
    // 0x13bcb8: 0xc043996  jal         func_10E658
    ctx->pc = 0x13BCB8u;
    SET_GPR_U32(ctx, 31, 0x13BCC0u);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x13BCB8u, 0x13BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCC0u;
label_13bcc0:
    // 0x13bcc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13bcc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcc4: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x13bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x13bcc8: 0x8c510108  lw          $s1, 0x108($v0)
    ctx->pc = 0x13bcc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13bccc: 0x52200028  beql        $s1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x13BCCCu;
    {
        const bool branch_taken_0x13bccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bccc) {
            ctx->pc = 0x13BCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BCCCu;
            // 0x13bcd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BD70u;
            goto label_13bd70;
        }
    }
    ctx->pc = 0x13BCD4u;
    // 0x13bcd4: 0xc04eea8  jal         func_13BAA0
    ctx->pc = 0x13BCD4u;
    SET_GPR_U32(ctx, 31, 0x13BCDCu);
    ctx->pc = 0x13BCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BCD4u;
    // 0x13bcd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BAA0u, 0x13BCD4u, 0x13BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCDCu;
label_13bcdc:
    // 0x13bcdc: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x13BCDCu;
    {
        const bool branch_taken_0x13bcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bcdc) {
            ctx->pc = 0x13BCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BCDCu;
            // 0x13bce0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BD70u;
            goto label_13bd70;
        }
    }
    ctx->pc = 0x13BCE4u;
    // 0x13bce4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BCE4u;
    {
        const bool branch_taken_0x13bce4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCE4u;
        // 0x13bce8: 0x2414000c  addiu       $s4, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bce4) {
            ctx->pc = 0x13BD08u;
            goto label_13bd08;
        }
    }
    ctx->pc = 0x13BCECu;
    // 0x13bcec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13bcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcf4: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x13bcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x13bcf8: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x13BCF8u;
    SET_GPR_U32(ctx, 31, 0x13BD00u);
    ctx->pc = 0x13BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BCF8u;
    // 0x13bcfc: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x13BCF8u, 0x13BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD00u;
label_13bd00:
    // 0x13bd00: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13BD00u;
    {
        const bool branch_taken_0x13bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD00u;
        // 0x13bd04: 0x26a29a08  addiu       $v0, $s5, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd00) {
            ctx->pc = 0x13BD4Cu;
            goto label_13bd4c;
        }
    }
    ctx->pc = 0x13BD08u;
label_13bd08:
    // 0x13bd08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13bd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd0c: 0xc04eeb8  jal         func_13BAE0
    ctx->pc = 0x13BD0Cu;
    SET_GPR_U32(ctx, 31, 0x13BD14u);
    ctx->pc = 0x13BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD0Cu;
    // 0x13bd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BAE0u, 0x13BD0Cu, 0x13BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD14u;
label_13bd14:
    // 0x13bd14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BD14u;
    {
        const bool branch_taken_0x13bd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD14u;
        // 0x13bd18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd14) {
            ctx->pc = 0x13BD34u;
            goto label_13bd34;
        }
    }
    ctx->pc = 0x13BD1Cu;
    // 0x13bd1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13bd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd20: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x13bd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x13bd24: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x13BD24u;
    SET_GPR_U32(ctx, 31, 0x13BD2Cu);
    ctx->pc = 0x13BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD24u;
    // 0x13bd28: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x13BD24u, 0x13BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD2Cu;
label_13bd2c:
    // 0x13bd2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13BD2Cu;
    {
        const bool branch_taken_0x13bd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD2Cu;
        // 0x13bd30: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd2c) {
            ctx->pc = 0x13BD48u;
            goto label_13bd48;
        }
    }
    ctx->pc = 0x13BD34u;
label_13bd34:
    // 0x13bd34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13bd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd38: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x13bd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x13bd3c: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x13BD3Cu;
    SET_GPR_U32(ctx, 31, 0x13BD44u);
    ctx->pc = 0x13BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD3Cu;
    // 0x13bd40: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x13BD3Cu, 0x13BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD44u;
label_13bd44:
    // 0x13bd44: 0x2414000b  addiu       $s4, $zero, 0xB
    ctx->pc = 0x13bd44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_13bd48:
    // 0x13bd48: 0x26a29a08  addiu       $v0, $s5, -0x65F8
    ctx->pc = 0x13bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941192));
label_13bd4c:
    // 0x13bd4c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13bd50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13bd54: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13bd58: 0x8e070ab0  lw          $a3, 0xAB0($s0)
    ctx->pc = 0x13bd58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
    // 0x13bd5c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x13bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x13bd60: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x13bd60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13bd64: 0xc04668a  jal         func_119A28
    ctx->pc = 0x13BD64u;
    SET_GPR_U32(ctx, 31, 0x13BD6Cu);
    ctx->pc = 0x13BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD64u;
    // 0x13bd68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x13BD64u, 0x13BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD6Cu;
label_13bd6c:
    // 0x13bd6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13bd6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13bd70:
    // 0x13bd70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13bd70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13bd74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13bd74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bd78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13bd78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13bd7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13bd7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bd80: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13bd80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13bd84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13bd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bd88: 0x3e00008  jr          $ra
    ctx->pc = 0x13BD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD88u;
        // 0x13bd8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BD90u;
    // 0x13bd90: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13bd94: 0x0  nop
    ctx->pc = 0x13bd94u;
    // NOP
    // 0x13bd98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13bd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13bd9c: 0x0  nop
    ctx->pc = 0x13bd9cu;
    // NOP
    // 0x13bda0: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x13bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x13bda4: 0x0  nop
    ctx->pc = 0x13bda4u;
    // NOP
    // 0x13bda8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13bda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13bdac: 0x0  nop
    ctx->pc = 0x13bdacu;
    // NOP
    // 0x13bdb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13bdb4: 0x0  nop
    ctx->pc = 0x13bdb4u;
    // NOP
    // 0x13bdb8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x13bdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13bdbc: 0x0  nop
    ctx->pc = 0x13bdbcu;
    // NOP
    ctx->pc = 0x13bdc0u;
}
