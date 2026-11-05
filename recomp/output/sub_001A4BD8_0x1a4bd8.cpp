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

// Function: sub_001A4BD8
// Address: 0x1a4bd8 - 0x1a4d40
void sub_001A4BD8_0x1a4bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4BD8_0x1a4bd8");
#endif

    switch (ctx->pc) {
        case 0x1a4bd8u: goto label_1a4bd8;
        case 0x1a4bdcu: goto label_1a4bdc;
        case 0x1a4be0u: goto label_1a4be0;
        case 0x1a4be4u: goto label_1a4be4;
        case 0x1a4be8u: goto label_1a4be8;
        case 0x1a4becu: goto label_1a4bec;
        case 0x1a4bf0u: goto label_1a4bf0;
        case 0x1a4bf4u: goto label_1a4bf4;
        case 0x1a4bf8u: goto label_1a4bf8;
        case 0x1a4bfcu: goto label_1a4bfc;
        case 0x1a4c00u: goto label_1a4c00;
        case 0x1a4c04u: goto label_1a4c04;
        case 0x1a4c08u: goto label_1a4c08;
        case 0x1a4c0cu: goto label_1a4c0c;
        case 0x1a4c10u: goto label_1a4c10;
        case 0x1a4c14u: goto label_1a4c14;
        case 0x1a4c18u: goto label_1a4c18;
        case 0x1a4c1cu: goto label_1a4c1c;
        case 0x1a4c20u: goto label_1a4c20;
        case 0x1a4c24u: goto label_1a4c24;
        case 0x1a4c28u: goto label_1a4c28;
        case 0x1a4c2cu: goto label_1a4c2c;
        case 0x1a4c30u: goto label_1a4c30;
        case 0x1a4c34u: goto label_1a4c34;
        case 0x1a4c38u: goto label_1a4c38;
        case 0x1a4c3cu: goto label_1a4c3c;
        case 0x1a4c40u: goto label_1a4c40;
        case 0x1a4c44u: goto label_1a4c44;
        case 0x1a4c48u: goto label_1a4c48;
        case 0x1a4c4cu: goto label_1a4c4c;
        case 0x1a4c50u: goto label_1a4c50;
        case 0x1a4c54u: goto label_1a4c54;
        case 0x1a4c58u: goto label_1a4c58;
        case 0x1a4c5cu: goto label_1a4c5c;
        case 0x1a4c60u: goto label_1a4c60;
        case 0x1a4c64u: goto label_1a4c64;
        case 0x1a4c68u: goto label_1a4c68;
        case 0x1a4c6cu: goto label_1a4c6c;
        case 0x1a4c70u: goto label_1a4c70;
        case 0x1a4c74u: goto label_1a4c74;
        case 0x1a4c78u: goto label_1a4c78;
        case 0x1a4c7cu: goto label_1a4c7c;
        case 0x1a4c80u: goto label_1a4c80;
        case 0x1a4c84u: goto label_1a4c84;
        case 0x1a4c88u: goto label_1a4c88;
        case 0x1a4c8cu: goto label_1a4c8c;
        case 0x1a4c90u: goto label_1a4c90;
        case 0x1a4c94u: goto label_1a4c94;
        case 0x1a4c98u: goto label_1a4c98;
        case 0x1a4c9cu: goto label_1a4c9c;
        case 0x1a4ca0u: goto label_1a4ca0;
        case 0x1a4ca4u: goto label_1a4ca4;
        case 0x1a4ca8u: goto label_1a4ca8;
        case 0x1a4cacu: goto label_1a4cac;
        case 0x1a4cb0u: goto label_1a4cb0;
        case 0x1a4cb4u: goto label_1a4cb4;
        case 0x1a4cb8u: goto label_1a4cb8;
        case 0x1a4cbcu: goto label_1a4cbc;
        case 0x1a4cc0u: goto label_1a4cc0;
        case 0x1a4cc4u: goto label_1a4cc4;
        case 0x1a4cc8u: goto label_1a4cc8;
        case 0x1a4cccu: goto label_1a4ccc;
        case 0x1a4cd0u: goto label_1a4cd0;
        case 0x1a4cd4u: goto label_1a4cd4;
        case 0x1a4cd8u: goto label_1a4cd8;
        case 0x1a4cdcu: goto label_1a4cdc;
        case 0x1a4ce0u: goto label_1a4ce0;
        case 0x1a4ce4u: goto label_1a4ce4;
        case 0x1a4ce8u: goto label_1a4ce8;
        case 0x1a4cecu: goto label_1a4cec;
        case 0x1a4cf0u: goto label_1a4cf0;
        case 0x1a4cf4u: goto label_1a4cf4;
        case 0x1a4cf8u: goto label_1a4cf8;
        case 0x1a4cfcu: goto label_1a4cfc;
        case 0x1a4d00u: goto label_1a4d00;
        case 0x1a4d04u: goto label_1a4d04;
        case 0x1a4d08u: goto label_1a4d08;
        case 0x1a4d0cu: goto label_1a4d0c;
        case 0x1a4d10u: goto label_1a4d10;
        case 0x1a4d14u: goto label_1a4d14;
        case 0x1a4d18u: goto label_1a4d18;
        case 0x1a4d1cu: goto label_1a4d1c;
        case 0x1a4d20u: goto label_1a4d20;
        case 0x1a4d24u: goto label_1a4d24;
        case 0x1a4d28u: goto label_1a4d28;
        case 0x1a4d2cu: goto label_1a4d2c;
        case 0x1a4d30u: goto label_1a4d30;
        case 0x1a4d34u: goto label_1a4d34;
        case 0x1a4d38u: goto label_1a4d38;
        case 0x1a4d3cu: goto label_1a4d3c;
        default: break;
    }

    ctx->pc = 0x1a4bd8u;

