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

// Function: sub_00152B30
// Address: 0x152b30 - 0x152be0
void sub_00152B30_0x152b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152B30_0x152b30");
#endif

    switch (ctx->pc) {
        case 0x152b30u: goto label_152b30;
        case 0x152b34u: goto label_152b34;
        case 0x152b38u: goto label_152b38;
        case 0x152b3cu: goto label_152b3c;
        case 0x152b40u: goto label_152b40;
        case 0x152b44u: goto label_152b44;
        case 0x152b48u: goto label_152b48;
        case 0x152b4cu: goto label_152b4c;
        case 0x152b50u: goto label_152b50;
        case 0x152b54u: goto label_152b54;
        case 0x152b58u: goto label_152b58;
        case 0x152b5cu: goto label_152b5c;
        case 0x152b60u: goto label_152b60;
        case 0x152b64u: goto label_152b64;
        case 0x152b68u: goto label_152b68;
        case 0x152b6cu: goto label_152b6c;
        case 0x152b70u: goto label_152b70;
        case 0x152b74u: goto label_152b74;
        case 0x152b78u: goto label_152b78;
        case 0x152b7cu: goto label_152b7c;
        case 0x152b80u: goto label_152b80;
        case 0x152b84u: goto label_152b84;
        case 0x152b88u: goto label_152b88;
        case 0x152b8cu: goto label_152b8c;
        case 0x152b90u: goto label_152b90;
        case 0x152b94u: goto label_152b94;
        case 0x152b98u: goto label_152b98;
        case 0x152b9cu: goto label_152b9c;
        case 0x152ba0u: goto label_152ba0;
        case 0x152ba4u: goto label_152ba4;
        case 0x152ba8u: goto label_152ba8;
        case 0x152bacu: goto label_152bac;
        case 0x152bb0u: goto label_152bb0;
        case 0x152bb4u: goto label_152bb4;
        case 0x152bb8u: goto label_152bb8;
        case 0x152bbcu: goto label_152bbc;
        case 0x152bc0u: goto label_152bc0;
        case 0x152bc4u: goto label_152bc4;
        case 0x152bc8u: goto label_152bc8;
        case 0x152bccu: goto label_152bcc;
        case 0x152bd0u: goto label_152bd0;
        case 0x152bd4u: goto label_152bd4;
        case 0x152bd8u: goto label_152bd8;
        case 0x152bdcu: goto label_152bdc;
        default: break;
    }

    ctx->pc = 0x152b30u;

label_152b30:
    // 0x152b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_152b34:
    // 0x152b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_152b38:
    // 0x152b38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x152b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_152b3c:
    // 0x152b3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_152b40:
    // 0x152b40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_152b44:
    // 0x152b44: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x152b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_152b48:
    // 0x152b48: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_152b4c:
    if (ctx->pc == 0x152B4Cu) {
        ctx->pc = 0x152B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B48u;
        // 0x152b4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152B50u;
        goto label_152b50;
    }
    ctx->pc = 0x152B48u;
    {
        const bool branch_taken_0x152b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b48) {
            ctx->pc = 0x152B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152B48u;
            // 0x152b4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152BD0u;
            goto label_152bd0;
        }
    }
    ctx->pc = 0x152B50u;
label_152b50:
    // 0x152b50: 0xc04db02  jal         func_136C08
label_152b54:
    if (ctx->pc == 0x152B54u) {
        ctx->pc = 0x152B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B50u;
        // 0x152b54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152B58u;
        goto label_152b58;
    }
    ctx->pc = 0x152B50u;
    SET_GPR_U32(ctx, 31, 0x152B58u);
    ctx->pc = 0x152B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B50u;
    // 0x152b54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x152B50u, 0x152B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B58u;
label_152b58:
    // 0x152b58: 0x10000003  b           . + 4 + (0x3 << 2)
label_152b5c:
    if (ctx->pc == 0x152B5Cu) {
        ctx->pc = 0x152B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B58u;
        // 0x152b5c: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152B60u;
        goto label_152b60;
    }
    ctx->pc = 0x152B58u;
    {
        const bool branch_taken_0x152b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B58u;
        // 0x152b5c: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b58) {
            ctx->pc = 0x152B68u;
            goto label_152b68;
        }
    }
    ctx->pc = 0x152B60u;
