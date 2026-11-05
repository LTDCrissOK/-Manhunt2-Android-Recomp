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

// Function: sub_001FBFE0
// Address: 0x1fbfe0 - 0x1fc0b0
void sub_001FBFE0_0x1fbfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBFE0_0x1fbfe0");
#endif

    switch (ctx->pc) {
        case 0x1fc054u: goto label_1fc054;
        case 0x1fc068u: goto label_1fc068;
        case 0x1fc07cu: goto label_1fc07c;
        case 0x1fc08cu: goto label_1fc08c;
        case 0x1fc094u: goto label_1fc094;
        default: break;
    }

    ctx->pc = 0x1fbfe0u;

    // 0x1fbfe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fbfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fbfe4: 0x340280f0  ori         $v0, $zero, 0x80F0
    ctx->pc = 0x1fbfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fbfe8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fbfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1fbfec: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x1fbfecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fbff0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fbff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fbff4: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x1fbff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1fbff8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fbff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fbffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fbffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc000: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fc000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fc004: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fc004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fc008: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fc008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc00c: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x1fc00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1fc010: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1fc010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc014: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1fc014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1fc018: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FC018u;
    {
        const bool branch_taken_0x1fc018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC018u;
        // 0x1fc01c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc018) {
            ctx->pc = 0x1FC098u;
            goto label_1fc098;
        }
    }
    ctx->pc = 0x1FC020u;
    // 0x1fc020: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1fc020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1fc024: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC024u;
    {
        const bool branch_taken_0x1fc024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC024u;
        // 0x1fc028: 0x34620010  ori         $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc024) {
            ctx->pc = 0x1FC040u;
            goto label_1fc040;
        }
    }
    ctx->pc = 0x1FC02Cu;
    // 0x1fc02c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1fc02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1fc030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc034: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1fc034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1fc038: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC038u;
    {
        const bool branch_taken_0x1fc038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC038u;
        // 0x1fc03c: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc038) {
            ctx->pc = 0x1FC098u;
            goto label_1fc098;
        }
    }
    ctx->pc = 0x1FC040u;
label_1fc040:
    // 0x1fc040: 0x9230003c  lbu         $s0, 0x3C($s1)
    ctx->pc = 0x1fc040u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1fc044: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1fc044u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc04c: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x1FC04Cu;
    SET_GPR_U32(ctx, 31, 0x1FC054u);
    ctx->pc = 0x1FC050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC04Cu;
    // 0x1fc050: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x1FC04Cu, 0x1FC054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC054u;
label_1fc054:
    // 0x1fc054: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fc054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc05c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fc05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc060: 0xc07ef4e  jal         func_1FBD38
    ctx->pc = 0x1FC060u;
    SET_GPR_U32(ctx, 31, 0x1FC068u);
    ctx->pc = 0x1FC064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC060u;
    // 0x1fc064: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD38u, 0x1FC060u, 0x1FC068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC068u;
label_1fc068:
    // 0x1fc068: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC068u;
    {
        const bool branch_taken_0x1fc068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC068u;
        // 0x1fc06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc068) {
            ctx->pc = 0x1FC084u;
            goto label_1fc084;
        }
    }
    ctx->pc = 0x1FC070u;
    // 0x1fc070: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1fc070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fc074: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1FC074u;
    SET_GPR_U32(ctx, 31, 0x1FC07Cu);
    ctx->pc = 0x1FC078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC074u;
    // 0x1fc078: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1FC074u, 0x1FC07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC07Cu;
label_1fc07c:
    // 0x1fc07c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC07Cu;
    {
        const bool branch_taken_0x1fc07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC07Cu;
        // 0x1fc080: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc07c) {
            ctx->pc = 0x1FC098u;
            goto label_1fc098;
        }
    }
    ctx->pc = 0x1FC084u;
label_1fc084:
    // 0x1fc084: 0xc07efc0  jal         func_1FBF00
    ctx->pc = 0x1FC084u;
    SET_GPR_U32(ctx, 31, 0x1FC08Cu);
    ctx->pc = 0x1FC088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC084u;
    // 0x1fc088: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF00u, 0x1FC084u, 0x1FC08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC08Cu;
label_1fc08c:
    // 0x1fc08c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1FC08Cu;
    SET_GPR_U32(ctx, 31, 0x1FC094u);
    ctx->pc = 0x1FC090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC08Cu;
    // 0x1fc090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1FC08Cu, 0x1FC094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC094u;
label_1fc094:
    // 0x1fc094: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fc094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc098:
    // 0x1fc098: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fc098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc09c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fc09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc0a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fc0a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc0a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fc0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0A8u;
        // 0x1fc0ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC0B0u;
}
