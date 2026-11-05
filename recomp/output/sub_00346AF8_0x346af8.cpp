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

// Function: sub_00346AF8
// Address: 0x346af8 - 0x346bd0
void sub_00346AF8_0x346af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346AF8_0x346af8");
#endif

    switch (ctx->pc) {
        case 0x346b5cu: goto label_346b5c;
        case 0x346b6cu: goto label_346b6c;
        case 0x346b78u: goto label_346b78;
        case 0x346b88u: goto label_346b88;
        case 0x346b98u: goto label_346b98;
        case 0x346ba8u: goto label_346ba8;
        default: break;
    }

    ctx->pc = 0x346af8u;

    // 0x346af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346afc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x346afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x346b00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346b04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x346b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x346b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b0c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x346b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x346b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346b14: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x346b14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x346b18: 0x8c622cdc  lw          $v0, 0x2CDC($v1)
    ctx->pc = 0x346b18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CDCu));
    // 0x346b1c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x346B1Cu;
    {
        const bool branch_taken_0x346b1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x346B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B1Cu;
        // 0x346b20: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b1c) {
            ctx->pc = 0x346B48u;
            goto label_346b48;
        }
    }
    ctx->pc = 0x346B24u;
    // 0x346b24: 0x8ca32cd4  lw          $v1, 0x2CD4($a1)
    ctx->pc = 0x346b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11476)));
    // 0x346b28: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x346b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x346b2c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x346B2Cu;
    {
        const bool branch_taken_0x346b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x346B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B2Cu;
        // 0x346b30: 0x8ca22cd4  lw          $v0, 0x2CD4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b2c) {
            ctx->pc = 0x346B4Cu;
            goto label_346b4c;
        }
    }
    ctx->pc = 0x346B34u;
    // 0x346b34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x346b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x346b38: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x346b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x346b3c: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x346b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CD8u));
    // 0x346b40: 0x50830012  beql        $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x346B40u;
    {
        const bool branch_taken_0x346b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x346b40) {
            ctx->pc = 0x346B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346B40u;
            // 0x346b44: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346B8Cu;
            goto label_346b8c;
        }
    }
    ctx->pc = 0x346B48u;
label_346b48:
    // 0x346b48: 0x8ca22cd4  lw          $v0, 0x2CD4($a1)
    ctx->pc = 0x346b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11476)));
label_346b4c:
    // 0x346b4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x346B4Cu;
    {
        const bool branch_taken_0x346b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346b4c) {
            ctx->pc = 0x346B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346B4Cu;
            // 0x346b50: 0x8e260110  lw          $a2, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346B60u;
            goto label_346b60;
        }
    }
    ctx->pc = 0x346B54u;
    // 0x346b54: 0xc0dac54  jal         func_36B150
    ctx->pc = 0x346B54u;
    SET_GPR_U32(ctx, 31, 0x346B5Cu);
    ctx->pc = 0x36B150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B150u, 0x346B54u, 0x346B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B5Cu;
label_346b5c:
    // 0x346b5c: 0x8e260110  lw          $a2, 0x110($s1)
    ctx->pc = 0x346b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_346b60:
    // 0x346b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b64: 0xc0d13fc  jal         func_344FF0
    ctx->pc = 0x346B64u;
    SET_GPR_U32(ctx, 31, 0x346B6Cu);
    ctx->pc = 0x346B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346B64u;
    // 0x346b68: 0x8e25010c  lw          $a1, 0x10C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344FF0u, 0x346B64u, 0x346B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B6Cu;
label_346b6c:
    // 0x346b6c: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x346b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x346b70: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x346B70u;
    SET_GPR_U32(ctx, 31, 0x346B78u);
    ctx->pc = 0x346B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346B70u;
    // 0x346b74: 0x8e250110  lw          $a1, 0x110($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x346B70u, 0x346B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B78u;
label_346b78:
    // 0x346b78: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x346b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x346b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b80: 0xc0dac4a  jal         func_36B128
    ctx->pc = 0x346B80u;
    SET_GPR_U32(ctx, 31, 0x346B88u);
    ctx->pc = 0x346B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346B80u;
    // 0x346b84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B128u, 0x346B80u, 0x346B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B88u;
label_346b88:
    // 0x346b88: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x346b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_346b8c:
    // 0x346b8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x346B8Cu;
    {
        const bool branch_taken_0x346b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B8Cu;
        // 0x346b90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b8c) {
            ctx->pc = 0x346BB8u;
            goto label_346bb8;
        }
    }
    ctx->pc = 0x346B94u;
    // 0x346b94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x346b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346b98:
    // 0x346b98: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x346b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x346b9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x346b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x346ba0: 0xc0dacf4  jal         func_36B3D0
    ctx->pc = 0x346BA0u;
    SET_GPR_U32(ctx, 31, 0x346BA8u);
    ctx->pc = 0x346BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346BA0u;
    // 0x346ba4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B3D0u, 0x346BA0u, 0x346BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346BA8u;
label_346ba8:
    // 0x346ba8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x346ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x346bac: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x346bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x346bb0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x346BB0u;
    {
        const bool branch_taken_0x346bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BB0u;
        // 0x346bb4: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346bb0) {
            ctx->pc = 0x346B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346b98;
        }
    }
    ctx->pc = 0x346BB8u;
label_346bb8:
    // 0x346bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346bc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x346bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346bc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x346bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x346BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BC8u;
        // 0x346bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346BD0u;
}
