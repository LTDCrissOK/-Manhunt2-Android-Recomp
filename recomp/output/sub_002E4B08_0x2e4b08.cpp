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

// Function: sub_002E4B08
// Address: 0x2e4b08 - 0x2e4c18
void sub_002E4B08_0x2e4b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4B08_0x2e4b08");
#endif

    switch (ctx->pc) {
        case 0x2e4b08u: goto label_2e4b08;
        case 0x2e4b0cu: goto label_2e4b0c;
        case 0x2e4b10u: goto label_2e4b10;
        case 0x2e4b14u: goto label_2e4b14;
        case 0x2e4b18u: goto label_2e4b18;
        case 0x2e4b1cu: goto label_2e4b1c;
        case 0x2e4b20u: goto label_2e4b20;
        case 0x2e4b24u: goto label_2e4b24;
        case 0x2e4b28u: goto label_2e4b28;
        case 0x2e4b2cu: goto label_2e4b2c;
        case 0x2e4b30u: goto label_2e4b30;
        case 0x2e4b34u: goto label_2e4b34;
        case 0x2e4b38u: goto label_2e4b38;
        case 0x2e4b3cu: goto label_2e4b3c;
        case 0x2e4b40u: goto label_2e4b40;
        case 0x2e4b44u: goto label_2e4b44;
        case 0x2e4b48u: goto label_2e4b48;
        case 0x2e4b4cu: goto label_2e4b4c;
        case 0x2e4b50u: goto label_2e4b50;
        case 0x2e4b54u: goto label_2e4b54;
        case 0x2e4b58u: goto label_2e4b58;
        case 0x2e4b5cu: goto label_2e4b5c;
        case 0x2e4b60u: goto label_2e4b60;
        case 0x2e4b64u: goto label_2e4b64;
        case 0x2e4b68u: goto label_2e4b68;
        case 0x2e4b6cu: goto label_2e4b6c;
        case 0x2e4b70u: goto label_2e4b70;
        case 0x2e4b74u: goto label_2e4b74;
        case 0x2e4b78u: goto label_2e4b78;
        case 0x2e4b7cu: goto label_2e4b7c;
        case 0x2e4b80u: goto label_2e4b80;
        case 0x2e4b84u: goto label_2e4b84;
        case 0x2e4b88u: goto label_2e4b88;
        case 0x2e4b8cu: goto label_2e4b8c;
        case 0x2e4b90u: goto label_2e4b90;
        case 0x2e4b94u: goto label_2e4b94;
        case 0x2e4b98u: goto label_2e4b98;
        case 0x2e4b9cu: goto label_2e4b9c;
        case 0x2e4ba0u: goto label_2e4ba0;
        case 0x2e4ba4u: goto label_2e4ba4;
        case 0x2e4ba8u: goto label_2e4ba8;
        case 0x2e4bacu: goto label_2e4bac;
        case 0x2e4bb0u: goto label_2e4bb0;
        case 0x2e4bb4u: goto label_2e4bb4;
        case 0x2e4bb8u: goto label_2e4bb8;
        case 0x2e4bbcu: goto label_2e4bbc;
        case 0x2e4bc0u: goto label_2e4bc0;
        case 0x2e4bc4u: goto label_2e4bc4;
        case 0x2e4bc8u: goto label_2e4bc8;
        case 0x2e4bccu: goto label_2e4bcc;
        case 0x2e4bd0u: goto label_2e4bd0;
        case 0x2e4bd4u: goto label_2e4bd4;
        case 0x2e4bd8u: goto label_2e4bd8;
        case 0x2e4bdcu: goto label_2e4bdc;
        case 0x2e4be0u: goto label_2e4be0;
        case 0x2e4be4u: goto label_2e4be4;
        case 0x2e4be8u: goto label_2e4be8;
        case 0x2e4becu: goto label_2e4bec;
        case 0x2e4bf0u: goto label_2e4bf0;
        case 0x2e4bf4u: goto label_2e4bf4;
        case 0x2e4bf8u: goto label_2e4bf8;
        case 0x2e4bfcu: goto label_2e4bfc;
        case 0x2e4c00u: goto label_2e4c00;
        case 0x2e4c04u: goto label_2e4c04;
        case 0x2e4c08u: goto label_2e4c08;
        case 0x2e4c0cu: goto label_2e4c0c;
        case 0x2e4c10u: goto label_2e4c10;
        case 0x2e4c14u: goto label_2e4c14;
        default: break;
    }

    ctx->pc = 0x2e4b08u;

