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

// Function: sub_0019EF88
// Address: 0x19ef88 - 0x19f060
void sub_0019EF88_0x19ef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EF88_0x19ef88");
#endif

    switch (ctx->pc) {
        case 0x19ef88u: goto label_19ef88;
        case 0x19ef8cu: goto label_19ef8c;
        case 0x19ef90u: goto label_19ef90;
        case 0x19ef94u: goto label_19ef94;
        case 0x19ef98u: goto label_19ef98;
        case 0x19ef9cu: goto label_19ef9c;
        case 0x19efa0u: goto label_19efa0;
        case 0x19efa4u: goto label_19efa4;
        case 0x19efa8u: goto label_19efa8;
        case 0x19efacu: goto label_19efac;
        case 0x19efb0u: goto label_19efb0;
        case 0x19efb4u: goto label_19efb4;
        case 0x19efb8u: goto label_19efb8;
        case 0x19efbcu: goto label_19efbc;
        case 0x19efc0u: goto label_19efc0;
        case 0x19efc4u: goto label_19efc4;
        case 0x19efc8u: goto label_19efc8;
        case 0x19efccu: goto label_19efcc;
        case 0x19efd0u: goto label_19efd0;
        case 0x19efd4u: goto label_19efd4;
        case 0x19efd8u: goto label_19efd8;
        case 0x19efdcu: goto label_19efdc;
        case 0x19efe0u: goto label_19efe0;
        case 0x19efe4u: goto label_19efe4;
        case 0x19efe8u: goto label_19efe8;
        case 0x19efecu: goto label_19efec;
        case 0x19eff0u: goto label_19eff0;
        case 0x19eff4u: goto label_19eff4;
        case 0x19eff8u: goto label_19eff8;
        case 0x19effcu: goto label_19effc;
        case 0x19f000u: goto label_19f000;
        case 0x19f004u: goto label_19f004;
        case 0x19f008u: goto label_19f008;
        case 0x19f00cu: goto label_19f00c;
        case 0x19f010u: goto label_19f010;
        case 0x19f014u: goto label_19f014;
        case 0x19f018u: goto label_19f018;
        case 0x19f01cu: goto label_19f01c;
        case 0x19f020u: goto label_19f020;
        case 0x19f024u: goto label_19f024;
        case 0x19f028u: goto label_19f028;
        case 0x19f02cu: goto label_19f02c;
        case 0x19f030u: goto label_19f030;
        case 0x19f034u: goto label_19f034;
        case 0x19f038u: goto label_19f038;
        case 0x19f03cu: goto label_19f03c;
        case 0x19f040u: goto label_19f040;
        case 0x19f044u: goto label_19f044;
        case 0x19f048u: goto label_19f048;
        case 0x19f04cu: goto label_19f04c;
        case 0x19f050u: goto label_19f050;
        case 0x19f054u: goto label_19f054;
        case 0x19f058u: goto label_19f058;
        case 0x19f05cu: goto label_19f05c;
        default: break;
    }

    ctx->pc = 0x19ef88u;

label_19ef88:
    // 0x19ef88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19ef8c:
    // 0x19ef8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19ef90:
    // 0x19ef90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ef94:
    // 0x19ef94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19ef98:
    // 0x19ef98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ef98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ef9c:
    // 0x19ef9c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19efa0:
    // 0x19efa0: 0x5043002c  beql        $v0, $v1, . + 4 + (0x2C << 2)
label_19efa4:
    if (ctx->pc == 0x19EFA4u) {
        ctx->pc = 0x19EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFA0u;
        // 0x19efa4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFA8u;
        goto label_19efa8;
    }
    ctx->pc = 0x19EFA0u;
    {
        const bool branch_taken_0x19efa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19efa0) {
            ctx->pc = 0x19EFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFA0u;
            // 0x19efa4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F054u;
            goto label_19f054;
        }
    }
    ctx->pc = 0x19EFA8u;
label_19efa8:
    // 0x19efa8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19efac:
    // 0x19efac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19efb0:
    if (ctx->pc == 0x19EFB0u) {
        ctx->pc = 0x19EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFACu;
        // 0x19efb0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFB4u;
        goto label_19efb4;
    }
    ctx->pc = 0x19EFACu;
    {
        const bool branch_taken_0x19efac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFACu;
        // 0x19efb0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efac) {
            ctx->pc = 0x19EFC4u;
            goto label_19efc4;
        }
    }
    ctx->pc = 0x19EFB4u;
label_19efb4:
    // 0x19efb4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19efb8:
    // 0x19efb8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19efbc:
    // 0x19efbc: 0x40f809  jalr        $v0
label_19efc0:
    if (ctx->pc == 0x19EFC0u) {
        ctx->pc = 0x19EFC4u;
        goto label_19efc4;
    }
    ctx->pc = 0x19EFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EFC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EFBCu, 0x19EFC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EFC4u;
label_19efc4:
    // 0x19efc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19efc8:
    // 0x19efc8: 0xc061a16  jal         func_186858
label_19efcc:
    if (ctx->pc == 0x19EFCCu) {
        ctx->pc = 0x19EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFC8u;
        // 0x19efcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFD0u;
        goto label_19efd0;
    }
    ctx->pc = 0x19EFC8u;
    SET_GPR_U32(ctx, 31, 0x19EFD0u);
    ctx->pc = 0x19EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFC8u;
    // 0x19efcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19EFC8u, 0x19EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFD0u;