label_1a4bd8:
    // 0x1a4bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a4bdc:
    // 0x1a4bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4be0:
    // 0x1a4be0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4be4:
    // 0x1a4be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4be8:
    // 0x1a4be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4bec:
    // 0x1a4bec: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1a4becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4bf0:
    // 0x1a4bf0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a4bf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a4bf4:
    // 0x1a4bf4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4bf8:
    // 0x1a4bf8: 0x5051004c  beql        $v0, $s1, . + 4 + (0x4C << 2)
label_1a4bfc:
    if (ctx->pc == 0x1A4BFCu) {
        ctx->pc = 0x1A4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BF8u;
        // 0x1a4bfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C00u;
        goto label_1a4c00;
    }
    ctx->pc = 0x1A4BF8u;
    {
        const bool branch_taken_0x1a4bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a4bf8) {
            ctx->pc = 0x1A4BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4BF8u;
            // 0x1a4bfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D2Cu;
            goto label_1a4d2c;
        }
    }
    ctx->pc = 0x1A4C00u;
label_1a4c00:
    // 0x1a4c00: 0xc0691d6  jal         func_1A4758
label_1a4c04:
    if (ctx->pc == 0x1A4C04u) {
        ctx->pc = 0x1A4C08u;
        goto label_1a4c08;
    }
    ctx->pc = 0x1A4C00u;
    SET_GPR_U32(ctx, 31, 0x1A4C08u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A4C00u, 0x1A4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C08u;
label_1a4c08:
    // 0x1a4c08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4c0c:
    // 0x1a4c0c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a4c10:
    if (ctx->pc == 0x1A4C10u) {
        ctx->pc = 0x1A4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C0Cu;
        // 0x1a4c10: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C14u;
        goto label_1a4c14;
    }
    ctx->pc = 0x1A4C0Cu;
    {
        const bool branch_taken_0x1a4c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C0Cu;
        // 0x1a4c10: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c0c) {
            ctx->pc = 0x1A4C24u;
            goto label_1a4c24;
        }
    }
    ctx->pc = 0x1A4C14u;
label_1a4c14:
    // 0x1a4c14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4c18:
    // 0x1a4c18: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a4c1c:
    // 0x1a4c1c: 0x40f809  jalr        $v0
label_1a4c20:
    if (ctx->pc == 0x1A4C20u) {
        ctx->pc = 0x1A4C24u;
        goto label_1a4c24;
    }
    ctx->pc = 0x1A4C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4C24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C1Cu, 0x1A4C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4C24u;
label_1a4c24:
    // 0x1a4c24: 0xc064e16  jal         func_193858
