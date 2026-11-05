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

// Function: sub_003ADFD8
// Address: 0x3adfd8 - 0x3ae150
void sub_003ADFD8_0x3adfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADFD8_0x3adfd8");
#endif

    switch (ctx->pc) {
        case 0x3adffcu: goto label_3adffc;
        case 0x3ae048u: goto label_3ae048;
        case 0x3ae078u: goto label_3ae078;
        case 0x3ae0a8u: goto label_3ae0a8;
        case 0x3ae0d8u: goto label_3ae0d8;
        case 0x3ae108u: goto label_3ae108;
        default: break;
    }

    ctx->pc = 0x3adfd8u;

    // 0x3adfd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3adfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3adfdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3adfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3adfe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3adfe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adfe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3adfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3adfe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3adfe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adfec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3adfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3adff0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3adff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3adff4: 0xc0eb6aa  jal         func_3ADAA8
    ctx->pc = 0x3ADFF4u;
    SET_GPR_U32(ctx, 31, 0x3ADFFCu);
    ctx->pc = 0x3ADFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFF4u;
    // 0x3adff8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA8u, 0x3ADFF4u, 0x3ADFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADFFCu;
label_3adffc:
    // 0x3adffc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3adffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ae000: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x3ae000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3ae004: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3ae004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3ae008: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3ae008u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ae00c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ae00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ae010: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ae010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ae014: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AE014u;
    {
        const bool branch_taken_0x3ae014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3AE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE014u;
        // 0x3ae018: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae014) {
            ctx->pc = 0x3AE040u;
            goto label_3ae040;
        }
    }
    ctx->pc = 0x3AE01Cu;
    // 0x3ae01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ae01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ae020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae028: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ae028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae02c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ae02cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae030: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ae030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae034: 0x80eb712  j           func_3ADC48
    ctx->pc = 0x3AE034u;
    ctx->pc = 0x3AE038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE034u;
    // 0x3ae038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADC48u, 0x3AE034u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE03Cu;
    // 0x3ae03c: 0x0  nop
    ctx->pc = 0x3ae03cu;
    // NOP
label_3ae040:
    // 0x3ae040: 0xc0ebbfc  jal         func_3AEFF0
    ctx->pc = 0x3AE040u;
    SET_GPR_U32(ctx, 31, 0x3AE048u);
    ctx->pc = 0x3AE044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE040u;
    // 0x3ae044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEFF0u, 0x3AE040u, 0x3AE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE048u;
label_3ae048:
    // 0x3ae048: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE048u;
    {
        const bool branch_taken_0x3ae048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE048u;
        // 0x3ae04c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae048) {
            ctx->pc = 0x3AE070u;
            goto label_3ae070;
        }
    }
    ctx->pc = 0x3AE050u;
    // 0x3ae050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ae050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ae054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae05c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ae05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae060: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ae060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae064: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ae064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae068: 0x80ebb60  j           func_3AED80
    ctx->pc = 0x3AE068u;
    ctx->pc = 0x3AE06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE068u;
    // 0x3ae06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED80u, 0x3AE068u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE070u;
label_3ae070:
    // 0x3ae070: 0xc0ebe08  jal         func_3AF820
    ctx->pc = 0x3AE070u;
    SET_GPR_U32(ctx, 31, 0x3AE078u);
    ctx->pc = 0x3AE074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE070u;
    // 0x3ae074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF820u, 0x3AE070u, 0x3AE078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE078u;
label_3ae078:
    // 0x3ae078: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE078u;
    {
        const bool branch_taken_0x3ae078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE078u;
        // 0x3ae07c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae078) {
            ctx->pc = 0x3AE0A0u;
            goto label_3ae0a0;
        }
    }
    ctx->pc = 0x3AE080u;
    // 0x3ae080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ae080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ae084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae08c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ae08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ae090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae094: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ae094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae098: 0x80ebc9c  j           func_3AF270
    ctx->pc = 0x3AE098u;
    ctx->pc = 0x3AE09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE098u;
    // 0x3ae09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF270u, 0x3AE098u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0A0u;
label_3ae0a0:
    // 0x3ae0a0: 0xc0ed06c  jal         func_3B41B0
    ctx->pc = 0x3AE0A0u;
    SET_GPR_U32(ctx, 31, 0x3AE0A8u);
    ctx->pc = 0x3AE0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0A0u;
    // 0x3ae0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B41B0u, 0x3AE0A0u, 0x3AE0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE0A8u;
label_3ae0a8:
    // 0x3ae0a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE0A8u;
    {
        const bool branch_taken_0x3ae0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0A8u;
        // 0x3ae0ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae0a8) {
            ctx->pc = 0x3AE0D0u;
            goto label_3ae0d0;
        }
    }
    ctx->pc = 0x3AE0B0u;
    // 0x3ae0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ae0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ae0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae0bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ae0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae0c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ae0c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae0c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ae0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae0c8: 0x80ed0ce  j           func_3B4338
    ctx->pc = 0x3AE0C8u;
    ctx->pc = 0x3AE0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0C8u;
    // 0x3ae0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4338u, 0x3AE0C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE0D0u;
label_3ae0d0:
    // 0x3ae0d0: 0xc0ed2b2  jal         func_3B4AC8
    ctx->pc = 0x3AE0D0u;
    SET_GPR_U32(ctx, 31, 0x3AE0D8u);
    ctx->pc = 0x3AE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0D0u;
    // 0x3ae0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4AC8u, 0x3AE0D0u, 0x3AE0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE0D8u;
label_3ae0d8:
    // 0x3ae0d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE0D8u;
    {
        const bool branch_taken_0x3ae0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0D8u;
        // 0x3ae0dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae0d8) {
            ctx->pc = 0x3AE100u;
            goto label_3ae100;
        }
    }
    ctx->pc = 0x3AE0E0u;
    // 0x3ae0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ae0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae0e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ae0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae0ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ae0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae0f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ae0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae0f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ae0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae0f8: 0x80ed310  j           func_3B4C40
    ctx->pc = 0x3AE0F8u;
    ctx->pc = 0x3AE0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE0F8u;
    // 0x3ae0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C40u, 0x3AE0F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE100u;
label_3ae100:
    // 0x3ae100: 0xc0eb5a2  jal         func_3AD688
    ctx->pc = 0x3AE100u;
    SET_GPR_U32(ctx, 31, 0x3AE108u);
    ctx->pc = 0x3AE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE100u;
    // 0x3ae104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD688u, 0x3AE100u, 0x3AE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE108u;
label_3ae108:
    // 0x3ae108: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AE108u;
    {
        const bool branch_taken_0x3ae108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE108u;
        // 0x3ae10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae108) {
            ctx->pc = 0x3AE130u;
            goto label_3ae130;
        }
    }
    ctx->pc = 0x3AE110u;
    // 0x3ae110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ae110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ae114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae11c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ae11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ae120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae124: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ae124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae128: 0x80eb576  j           func_3AD5D8
    ctx->pc = 0x3AE128u;
    ctx->pc = 0x3AE12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE128u;
    // 0x3ae12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD5D8u, 0x3AE128u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE130u;
label_3ae130:
    // 0x3ae130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae134: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ae134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ae138: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ae138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae13c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ae13cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae140: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ae140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae144: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE144u;
        // 0x3ae148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE14Cu;
    // 0x3ae14c: 0x0  nop
    ctx->pc = 0x3ae14cu;
    // NOP
    ctx->pc = 0x3ae150u;
}
