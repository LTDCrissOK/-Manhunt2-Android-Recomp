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

// Function: sub_001B1B20
// Address: 0x1b1b20 - 0x1b1cc0
void sub_001B1B20_0x1b1b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1B20_0x1b1b20");
#endif

    switch (ctx->pc) {
        case 0x1b1b68u: goto label_1b1b68;
        case 0x1b1b78u: goto label_1b1b78;
        case 0x1b1b94u: goto label_1b1b94;
        case 0x1b1ba8u: goto label_1b1ba8;
        case 0x1b1bb4u: goto label_1b1bb4;
        case 0x1b1be4u: goto label_1b1be4;
        case 0x1b1bf8u: goto label_1b1bf8;
        case 0x1b1c0cu: goto label_1b1c0c;
        case 0x1b1c3cu: goto label_1b1c3c;
        case 0x1b1c54u: goto label_1b1c54;
        default: break;
    }

    ctx->pc = 0x1b1b20u;

    // 0x1b1b20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b1b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b1b24: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1b1b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1b1b28: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1b1b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1b1b2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b30: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1b1b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1b1b34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b1b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b38: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1b1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1b1b3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b1b3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b40: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1b1b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1b1b44: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1b1b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1b1b48: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1b1b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1b1b4c: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x1b1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b1b50: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1b1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b1b54: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1B54u;
    {
        const bool branch_taken_0x1b1b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B54u;
        // 0x1b1b58: 0x8c730110  lw          $s3, 0x110($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b54) {
            ctx->pc = 0x1B1BB4u;
            goto label_1b1bb4;
        }
    }
    ctx->pc = 0x1B1B5Cu;
    // 0x1b1b5c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1b1b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b1b60: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1B1B60u;
    SET_GPR_U32(ctx, 31, 0x1B1B68u);
    ctx->pc = 0x1B1B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B60u;
    // 0x1b1b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1B1B60u, 0x1B1B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B68u;
label_1b1b68:
    // 0x1b1b68: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x1b1b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b1b6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b1b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b70: 0xc06c056  jal         func_1B0158
    ctx->pc = 0x1B1B70u;
    SET_GPR_U32(ctx, 31, 0x1B1B78u);
    ctx->pc = 0x1B1B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B70u;
    // 0x1b1b74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0158u, 0x1B1B70u, 0x1B1B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B78u;
label_1b1b78:
    // 0x1b1b78: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b1b7c: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x1b1b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x1b1b80: 0x2631b560  addiu       $s1, $s1, -0x4AA0
    ctx->pc = 0x1b1b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948192));
    // 0x1b1b84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b1b88: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b1b8c: 0xc06c04c  jal         func_1B0130
    ctx->pc = 0x1B1B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B94u);
    ctx->pc = 0x1B1B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B8Cu;
    // 0x1b1b90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0130u, 0x1B1B8Cu, 0x1B1B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B94u;
label_1b1b94:
    // 0x1b1b94: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x1b1b94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1b98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b1b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b1b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ba0: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1B1BA0u;
    SET_GPR_U32(ctx, 31, 0x1B1BA8u);
    ctx->pc = 0x1B1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BA0u;
    // 0x1b1ba4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1B1BA0u, 0x1B1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BA8u;
label_1b1ba8:
    // 0x1b1ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bac: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1B1BACu;
    SET_GPR_U32(ctx, 31, 0x1B1BB4u);
    ctx->pc = 0x1B1BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BACu;
    // 0x1b1bb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1B1BACu, 0x1B1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BB4u;
label_1b1bb4:
    // 0x1b1bb4: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x1b1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1b1bb8: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1B1BB8u;
    {
        const bool branch_taken_0x1b1bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BB8u;
        // 0x1b1bbc: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bb8) {
            ctx->pc = 0x1B1CA0u;
            goto label_1b1ca0;
        }
    }
    ctx->pc = 0x1B1BC0u;
    // 0x1b1bc0: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b1bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b1bc4: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1b1bc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1b1bc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b1bcc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B1BCCu;
    {
        const bool branch_taken_0x1b1bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1bcc) {
            ctx->pc = 0x1B1C54u;
            goto label_1b1c54;
        }
    }
    ctx->pc = 0x1B1BD4u;
    // 0x1b1bd4: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1BD4u;
    {
        const bool branch_taken_0x1b1bd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BD4u;
        // 0x1b1bd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bd4) {
            ctx->pc = 0x1B1C00u;
            goto label_1b1c00;
        }
    }
    ctx->pc = 0x1B1BDCu;
    // 0x1b1bdc: 0xc07577c  jal         func_1D5DF0
    ctx->pc = 0x1B1BDCu;
    SET_GPR_U32(ctx, 31, 0x1B1BE4u);
    ctx->pc = 0x1B1BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BDCu;
    // 0x1b1be0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DF0u, 0x1B1BDCu, 0x1B1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BE4u;
