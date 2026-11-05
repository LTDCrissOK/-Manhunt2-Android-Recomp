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

// Function: sub_003B0B08
// Address: 0x3b0b08 - 0x3b0d08
void sub_003B0B08_0x3b0b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0B08_0x3b0b08");
#endif

    switch (ctx->pc) {
        case 0x3b0b44u: goto label_3b0b44;
        case 0x3b0b5cu: goto label_3b0b5c;
        case 0x3b0b70u: goto label_3b0b70;
        case 0x3b0b84u: goto label_3b0b84;
        case 0x3b0b9cu: goto label_3b0b9c;
        case 0x3b0bbcu: goto label_3b0bbc;
        case 0x3b0c78u: goto label_3b0c78;
        case 0x3b0c90u: goto label_3b0c90;
        case 0x3b0cd0u: goto label_3b0cd0;
        case 0x3b0ce0u: goto label_3b0ce0;
        case 0x3b0cf0u: goto label_3b0cf0;
        case 0x3b0cf8u: goto label_3b0cf8;
        default: break;
    }

    ctx->pc = 0x3b0b08u;

    // 0x3b0b08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b0b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3b0b0c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x3b0b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x3b0b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b0b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b14: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x3b0b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x3b0b18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b0b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b1c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x3b0b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x3b0b20: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b0b20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b24: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x3b0b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x3b0b28: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0B28u;
    {
        const bool branch_taken_0x3b0b28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B28u;
        // 0x3b0b2c: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b28) {
            ctx->pc = 0x3B0B38u;
            goto label_3b0b38;
        }
    }
    ctx->pc = 0x3B0B30u;
    // 0x3b0b30: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0B30u;
    {
        const bool branch_taken_0x3b0b30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0b30) {
            ctx->pc = 0x3B0B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0B30u;
            // 0x3b0b34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0B50u;
            goto label_3b0b50;
        }
    }
    ctx->pc = 0x3B0B38u;
label_3b0b38:
    // 0x3b0b38: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b0b3c: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3B0B3Cu;
    SET_GPR_U32(ctx, 31, 0x3B0B44u);
    ctx->pc = 0x3B0B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B3Cu;
    // 0x3b0b40: 0x2484fe08  addiu       $a0, $a0, -0x1F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3B0B3Cu, 0x3B0B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B44u;
label_3b0b44:
    // 0x3b0b44: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3B0B44u;
    {
        const bool branch_taken_0x3b0b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B44u;
        // 0x3b0b48: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b44) {
            ctx->pc = 0x3B0C58u;
            goto label_3b0c58;
        }
    }
    ctx->pc = 0x3B0B4Cu;
    // 0x3b0b4c: 0x0  nop
    ctx->pc = 0x3b0b4cu;
    // NOP
label_3b0b50:
    // 0x3b0b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b0b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b54: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B0B54u;
    SET_GPR_U32(ctx, 31, 0x3B0B5Cu);
    ctx->pc = 0x3B0B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B54u;
    // 0x3b0b58: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B0B54u, 0x3B0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B5Cu;
label_3b0b5c:
    // 0x3b0b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b0b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b60: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3b0b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b0b64: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3b0b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b0b68: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B0B68u;
    SET_GPR_U32(ctx, 31, 0x3B0B70u);
    ctx->pc = 0x3B0B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B68u;
    // 0x3b0b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B0B68u, 0x3B0B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B70u;
label_3b0b70:
    // 0x3b0b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b0b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b0b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b7c: 0xc0ec252  jal         func_3B0948
    ctx->pc = 0x3B0B7Cu;
    SET_GPR_U32(ctx, 31, 0x3B0B84u);
    ctx->pc = 0x3B0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B7Cu;
    // 0x3b0b80: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0948u, 0x3B0B7Cu, 0x3B0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B84u;
label_3b0b84:
    // 0x3b0b84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b0b84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b88: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3b0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3b0b8c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B0B8Cu;
    {
        const bool branch_taken_0x3b0b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B8Cu;
        // 0x3b0b90: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b8c) {
            ctx->pc = 0x3B0BA8u;
            goto label_3b0ba8;
        }
    }
    ctx->pc = 0x3B0B94u;
    // 0x3b0b94: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3B0B94u;
    SET_GPR_U32(ctx, 31, 0x3B0B9Cu);
    ctx->pc = 0x3B0B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B94u;
    // 0x3b0b98: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3B0B94u, 0x3B0B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B9Cu;
