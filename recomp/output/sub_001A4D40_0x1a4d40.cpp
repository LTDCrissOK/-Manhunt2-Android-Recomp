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

// Function: sub_001A4D40
// Address: 0x1a4d40 - 0x1a4e30
void sub_001A4D40_0x1a4d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4D40_0x1a4d40");
#endif

    switch (ctx->pc) {
        case 0x1a4d40u: goto label_1a4d40;
        case 0x1a4d44u: goto label_1a4d44;
        case 0x1a4d48u: goto label_1a4d48;
        case 0x1a4d4cu: goto label_1a4d4c;
        case 0x1a4d50u: goto label_1a4d50;
        case 0x1a4d54u: goto label_1a4d54;
        case 0x1a4d58u: goto label_1a4d58;
        case 0x1a4d5cu: goto label_1a4d5c;
        case 0x1a4d60u: goto label_1a4d60;
        case 0x1a4d64u: goto label_1a4d64;
        case 0x1a4d68u: goto label_1a4d68;
        case 0x1a4d6cu: goto label_1a4d6c;
        case 0x1a4d70u: goto label_1a4d70;
        case 0x1a4d74u: goto label_1a4d74;
        case 0x1a4d78u: goto label_1a4d78;
        case 0x1a4d7cu: goto label_1a4d7c;
        case 0x1a4d80u: goto label_1a4d80;
        case 0x1a4d84u: goto label_1a4d84;
        case 0x1a4d88u: goto label_1a4d88;
        case 0x1a4d8cu: goto label_1a4d8c;
        case 0x1a4d90u: goto label_1a4d90;
        case 0x1a4d94u: goto label_1a4d94;
        case 0x1a4d98u: goto label_1a4d98;
        case 0x1a4d9cu: goto label_1a4d9c;
        case 0x1a4da0u: goto label_1a4da0;
        case 0x1a4da4u: goto label_1a4da4;
        case 0x1a4da8u: goto label_1a4da8;
        case 0x1a4dacu: goto label_1a4dac;
        case 0x1a4db0u: goto label_1a4db0;
        case 0x1a4db4u: goto label_1a4db4;
        case 0x1a4db8u: goto label_1a4db8;
        case 0x1a4dbcu: goto label_1a4dbc;
        case 0x1a4dc0u: goto label_1a4dc0;
        case 0x1a4dc4u: goto label_1a4dc4;
        case 0x1a4dc8u: goto label_1a4dc8;
        case 0x1a4dccu: goto label_1a4dcc;
        case 0x1a4dd0u: goto label_1a4dd0;
        case 0x1a4dd4u: goto label_1a4dd4;
        case 0x1a4dd8u: goto label_1a4dd8;
        case 0x1a4ddcu: goto label_1a4ddc;
        case 0x1a4de0u: goto label_1a4de0;
        case 0x1a4de4u: goto label_1a4de4;
        case 0x1a4de8u: goto label_1a4de8;
        case 0x1a4decu: goto label_1a4dec;
        case 0x1a4df0u: goto label_1a4df0;
        case 0x1a4df4u: goto label_1a4df4;
        case 0x1a4df8u: goto label_1a4df8;
        case 0x1a4dfcu: goto label_1a4dfc;
        case 0x1a4e00u: goto label_1a4e00;
        case 0x1a4e04u: goto label_1a4e04;
        case 0x1a4e08u: goto label_1a4e08;
        case 0x1a4e0cu: goto label_1a4e0c;
        case 0x1a4e10u: goto label_1a4e10;
        case 0x1a4e14u: goto label_1a4e14;
        case 0x1a4e18u: goto label_1a4e18;
        case 0x1a4e1cu: goto label_1a4e1c;
        case 0x1a4e20u: goto label_1a4e20;
        case 0x1a4e24u: goto label_1a4e24;
        case 0x1a4e28u: goto label_1a4e28;
        case 0x1a4e2cu: goto label_1a4e2c;
        default: break;
    }

    ctx->pc = 0x1a4d40u;

label_1a4d40:
    // 0x1a4d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4d44:
    // 0x1a4d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4d48:
    // 0x1a4d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4d4c:
    // 0x1a4d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d50:
    // 0x1a4d50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4d54:
    // 0x1a4d54: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x1a4d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1a4d58:
    // 0x1a4d58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4d5c:
    // 0x1a4d5c: 0x5051002f  beql        $v0, $s1, . + 4 + (0x2F << 2)
