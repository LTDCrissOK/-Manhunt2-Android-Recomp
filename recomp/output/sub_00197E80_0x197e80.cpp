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

// Function: sub_00197E80
// Address: 0x197e80 - 0x197f68
void sub_00197E80_0x197e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197E80_0x197e80");
#endif

    switch (ctx->pc) {
        case 0x197e80u: goto label_197e80;
        case 0x197e84u: goto label_197e84;
        case 0x197e88u: goto label_197e88;
        case 0x197e8cu: goto label_197e8c;
        case 0x197e90u: goto label_197e90;
        case 0x197e94u: goto label_197e94;
        case 0x197e98u: goto label_197e98;
        case 0x197e9cu: goto label_197e9c;
        case 0x197ea0u: goto label_197ea0;
        case 0x197ea4u: goto label_197ea4;
        case 0x197ea8u: goto label_197ea8;
        case 0x197eacu: goto label_197eac;
        case 0x197eb0u: goto label_197eb0;
        case 0x197eb4u: goto label_197eb4;
        case 0x197eb8u: goto label_197eb8;
        case 0x197ebcu: goto label_197ebc;
        case 0x197ec0u: goto label_197ec0;
        case 0x197ec4u: goto label_197ec4;
        case 0x197ec8u: goto label_197ec8;
        case 0x197eccu: goto label_197ecc;
        case 0x197ed0u: goto label_197ed0;
        case 0x197ed4u: goto label_197ed4;
        case 0x197ed8u: goto label_197ed8;
        case 0x197edcu: goto label_197edc;
        case 0x197ee0u: goto label_197ee0;
        case 0x197ee4u: goto label_197ee4;
        case 0x197ee8u: goto label_197ee8;
        case 0x197eecu: goto label_197eec;
        case 0x197ef0u: goto label_197ef0;
        case 0x197ef4u: goto label_197ef4;
        case 0x197ef8u: goto label_197ef8;
        case 0x197efcu: goto label_197efc;
        case 0x197f00u: goto label_197f00;
        case 0x197f04u: goto label_197f04;
        case 0x197f08u: goto label_197f08;
        case 0x197f0cu: goto label_197f0c;
        case 0x197f10u: goto label_197f10;
        case 0x197f14u: goto label_197f14;
        case 0x197f18u: goto label_197f18;
        case 0x197f1cu: goto label_197f1c;
        case 0x197f20u: goto label_197f20;
        case 0x197f24u: goto label_197f24;
        case 0x197f28u: goto label_197f28;
        case 0x197f2cu: goto label_197f2c;
        case 0x197f30u: goto label_197f30;
        case 0x197f34u: goto label_197f34;
        case 0x197f38u: goto label_197f38;
        case 0x197f3cu: goto label_197f3c;
        case 0x197f40u: goto label_197f40;
        case 0x197f44u: goto label_197f44;
        case 0x197f48u: goto label_197f48;
        case 0x197f4cu: goto label_197f4c;
        case 0x197f50u: goto label_197f50;
        case 0x197f54u: goto label_197f54;
        case 0x197f58u: goto label_197f58;
        case 0x197f5cu: goto label_197f5c;
        case 0x197f60u: goto label_197f60;
        case 0x197f64u: goto label_197f64;
        default: break;
    }

    ctx->pc = 0x197e80u;

label_197e80:
    // 0x197e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_197e84:
    // 0x197e84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x197e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_197e88:
    // 0x197e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_197e8c:
    // 0x197e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x197e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_197e90:
    // 0x197e90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197e94:
    // 0x197e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_197e98:
    // 0x197e98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197e9c:
    // 0x197e9c: 0x5043002d  beql        $v0, $v1, . + 4 + (0x2D << 2)