label_3b0b9c:
    // 0x3b0b9c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3B0B9Cu;
    {
        const bool branch_taken_0x3b0b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B9Cu;
        // 0x3b0ba0: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b9c) {
            ctx->pc = 0x3B0C58u;
            goto label_3b0c58;
        }
    }
    ctx->pc = 0x3B0BA4u;
    // 0x3b0ba4: 0x0  nop
    ctx->pc = 0x3b0ba4u;
    // NOP
label_3b0ba8:
    // 0x3b0ba8: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0BA8u;
    {
        const bool branch_taken_0x3b0ba8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3b0ba8) {
            ctx->pc = 0x3B0BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0BA8u;
            // 0x3b0bac: 0x83a3005c  lb          $v1, 0x5C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0BC8u;
            goto label_3b0bc8;
        }
    }
    ctx->pc = 0x3B0BB0u;
    // 0x3b0bb0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b0bb4: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3B0BB4u;
    SET_GPR_U32(ctx, 31, 0x3B0BBCu);
    ctx->pc = 0x3B0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0BB4u;
    // 0x3b0bb8: 0x2484fe80  addiu       $a0, $a0, -0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3B0BB4u, 0x3B0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0BBCu;
label_3b0bbc:
    // 0x3b0bbc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3B0BBCu;
    {
        const bool branch_taken_0x3b0bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BBCu;
        // 0x3b0bc0: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0bbc) {
            ctx->pc = 0x3B0C58u;
            goto label_3b0c58;
        }
    }
    ctx->pc = 0x3B0BC4u;
    // 0x3b0bc4: 0x0  nop
    ctx->pc = 0x3b0bc4u;
    // NOP
label_3b0bc8:
    // 0x3b0bc8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3b0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3b0bcc: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B0BCCu;
    {
        const bool branch_taken_0x3b0bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b0bcc) {
            ctx->pc = 0x3B0BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0BCCu;
            // 0x3b0bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0BD8u;
            goto label_3b0bd8;
        }
    }
    ctx->pc = 0x3B0BD4u;
    // 0x3b0bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b0bd8:
    // 0x3b0bd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3b0bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3b0bdc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x3b0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3b0be0: 0x83a30023  lb          $v1, 0x23($sp)
    ctx->pc = 0x3b0be0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x3b0be4: 0x83a40022  lb          $a0, 0x22($sp)
    ctx->pc = 0x3b0be4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x3b0be8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3b0be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b0bec: 0x87a6002e  lh          $a2, 0x2E($sp)
    ctx->pc = 0x3b0becu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x3b0bf0: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x3b0bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3b0bf4: 0x8fa8003c  lw          $t0, 0x3C($sp)
    ctx->pc = 0x3b0bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3b0bf8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3b0bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3b0bfc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3b0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3b0c00: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x3b0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x3b0c04: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3b0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x3b0c08: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x3b0c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x3b0c0c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x3b0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x3b0c10: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x3b0c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x3b0c14: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3b0c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b0c18: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3b0c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b0c1c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x3b0c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b0c20: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x3b0c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b0c24: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x3b0c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3b0c28: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x3b0c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3b0c2c: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x3b0c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3b0c30: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x3b0c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3b0c34: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x3b0c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b0c38: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x3b0c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b0c3c: 0xb263000f  sdl         $v1, 0xF($s3)
    ctx->pc = 0x3b0c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b0c40: 0xb6630008  sdr         $v1, 0x8($s3)
    ctx->pc = 0x3b0c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b0c44: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x3b0c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b0c48: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x3b0c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b0c4c: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x3b0c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b0c50: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x3b0c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b0c54: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x3b0c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3b0c58:
    // 0x3b0c58: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x3b0c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3b0c5c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x3b0c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b0c60: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x3b0c60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3b0c64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b0c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b0c68: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C68u;
        // 0x3b0c6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0C70u;
    // 0x3b0c70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3b0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3b0c74: 0x0  nop
    ctx->pc = 0x3b0c74u;
    // NOP
