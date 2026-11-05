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

// Function: sub_003A5B30
// Address: 0x3a5b30 - 0x3a5ce8
void sub_003A5B30_0x3a5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5B30_0x3a5b30");
#endif

    switch (ctx->pc) {
        case 0x3a5b60u: goto label_3a5b60;
        case 0x3a5b80u: goto label_3a5b80;
        case 0x3a5b88u: goto label_3a5b88;
        case 0x3a5b94u: goto label_3a5b94;
        case 0x3a5ba0u: goto label_3a5ba0;
        case 0x3a5bb8u: goto label_3a5bb8;
        case 0x3a5be0u: goto label_3a5be0;
        case 0x3a5c04u: goto label_3a5c04;
        case 0x3a5c20u: goto label_3a5c20;
        case 0x3a5c30u: goto label_3a5c30;
        case 0x3a5c38u: goto label_3a5c38;
        case 0x3a5c40u: goto label_3a5c40;
        case 0x3a5c50u: goto label_3a5c50;
        case 0x3a5c5cu: goto label_3a5c5c;
        case 0x3a5c70u: goto label_3a5c70;
        case 0x3a5c78u: goto label_3a5c78;
        case 0x3a5c80u: goto label_3a5c80;
        case 0x3a5c88u: goto label_3a5c88;
        case 0x3a5c98u: goto label_3a5c98;
        case 0x3a5ca0u: goto label_3a5ca0;
        case 0x3a5cacu: goto label_3a5cac;
        case 0x3a5cc8u: goto label_3a5cc8;
        default: break;
    }

    ctx->pc = 0x3a5b30u;

    // 0x3a5b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a5b34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a5b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a5b38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a5b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a5b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a5b40: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5B40u;
    {
        const bool branch_taken_0x3a5b40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B40u;
        // 0x3a5b44: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b40) {
            ctx->pc = 0x3A5B58u;
            goto label_3a5b58;
        }
    }
    ctx->pc = 0x3A5B48u;
    // 0x3a5b48: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5b4c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3A5B4Cu;
    {
        const bool branch_taken_0x3a5b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B4Cu;
        // 0x3a5b50: 0x24a5db78  addiu       $a1, $a1, -0x2488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b4c) {
            ctx->pc = 0x3A5CC0u;
            goto label_3a5cc0;
        }
    }
    ctx->pc = 0x3A5B54u;
    // 0x3a5b54: 0x0  nop
    ctx->pc = 0x3a5b54u;
    // NOP
label_3a5b58:
    // 0x3a5b58: 0xc0e9a94  jal         func_3A6A50
    ctx->pc = 0x3A5B58u;
    SET_GPR_U32(ctx, 31, 0x3A5B60u);
    ctx->pc = 0x3A5B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5B58u;
    // 0x3a5b5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A50u, 0x3A5B58u, 0x3A5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B60u;
label_3a5b60:
    // 0x3a5b60: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a5b64: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x3A5B64u;
    {
        const bool branch_taken_0x3a5b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B64u;
        // 0x3a5b68: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b64) {
            ctx->pc = 0x3A5CD0u;
            goto label_3a5cd0;
        }
    }
    ctx->pc = 0x3A5B6Cu;
    // 0x3a5b6c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a5b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b74: 0x24513c10  addiu       $s1, $v0, 0x3C10
    ctx->pc = 0x3a5b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15376));
    // 0x3a5b78: 0xc0e997e  jal         func_3A65F8
    ctx->pc = 0x3A5B78u;
    SET_GPR_U32(ctx, 31, 0x3A5B80u);
    ctx->pc = 0x3A5B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5B78u;
    // 0x3a5b7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65F8u, 0x3A5B78u, 0x3A5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B80u;
label_3a5b80:
    // 0x3a5b80: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5B80u;
    SET_GPR_U32(ctx, 31, 0x3A5B88u);
    ctx->pc = 0x3A5B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5B80u;
    // 0x3a5b84: 0x24044400  addiu       $a0, $zero, 0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5B80u, 0x3A5B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B88u;
label_3a5b88:
    // 0x3a5b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b8c: 0xc0e8da8  jal         func_3A36A0
    ctx->pc = 0x3A5B8Cu;
    SET_GPR_U32(ctx, 31, 0x3A5B94u);
    ctx->pc = 0x3A5B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5B8Cu;
    // 0x3a5b90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36A0u, 0x3A5B8Cu, 0x3A5B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B94u;
label_3a5b94:
    // 0x3a5b94: 0x24044401  addiu       $a0, $zero, 0x4401
    ctx->pc = 0x3a5b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17409));
    // 0x3a5b98: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5B98u;
    SET_GPR_U32(ctx, 31, 0x3A5BA0u);
    ctx->pc = 0x3A5B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5B98u;
    // 0x3a5b9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5B98u, 0x3A5BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BA0u;
