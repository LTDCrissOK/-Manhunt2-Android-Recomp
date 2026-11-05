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

// Function: sub_00132B80
// Address: 0x132b80 - 0x132ca8
void sub_00132B80_0x132b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132B80_0x132b80");
#endif

    switch (ctx->pc) {
        case 0x132ba8u: goto label_132ba8;
        case 0x132bd8u: goto label_132bd8;
        case 0x132be0u: goto label_132be0;
        case 0x132bf0u: goto label_132bf0;
        case 0x132c00u: goto label_132c00;
        case 0x132c14u: goto label_132c14;
        case 0x132c20u: goto label_132c20;
        case 0x132c3cu: goto label_132c3c;
        case 0x132c6cu: goto label_132c6c;
        case 0x132c74u: goto label_132c74;
        case 0x132c84u: goto label_132c84;
        case 0x132c90u: goto label_132c90;
        default: break;
    }

    ctx->pc = 0x132b80u;

    // 0x132b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132b88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132b8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x132b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b94: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x132b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x132b98: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x132B98u;
    {
        const bool branch_taken_0x132b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B98u;
        // 0x132b9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b98) {
            ctx->pc = 0x132C28u;
            goto label_132c28;
        }
    }
    ctx->pc = 0x132BA0u;
    // 0x132ba0: 0xc045616  jal         func_115858
    ctx->pc = 0x132BA0u;
    SET_GPR_U32(ctx, 31, 0x132BA8u);
    ctx->pc = 0x115858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115858u, 0x132BA0u, 0x132BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132BA8u;
label_132ba8:
    // 0x132ba8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132ba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x132bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x132bb0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132BB0u;
    {
        const bool branch_taken_0x132bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132bb0) {
            ctx->pc = 0x132BD0u;
            goto label_132bd0;
        }
    }
    ctx->pc = 0x132BB8u;
    // 0x132bb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x132BB8u;
    {
        const bool branch_taken_0x132bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BB8u;
        // 0x132bbc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bb8) {
            ctx->pc = 0x132BD0u;
            goto label_132bd0;
        }
    }
    ctx->pc = 0x132BC0u;
    // 0x132bc0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132BC0u;
    {
        const bool branch_taken_0x132bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x132BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BC0u;
        // 0x132bc4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bc0) {
            ctx->pc = 0x132BD0u;
            goto label_132bd0;
        }
    }
    ctx->pc = 0x132BC8u;
    // 0x132bc8: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x132BC8u;
    {
        const bool branch_taken_0x132bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132bc8) {
            ctx->pc = 0x132BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132BC8u;
            // 0x132bcc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C2Cu;
            goto label_132c2c;
        }
    }
    ctx->pc = 0x132BD0u;
label_132bd0:
    // 0x132bd0: 0xc0456b4  jal         func_115AD0
    ctx->pc = 0x132BD0u;
    SET_GPR_U32(ctx, 31, 0x132BD8u);
    ctx->pc = 0x132BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BD0u;
    // 0x132bd4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD0u, 0x132BD0u, 0x132BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132BD8u;
label_132bd8:
    // 0x132bd8: 0xc046144  jal         func_118510
    ctx->pc = 0x132BD8u;
    SET_GPR_U32(ctx, 31, 0x132BE0u);
    ctx->pc = 0x132BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BD8u;
    // 0x132bdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x132BD8u, 0x132BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132BE0u;
label_132be0:
    // 0x132be0: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x132BE0u;
    {
        const bool branch_taken_0x132be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x132be0) {
            ctx->pc = 0x132BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132BE0u;
            // 0x132be4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C2Cu;
            goto label_132c2c;
        }
    }
    ctx->pc = 0x132BE8u;
    // 0x132be8: 0xc04561a  jal         func_115868
    ctx->pc = 0x132BE8u;
    SET_GPR_U32(ctx, 31, 0x132BF0u);
    ctx->pc = 0x132BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BE8u;
    // 0x132bec: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x132BE8u, 0x132BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132BF0u;
label_132bf0:
    // 0x132bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bf8: 0xc04cc26  jal         func_133098
    ctx->pc = 0x132BF8u;
    SET_GPR_U32(ctx, 31, 0x132C00u);
    ctx->pc = 0x132BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BF8u;
    // 0x132bfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133098u, 0x132BF8u, 0x132C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C00u;
