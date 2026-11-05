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

// Function: sub_00170B10
// Address: 0x170b10 - 0x170ce8
void sub_00170B10_0x170b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170B10_0x170b10");
#endif

    switch (ctx->pc) {
        case 0x170b44u: goto label_170b44;
        case 0x170ba0u: goto label_170ba0;
        case 0x170bc8u: goto label_170bc8;
        case 0x170bd8u: goto label_170bd8;
        case 0x170be8u: goto label_170be8;
        case 0x170bf8u: goto label_170bf8;
        case 0x170c18u: goto label_170c18;
        case 0x170c34u: goto label_170c34;
        case 0x170c7cu: goto label_170c7c;
        case 0x170ca0u: goto label_170ca0;
        case 0x170cb4u: goto label_170cb4;
        case 0x170cc4u: goto label_170cc4;
        default: break;
    }

    ctx->pc = 0x170b10u;

    // 0x170b10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x170b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x170b14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170b18: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x170b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x170b1c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x170b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x170b20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x170b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b28: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x170b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x170b2c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x170b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x170b30: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x170b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x170b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b38: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x170b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x170b3c: 0xc05ca20  jal         func_172880
    ctx->pc = 0x170B3Cu;
    SET_GPR_U32(ctx, 31, 0x170B44u);
    ctx->pc = 0x170B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B3Cu;
    // 0x170b40: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x170B3Cu, 0x170B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B44u;
label_170b44:
    // 0x170b44: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x170B44u;
    {
        const bool branch_taken_0x170b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B44u;
        // 0x170b48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b44) {
            ctx->pc = 0x170BB4u;
            goto label_170bb4;
        }
    }
    ctx->pc = 0x170B4Cu;
    // 0x170b4c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x170b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x170b50: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170B50u;
    {
        const bool branch_taken_0x170b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B50u;
        // 0x170b54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b50) {
            ctx->pc = 0x170B68u;
            goto label_170b68;
        }
    }
    ctx->pc = 0x170B58u;
    // 0x170b58: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170B58u;
    {
        const bool branch_taken_0x170b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B58u;
        // 0x170b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b58) {
            ctx->pc = 0x170B88u;
            goto label_170b88;
        }
    }
    ctx->pc = 0x170B60u;
    // 0x170b60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x170B60u;
    {
        const bool branch_taken_0x170b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B60u;
        // 0x170b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b60) {
            ctx->pc = 0x170B98u;
            goto label_170b98;
        }
    }
    ctx->pc = 0x170B68u;
label_170b68:
    // 0x170b68: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x170b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x170b6c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x170B6Cu;
    {
        const bool branch_taken_0x170b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B6Cu;
        // 0x170b70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b6c) {
            ctx->pc = 0x170C74u;
            goto label_170c74;
        }
    }
    ctx->pc = 0x170B74u;
    // 0x170b74: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x170b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x170b78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170B78u;
    {
        const bool branch_taken_0x170b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B78u;
        // 0x170b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b78) {
            ctx->pc = 0x170B94u;
            goto label_170b94;
        }
    }
    ctx->pc = 0x170B80u;
    // 0x170b80: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x170B80u;
    {
        const bool branch_taken_0x170b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170b80) {
            ctx->pc = 0x170C74u;
            goto label_170c74;
        }
    }
    ctx->pc = 0x170B88u;
label_170b88:
    // 0x170b88: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x170b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x170b8c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x170B8Cu;
    {
        const bool branch_taken_0x170b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170b8c) {
            ctx->pc = 0x170C98u;
            goto label_170c98;
        }
    }
    ctx->pc = 0x170B94u;
label_170b94:
    // 0x170b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170b98:
    // 0x170b98: 0xc05c720  jal         func_171C80
    ctx->pc = 0x170B98u;
    SET_GPR_U32(ctx, 31, 0x170BA0u);
    ctx->pc = 0x170B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B98u;
    // 0x170b9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x170B98u, 0x170BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BA0u;
