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

// Function: sub_00335A58
// Address: 0x335a58 - 0x335c80
void sub_00335A58_0x335a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335A58_0x335a58");
#endif

    switch (ctx->pc) {
        case 0x335ac0u: goto label_335ac0;
        case 0x335ad8u: goto label_335ad8;
        case 0x335aecu: goto label_335aec;
        case 0x335b30u: goto label_335b30;
        case 0x335b68u: goto label_335b68;
        case 0x335b88u: goto label_335b88;
        case 0x335b94u: goto label_335b94;
        case 0x335be0u: goto label_335be0;
        case 0x335becu: goto label_335bec;
        case 0x335c24u: goto label_335c24;
        default: break;
    }

    ctx->pc = 0x335a58u;

    // 0x335a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x335a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x335a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335a60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x335a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x335a6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x335a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335a70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335a74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x335a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335a78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x335a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x335a7c: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x335a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x335a80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x335a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x335a84: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x335a84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x335a88: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x335A88u;
    {
        const bool branch_taken_0x335a88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x335A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A88u;
        // 0x335a8c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a88) {
            ctx->pc = 0x335AB0u;
            goto label_335ab0;
        }
    }
    ctx->pc = 0x335A90u;
    // 0x335a90: 0x8e230498  lw          $v1, 0x498($s1)
    ctx->pc = 0x335a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
    // 0x335a94: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x335a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x335a98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335A98u;
    {
        const bool branch_taken_0x335a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x335A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A98u;
        // 0x335a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a98) {
            ctx->pc = 0x335AA8u;
            goto label_335aa8;
        }
    }
    ctx->pc = 0x335AA0u;
    // 0x335aa0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335AA0u;
    {
        const bool branch_taken_0x335aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x335AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AA0u;
        // 0x335aa4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335aa0) {
            ctx->pc = 0x335AB0u;
            goto label_335ab0;
        }
    }
    ctx->pc = 0x335AA8u;
label_335aa8:
    // 0x335aa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x335aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335aac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x335aacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_335ab0:
    // 0x335ab0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x335ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x335ab4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x335ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x335ab8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x335AB8u;
    {
        const bool branch_taken_0x335ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AB8u;
        // 0x335abc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ab8) {
            ctx->pc = 0x335C24u;
            goto label_335c24;
        }
    }
    ctx->pc = 0x335AC0u;
label_335ac0:
    // 0x335ac0: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335AC0u;
    {
        const bool branch_taken_0x335ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x335ac0) {
            ctx->pc = 0x335AD0u;
            goto label_335ad0;
        }
    }
    ctx->pc = 0x335AC8u;
    // 0x335ac8: 0x52600057  beql        $s3, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x335AC8u;
    {
        const bool branch_taken_0x335ac8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x335ac8) {
            ctx->pc = 0x335ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335AC8u;
            // 0x335acc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335C28u;
            goto label_335c28;
        }
    }
    ctx->pc = 0x335AD0u;
label_335ad0:
    // 0x335ad0: 0xc0cdd5c  jal         func_337570
    ctx->pc = 0x335AD0u;
    SET_GPR_U32(ctx, 31, 0x335AD8u);
    ctx->pc = 0x337570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337570u, 0x335AD0u, 0x335AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335AD8u;
label_335ad8:
    // 0x335ad8: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x335AD8u;
    {
        const bool branch_taken_0x335ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335ad8) {
            ctx->pc = 0x335ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335AD8u;
            // 0x335adc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335C28u;
            goto label_335c28;
        }
    }
    ctx->pc = 0x335AE0u;
    // 0x335ae0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x335ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x335ae4: 0xc0cdd6e  jal         func_3375B8
    ctx->pc = 0x335AE4u;
    SET_GPR_U32(ctx, 31, 0x335AECu);
    ctx->pc = 0x335AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335AE4u;
    // 0x335ae8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3375B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3375B8u, 0x335AE4u, 0x335AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335AECu;