label_3a5ba0:
    // 0x3a5ba0: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5BA0u;
    {
        const bool branch_taken_0x3a5ba0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BA0u;
        // 0x3a5ba4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ba0) {
            ctx->pc = 0x3A5BC8u;
            goto label_3a5bc8;
        }
    }
    ctx->pc = 0x3A5BA8u;
    // 0x3a5ba8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a5ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a5bac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a5bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5bb0: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A5BB0u;
    SET_GPR_U32(ctx, 31, 0x3A5BB8u);
    ctx->pc = 0x3A5BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BB0u;
    // 0x3a5bb4: 0x2484dba8  addiu       $a0, $a0, -0x2458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A5BB0u, 0x3A5BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BB8u;
label_3a5bb8:
    // 0x3a5bb8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5bbc: 0x24a5dbc8  addiu       $a1, $a1, -0x2438
    ctx->pc = 0x3a5bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958024));
    // 0x3a5bc0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3A5BC0u;
    {
        const bool branch_taken_0x3a5bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BC0u;
        // 0x3a5bc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bc0) {
            ctx->pc = 0x3A5CC0u;
            goto label_3a5cc0;
        }
    }
    ctx->pc = 0x3A5BC8u;
label_3a5bc8:
    // 0x3a5bc8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3a5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3a5bcc: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5BCCu;
    {
        const bool branch_taken_0x3a5bcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a5bcc) {
            ctx->pc = 0x3A5BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5BCCu;
            // 0x3a5bd0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5BF0u;
            goto label_3a5bf0;
        }
    }
    ctx->pc = 0x3A5BD4u;
    // 0x3a5bd4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a5bd8: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A5BD8u;
    SET_GPR_U32(ctx, 31, 0x3A5BE0u);
    ctx->pc = 0x3A5BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BD8u;
    // 0x3a5bdc: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A5BD8u, 0x3A5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BE0u;
label_3a5be0:
    // 0x3a5be0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5be4: 0x24a5dc28  addiu       $a1, $a1, -0x23D8
    ctx->pc = 0x3a5be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958120));
    // 0x3a5be8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3A5BE8u;
    {
        const bool branch_taken_0x3a5be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BE8u;
        // 0x3a5bec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5be8) {
            ctx->pc = 0x3A5CC0u;
            goto label_3a5cc0;
        }
    }
    ctx->pc = 0x3A5BF0u;
label_3a5bf0:
    // 0x3a5bf0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5BF0u;
    {
        const bool branch_taken_0x3a5bf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a5bf0) {
            ctx->pc = 0x3A5C18u;
            goto label_3a5c18;
        }
    }
    ctx->pc = 0x3A5BF8u;
    // 0x3a5bf8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a5bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a5bfc: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A5BFCu;
    SET_GPR_U32(ctx, 31, 0x3A5C04u);
    ctx->pc = 0x3A5C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BFCu;
    // 0x3a5c00: 0x2484dc50  addiu       $a0, $a0, -0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A5BFCu, 0x3A5C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C04u;
label_3a5c04:
    // 0x3a5c04: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5c08: 0x24a5dc28  addiu       $a1, $a1, -0x23D8
    ctx->pc = 0x3a5c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958120));
    // 0x3a5c0c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3A5C0Cu;
    {
        const bool branch_taken_0x3a5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C0Cu;
        // 0x3a5c10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5c0c) {
            ctx->pc = 0x3A5CC0u;
            goto label_3a5cc0;
        }
    }
    ctx->pc = 0x3A5C14u;
    // 0x3a5c14: 0x0  nop
    ctx->pc = 0x3a5c14u;
    // NOP
label_3a5c18:
    // 0x3a5c18: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5C18u;
    SET_GPR_U32(ctx, 31, 0x3A5C20u);
    ctx->pc = 0x3A5C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C18u;
    // 0x3a5c1c: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5C18u, 0x3A5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C20u;
label_3a5c20:
    // 0x3a5c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c28: 0xc0e8d5c  jal         func_3A3570
    ctx->pc = 0x3A5C28u;
    SET_GPR_U32(ctx, 31, 0x3A5C30u);
    ctx->pc = 0x3A5C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C28u;
    // 0x3a5c2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3570u, 0x3A5C28u, 0x3A5C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C30u;
label_3a5c30:
    // 0x3a5c30: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5C30u;
    SET_GPR_U32(ctx, 31, 0x3A5C38u);
    ctx->pc = 0x3A5C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C30u;
    // 0x3a5c34: 0x24044601  addiu       $a0, $zero, 0x4601 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5C30u, 0x3A5C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C38u;
label_3a5c38:
    // 0x3a5c38: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5C38u;
    SET_GPR_U32(ctx, 31, 0x3A5C40u);
    ctx->pc = 0x3A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C38u;
    // 0x3a5c3c: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5C38u, 0x3A5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C40u;
label_3a5c40:
    // 0x3a5c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c48: 0xc0e8d5c  jal         func_3A3570
    ctx->pc = 0x3A5C48u;
    SET_GPR_U32(ctx, 31, 0x3A5C50u);
    ctx->pc = 0x3A5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C48u;
    // 0x3a5c4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3570u, 0x3A5C48u, 0x3A5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C50u;