label_170ba0:
    // 0x170ba0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x170ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x170ba4: 0x8c62a9d4  lw          $v0, -0x562C($v1)
    ctx->pc = 0x170ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x170ba8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x170ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x170bac: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x170BACu;
    {
        const bool branch_taken_0x170bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BACu;
        // 0x170bb0: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bac) {
            ctx->pc = 0x170CC4u;
            goto label_170cc4;
        }
    }
    ctx->pc = 0x170BB4u;
label_170bb4:
    // 0x170bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bbc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x170bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x170bc0: 0xc05ca20  jal         func_172880
    ctx->pc = 0x170BC0u;
    SET_GPR_U32(ctx, 31, 0x170BC8u);
    ctx->pc = 0x170BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BC0u;
    // 0x170bc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x170BC0u, 0x170BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BC8u;
label_170bc8:
    // 0x170bc8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x170BC8u;
    {
        const bool branch_taken_0x170bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170bc8) {
            ctx->pc = 0x170CBCu;
            goto label_170cbc;
        }
    }
    ctx->pc = 0x170BD0u;
    // 0x170bd0: 0xc05d0bc  jal         func_1742F0
    ctx->pc = 0x170BD0u;
    SET_GPR_U32(ctx, 31, 0x170BD8u);
    ctx->pc = 0x170BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BD0u;
    // 0x170bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1742F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1742F0u, 0x170BD0u, 0x170BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BD8u;
label_170bd8:
    // 0x170bd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170BD8u;
    {
        const bool branch_taken_0x170bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BD8u;
        // 0x170bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bd8) {
            ctx->pc = 0x170BF0u;
            goto label_170bf0;
        }
    }
    ctx->pc = 0x170BE0u;
    // 0x170be0: 0xc05c9f6  jal         func_1727D8
    ctx->pc = 0x170BE0u;
    SET_GPR_U32(ctx, 31, 0x170BE8u);
    ctx->pc = 0x170BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BE0u;
    // 0x170be4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1727D8u, 0x170BE0u, 0x170BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BE8u;
label_170be8:
    // 0x170be8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x170BE8u;
    {
        const bool branch_taken_0x170be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BE8u;
        // 0x170bec: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170be8) {
            ctx->pc = 0x170CC8u;
            goto label_170cc8;
        }
    }
    ctx->pc = 0x170BF0u;
label_170bf0:
    // 0x170bf0: 0xc04f872  jal         func_13E1C8
    ctx->pc = 0x170BF0u;
    SET_GPR_U32(ctx, 31, 0x170BF8u);
    ctx->pc = 0x170BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BF0u;
    // 0x170bf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1C8u, 0x170BF0u, 0x170BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BF8u;
label_170bf8:
    // 0x170bf8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x170bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bfc: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x170BFCu;
    {
        const bool branch_taken_0x170bfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BFCu;
        // 0x170c00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bfc) {
            ctx->pc = 0x170C98u;
            goto label_170c98;
        }
    }
    ctx->pc = 0x170C04u;
    // 0x170c04: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x170c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x170c08: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x170c08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170c0c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x170c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170c10: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x170c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x170c14: 0x0  nop
    ctx->pc = 0x170c14u;
    // NOP
label_170c18:
    // 0x170c18: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x170c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x170c1c: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x170c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x170c20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x170c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170c24: 0x14650018  bne         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x170C24u;
    {
        const bool branch_taken_0x170c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x170C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C24u;
        // 0x170c28: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c24) {
            ctx->pc = 0x170C88u;
            goto label_170c88;
        }
    }
    ctx->pc = 0x170C2Cu;
    // 0x170c2c: 0xc04f89c  jal         func_13E270
    ctx->pc = 0x170C2Cu;
    SET_GPR_U32(ctx, 31, 0x170C34u);
    ctx->pc = 0x170C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C2Cu;
    // 0x170c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E270u, 0x170C2Cu, 0x170C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C34u;
label_170c34:
    // 0x170c34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170C34u;
    {
        const bool branch_taken_0x170c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C34u;
        // 0x170c38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c34) {
            ctx->pc = 0x170C44u;
            goto label_170c44;
        }
    }
    ctx->pc = 0x170C3Cu;
    // 0x170c3c: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x170C3Cu;
    {
        const bool branch_taken_0x170c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x170c3c) {
            ctx->pc = 0x170C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170C3Cu;
            // 0x170c40: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170C4Cu;
            goto label_170c4c;
        }
    }
    ctx->pc = 0x170C44u;