label_1a4d60:
    if (ctx->pc == 0x1A4D60u) {
        ctx->pc = 0x1A4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D5Cu;
        // 0x1a4d60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D64u;
        goto label_1a4d64;
    }
    ctx->pc = 0x1A4D5Cu;
    {
        const bool branch_taken_0x1a4d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a4d5c) {
            ctx->pc = 0x1A4D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D5Cu;
            // 0x1a4d60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E1Cu;
            goto label_1a4e1c;
        }
    }
    ctx->pc = 0x1A4D64u;
label_1a4d64:
    // 0x1a4d64: 0xc0691d6  jal         func_1A4758
label_1a4d68:
    if (ctx->pc == 0x1A4D68u) {
        ctx->pc = 0x1A4D6Cu;
        goto label_1a4d6c;
    }
    ctx->pc = 0x1A4D64u;
    SET_GPR_U32(ctx, 31, 0x1A4D6Cu);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A4D64u, 0x1A4D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D6Cu;
label_1a4d6c:
    // 0x1a4d6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4d70:
    // 0x1a4d70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a4d74:
    if (ctx->pc == 0x1A4D74u) {
        ctx->pc = 0x1A4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D70u;
        // 0x1a4d74: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D78u;
        goto label_1a4d78;
    }
    ctx->pc = 0x1A4D70u;
    {
        const bool branch_taken_0x1a4d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D70u;
        // 0x1a4d74: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d70) {
            ctx->pc = 0x1A4D88u;
            goto label_1a4d88;
        }
    }
    ctx->pc = 0x1A4D78u;
label_1a4d78:
    // 0x1a4d78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4d7c:
    // 0x1a4d7c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a4d80:
    // 0x1a4d80: 0x40f809  jalr        $v0
label_1a4d84:
    if (ctx->pc == 0x1A4D84u) {
        ctx->pc = 0x1A4D88u;
        goto label_1a4d88;
    }
    ctx->pc = 0x1A4D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4D88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D80u, 0x1A4D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4D88u;
label_1a4d88:
    // 0x1a4d88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a4d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a4d8c:
    // 0x1a4d8c: 0xc061a16  jal         func_186858
label_1a4d90:
    if (ctx->pc == 0x1A4D90u) {
        ctx->pc = 0x1A4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D8Cu;
        // 0x1a4d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D94u;
        goto label_1a4d94;
    }
    ctx->pc = 0x1A4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D94u);
    ctx->pc = 0x1A4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D8Cu;
    // 0x1a4d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4D8Cu, 0x1A4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D94u;
label_1a4d94:
    // 0x1a4d94: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1a4d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1a4d98:
    // 0x1a4d98: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a4d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1a4d9c:
    // 0x1a4d9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4da0:
    // 0x1a4da0: 0xc06ee70  jal         func_1BB9C0
label_1a4da4:
    if (ctx->pc == 0x1A4DA4u) {
        ctx->pc = 0x1A4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DA0u;
        // 0x1a4da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DA8u;
        goto label_1a4da8;
    }
    ctx->pc = 0x1A4DA0u;
    SET_GPR_U32(ctx, 31, 0x1A4DA8u);
    ctx->pc = 0x1A4DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DA0u;
    // 0x1a4da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x1A4DA0u, 0x1A4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DA8u;
label_1a4da8:
    // 0x1a4da8: 0xc061a16  jal         func_186858
label_1a4dac:
    if (ctx->pc == 0x1A4DACu) {
        ctx->pc = 0x1A4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DA8u;
        // 0x1a4dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DB0u;
        goto label_1a4db0;
    }
    ctx->pc = 0x1A4DA8u;
    SET_GPR_U32(ctx, 31, 0x1A4DB0u);
    ctx->pc = 0x1A4DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DA8u;
    // 0x1a4dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4DA8u, 0x1A4DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DB0u;
label_1a4db0:
    // 0x1a4db0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x1a4db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_1a4db4:
    // 0x1a4db4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a4db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4db8:
    // 0x1a4db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dbc:
    // 0x1a4dbc: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1a4dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_1a4dc0:
    // 0x1a4dc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4dc4:
    // 0x1a4dc4: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x1a4dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_1a4dc8:
    // 0x1a4dc8: 0xc061a16  jal         func_186858
