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

// Function: sub_00114B18
// Address: 0x114b18 - 0x114c78
void sub_00114B18_0x114b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114B18_0x114b18");
#endif

    switch (ctx->pc) {
        case 0x114b58u: goto label_114b58;
        case 0x114b6cu: goto label_114b6c;
        case 0x114b78u: goto label_114b78;
        case 0x114b88u: goto label_114b88;
        case 0x114b98u: goto label_114b98;
        case 0x114ba8u: goto label_114ba8;
        case 0x114bd4u: goto label_114bd4;
        case 0x114c2cu: goto label_114c2c;
        case 0x114c3cu: goto label_114c3c;
        case 0x114c50u: goto label_114c50;
        case 0x114c60u: goto label_114c60;
        default: break;
    }

    ctx->pc = 0x114b18u;

    // 0x114b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114b1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x114b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x114b20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x114b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x114b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114b2c: 0x8e020284  lw          $v0, 0x284($s0)
    ctx->pc = 0x114b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x114b30: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x114B30u;
    {
        const bool branch_taken_0x114b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114b30) {
            ctx->pc = 0x114B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114B30u;
            // 0x114b34: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114C64u;
            goto label_114c64;
        }
    }
    ctx->pc = 0x114B38u;
    // 0x114b38: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x114b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x114b3c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x114B3Cu;
    {
        const bool branch_taken_0x114b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114b3c) {
            ctx->pc = 0x114B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114B3Cu;
            // 0x114b40: 0x8e02028c  lw          $v0, 0x28C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114B5Cu;
            goto label_114b5c;
        }
    }
    ctx->pc = 0x114B44u;
    // 0x114b44: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x114b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x114b48: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114B48u;
    {
        const bool branch_taken_0x114b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114b48) {
            ctx->pc = 0x114B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114B48u;
            // 0x114b4c: 0x8e02028c  lw          $v0, 0x28C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114B5Cu;
            goto label_114b5c;
        }
    }
    ctx->pc = 0x114B50u;
    // 0x114b50: 0xc043c56  jal         func_10F158
    ctx->pc = 0x114B50u;
    SET_GPR_U32(ctx, 31, 0x114B58u);
    ctx->pc = 0x114B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B50u;
    // 0x114b54: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x114B50u, 0x114B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B58u;
label_114b58:
    // 0x114b58: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x114b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_114b5c:
    // 0x114b5c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x114B5Cu;
    {
        const bool branch_taken_0x114b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114b5c) {
            ctx->pc = 0x114B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114B5Cu;
            // 0x114b60: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114BB0u;
            goto label_114bb0;
        }
    }
    ctx->pc = 0x114B64u;
    // 0x114b64: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x114B64u;
    SET_GPR_U32(ctx, 31, 0x114B6Cu);
    ctx->pc = 0x114B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B64u;
    // 0x114b68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x114B64u, 0x114B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B6Cu;
label_114b6c:
    // 0x114b6c: 0x8e05028c  lw          $a1, 0x28C($s0)
    ctx->pc = 0x114b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x114b70: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x114B70u;
    SET_GPR_U32(ctx, 31, 0x114B78u);
    ctx->pc = 0x114B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B70u;
    // 0x114b74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x114B70u, 0x114B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B78u;
label_114b78:
    // 0x114b78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114B78u;
    {
        const bool branch_taken_0x114b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B78u;
        // 0x114b7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b78) {
            ctx->pc = 0x114BA0u;
            goto label_114ba0;
        }
    }
    ctx->pc = 0x114B80u;
    // 0x114b80: 0xc04531e  jal         func_114C78
    ctx->pc = 0x114B80u;
    SET_GPR_U32(ctx, 31, 0x114B88u);
    ctx->pc = 0x114B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B80u;
    // 0x114b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114C78u, 0x114B80u, 0x114B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B88u;
label_114b88:
    // 0x114b88: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114B88u;
    {
        const bool branch_taken_0x114b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114b88) {
            ctx->pc = 0x114B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114B88u;
            // 0x114b8c: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114B9Cu;
            goto label_114b9c;
        }
    }
    ctx->pc = 0x114B90u;
    // 0x114b90: 0xc045338  jal         func_114CE0
    ctx->pc = 0x114B90u;
    SET_GPR_U32(ctx, 31, 0x114B98u);
    ctx->pc = 0x114B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B90u;
    // 0x114b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CE0u, 0x114B90u, 0x114B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B98u;
label_114b98:
    // 0x114b98: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x114b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
label_114b9c:
    // 0x114b9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x114b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_114ba0:
    // 0x114ba0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x114BA0u;
    SET_GPR_U32(ctx, 31, 0x114BA8u);
    ctx->pc = 0x114BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114BA0u;
    // 0x114ba4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x114BA0u, 0x114BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BA8u;
label_114ba8:
    // 0x114ba8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x114BA8u;
    {
        const bool branch_taken_0x114ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BA8u;
        // 0x114bac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ba8) {
            ctx->pc = 0x114C64u;
            goto label_114c64;
        }
    }
    ctx->pc = 0x114BB0u;
