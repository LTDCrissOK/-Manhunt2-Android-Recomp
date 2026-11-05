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

// Function: sub_001A5B20
// Address: 0x1a5b20 - 0x1a5bb0
void sub_001A5B20_0x1a5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5B20_0x1a5b20");
#endif

    switch (ctx->pc) {
        case 0x1a5b20u: goto label_1a5b20;
        case 0x1a5b24u: goto label_1a5b24;
        case 0x1a5b28u: goto label_1a5b28;
        case 0x1a5b2cu: goto label_1a5b2c;
        case 0x1a5b30u: goto label_1a5b30;
        case 0x1a5b34u: goto label_1a5b34;
        case 0x1a5b38u: goto label_1a5b38;
        case 0x1a5b3cu: goto label_1a5b3c;
        case 0x1a5b40u: goto label_1a5b40;
        case 0x1a5b44u: goto label_1a5b44;
        case 0x1a5b48u: goto label_1a5b48;
        case 0x1a5b4cu: goto label_1a5b4c;
        case 0x1a5b50u: goto label_1a5b50;
        case 0x1a5b54u: goto label_1a5b54;
        case 0x1a5b58u: goto label_1a5b58;
        case 0x1a5b5cu: goto label_1a5b5c;
        case 0x1a5b60u: goto label_1a5b60;
        case 0x1a5b64u: goto label_1a5b64;
        case 0x1a5b68u: goto label_1a5b68;
        case 0x1a5b6cu: goto label_1a5b6c;
        case 0x1a5b70u: goto label_1a5b70;
        case 0x1a5b74u: goto label_1a5b74;
        case 0x1a5b78u: goto label_1a5b78;
        case 0x1a5b7cu: goto label_1a5b7c;
        case 0x1a5b80u: goto label_1a5b80;
        case 0x1a5b84u: goto label_1a5b84;
        case 0x1a5b88u: goto label_1a5b88;
        case 0x1a5b8cu: goto label_1a5b8c;
        case 0x1a5b90u: goto label_1a5b90;
        case 0x1a5b94u: goto label_1a5b94;
        case 0x1a5b98u: goto label_1a5b98;
        case 0x1a5b9cu: goto label_1a5b9c;
        case 0x1a5ba0u: goto label_1a5ba0;
        case 0x1a5ba4u: goto label_1a5ba4;
        case 0x1a5ba8u: goto label_1a5ba8;
        case 0x1a5bacu: goto label_1a5bac;
        default: break;
    }

    ctx->pc = 0x1a5b20u;

label_1a5b20:
    // 0x1a5b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a5b24:
    // 0x1a5b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5b28:
    // 0x1a5b28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b2c:
    // 0x1a5b2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a5b30:
    // 0x1a5b30: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x1a5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_1a5b34:
    // 0x1a5b34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a5b38:
    // 0x1a5b38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b3c:
    // 0x1a5b3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a5b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a5b40:
    // 0x1a5b40: 0xc07524a  jal         func_1D4928
label_1a5b44:
    if (ctx->pc == 0x1A5B44u) {
        ctx->pc = 0x1A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B40u;
        // 0x1a5b44: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B48u;
        goto label_1a5b48;
    }
    ctx->pc = 0x1A5B40u;
    SET_GPR_U32(ctx, 31, 0x1A5B48u);
    ctx->pc = 0x1A5B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B40u;
    // 0x1a5b44: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4928u, 0x1A5B40u, 0x1A5B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B48u;
label_1a5b48:
    // 0x1a5b48: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x1a5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_1a5b4c:
    // 0x1a5b4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b50:
    // 0x1a5b50: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x1a5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_1a5b54:
    // 0x1a5b54: 0x40f809  jalr        $v0
label_1a5b58:
    if (ctx->pc == 0x1A5B58u) {
        ctx->pc = 0x1A5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B54u;
        // 0x1a5b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B5Cu;
        goto label_1a5b5c;
    }
    ctx->pc = 0x1A5B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5B5Cu);
        ctx->pc = 0x1A5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B54u;
        // 0x1a5b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5B54u, 0x1A5B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5B5Cu;
label_1a5b5c:
    // 0x1a5b5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a5b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b60:
    // 0x1a5b60: 0x28a20023  slti        $v0, $a1, 0x23
    ctx->pc = 0x1a5b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)35) ? 1 : 0);
label_1a5b64:
    // 0x1a5b64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a5b68:
    if (ctx->pc == 0x1A5B68u) {
        ctx->pc = 0x1A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B64u;
        // 0x1a5b68: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B6Cu;
        goto label_1a5b6c;
    }
    ctx->pc = 0x1A5B64u;
    {
        const bool branch_taken_0x1a5b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B64u;
        // 0x1a5b68: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b64) {
            ctx->pc = 0x1A5B94u;
            goto label_1a5b94;
        }
    }
    ctx->pc = 0x1A5B6Cu;
label_1a5b6c:
    // 0x1a5b6c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_1a5b70:
    if (ctx->pc == 0x1A5B70u) {
        ctx->pc = 0x1A5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B6Cu;
        // 0x1a5b70: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B74u;
        goto label_1a5b74;
    }
    ctx->pc = 0x1A5B6Cu;
    {
        const bool branch_taken_0x1a5b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B6Cu;
        // 0x1a5b70: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b6c) {
            ctx->pc = 0x1A5B94u;
            goto label_1a5b94;
        }
    }
    ctx->pc = 0x1A5B74u;
label_1a5b74:
    // 0x1a5b74: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a5b78:
    // 0x1a5b78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a5b7c:
    // 0x1a5b7c: 0x8c641a1c  lw          $a0, 0x1A1C($v1)
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6684)));
label_1a5b80:
    // 0x1a5b80: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1a5b84:
    if (ctx->pc == 0x1A5B84u) {
        ctx->pc = 0x1A5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B80u;
        // 0x1a5b84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B88u;
        goto label_1a5b88;
    }
    ctx->pc = 0x1A5B80u;
    {
        const bool branch_taken_0x1a5b80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B80u;
        // 0x1a5b84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b80) {
            ctx->pc = 0x1A5B98u;
            goto label_1a5b98;
        }
    }
    ctx->pc = 0x1A5B88u;
label_1a5b88:
    // 0x1a5b88: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1a5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_1a5b8c:
    // 0x1a5b8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5b90:
    if (ctx->pc == 0x1A5B90u) {
        ctx->pc = 0x1A5B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B8Cu;
        // 0x1a5b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B94u;
        goto label_1a5b94;
    }
    ctx->pc = 0x1A5B8Cu;
    {
        const bool branch_taken_0x1a5b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B8Cu;
        // 0x1a5b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b8c) {
            ctx->pc = 0x1A5B98u;
            goto label_1a5b98;
        }
    }
    ctx->pc = 0x1A5B94u;
label_1a5b94:
    // 0x1a5b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5b98:
    // 0x1a5b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5b9c:
    // 0x1a5b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a5ba0:
    // 0x1a5ba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5ba4:
    // 0x1a5ba4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a5ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a5ba8:
    // 0x1a5ba8: 0x3e00008  jr          $ra
label_1a5bac:
    if (ctx->pc == 0x1A5BACu) {
        ctx->pc = 0x1A5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BA8u;
        // 0x1a5bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BB0u;
        goto label_fallthrough_0x1a5ba8;
    }
    ctx->pc = 0x1A5BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BA8u;
        // 0x1a5bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5ba8:
    ctx->pc = 0x1A5BB0u;
}