label_1a4c28:
    if (ctx->pc == 0x1A4C28u) {
        ctx->pc = 0x1A4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C24u;
        // 0x1a4c28: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C2Cu;
        goto label_1a4c2c;
    }
    ctx->pc = 0x1A4C24u;
    SET_GPR_U32(ctx, 31, 0x1A4C2Cu);
    ctx->pc = 0x1A4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C24u;
    // 0x1a4c28: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193858u, 0x1A4C24u, 0x1A4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C2Cu;
label_1a4c2c:
    // 0x1a4c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c30:
    // 0x1a4c30: 0xc061a16  jal         func_186858
label_1a4c34:
    if (ctx->pc == 0x1A4C34u) {
        ctx->pc = 0x1A4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C30u;
        // 0x1a4c34: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C38u;
        goto label_1a4c38;
    }
    ctx->pc = 0x1A4C30u;
    SET_GPR_U32(ctx, 31, 0x1A4C38u);
    ctx->pc = 0x1A4C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C30u;
    // 0x1a4c34: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4C30u, 0x1A4C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C38u;
label_1a4c38:
    // 0x1a4c38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a4c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a4c3c:
    // 0x1a4c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4c40:
    // 0x1a4c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c44:
    // 0x1a4c44: 0xc061a16  jal         func_186858
label_1a4c48:
    if (ctx->pc == 0x1A4C48u) {
        ctx->pc = 0x1A4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C44u;
        // 0x1a4c48: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C4Cu;
        goto label_1a4c4c;
    }
    ctx->pc = 0x1A4C44u;
    SET_GPR_U32(ctx, 31, 0x1A4C4Cu);
    ctx->pc = 0x1A4C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C44u;
    // 0x1a4c48: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4C44u, 0x1A4C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C4Cu;
label_1a4c4c:
    // 0x1a4c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c50:
    // 0x1a4c50: 0xc06ee66  jal         func_1BB998
label_1a4c54:
    if (ctx->pc == 0x1A4C54u) {
        ctx->pc = 0x1A4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C50u;
        // 0x1a4c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C58u;
        goto label_1a4c58;
    }
    ctx->pc = 0x1A4C50u;
    SET_GPR_U32(ctx, 31, 0x1A4C58u);
    ctx->pc = 0x1A4C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C50u;
    // 0x1a4c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1A4C50u, 0x1A4C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C58u;
label_1a4c58:
    // 0x1a4c58: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a4c5c:
    // 0x1a4c5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c60:
    // 0x1a4c60: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a4c64:
    // 0x1a4c64: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a4c68:
    if (ctx->pc == 0x1A4C68u) {
        ctx->pc = 0x1A4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C64u;
        // 0x1a4c68: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C6Cu;
        goto label_1a4c6c;
    }
    ctx->pc = 0x1A4C64u;
    {
        const bool branch_taken_0x1a4c64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C64u;
        // 0x1a4c68: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c64) {
            ctx->pc = 0x1A4C80u;
            goto label_1a4c80;
        }
    }
    ctx->pc = 0x1A4C6Cu;
label_1a4c6c:
    // 0x1a4c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4c70:
    // 0x1a4c70: 0x0  nop
    ctx->pc = 0x1a4c70u;
    // NOP
label_1a4c74:
    // 0x1a4c74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4c78:
    // 0x1a4c78: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4c7c:
    if (ctx->pc == 0x1A4C7Cu) {
        ctx->pc = 0x1A4C80u;
        goto label_1a4c80;
    }
    ctx->pc = 0x1A4C78u;
    {
        const bool branch_taken_0x1a4c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c78) {
            ctx->pc = 0x1A4C98u;
            goto label_1a4c98;
        }
    }
    ctx->pc = 0x1A4C80u;
label_1a4c80:
    // 0x1a4c80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a4c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a4c84:
    // 0x1a4c84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a4c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a4c88:
    // 0x1a4c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4c8c:
    // 0x1a4c8c: 0x0  nop
    ctx->pc = 0x1a4c8cu;
    // NOP
label_1a4c90:
    // 0x1a4c90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4c94:
    // 0x1a4c94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a4c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a4c98:
    // 0x1a4c98: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a4c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a4c9c:
    // 0x1a4c9c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a4c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a4ca0:
    // 0x1a4ca0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a4ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4ca4:
    // 0x1a4ca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a4ca8:
    // 0x1a4ca8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4cac:
    // 0x1a4cac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a4cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1a4cb0:
    // 0x1a4cb0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a4cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4cb4:
    // 0x1a4cb4: 0xc0b12b0  jal         func_2C4AC0