label_114bb0:
    // 0x114bb0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x114bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x114bb4: 0x24649a08  addiu       $a0, $v1, -0x65F8
    ctx->pc = 0x114bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x114bb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114bbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114bc0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x114bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x114bc4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x114BC4u;
    {
        const bool branch_taken_0x114bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114bc4) {
            ctx->pc = 0x114BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114BC4u;
            // 0x114bc8: 0x8c420fe4  lw          $v0, 0xFE4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114BDCu;
            goto label_114bdc;
        }
    }
    ctx->pc = 0x114BCCu;
    // 0x114bcc: 0xc045338  jal         func_114CE0
    ctx->pc = 0x114BCCu;
    SET_GPR_U32(ctx, 31, 0x114BD4u);
    ctx->pc = 0x114BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114BCCu;
    // 0x114bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CE0u, 0x114BCCu, 0x114BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BD4u;
label_114bd4:
    // 0x114bd4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x114BD4u;
    {
        const bool branch_taken_0x114bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BD4u;
        // 0x114bd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bd4) {
            ctx->pc = 0x114C64u;
            goto label_114c64;
        }
    }
    ctx->pc = 0x114BDCu;
label_114bdc:
    // 0x114bdc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x114bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x114be0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x114BE0u;
    {
        const bool branch_taken_0x114be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114be0) {
            ctx->pc = 0x114BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114BE0u;
            // 0x114be4: 0x8e020288  lw          $v0, 0x288($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114BF8u;
            goto label_114bf8;
        }
    }
    ctx->pc = 0x114BE8u;
    // 0x114be8: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x114be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x114bec: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x114becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x114bf0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x114BF0u;
    {
        const bool branch_taken_0x114bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BF0u;
        // 0x114bf4: 0xae000288  sw          $zero, 0x288($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bf0) {
            ctx->pc = 0x114C60u;
            goto label_114c60;
        }
    }
    ctx->pc = 0x114BF8u;
label_114bf8:
    // 0x114bf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114bfc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114c00: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x114c00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x114c04: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x114C04u;
    {
        const bool branch_taken_0x114c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x114c04) {
            ctx->pc = 0x114C58u;
            goto label_114c58;
        }
    }
    ctx->pc = 0x114C0Cu;
    // 0x114c0c: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x114c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x114c10: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x114C10u;
    {
        const bool branch_taken_0x114c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114c10) {
            ctx->pc = 0x114C58u;
            goto label_114c58;
        }
    }
    ctx->pc = 0x114C18u;
    // 0x114c18: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x114c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x114c1c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x114C1Cu;
    {
        const bool branch_taken_0x114c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114c1c) {
            ctx->pc = 0x114C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114C1Cu;
            // 0x114c20: 0x8e2500fc  lw          $a1, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114C48u;
            goto label_114c48;
        }
    }
    ctx->pc = 0x114C24u;
    // 0x114c24: 0xc043e1e  jal         func_10F878
    ctx->pc = 0x114C24u;
    SET_GPR_U32(ctx, 31, 0x114C2Cu);
    ctx->pc = 0x114C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C24u;
    // 0x114c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F878u, 0x114C24u, 0x114C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C2Cu;
label_114c2c:
    // 0x114c2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114C2Cu;
    {
        const bool branch_taken_0x114c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C2Cu;
        // 0x114c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c2c) {
            ctx->pc = 0x114C44u;
            goto label_114c44;
        }
    }
    ctx->pc = 0x114C34u;
    // 0x114c34: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x114C34u;
    SET_GPR_U32(ctx, 31, 0x114C3Cu);
    ctx->pc = 0x114C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C34u;
    // 0x114c38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x114C34u, 0x114C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C3Cu;
label_114c3c:
    // 0x114c3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x114C3Cu;
    {
        const bool branch_taken_0x114c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C3Cu;
        // 0x114c40: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c3c) {
            ctx->pc = 0x114C64u;
            goto label_114c64;
        }
    }
    ctx->pc = 0x114C44u;
label_114c44:
    // 0x114c44: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x114c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_114c48:
    // 0x114c48: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x114C48u;
    SET_GPR_U32(ctx, 31, 0x114C50u);
    ctx->pc = 0x114C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C48u;
    // 0x114c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x114C48u, 0x114C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C50u;
label_114c50:
    // 0x114c50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114C50u;
    {
        const bool branch_taken_0x114c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C50u;
        // 0x114c54: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c50) {
            ctx->pc = 0x114C64u;
            goto label_114c64;
        }
    }
    ctx->pc = 0x114C58u;
label_114c58:
    // 0x114c58: 0xc045338  jal         func_114CE0
    ctx->pc = 0x114C58u;
    SET_GPR_U32(ctx, 31, 0x114C60u);
    ctx->pc = 0x114C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C58u;
    // 0x114c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CE0u, 0x114C58u, 0x114C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C60u;
label_114c60:
    // 0x114c60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_114c64:
    // 0x114c64: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x114c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x114c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x114C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C6Cu;
        // 0x114c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114C74u;
    // 0x114c74: 0x0  nop
    ctx->pc = 0x114c74u;
    // NOP
    ctx->pc = 0x114c78u;
}