label_197ea0:
    if (ctx->pc == 0x197EA0u) {
        ctx->pc = 0x197EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E9Cu;
        // 0x197ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197EA4u;
        goto label_197ea4;
    }
    ctx->pc = 0x197E9Cu;
    {
        const bool branch_taken_0x197e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x197e9c) {
            ctx->pc = 0x197EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197E9Cu;
            // 0x197ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197F54u;
            goto label_197f54;
        }
    }
    ctx->pc = 0x197EA4u;
label_197ea4:
    // 0x197ea4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_197ea8:
    // 0x197ea8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_197eac:
    if (ctx->pc == 0x197EACu) {
        ctx->pc = 0x197EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EA8u;
        // 0x197eac: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197EB0u;
        goto label_197eb0;
    }
    ctx->pc = 0x197EA8u;
    {
        const bool branch_taken_0x197ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EA8u;
        // 0x197eac: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ea8) {
            ctx->pc = 0x197EC0u;
            goto label_197ec0;
        }
    }
    ctx->pc = 0x197EB0u;
label_197eb0:
    // 0x197eb0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x197eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_197eb4:
    // 0x197eb4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x197eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_197eb8:
    // 0x197eb8: 0x40f809  jalr        $v0
label_197ebc:
    if (ctx->pc == 0x197EBCu) {
        ctx->pc = 0x197EC0u;
        goto label_197ec0;
    }
    ctx->pc = 0x197EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197EC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197EB8u, 0x197EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197EC0u;
label_197ec0:
    // 0x197ec0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x197ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_197ec4:
    // 0x197ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197ec8:
    // 0x197ec8: 0xc061a16  jal         func_186858
label_197ecc:
    if (ctx->pc == 0x197ECCu) {
        ctx->pc = 0x197ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EC8u;
        // 0x197ecc: 0x26110050  addiu       $s1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197ED0u;
        goto label_197ed0;
    }
    ctx->pc = 0x197EC8u;
    SET_GPR_U32(ctx, 31, 0x197ED0u);
    ctx->pc = 0x197ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197EC8u;
    // 0x197ecc: 0x26110050  addiu       $s1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x197EC8u, 0x197ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197ED0u;
label_197ed0:
    // 0x197ed0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x197ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_197ed4:
    // 0x197ed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x197ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_197ed8:
    // 0x197ed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197edc:
    // 0x197edc: 0xc06ee7e  jal         func_1BB9F8
label_197ee0:
    if (ctx->pc == 0x197EE0u) {
        ctx->pc = 0x197EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EDCu;
        // 0x197ee0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197EE4u;
        goto label_197ee4;
    }
    ctx->pc = 0x197EDCu;
    SET_GPR_U32(ctx, 31, 0x197EE4u);
    ctx->pc = 0x197EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197EDCu;
    // 0x197ee0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x197EDCu, 0x197EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197EE4u;
label_197ee4:
    // 0x197ee4: 0xc061a16  jal         func_186858
label_197ee8:
    if (ctx->pc == 0x197EE8u) {
        ctx->pc = 0x197EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EE4u;
        // 0x197ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197EECu;
        goto label_197eec;
    }
    ctx->pc = 0x197EE4u;
    SET_GPR_U32(ctx, 31, 0x197EECu);
    ctx->pc = 0x197EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197EE4u;
    // 0x197ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x197EE4u, 0x197EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197EECu;
label_197eec:
    // 0x197eec: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x197eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_197ef0:
    // 0x197ef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_197ef4:
    // 0x197ef4: 0x0  nop
    ctx->pc = 0x197ef4u;
    // NOP
label_197ef8:
    // 0x197ef8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x197ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_197efc:
    // 0x197efc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x197efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_197f00:
    // 0x197f00: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_197f04:
    if (ctx->pc == 0x197F04u) {
        ctx->pc = 0x197F08u;
        goto label_197f08;
    }
    ctx->pc = 0x197F00u;
    {
        const bool branch_taken_0x197f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197f00) {
            ctx->pc = 0x197F34u;
            goto label_197f34;
        }
    }
    ctx->pc = 0x197F08u;