label_132c00:
    // 0x132c00: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x132C00u;
    {
        const bool branch_taken_0x132c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c00) {
            ctx->pc = 0x132C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C00u;
            // 0x132c04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C94u;
            goto label_132c94;
        }
    }
    ctx->pc = 0x132C08u;
    // 0x132c08: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x132c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x132c0c: 0xc04b4a2  jal         func_12D288
    ctx->pc = 0x132C0Cu;
    SET_GPR_U32(ctx, 31, 0x132C14u);
    ctx->pc = 0x132C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C0Cu;
    // 0x132c10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D288u, 0x132C0Cu, 0x132C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C14u;
label_132c14:
    // 0x132c14: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x132c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x132c18: 0xc043be8  jal         func_10EFA0
    ctx->pc = 0x132C18u;
    SET_GPR_U32(ctx, 31, 0x132C20u);
    ctx->pc = 0x132C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C18u;
    // 0x132c1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFA0u, 0x132C18u, 0x132C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C20u;
label_132c20:
    // 0x132c20: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x132C20u;
    {
        const bool branch_taken_0x132c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C20u;
        // 0x132c24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c20) {
            ctx->pc = 0x132C94u;
            goto label_132c94;
        }
    }
    ctx->pc = 0x132C28u;
label_132c28:
    // 0x132c28: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x132c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_132c2c:
    // 0x132c2c: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x132C2Cu;
    {
        const bool branch_taken_0x132c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c2c) {
            ctx->pc = 0x132C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C2Cu;
            // 0x132c30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C94u;
            goto label_132c94;
        }
    }
    ctx->pc = 0x132C34u;
    // 0x132c34: 0xc045616  jal         func_115858
    ctx->pc = 0x132C34u;
    SET_GPR_U32(ctx, 31, 0x132C3Cu);
    ctx->pc = 0x115858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115858u, 0x132C34u, 0x132C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C3Cu;
label_132c3c:
    // 0x132c3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c40: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x132c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x132c44: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132C44u;
    {
        const bool branch_taken_0x132c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x132c44) {
            ctx->pc = 0x132C64u;
            goto label_132c64;
        }
    }
    ctx->pc = 0x132C4Cu;
    // 0x132c4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x132C4Cu;
    {
        const bool branch_taken_0x132c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C4Cu;
        // 0x132c50: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c4c) {
            ctx->pc = 0x132C64u;
            goto label_132c64;
        }
    }
    ctx->pc = 0x132C54u;
    // 0x132c54: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132C54u;
    {
        const bool branch_taken_0x132c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x132C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C54u;
        // 0x132c58: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c54) {
            ctx->pc = 0x132C64u;
            goto label_132c64;
        }
    }
    ctx->pc = 0x132C5Cu;
    // 0x132c5c: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132C5Cu;
    {
        const bool branch_taken_0x132c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132c5c) {
            ctx->pc = 0x132C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132C5Cu;
            // 0x132c60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C94u;
            goto label_132c94;
        }
    }
    ctx->pc = 0x132C64u;
label_132c64:
    // 0x132c64: 0xc0456b4  jal         func_115AD0
    ctx->pc = 0x132C64u;
    SET_GPR_U32(ctx, 31, 0x132C6Cu);
    ctx->pc = 0x132C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C64u;
    // 0x132c68: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD0u, 0x132C64u, 0x132C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C6Cu;
label_132c6c:
    // 0x132c6c: 0xc046144  jal         func_118510
    ctx->pc = 0x132C6Cu;
    SET_GPR_U32(ctx, 31, 0x132C74u);
    ctx->pc = 0x132C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C6Cu;
    // 0x132c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x132C6Cu, 0x132C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C74u;
label_132c74:
    // 0x132c74: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132C74u;
    {
        const bool branch_taken_0x132c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x132C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C74u;
        // 0x132c78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c74) {
            ctx->pc = 0x132C94u;
            goto label_132c94;
        }
    }
    ctx->pc = 0x132C7Cu;
    // 0x132c7c: 0xc04561a  jal         func_115868
    ctx->pc = 0x132C7Cu;
    SET_GPR_U32(ctx, 31, 0x132C84u);
    ctx->pc = 0x132C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C7Cu;
    // 0x132c80: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x132C7Cu, 0x132C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C84u;
label_132c84:
    // 0x132c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c88: 0xc04cc3c  jal         func_1330F0
    ctx->pc = 0x132C88u;
    SET_GPR_U32(ctx, 31, 0x132C90u);
    ctx->pc = 0x132C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C88u;
    // 0x132c8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1330F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1330F0u, 0x132C88u, 0x132C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C90u;
label_132c90:
    // 0x132c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132c94:
    // 0x132c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x132C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C9Cu;
        // 0x132ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132CA4u;
    // 0x132ca4: 0x0  nop
    ctx->pc = 0x132ca4u;
    // NOP
    ctx->pc = 0x132ca8u;
}