label_2e4b08:
    // 0x2e4b08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e4b0c:
    // 0x2e4b0c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2e4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2e4b10:
    // 0x2e4b10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e4b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e4b14:
    // 0x2e4b14: 0x244240b8  addiu       $v0, $v0, 0x40B8
    ctx->pc = 0x2e4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16568));
label_2e4b18:
    // 0x2e4b18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e4b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2e4b1c:
    // 0x2e4b1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e4b20:
    // 0x2e4b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e4b24:
    // 0x2e4b24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e4b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e4b28:
    // 0x2e4b28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e4b2c:
    // 0x2e4b2c: 0xae220218  sw          $v0, 0x218($s1)
    ctx->pc = 0x2e4b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
label_2e4b30:
    // 0x2e4b30: 0x8e241454  lw          $a0, 0x1454($s1)
    ctx->pc = 0x2e4b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5204)));
label_2e4b34:
    // 0x2e4b34: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2e4b38:
    if (ctx->pc == 0x2E4B38u) {
        ctx->pc = 0x2E4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B34u;
        // 0x2e4b38: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B3Cu;
        goto label_2e4b3c;
    }
    ctx->pc = 0x2E4B34u;
    {
        const bool branch_taken_0x2e4b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B34u;
        // 0x2e4b38: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b34) {
            ctx->pc = 0x2E4B44u;
            goto label_2e4b44;
        }
    }
    ctx->pc = 0x2E4B3Cu;
label_2e4b3c:
    // 0x2e4b3c: 0xc0d5c0e  jal         func_357038
label_2e4b40:
    if (ctx->pc == 0x2E4B40u) {
        ctx->pc = 0x2E4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B3Cu;
        // 0x2e4b40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B44u;
        goto label_2e4b44;
    }
    ctx->pc = 0x2E4B3Cu;
    SET_GPR_U32(ctx, 31, 0x2E4B44u);
    ctx->pc = 0x2E4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B3Cu;
    // 0x2e4b40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357038u, 0x2E4B3Cu, 0x2E4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B44u;
label_2e4b44:
    // 0x2e4b44: 0x8e251390  lw          $a1, 0x1390($s1)
    ctx->pc = 0x2e4b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5008)));
label_2e4b48:
    // 0x2e4b48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2e4b4c:
    if (ctx->pc == 0x2E4B4Cu) {
        ctx->pc = 0x2E4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B48u;
        // 0x2e4b4c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B50u;
        goto label_2e4b50;
    }
    ctx->pc = 0x2E4B48u;
    {
        const bool branch_taken_0x2e4b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B48u;
        // 0x2e4b4c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b48) {
            ctx->pc = 0x2E4B58u;
            goto label_2e4b58;
        }
    }
    ctx->pc = 0x2E4B50u;
label_2e4b50:
    // 0x2e4b50: 0xc0b2b08  jal         func_2CAC20
label_2e4b54:
    if (ctx->pc == 0x2E4B54u) {
        ctx->pc = 0x2E4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B50u;
        // 0x2e4b54: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B58u;
        goto label_2e4b58;
    }
    ctx->pc = 0x2E4B50u;
    SET_GPR_U32(ctx, 31, 0x2E4B58u);
    ctx->pc = 0x2E4B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B50u;
    // 0x2e4b54: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2E4B50u, 0x2E4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B58u;