label_1a4cb8:
    if (ctx->pc == 0x1A4CB8u) {
        ctx->pc = 0x1A4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CB4u;
        // 0x1a4cb8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CBCu;
        goto label_1a4cbc;
    }
    ctx->pc = 0x1A4CB4u;
    SET_GPR_U32(ctx, 31, 0x1A4CBCu);
    ctx->pc = 0x1A4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4CB4u;
    // 0x1a4cb8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A4CB4u, 0x1A4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CBCu;
label_1a4cbc:
    // 0x1a4cbc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a4cbcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a4cc0:
    // 0x1a4cc0: 0xe6140050  swc1        $f20, 0x50($s0)
    ctx->pc = 0x1a4cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1a4cc4:
    // 0x1a4cc4: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_1a4cc8:
    // 0x1a4cc8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a4ccc:
    if (ctx->pc == 0x1A4CCCu) {
        ctx->pc = 0x1A4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CC8u;
        // 0x1a4ccc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CD0u;
        goto label_1a4cd0;
    }
    ctx->pc = 0x1A4CC8u;
    {
        const bool branch_taken_0x1a4cc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CC8u;
        // 0x1a4ccc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cc8) {
            ctx->pc = 0x1A4CE4u;
            goto label_1a4ce4;
        }
    }
    ctx->pc = 0x1A4CD0u;
label_1a4cd0:
    // 0x1a4cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4cd4:
    // 0x1a4cd4: 0x0  nop
    ctx->pc = 0x1a4cd4u;
    // NOP
label_1a4cd8:
    // 0x1a4cd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4cd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4cdc:
    // 0x1a4cdc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4ce0:
    if (ctx->pc == 0x1A4CE0u) {
        ctx->pc = 0x1A4CE4u;
        goto label_1a4ce4;
    }
    ctx->pc = 0x1A4CDCu;
    {
        const bool branch_taken_0x1a4cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cdc) {
            ctx->pc = 0x1A4CFCu;
            goto label_1a4cfc;
        }
    }
    ctx->pc = 0x1A4CE4u;
label_1a4ce4:
    // 0x1a4ce4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a4ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a4ce8:
    // 0x1a4ce8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a4ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a4cec:
    // 0x1a4cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4cf0:
    // 0x1a4cf0: 0x0  nop
    ctx->pc = 0x1a4cf0u;
    // NOP
label_1a4cf4:
    // 0x1a4cf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4cf8:
    // 0x1a4cf8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a4cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a4cfc:
    // 0x1a4cfc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a4cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a4d00:
    // 0x1a4d00: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a4d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a4d04:
    // 0x1a4d04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a4d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4d08:
    // 0x1a4d08: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a4d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1a4d0c:
    // 0x1a4d0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4d10:
    // 0x1a4d10: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a4d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a4d14:
    // 0x1a4d14: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a4d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4d18:
    // 0x1a4d18: 0xc0b12b0  jal         func_2C4AC0
label_1a4d1c:
    if (ctx->pc == 0x1A4D1Cu) {
        ctx->pc = 0x1A4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D18u;
        // 0x1a4d1c: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D20u;
        goto label_1a4d20;
    }
    ctx->pc = 0x1A4D18u;
    SET_GPR_U32(ctx, 31, 0x1A4D20u);
    ctx->pc = 0x1A4D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D18u;
    // 0x1a4d1c: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A4D18u, 0x1A4D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D20u;
label_1a4d20:
    // 0x1a4d20: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a4d20u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a4d24:
    // 0x1a4d24: 0xe6140048  swc1        $f20, 0x48($s0)
    ctx->pc = 0x1a4d24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_1a4d28:
    // 0x1a4d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4d2c:
    // 0x1a4d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4d30:
    // 0x1a4d30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4d34:
    // 0x1a4d34: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a4d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4d38:
    // 0x1a4d38: 0x3e00008  jr          $ra
label_1a4d3c:
    if (ctx->pc == 0x1A4D3Cu) {
        ctx->pc = 0x1A4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D38u;
        // 0x1a4d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D40u;
        goto label_fallthrough_0x1a4d38;
    }
    ctx->pc = 0x1A4D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D38u;
        // 0x1a4d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4d38:
    ctx->pc = 0x1A4D40u;
}