label_197f08:
    // 0x197f08: 0xc061a12  jal         func_186848
label_197f0c:
    if (ctx->pc == 0x197F0Cu) {
        ctx->pc = 0x197F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F08u;
        // 0x197f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F10u;
        goto label_197f10;
    }
    ctx->pc = 0x197F08u;
    SET_GPR_U32(ctx, 31, 0x197F10u);
    ctx->pc = 0x197F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F08u;
    // 0x197f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197F08u, 0x197F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F10u;
label_197f10:
    // 0x197f10: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x197f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_197f14:
    // 0x197f14: 0xc095368  jal         func_254DA0
label_197f18:
    if (ctx->pc == 0x197F18u) {
        ctx->pc = 0x197F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F14u;
        // 0x197f18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F1Cu;
        goto label_197f1c;
    }
    ctx->pc = 0x197F14u;
    SET_GPR_U32(ctx, 31, 0x197F1Cu);
    ctx->pc = 0x197F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F14u;
    // 0x197f18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x197F14u, 0x197F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F1Cu;
label_197f1c:
    // 0x197f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197f20:
    // 0x197f20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197f24:
    // 0x197f24: 0xc07023a  jal         func_1C08E8
label_197f28:
    if (ctx->pc == 0x197F28u) {
        ctx->pc = 0x197F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F24u;
        // 0x197f28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F2Cu;
        goto label_197f2c;
    }
    ctx->pc = 0x197F24u;
    SET_GPR_U32(ctx, 31, 0x197F2Cu);
    ctx->pc = 0x197F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F24u;
    // 0x197f28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x197F24u, 0x197F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F2Cu;
label_197f2c:
    // 0x197f2c: 0x10000009  b           . + 4 + (0x9 << 2)
label_197f30:
    if (ctx->pc == 0x197F30u) {
        ctx->pc = 0x197F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F2Cu;
        // 0x197f30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F34u;
        goto label_197f34;
    }
    ctx->pc = 0x197F2Cu;
    {
        const bool branch_taken_0x197f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F2Cu;
        // 0x197f30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f2c) {
            ctx->pc = 0x197F54u;
            goto label_197f54;
        }
    }
    ctx->pc = 0x197F34u;
label_197f34:
    // 0x197f34: 0xc061a12  jal         func_186848
label_197f38:
    if (ctx->pc == 0x197F38u) {
        ctx->pc = 0x197F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F34u;
        // 0x197f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F3Cu;
        goto label_197f3c;
    }
    ctx->pc = 0x197F34u;
    SET_GPR_U32(ctx, 31, 0x197F3Cu);
    ctx->pc = 0x197F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F34u;
    // 0x197f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197F34u, 0x197F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F3Cu;
label_197f3c:
    // 0x197f3c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x197f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_197f40:
    // 0x197f40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197f44:
    // 0x197f44: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x197f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_197f48:
    // 0x197f48: 0x40f809  jalr        $v0
label_197f4c:
    if (ctx->pc == 0x197F4Cu) {
        ctx->pc = 0x197F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F48u;
        // 0x197f4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F50u;
        goto label_197f50;
    }
    ctx->pc = 0x197F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197F50u);
        ctx->pc = 0x197F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F48u;
        // 0x197f4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F48u, 0x197F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197F50u;
label_197f50:
    // 0x197f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197f54:
    // 0x197f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_197f58:
    // 0x197f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_197f5c:
    // 0x197f5c: 0x3e00008  jr          $ra
label_197f60:
    if (ctx->pc == 0x197F60u) {
        ctx->pc = 0x197F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F5Cu;
        // 0x197f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F64u;
        goto label_197f64;
    }
    ctx->pc = 0x197F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F5Cu;
        // 0x197f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197F64u;
label_197f64:
    // 0x197f64: 0x0  nop
    ctx->pc = 0x197f64u;
    // NOP
    ctx->pc = 0x197f68u;
}