label_1a4dcc:
    if (ctx->pc == 0x1A4DCCu) {
        ctx->pc = 0x1A4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DC8u;
        // 0x1a4dcc: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DD0u;
        goto label_1a4dd0;
    }
    ctx->pc = 0x1A4DC8u;
    SET_GPR_U32(ctx, 31, 0x1A4DD0u);
    ctx->pc = 0x1A4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DC8u;
    // 0x1a4dcc: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4DC8u, 0x1A4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DD0u;
label_1a4dd0:
    // 0x1a4dd0: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1a4dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_1a4dd4:
    // 0x1a4dd4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a4dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1a4dd8:
    // 0x1a4dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4ddc:
    // 0x1a4ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4de0:
    // 0x1a4de0: 0xc061a16  jal         func_186858
label_1a4de4:
    if (ctx->pc == 0x1A4DE4u) {
        ctx->pc = 0x1A4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DE0u;
        // 0x1a4de4: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DE8u;
        goto label_1a4de8;
    }
    ctx->pc = 0x1A4DE0u;
    SET_GPR_U32(ctx, 31, 0x1A4DE8u);
    ctx->pc = 0x1A4DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DE0u;
    // 0x1a4de4: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4DE0u, 0x1A4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DE8u;
label_1a4de8:
    // 0x1a4de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a4de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4dec:
    // 0x1a4dec: 0xc06eebe  jal         func_1BBAF8
label_1a4df0:
    if (ctx->pc == 0x1A4DF0u) {
        ctx->pc = 0x1A4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DECu;
        // 0x1a4df0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DF4u;
        goto label_1a4df4;
    }
    ctx->pc = 0x1A4DECu;
    SET_GPR_U32(ctx, 31, 0x1A4DF4u);
    ctx->pc = 0x1A4DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DECu;
    // 0x1a4df0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x1A4DECu, 0x1A4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DF4u;
label_1a4df4:
    // 0x1a4df4: 0xc061a16  jal         func_186858
label_1a4df8:
    if (ctx->pc == 0x1A4DF8u) {
        ctx->pc = 0x1A4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DF4u;
        // 0x1a4df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DFCu;
        goto label_1a4dfc;
    }
    ctx->pc = 0x1A4DF4u;
    SET_GPR_U32(ctx, 31, 0x1A4DFCu);
    ctx->pc = 0x1A4DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DF4u;
    // 0x1a4df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4DF4u, 0x1A4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DFCu;
label_1a4dfc:
    // 0x1a4dfc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1a4dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1a4e00:
    // 0x1a4e00: 0xc061a16  jal         func_186858
label_1a4e04:
    if (ctx->pc == 0x1A4E04u) {
        ctx->pc = 0x1A4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E00u;
        // 0x1a4e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E08u;
        goto label_1a4e08;
    }
    ctx->pc = 0x1A4E00u;
    SET_GPR_U32(ctx, 31, 0x1A4E08u);
    ctx->pc = 0x1A4E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E00u;
    // 0x1a4e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4E00u, 0x1A4E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E08u;
label_1a4e08:
    // 0x1a4e08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a4e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a4e0c:
    // 0x1a4e0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4e10:
    // 0x1a4e10: 0x0  nop
    ctx->pc = 0x1a4e10u;
    // NOP
label_1a4e14:
    // 0x1a4e14: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1a4e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1a4e18:
    // 0x1a4e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4e1c:
    // 0x1a4e1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4e20:
    // 0x1a4e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4e24:
    // 0x1a4e24: 0x3e00008  jr          $ra
label_1a4e28:
    if (ctx->pc == 0x1A4E28u) {
        ctx->pc = 0x1A4E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E24u;
        // 0x1a4e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E2Cu;
        goto label_1a4e2c;
    }
    ctx->pc = 0x1A4E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E24u;
        // 0x1a4e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4E2Cu;
label_1a4e2c:
    // 0x1a4e2c: 0x0  nop
    ctx->pc = 0x1a4e2cu;
    // NOP
    ctx->pc = 0x1a4e30u;
}