label_2e4b58:
    // 0x2e4b58: 0x8e2411e4  lw          $a0, 0x11E4($s1)
    ctx->pc = 0x2e4b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_2e4b5c:
    // 0x2e4b5c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2e4b60:
    if (ctx->pc == 0x2E4B60u) {
        ctx->pc = 0x2E4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B5Cu;
        // 0x2e4b60: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B64u;
        goto label_2e4b64;
    }
    ctx->pc = 0x2E4B5Cu;
    {
        const bool branch_taken_0x2e4b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B5Cu;
        // 0x2e4b60: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b5c) {
            ctx->pc = 0x2E4B90u;
            goto label_2e4b90;
        }
    }
    ctx->pc = 0x2E4B64u;
label_2e4b64:
    // 0x2e4b64: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2e4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_2e4b68:
    // 0x2e4b68: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e4b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2e4b6c:
    // 0x2e4b6c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2e4b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2e4b70:
    // 0x2e4b70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e4b74:
    if (ctx->pc == 0x2E4B74u) {
        ctx->pc = 0x2E4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B70u;
        // 0x2e4b74: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B78u;
        goto label_2e4b78;
    }
    ctx->pc = 0x2E4B70u;
    {
        const bool branch_taken_0x2e4b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B70u;
        // 0x2e4b74: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b70) {
            ctx->pc = 0x2E4B90u;
            goto label_2e4b90;
        }
    }
    ctx->pc = 0x2E4B78u;
label_2e4b78:
    // 0x2e4b78: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2e4b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2e4b7c:
    // 0x2e4b7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e4b80:
    // 0x2e4b80: 0x40f809  jalr        $v0
label_2e4b84:
    if (ctx->pc == 0x2E4B84u) {
        ctx->pc = 0x2E4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B80u;
        // 0x2e4b84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B88u;
        goto label_2e4b88;
    }
    ctx->pc = 0x2E4B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E4B88u);
        ctx->pc = 0x2E4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B80u;
        // 0x2e4b84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4B80u, 0x2E4B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4B88u;
label_2e4b88:
    // 0x2e4b88: 0xae2011e4  sw          $zero, 0x11E4($s1)
    ctx->pc = 0x2e4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4580), GPR_U32(ctx, 0));
label_2e4b8c:
    // 0x2e4b8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e4b90:
    // 0x2e4b90: 0x26241350  addiu       $a0, $s1, 0x1350
    ctx->pc = 0x2e4b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4944));
label_2e4b94:
    // 0x2e4b94: 0xac40bd50  sw          $zero, -0x42B0($v0)
    ctx->pc = 0x2e4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950224), GPR_U32(ctx, 0));
label_2e4b98:
    // 0x2e4b98: 0xc0b919a  jal         func_2E4668
label_2e4b9c:
    if (ctx->pc == 0x2E4B9Cu) {
        ctx->pc = 0x2E4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B98u;
        // 0x2e4b9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BA0u;
        goto label_2e4ba0;
    }
    ctx->pc = 0x2E4B98u;
    SET_GPR_U32(ctx, 31, 0x2E4BA0u);
    ctx->pc = 0x2E4B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B98u;
    // 0x2e4b9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4668u, 0x2E4B98u, 0x2E4BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BA0u;
label_2e4ba0:
    // 0x2e4ba0: 0x2630120c  addiu       $s0, $s1, 0x120C
    ctx->pc = 0x2e4ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4620));
label_2e4ba4:
    // 0x2e4ba4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e4ba8:
    // 0x2e4ba8: 0x2632117c  addiu       $s2, $s1, 0x117C
    ctx->pc = 0x2e4ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4476));
label_2e4bac:
    // 0x2e4bac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e4bb0:
    if (ctx->pc == 0x2E4BB0u) {
        ctx->pc = 0x2E4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BACu;
        // 0x2e4bb0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BB4u;
        goto label_2e4bb4;
    }
    ctx->pc = 0x2E4BACu;
    {
        const bool branch_taken_0x2e4bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BACu;
        // 0x2e4bb0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4bac) {
            ctx->pc = 0x2E4BD0u;
            goto label_2e4bd0;
        }
    }
    ctx->pc = 0x2E4BB4u;
