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

// Function: sub_001A1B28
// Address: 0x1a1b28 - 0x1a1cb0
void sub_001A1B28_0x1a1b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1B28_0x1a1b28");
#endif

    switch (ctx->pc) {
        case 0x1a1b78u: goto label_1a1b78;
        case 0x1a1b88u: goto label_1a1b88;
        case 0x1a1b90u: goto label_1a1b90;
        case 0x1a1b9cu: goto label_1a1b9c;
        case 0x1a1bacu: goto label_1a1bac;
        case 0x1a1bb8u: goto label_1a1bb8;
        case 0x1a1bd8u: goto label_1a1bd8;
        case 0x1a1be4u: goto label_1a1be4;
        case 0x1a1c8cu: goto label_1a1c8c;
        default: break;
    }

    ctx->pc = 0x1a1b28u;

    // 0x1a1b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1b30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1b34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a1b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1b38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a1b3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a1b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a1b44: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1a1b44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a1b48: 0x129638  dsll        $s2, $s2, 24
    ctx->pc = 0x1a1b48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
    // 0x1a1b4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a1b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1b50: 0x3c13bfff  lui         $s3, 0xBFFF
    ctx->pc = 0x1a1b50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)49151 << 16));
    // 0x1a1b54: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x1a1b54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x1a1b58: 0x139a78  dsll        $s3, $s3, 9
    ctx->pc = 0x1a1b58u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 9);
    // 0x1a1b5c: 0x367301ff  ori         $s3, $s3, 0x1FF
    ctx->pc = 0x1a1b5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)511);
    // 0x1a1b60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a1b64: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x1a1b64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x1a1b68: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x1a1b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x1a1b6c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1a1b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1a1b70: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A1B70u;
    SET_GPR_U32(ctx, 31, 0x1A1B78u);
    ctx->pc = 0x1A1B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B70u;
    // 0x1a1b74: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A1B70u, 0x1A1B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B78u;
label_1a1b78:
    // 0x1a1b78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a1b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b80: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A1B80u;
    SET_GPR_U32(ctx, 31, 0x1A1B88u);
    ctx->pc = 0x1A1B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B80u;
    // 0x1a1b84: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A1B80u, 0x1A1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B88u;
label_1a1b88:
    // 0x1a1b88: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A1B88u;
    SET_GPR_U32(ctx, 31, 0x1A1B90u);
    ctx->pc = 0x1A1B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B88u;
    // 0x1a1b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A1B88u, 0x1A1B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B90u;
label_1a1b90:
    // 0x1a1b90: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x1a1b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
    // 0x1a1b94: 0xc064d1c  jal         func_193470
    ctx->pc = 0x1A1B94u;
    SET_GPR_U32(ctx, 31, 0x1A1B9Cu);
    ctx->pc = 0x1A1B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B94u;
    // 0x1a1b98: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193470u, 0x1A1B94u, 0x1A1B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B9Cu;
label_1a1b9c:
    // 0x1a1b9c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1B9Cu;
    {
        const bool branch_taken_0x1a1b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b9c) {
            ctx->pc = 0x1A1BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B9Cu;
            // 0x1a1ba0: 0x8e2300c4  lw          $v1, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BC0u;
            goto label_1a1bc0;
        }
    }
    ctx->pc = 0x1A1BA4u;
    // 0x1a1ba4: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A1BA4u;
    SET_GPR_U32(ctx, 31, 0x1A1BACu);
    ctx->pc = 0x1A1BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BA4u;
    // 0x1a1ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A1BA4u, 0x1A1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BACu;
label_1a1bac:
    // 0x1a1bac: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1a1bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1a1bb0: 0xc068fc6  jal         func_1A3F18
    ctx->pc = 0x1A1BB0u;
    SET_GPR_U32(ctx, 31, 0x1A1BB8u);
    ctx->pc = 0x1A1BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BB0u;
    // 0x1a1bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F18u, 0x1A1BB0u, 0x1A1BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BB8u;
label_1a1bb8:
    // 0x1a1bb8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1A1BB8u;
    {
        const bool branch_taken_0x1a1bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BB8u;
        // 0x1a1bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bb8) {
            ctx->pc = 0x1A1C90u;
            goto label_1a1c90;
        }
    }
    ctx->pc = 0x1A1BC0u;