label_335aec:
    // 0x335aec: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x335aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x335af0: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x335AF0u;
    {
        const bool branch_taken_0x335af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AF0u;
        // 0x335af4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335af0) {
            ctx->pc = 0x335C24u;
            goto label_335c24;
        }
    }
    ctx->pc = 0x335AF8u;
    // 0x335af8: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x335af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x335afc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335AFCu;
    {
        const bool branch_taken_0x335afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x335afc) {
            ctx->pc = 0x335B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335AFCu;
            // 0x335b00: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335B14u;
            goto label_335b14;
        }
    }
    ctx->pc = 0x335B04u;
    // 0x335b04: 0x8e02016c  lw          $v0, 0x16C($s0)
    ctx->pc = 0x335b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x335b08: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x335B08u;
    {
        const bool branch_taken_0x335b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x335B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B08u;
        // 0x335b0c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b08) {
            ctx->pc = 0x335B38u;
            goto label_335b38;
        }
    }
    ctx->pc = 0x335B10u;
    // 0x335b10: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x335b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_335b14:
    // 0x335b14: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x335B14u;
    {
        const bool branch_taken_0x335b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B14u;
        // 0x335b18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b14) {
            ctx->pc = 0x335B34u;
            goto label_335b34;
        }
    }
    ctx->pc = 0x335B1Cu;
    // 0x335b1c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x335b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x335b20: 0xac620498  sw          $v0, 0x498($v1)
    ctx->pc = 0x335b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1176), GPR_U32(ctx, 2));
    // 0x335b24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x335b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b28: 0xc0cdd6e  jal         func_3375B8
    ctx->pc = 0x335B28u;
    SET_GPR_U32(ctx, 31, 0x335B30u);
    ctx->pc = 0x335B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B28u;
    // 0x335b2c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3375B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3375B8u, 0x335B28u, 0x335B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B30u;
label_335b30:
    // 0x335b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x335b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_335b34:
    // 0x335b34: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x335b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_335b38:
    // 0x335b38: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x335B38u;
    {
        const bool branch_taken_0x335b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x335B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B38u;
        // 0x335b3c: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b38) {
            ctx->pc = 0x335BC4u;
            goto label_335bc4;
        }
    }
    ctx->pc = 0x335B40u;
    // 0x335b40: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x335B40u;
    {
        const bool branch_taken_0x335b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B40u;
        // 0x335b44: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b40) {
            ctx->pc = 0x335C24u;
            goto label_335c24;
        }
    }
    ctx->pc = 0x335B48u;
    // 0x335b48: 0x54820037  bnel        $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x335B48u;
    {
        const bool branch_taken_0x335b48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x335b48) {
            ctx->pc = 0x335B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335B48u;
            // 0x335b4c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335C28u;
            goto label_335c28;
        }
    }
    ctx->pc = 0x335B50u;
    // 0x335b50: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x335b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x335b54: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x335B54u;
    {
        const bool branch_taken_0x335b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B54u;
        // 0x335b58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b54) {
            ctx->pc = 0x335C24u;
            goto label_335c24;
        }
    }
    ctx->pc = 0x335B5Cu;
    // 0x335b5c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x335b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b60: 0xc0cdbba  jal         func_336EE8
    ctx->pc = 0x335B60u;
    SET_GPR_U32(ctx, 31, 0x335B68u);
    ctx->pc = 0x335B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B60u;
    // 0x335b64: 0xac620498  sw          $v0, 0x498($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE8u, 0x335B60u, 0x335B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B68u;
label_335b68:
    // 0x335b68: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x335b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x335b6c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x335b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x335b70: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x335B70u;
    {
        const bool branch_taken_0x335b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x335b70) {
            ctx->pc = 0x335B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335B70u;
            // 0x335b74: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335C28u;
            goto label_335c28;
        }
    }
    ctx->pc = 0x335B78u;
    // 0x335b78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x335b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x335b7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x335B7Cu;
    {
        const bool branch_taken_0x335b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B7Cu;
        // 0x335b80: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b7c) {
            ctx->pc = 0x335B94u;
            goto label_335b94;
        }
    }
    ctx->pc = 0x335B84u;
    // 0x335b84: 0x0  nop
    ctx->pc = 0x335b84u;
    // NOP
label_335b88:
    // 0x335b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x335b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b8c: 0xc0cd720  jal         func_335C80
    ctx->pc = 0x335B8Cu;
    SET_GPR_U32(ctx, 31, 0x335B94u);
    ctx->pc = 0x335B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B8Cu;
    // 0x335b90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335C80u, 0x335B8Cu, 0x335B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B94u;
label_335b94:
    // 0x335b94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x335b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x335b98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335B98u;
    {
        const bool branch_taken_0x335b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B98u;
        // 0x335b9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b98) {
            ctx->pc = 0x335BA4u;
            goto label_335ba4;
        }
    }
    ctx->pc = 0x335BA0u;
    // 0x335ba0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x335ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_335ba4:
    // 0x335ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335BA4u;
    {
        const bool branch_taken_0x335ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335ba4) {
            ctx->pc = 0x335BB4u;
            goto label_335bb4;
        }
    }
    ctx->pc = 0x335BACu;
    // 0x335bac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x335bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x335bb0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x335bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_335bb4:
    // 0x335bb4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x335BB4u;
    {
        const bool branch_taken_0x335bb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x335BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BB4u;
        // 0x335bb8: 0xae050014  sw          $a1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bb4) {
            ctx->pc = 0x335B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335b88;
        }
    }
    ctx->pc = 0x335BBCu;
    // 0x335bbc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x335BBCu;
    {
        const bool branch_taken_0x335bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BBCu;
        // 0x335bc0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bbc) {
            ctx->pc = 0x335C28u;
            goto label_335c28;
        }
    }
    ctx->pc = 0x335BC4u;