label_2e4bb4:
    // 0x2e4bb4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2e4bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e4bb8:
    // 0x2e4bb8: 0xc0f6e9c  jal         func_3DBA70
label_2e4bbc:
    if (ctx->pc == 0x2E4BBCu) {
        ctx->pc = 0x2E4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BB8u;
        // 0x2e4bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BC0u;
        goto label_2e4bc0;
    }
    ctx->pc = 0x2E4BB8u;
    SET_GPR_U32(ctx, 31, 0x2E4BC0u);
    ctx->pc = 0x2E4BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BB8u;
    // 0x2e4bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x2E4BB8u, 0x2E4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BC0u;
label_2e4bc0:
    // 0x2e4bc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e4bc4:
    // 0x2e4bc4: 0x0  nop
    ctx->pc = 0x2e4bc4u;
    // NOP
label_2e4bc8:
    // 0x2e4bc8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_2e4bcc:
    if (ctx->pc == 0x2E4BCCu) {
        ctx->pc = 0x2E4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BC8u;
        // 0x2e4bcc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BD0u;
        goto label_2e4bd0;
    }
    ctx->pc = 0x2E4BC8u;
    {
        const bool branch_taken_0x2e4bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4bc8) {
            ctx->pc = 0x2E4BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4BC8u;
            // 0x2e4bcc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4bb8;
        }
    }
    ctx->pc = 0x2E4BD0u;
label_2e4bd0:
    // 0x2e4bd0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2e4bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2e4bd4:
    // 0x2e4bd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e4bd8:
    // 0x2e4bd8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e4bdc:
    // 0x2e4bdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e4bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e4be0:
    // 0x2e4be0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e4be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e4be4:
    // 0x2e4be4: 0xc0b9062  jal         func_2E4188
label_2e4be8:
    if (ctx->pc == 0x2E4BE8u) {
        ctx->pc = 0x2E4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BE4u;
        // 0x2e4be8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BECu;
        goto label_2e4bec;
    }
    ctx->pc = 0x2E4BE4u;
    SET_GPR_U32(ctx, 31, 0x2E4BECu);
    ctx->pc = 0x2E4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BE4u;
    // 0x2e4be8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4188u, 0x2E4BE4u, 0x2E4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BECu;
label_2e4bec:
    // 0x2e4bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e4bf0:
    // 0x2e4bf0: 0xc094446  jal         func_251118
label_2e4bf4:
    if (ctx->pc == 0x2E4BF4u) {
        ctx->pc = 0x2E4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BF0u;
        // 0x2e4bf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BF8u;
        goto label_2e4bf8;
    }
    ctx->pc = 0x2E4BF0u;
    SET_GPR_U32(ctx, 31, 0x2E4BF8u);
    ctx->pc = 0x2E4BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BF0u;
    // 0x2e4bf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251118u, 0x2E4BF0u, 0x2E4BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BF8u;
label_2e4bf8:
    // 0x2e4bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4bfc:
    // 0x2e4bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e4bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e4c00:
    // 0x2e4c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e4c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4c04:
    // 0x2e4c04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e4c04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e4c08:
    // 0x2e4c08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e4c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4c0c:
    // 0x2e4c0c: 0x3e00008  jr          $ra
label_2e4c10:
    if (ctx->pc == 0x2E4C10u) {
        ctx->pc = 0x2E4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C0Cu;
        // 0x2e4c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4C14u;
        goto label_2e4c14;
    }
    ctx->pc = 0x2E4C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C0Cu;
        // 0x2e4c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4C14u;
label_2e4c14:
    // 0x2e4c14: 0x0  nop
    ctx->pc = 0x2e4c14u;
    // NOP
    ctx->pc = 0x2e4c18u;
}