label_1a1bc0:
    // 0x1a1bc0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a1bc4: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1a1bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1a1bc8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A1BC8u;
    {
        const bool branch_taken_0x1a1bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1bc8) {
            ctx->pc = 0x1A1BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1BC8u;
            // 0x1a1bcc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BFCu;
            goto label_1a1bfc;
        }
    }
    ctx->pc = 0x1A1BD0u;
    // 0x1a1bd0: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A1BD0u;
    SET_GPR_U32(ctx, 31, 0x1A1BD8u);
    ctx->pc = 0x1A1BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BD0u;
    // 0x1a1bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A1BD0u, 0x1A1BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BD8u;
label_1a1bd8:
    // 0x1a1bd8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1a1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1a1bdc: 0xc068ede  jal         func_1A3B78
    ctx->pc = 0x1A1BDCu;
    SET_GPR_U32(ctx, 31, 0x1A1BE4u);
    ctx->pc = 0x1A1BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BDCu;
    // 0x1a1be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3B78u, 0x1A1BDCu, 0x1A1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BE4u;
label_1a1be4:
    // 0x1a1be4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a1be8: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x1a1be8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x1a1bec: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x1a1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x1a1bf0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1a1bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1a1bf4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A1BF4u;
    {
        const bool branch_taken_0x1a1bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BF4u;
        // 0x1a1bf8: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bf4) {
            ctx->pc = 0x1A1C8Cu;
            goto label_1a1c8c;
        }
    }
    ctx->pc = 0x1A1BFCu;
label_1a1bfc:
    // 0x1a1bfc: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x1a1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
    // 0x1a1c00: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A1C00u;
    {
        const bool branch_taken_0x1a1c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C00u;
        // 0x1a1c04: 0x26230080  addiu       $v1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c00) {
            ctx->pc = 0x1A1C8Cu;
            goto label_1a1c8c;
        }
    }
    ctx->pc = 0x1A1C08u;
    // 0x1a1c08: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a1c0c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1a1c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1a1c10: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A1C10u;
    {
        const bool branch_taken_0x1a1c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C10u;
        // 0x1a1c14: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c10) {
            ctx->pc = 0x1A1C8Cu;
            goto label_1a1c8c;
        }
    }
    ctx->pc = 0x1A1C18u;
    // 0x1a1c18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a1c1c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a1c20: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a1c24: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1C24u;
    {
        const bool branch_taken_0x1a1c24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C24u;
        // 0x1a1c28: 0x24640938  addiu       $a0, $v1, 0x938 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c24) {
            ctx->pc = 0x1A1C40u;
            goto label_1a1c40;
        }
    }
    ctx->pc = 0x1A1C2Cu;
    // 0x1a1c2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a1c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a1c30: 0x0  nop
    ctx->pc = 0x1a1c30u;
    // NOP
    // 0x1a1c34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a1c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a1c38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1C38u;
    {
        const bool branch_taken_0x1a1c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c38) {
            ctx->pc = 0x1A1C5Cu;
            goto label_1a1c5c;
        }
    }
    ctx->pc = 0x1A1C40u;
label_1a1c40:
    // 0x1a1c40: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a1c44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a1c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a1c48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a1c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a1c4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a1c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a1c50: 0x0  nop
    ctx->pc = 0x1a1c50u;
    // NOP
    // 0x1a1c54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a1c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a1c58: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a1c58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a1c5c:
    // 0x1a1c5c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a1c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a1c60: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a1c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a1c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1c68: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1a1c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1c6c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a1c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a1c70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a1c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1c74: 0x0  nop
    ctx->pc = 0x1a1c74u;
    // NOP
    // 0x1a1c78: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1C78u;
    {
        const bool branch_taken_0x1a1c78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C78u;
        // 0x1a1c7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c78) {
            ctx->pc = 0x1A1C90u;
            goto label_1a1c90;
        }
    }
    ctx->pc = 0x1A1C80u;
    // 0x1a1c80: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1a1c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1a1c84: 0xc06921e  jal         func_1A4878
    ctx->pc = 0x1A1C84u;
    SET_GPR_U32(ctx, 31, 0x1A1C8Cu);
    ctx->pc = 0x1A1C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C84u;
    // 0x1a1c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4878u, 0x1A1C84u, 0x1A1C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C8Cu;
label_1a1c8c:
    // 0x1a1c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1c90:
    // 0x1a1c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1c98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a1c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1ca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CA4u;
        // 0x1a1ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1CACu;
    // 0x1a1cac: 0x0  nop
    ctx->pc = 0x1a1cacu;
    // NOP
    ctx->pc = 0x1a1cb0u;
}