label_152b60:
    // 0x152b60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_152b64:
    // 0x152b64: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x152b64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_152b68:
    // 0x152b68: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x152b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_152b6c:
    // 0x152b6c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x152b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_152b70:
    // 0x152b70: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_152b74:
    if (ctx->pc == 0x152B74u) {
        ctx->pc = 0x152B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B70u;
        // 0x152b74: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152B78u;
        goto label_152b78;
    }
    ctx->pc = 0x152B70u;
    {
        const bool branch_taken_0x152b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b70) {
            ctx->pc = 0x152B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152B70u;
            // 0x152b74: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152BC0u;
            goto label_152bc0;
        }
    }
    ctx->pc = 0x152B78u;
label_152b78:
    // 0x152b78: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x152b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_152b7c:
    // 0x152b7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x152b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_152b80:
    // 0x152b80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_152b84:
    // 0x152b84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x152b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_152b88:
    // 0x152b88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x152b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_152b8c:
    // 0x152b8c: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_152b90:
    if (ctx->pc == 0x152B90u) {
        ctx->pc = 0x152B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B8Cu;
        // 0x152b90: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152B94u;
        goto label_152b94;
    }
    ctx->pc = 0x152B8Cu;
    {
        const bool branch_taken_0x152b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b8c) {
            ctx->pc = 0x152B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152B8Cu;
            // 0x152b90: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152b60;
        }
    }
    ctx->pc = 0x152B94u;
label_152b94:
    // 0x152b94: 0xc054b62  jal         func_152D88
label_152b98:
    if (ctx->pc == 0x152B98u) {
        ctx->pc = 0x152B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B94u;
        // 0x152b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152B9Cu;
        goto label_152b9c;
    }
    ctx->pc = 0x152B94u;
    SET_GPR_U32(ctx, 31, 0x152B9Cu);
    ctx->pc = 0x152B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B94u;
    // 0x152b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152D88u, 0x152B94u, 0x152B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B9Cu;
label_152b9c:
    // 0x152b9c: 0x8e050520  lw          $a1, 0x520($s0)
    ctx->pc = 0x152b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
label_152ba0:
    // 0x152ba0: 0xc04d80c  jal         func_136030
label_152ba4:
    if (ctx->pc == 0x152BA4u) {
        ctx->pc = 0x152BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BA0u;
        // 0x152ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152BA8u;
        goto label_152ba8;
    }
    ctx->pc = 0x152BA0u;
    SET_GPR_U32(ctx, 31, 0x152BA8u);
    ctx->pc = 0x152BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BA0u;
    // 0x152ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x152BA0u, 0x152BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BA8u;
label_152ba8:
    // 0x152ba8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x152ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_152bac:
    // 0x152bac: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x152bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_152bb0:
    // 0x152bb0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x152bb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_152bb4:
    // 0x152bb4: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_152bb8:
    if (ctx->pc == 0x152BB8u) {
        ctx->pc = 0x152BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BB4u;
        // 0x152bb8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152BBCu;
        goto label_152bbc;
    }
    ctx->pc = 0x152BB4u;
    {
        const bool branch_taken_0x152bb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x152bb4) {
            ctx->pc = 0x152BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152BB4u;
            // 0x152bb8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152b60;
        }
    }
    ctx->pc = 0x152BBCu;
label_152bbc:
    // 0x152bbc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x152bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_152bc0:
    // 0x152bc0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x152bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_152bc4:
    // 0x152bc4: 0x40f809  jalr        $v0
label_152bc8:
    if (ctx->pc == 0x152BC8u) {
        ctx->pc = 0x152BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BC4u;
        // 0x152bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152BCCu;
        goto label_152bcc;
    }
    ctx->pc = 0x152BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152BCCu);
        ctx->pc = 0x152BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BC4u;
        // 0x152bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152BC4u, 0x152BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152BCCu;
label_152bcc:
    // 0x152bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152bd0:
    // 0x152bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x152bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_152bd4:
    // 0x152bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_152bd8:
    // 0x152bd8: 0x3e00008  jr          $ra
label_152bdc:
    if (ctx->pc == 0x152BDCu) {
        ctx->pc = 0x152BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BD8u;
        // 0x152bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152BE0u;
        goto label_fallthrough_0x152bd8;
    }
    ctx->pc = 0x152BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BD8u;
        // 0x152bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x152bd8:
    ctx->pc = 0x152BE0u;
}