label_1b1be4:
    // 0x1b1be4: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b1be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b1be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1bec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1bf0: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B1BF0u;
    SET_GPR_U32(ctx, 31, 0x1B1BF8u);
    ctx->pc = 0x1B1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BF0u;
    // 0x1b1bf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B1BF0u, 0x1B1BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BF8u;
label_1b1bf8:
    // 0x1b1bf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B1BF8u;
    {
        const bool branch_taken_0x1b1bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1bf8) {
            ctx->pc = 0x1B1C54u;
            goto label_1b1c54;
        }
    }
    ctx->pc = 0x1B1C00u;
label_1b1c00:
    // 0x1b1c00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1c04: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B1C04u;
    SET_GPR_U32(ctx, 31, 0x1B1C0Cu);
    ctx->pc = 0x1B1C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C04u;
    // 0x1b1c08: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B1C04u, 0x1B1C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C0Cu;
label_1b1c0c:
    // 0x1b1c0c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b1c10: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1b1c10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1b1c14: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x1b1c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1b1c18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1c1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b1c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b1c20: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1b1c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b1c24: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b1c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b1c28: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b1c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b1c2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b1c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b1c34: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1B1C34u;
    SET_GPR_U32(ctx, 31, 0x1B1C3Cu);
    ctx->pc = 0x1B1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C34u;
    // 0x1b1c38: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1B1C34u, 0x1B1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C3Cu;
label_1b1c3c:
    // 0x1b1c3c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b1c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b1c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c44: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1b1c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b1c48: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1b1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b1c4c: 0xc06c680  jal         func_1B1A00
    ctx->pc = 0x1B1C4Cu;
    SET_GPR_U32(ctx, 31, 0x1B1C54u);
    ctx->pc = 0x1B1C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C4Cu;
    // 0x1b1c50: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A00u, 0x1B1C4Cu, 0x1B1C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C54u;
label_1b1c54:
    // 0x1b1c54: 0x52a00008  beql        $s5, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1C54u;
    {
        const bool branch_taken_0x1b1c54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c54) {
            ctx->pc = 0x1B1C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1C54u;
            // 0x1b1c58: 0x8e4200a0  lw          $v0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1C78u;
            goto label_1b1c78;
        }
    }
    ctx->pc = 0x1B1C5Cu;
    // 0x1b1c5c: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x1b1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b1c60: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1b1c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b1c64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b1c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b1c68: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1C68u;
    {
        const bool branch_taken_0x1b1c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C68u;
        // 0x1b1c6c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c68) {
            ctx->pc = 0x1B1CA0u;
            goto label_1b1ca0;
        }
    }
    ctx->pc = 0x1B1C70u;
    // 0x1b1c70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1C70u;
    {
        const bool branch_taken_0x1b1c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C70u;
        // 0x1b1c74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c70) {
            ctx->pc = 0x1B1C98u;
            goto label_1b1c98;
        }
    }
    ctx->pc = 0x1B1C78u;
label_1b1c78:
    // 0x1b1c78: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1b1c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1b1c7c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b1c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1b1c80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b1c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1c84: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b1c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1c88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b1c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1c8c: 0x0  nop
    ctx->pc = 0x1b1c8cu;
    // NOP
    // 0x1b1c90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1C90u;
    {
        const bool branch_taken_0x1b1c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C90u;
        // 0x1b1c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c90) {
            ctx->pc = 0x1B1C9Cu;
            goto label_1b1c9c;
        }
    }
    ctx->pc = 0x1B1C98u;
label_1b1c98:
    // 0x1b1c98: 0xae420098  sw          $v0, 0x98($s2)
    ctx->pc = 0x1b1c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
label_1b1c9c:
    // 0x1b1c9c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1b1c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1ca0:
    // 0x1b1ca0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1b1ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b1ca4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1b1ca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b1ca8: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1b1ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b1cac: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1b1cacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b1cb0: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1b1cb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1b1cb4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b1cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b1cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CB8u;
        // 0x1b1cbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1CC0u;
}