label_335bc4:
    // 0x335bc4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x335bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x335bc8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x335bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x335bcc: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x335BCCu;
    {
        const bool branch_taken_0x335bcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x335BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BCCu;
        // 0x335bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bcc) {
            ctx->pc = 0x335C1Cu;
            goto label_335c1c;
        }
    }
    ctx->pc = 0x335BD4u;
    // 0x335bd4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x335bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x335bd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x335BD8u;
    {
        const bool branch_taken_0x335bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BD8u;
        // 0x335bdc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bd8) {
            ctx->pc = 0x335BECu;
            goto label_335bec;
        }
    }
    ctx->pc = 0x335BE0u;
label_335be0:
    // 0x335be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x335be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335be4: 0xc0cd720  jal         func_335C80
    ctx->pc = 0x335BE4u;
    SET_GPR_U32(ctx, 31, 0x335BECu);
    ctx->pc = 0x335BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335BE4u;
    // 0x335be8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335C80u, 0x335BE4u, 0x335BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335BECu;
label_335bec:
    // 0x335bec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x335becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x335bf0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335BF0u;
    {
        const bool branch_taken_0x335bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BF0u;
        // 0x335bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bf0) {
            ctx->pc = 0x335BFCu;
            goto label_335bfc;
        }
    }
    ctx->pc = 0x335BF8u;
    // 0x335bf8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x335bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_335bfc:
    // 0x335bfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335BFCu;
    {
        const bool branch_taken_0x335bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335bfc) {
            ctx->pc = 0x335C0Cu;
            goto label_335c0c;
        }
    }
    ctx->pc = 0x335C04u;
    // 0x335c04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x335c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x335c08: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x335c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_335c0c:
    // 0x335c0c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x335C0Cu;
    {
        const bool branch_taken_0x335c0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x335C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C0Cu;
        // 0x335c10: 0xae050014  sw          $a1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c0c) {
            ctx->pc = 0x335BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335be0;
        }
    }
    ctx->pc = 0x335C14u;
    // 0x335c14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x335C14u;
    {
        const bool branch_taken_0x335c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C14u;
        // 0x335c18: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c14) {
            ctx->pc = 0x335C28u;
            goto label_335c28;
        }
    }
    ctx->pc = 0x335C1Cu;
label_335c1c:
    // 0x335c1c: 0xc0cd720  jal         func_335C80
    ctx->pc = 0x335C1Cu;
    SET_GPR_U32(ctx, 31, 0x335C24u);
    ctx->pc = 0x335C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335C1Cu;
    // 0x335c20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335C80u, 0x335C1Cu, 0x335C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335C24u;
label_335c24:
    // 0x335c24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x335c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_335c28:
    // 0x335c28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x335c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335C2Cu;
    {
        const bool branch_taken_0x335c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C2Cu;
        // 0x335c30: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c2c) {
            ctx->pc = 0x335C38u;
            goto label_335c38;
        }
    }
    ctx->pc = 0x335C34u;
    // 0x335c34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x335c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_335c38:
    // 0x335c38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335C38u;
    {
        const bool branch_taken_0x335c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335c38) {
            ctx->pc = 0x335C48u;
            goto label_335c48;
        }
    }
    ctx->pc = 0x335C40u;
    // 0x335c40: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x335c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x335c44: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x335c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_335c48:
    // 0x335c48: 0x1480ff9d  bnez        $a0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x335C48u;
    {
        const bool branch_taken_0x335c48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C48u;
        // 0x335c4c: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c48) {
            ctx->pc = 0x335AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335ac0;
        }
    }
    ctx->pc = 0x335C50u;
    // 0x335c50: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x335c50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x335c54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x335c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335c64: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x335c64u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x335c68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335c6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x335c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x335c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335c74: 0x3e00008  jr          $ra
    ctx->pc = 0x335C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C74u;
        // 0x335c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335C7Cu;
    // 0x335c7c: 0x0  nop
    ctx->pc = 0x335c7cu;
    // NOP
    ctx->pc = 0x335c80u;
}