label_19efd0:
    // 0x19efd0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x19efd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_19efd4:
    // 0x19efd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19efd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19efd8:
    // 0x19efd8: 0xc06ee70  jal         func_1BB9C0
label_19efdc:
    if (ctx->pc == 0x19EFDCu) {
        ctx->pc = 0x19EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFD8u;
        // 0x19efdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFE0u;
        goto label_19efe0;
    }
    ctx->pc = 0x19EFD8u;
    SET_GPR_U32(ctx, 31, 0x19EFE0u);
    ctx->pc = 0x19EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFD8u;
    // 0x19efdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x19EFD8u, 0x19EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFE0u;
label_19efe0:
    // 0x19efe0: 0xc061a16  jal         func_186858
label_19efe4:
    if (ctx->pc == 0x19EFE4u) {
        ctx->pc = 0x19EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFE0u;
        // 0x19efe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFE8u;
        goto label_19efe8;
    }
    ctx->pc = 0x19EFE0u;
    SET_GPR_U32(ctx, 31, 0x19EFE8u);
    ctx->pc = 0x19EFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFE0u;
    // 0x19efe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19EFE0u, 0x19EFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFE8u;
label_19efe8:
    // 0x19efe8: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x19efe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
label_19efec:
    // 0x19efec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19efecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19eff0:
    // 0x19eff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eff4:
    // 0x19eff4: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x19eff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
label_19eff8:
    // 0x19eff8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19eff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19effc:
    // 0x19effc: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x19effcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_19f000:
    // 0x19f000: 0xc061a16  jal         func_186858
label_19f004:
    if (ctx->pc == 0x19F004u) {
        ctx->pc = 0x19F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F000u;
        // 0x19f004: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F008u;
        goto label_19f008;
    }
    ctx->pc = 0x19F000u;
    SET_GPR_U32(ctx, 31, 0x19F008u);
    ctx->pc = 0x19F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F000u;
    // 0x19f004: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F000u, 0x19F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F008u;
label_19f008:
    // 0x19f008: 0x3c0140a6  lui         $at, 0x40A6
    ctx->pc = 0x19f008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16550 << 16));
label_19f00c:
    // 0x19f00c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19f00cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_19f010:
    // 0x19f010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f014:
    // 0x19f014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f018:
    // 0x19f018: 0xc061a16  jal         func_186858
label_19f01c:
    if (ctx->pc == 0x19F01Cu) {
        ctx->pc = 0x19F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F018u;
        // 0x19f01c: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F020u;
        goto label_19f020;
    }
    ctx->pc = 0x19F018u;
    SET_GPR_U32(ctx, 31, 0x19F020u);
    ctx->pc = 0x19F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F018u;
    // 0x19f01c: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F018u, 0x19F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F020u;
label_19f020:
    // 0x19f020: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19f024:
    // 0x19f024: 0xc06eebe  jal         func_1BBAF8
label_19f028:
    if (ctx->pc == 0x19F028u) {
        ctx->pc = 0x19F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F024u;
        // 0x19f028: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F02Cu;
        goto label_19f02c;
    }
    ctx->pc = 0x19F024u;
    SET_GPR_U32(ctx, 31, 0x19F02Cu);
    ctx->pc = 0x19F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F024u;
    // 0x19f028: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x19F024u, 0x19F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F02Cu;
label_19f02c:
    // 0x19f02c: 0xc061a16  jal         func_186858
label_19f030:
    if (ctx->pc == 0x19F030u) {
        ctx->pc = 0x19F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F02Cu;
        // 0x19f030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F034u;
        goto label_19f034;
    }
    ctx->pc = 0x19F02Cu;
    SET_GPR_U32(ctx, 31, 0x19F034u);
    ctx->pc = 0x19F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F02Cu;
    // 0x19f030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F02Cu, 0x19F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F034u;
label_19f034:
    // 0x19f034: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19f034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19f038:
    // 0x19f038: 0xc061a16  jal         func_186858
label_19f03c:
    if (ctx->pc == 0x19F03Cu) {
        ctx->pc = 0x19F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F038u;
        // 0x19f03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F040u;
        goto label_19f040;
    }
    ctx->pc = 0x19F038u;
    SET_GPR_U32(ctx, 31, 0x19F040u);
    ctx->pc = 0x19F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F038u;
    // 0x19f03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F038u, 0x19F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F040u;
label_19f040:
    // 0x19f040: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19f040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19f044:
    // 0x19f044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f048:
    // 0x19f048: 0x0  nop
    ctx->pc = 0x19f048u;
    // NOP
label_19f04c:
    // 0x19f04c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19f04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19f050:
    // 0x19f050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f054:
    // 0x19f054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19f058:
    // 0x19f058: 0x3e00008  jr          $ra
label_19f05c:
    if (ctx->pc == 0x19F05Cu) {
        ctx->pc = 0x19F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F058u;
        // 0x19f05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F060u;
        goto label_fallthrough_0x19f058;
    }
    ctx->pc = 0x19F058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F058u;
        // 0x19f05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19f058:
    ctx->pc = 0x19F060u;
}