label_3b0c78:
    // 0x3b0c78: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b0c7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0c80: 0x8c444880  lw          $a0, 0x4880($v0)
    ctx->pc = 0x3b0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x424880u));
    // 0x3b0c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b0c88: 0xc0ec38e  jal         func_3B0E38
    ctx->pc = 0x3B0C88u;
    SET_GPR_U32(ctx, 31, 0x3B0C90u);
    ctx->pc = 0x3B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0E38u, 0x3B0C88u, 0x3B0C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0C90u;
label_3b0c90:
    // 0x3b0c90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b0c90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0c98: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B0C98u;
    {
        const bool branch_taken_0x3b0c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C98u;
        // 0x3b0c9c: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c98) {
            ctx->pc = 0x3B0CC8u;
            goto label_3b0cc8;
        }
    }
    ctx->pc = 0x3B0CA0u;
    // 0x3b0ca0: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3B0CA0u;
    {
        const bool branch_taken_0x3b0ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CA0u;
        // 0x3b0ca4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ca0) {
            ctx->pc = 0x3B0CFCu;
            goto label_3b0cfc;
        }
    }
    ctx->pc = 0x3B0CA8u;
    // 0x3b0ca8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b0cac: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B0CACu;
    {
        const bool branch_taken_0x3b0cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CACu;
        // 0x3b0cb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cac) {
            ctx->pc = 0x3B0CD8u;
            goto label_3b0cd8;
        }
    }
    ctx->pc = 0x3B0CB4u;
    // 0x3b0cb4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B0CB4u;
    {
        const bool branch_taken_0x3b0cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CB4u;
        // 0x3b0cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cb4) {
            ctx->pc = 0x3B0CE8u;
            goto label_3b0ce8;
        }
    }
    ctx->pc = 0x3B0CBCu;
    // 0x3b0cbc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B0CBCu;
    {
        const bool branch_taken_0x3b0cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0cbc) {
            ctx->pc = 0x3B0D00u;
            goto label_3b0d00;
        }
    }
    ctx->pc = 0x3B0CC4u;
    // 0x3b0cc4: 0x0  nop
    ctx->pc = 0x3b0cc4u;
    // NOP
label_3b0cc8:
    // 0x3b0cc8: 0xc0ec368  jal         func_3B0DA0
    ctx->pc = 0x3B0CC8u;
    SET_GPR_U32(ctx, 31, 0x3B0CD0u);
    ctx->pc = 0x3B0DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0DA0u, 0x3B0CC8u, 0x3B0CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0CD0u;
label_3b0cd0:
    // 0x3b0cd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B0CD0u;
    {
        const bool branch_taken_0x3b0cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CD0u;
        // 0x3b0cd4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cd0) {
            ctx->pc = 0x3B0CFCu;
            goto label_3b0cfc;
        }
    }
    ctx->pc = 0x3B0CD8u;
label_3b0cd8:
    // 0x3b0cd8: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3B0CD8u;
    SET_GPR_U32(ctx, 31, 0x3B0CE0u);
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3B0CD8u, 0x3B0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0CE0u;
label_3b0ce0:
    // 0x3b0ce0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B0CE0u;
    {
        const bool branch_taken_0x3b0ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CE0u;
        // 0x3b0ce4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ce0) {
            ctx->pc = 0x3B0CFCu;
            goto label_3b0cfc;
        }
    }
    ctx->pc = 0x3B0CE8u;
label_3b0ce8:
    // 0x3b0ce8: 0xc0eb444  jal         func_3AD110
    ctx->pc = 0x3B0CE8u;
    SET_GPR_U32(ctx, 31, 0x3B0CF0u);
    ctx->pc = 0x3AD110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD110u, 0x3B0CE8u, 0x3B0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0CF0u;
label_3b0cf0:
    // 0x3b0cf0: 0xc0eb44a  jal         func_3AD128
    ctx->pc = 0x3B0CF0u;
    SET_GPR_U32(ctx, 31, 0x3B0CF8u);
    ctx->pc = 0x3AD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD128u, 0x3B0CF0u, 0x3B0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0CF8u;
label_3b0cf8:
    // 0x3b0cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0cfc:
    // 0x3b0cfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d00:
    // 0x3b0d00: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D00u;
        // 0x3b0d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0D08u;
}