label_3a5c50:
    // 0x3a5c50: 0x24044601  addiu       $a0, $zero, 0x4601
    ctx->pc = 0x3a5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x3a5c54: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5C54u;
    SET_GPR_U32(ctx, 31, 0x3A5C5Cu);
    ctx->pc = 0x3A5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C54u;
    // 0x3a5c58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5C54u, 0x3A5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C5Cu;
label_3a5c5c:
    // 0x3a5c5c: 0x621000c  bgez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A5C5Cu;
    {
        const bool branch_taken_0x3a5c5c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C5Cu;
        // 0x3a5c60: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5c5c) {
            ctx->pc = 0x3A5C90u;
            goto label_3a5c90;
        }
    }
    ctx->pc = 0x3A5C64u;
    // 0x3a5c64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a5c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c68: 0xc0e960a  jal         func_3A5828
    ctx->pc = 0x3A5C68u;
    SET_GPR_U32(ctx, 31, 0x3A5C70u);
    ctx->pc = 0x3A5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C68u;
    // 0x3a5c6c: 0x24a5dc88  addiu       $a1, $a1, -0x2378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5828u, 0x3A5C68u, 0x3A5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C70u;
label_3a5c70:
    // 0x3a5c70: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5C70u;
    SET_GPR_U32(ctx, 31, 0x3A5C78u);
    ctx->pc = 0x3A5C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C70u;
    // 0x3a5c74: 0x24044500  addiu       $a0, $zero, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5C70u, 0x3A5C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C78u;
label_3a5c78:
    // 0x3a5c78: 0xc0e8dc2  jal         func_3A3708
    ctx->pc = 0x3A5C78u;
    SET_GPR_U32(ctx, 31, 0x3A5C80u);
    ctx->pc = 0x3A5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C78u;
    // 0x3a5c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3708u, 0x3A5C78u, 0x3A5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C80u;
label_3a5c80:
    // 0x3a5c80: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5C80u;
    SET_GPR_U32(ctx, 31, 0x3A5C88u);
    ctx->pc = 0x3A5C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C80u;
    // 0x3a5c84: 0x24044501  addiu       $a0, $zero, 0x4501 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17665));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5C80u, 0x3A5C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C88u;
label_3a5c88:
    // 0x3a5c88: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A5C88u;
    {
        const bool branch_taken_0x3a5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C88u;
        // 0x3a5c8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5c88) {
            ctx->pc = 0x3A5CD4u;
            goto label_3a5cd4;
        }
    }
    ctx->pc = 0x3A5C90u;
label_3a5c90:
    // 0x3a5c90: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5C90u;
    SET_GPR_U32(ctx, 31, 0x3A5C98u);
    ctx->pc = 0x3A5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C90u;
    // 0x3a5c94: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5C90u, 0x3A5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C98u;
label_3a5c98:
    // 0x3a5c98: 0xc0e8dc2  jal         func_3A3708
    ctx->pc = 0x3A5C98u;
    SET_GPR_U32(ctx, 31, 0x3A5CA0u);
    ctx->pc = 0x3A5C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C98u;
    // 0x3a5c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3708u, 0x3A5C98u, 0x3A5CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CA0u;
label_3a5ca0:
    // 0x3a5ca0: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x3a5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x3a5ca4: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5CA4u;
    SET_GPR_U32(ctx, 31, 0x3A5CACu);
    ctx->pc = 0x3A5CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5CA4u;
    // 0x3a5ca8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5CA4u, 0x3A5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CACu;
label_3a5cac:
    // 0x3a5cac: 0x6030009  bgezl       $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5CACu;
    {
        const bool branch_taken_0x3a5cac = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3a5cac) {
            ctx->pc = 0x3A5CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5CACu;
            // 0x3a5cb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5CD4u;
            goto label_3a5cd4;
        }
    }
    ctx->pc = 0x3A5CB4u;
    // 0x3a5cb4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5cb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a5cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5cbc: 0x24a5dcb8  addiu       $a1, $a1, -0x2348
    ctx->pc = 0x3a5cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958264));
label_3a5cc0:
    // 0x3a5cc0: 0xc0e960a  jal         func_3A5828
    ctx->pc = 0x3A5CC0u;
    SET_GPR_U32(ctx, 31, 0x3A5CC8u);
    ctx->pc = 0x3A5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5828u, 0x3A5CC0u, 0x3A5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5CC8u;
label_3a5cc8:
    // 0x3a5cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A5CC8u;
    {
        const bool branch_taken_0x3a5cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5CC8u;
        // 0x3a5ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5cc8) {
            ctx->pc = 0x3A5CD4u;
            goto label_3a5cd4;
        }
    }
    ctx->pc = 0x3A5CD0u;
label_3a5cd0:
    // 0x3a5cd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a5cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a5cd4:
    // 0x3a5cd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a5cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5cd8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a5cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a5cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a5cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5CE0u;
        // 0x3a5ce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5CE8u;
}