label_170c44:
    // 0x170c44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170c48: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x170c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_170c4c:
    // 0x170c4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170C4Cu;
    {
        const bool branch_taken_0x170c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C4Cu;
        // 0x170c50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c4c) {
            ctx->pc = 0x170C6Cu;
            goto label_170c6c;
        }
    }
    ctx->pc = 0x170C54u;
    // 0x170c54: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x170c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x170c58: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x170c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c5c: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x170c5cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x170c60: 0x741826  xor         $v1, $v1, $s4
    ctx->pc = 0x170c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 20));
    // 0x170c64: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x170c64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x170c68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x170c68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170c6c:
    // 0x170c6c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x170C6Cu;
    {
        const bool branch_taken_0x170c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C6Cu;
        // 0x170c70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c6c) {
            ctx->pc = 0x170CA8u;
            goto label_170ca8;
        }
    }
    ctx->pc = 0x170C74u;
label_170c74:
    // 0x170c74: 0xc05c7f2  jal         func_171FC8
    ctx->pc = 0x170C74u;
    SET_GPR_U32(ctx, 31, 0x170C7Cu);
    ctx->pc = 0x170C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C74u;
    // 0x170c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171FC8u, 0x170C74u, 0x170C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C7Cu;
label_170c7c:
    // 0x170c7c: 0x92020069  lbu         $v0, 0x69($s0)
    ctx->pc = 0x170c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x170c80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x170C80u;
    {
        const bool branch_taken_0x170c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C80u;
        // 0x170c84: 0xa20200c8  sb          $v0, 0xC8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 200), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c80) {
            ctx->pc = 0x170CC4u;
            goto label_170cc4;
        }
    }
    ctx->pc = 0x170C88u;
label_170c88:
    // 0x170c88: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x170c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170c8c: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x170c8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x170c90: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x170C90u;
    {
        const bool branch_taken_0x170c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C90u;
        // 0x170c94: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c90) {
            ctx->pc = 0x170C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170c18;
        }
    }
    ctx->pc = 0x170C98u;
label_170c98:
    // 0x170c98: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x170C98u;
    SET_GPR_U32(ctx, 31, 0x170CA0u);
    ctx->pc = 0x170C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C98u;
    // 0x170c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x170C98u, 0x170CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CA0u;
label_170ca0:
    // 0x170ca0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x170CA0u;
    {
        const bool branch_taken_0x170ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CA0u;
        // 0x170ca4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ca0) {
            ctx->pc = 0x170CC8u;
            goto label_170cc8;
        }
    }
    ctx->pc = 0x170CA8u;
label_170ca8:
    // 0x170ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170cac: 0xc05c766  jal         func_171D98
    ctx->pc = 0x170CACu;
    SET_GPR_U32(ctx, 31, 0x170CB4u);
    ctx->pc = 0x170CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CACu;
    // 0x170cb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D98u, 0x170CACu, 0x170CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CB4u;
label_170cb4:
    // 0x170cb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x170CB4u;
    {
        const bool branch_taken_0x170cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CB4u;
        // 0x170cb8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cb4) {
            ctx->pc = 0x170CC8u;
            goto label_170cc8;
        }
    }
    ctx->pc = 0x170CBCu;
label_170cbc:
    // 0x170cbc: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x170CBCu;
    SET_GPR_U32(ctx, 31, 0x170CC4u);
    ctx->pc = 0x170CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CBCu;
    // 0x170cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x170CBCu, 0x170CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CC4u;
label_170cc4:
    // 0x170cc4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x170cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_170cc8:
    // 0x170cc8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x170cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x170ccc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x170cccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170cd0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x170cd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x170cd4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x170cd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x170cd8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x170cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x170cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x170CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CDCu;
        // 0x170ce0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170CE4u;
    // 0x170ce4: 0x0  nop
    ctx->pc = 0x170ce4u;
    // NOP
    ctx->pc = 0x170ce8u;
}
