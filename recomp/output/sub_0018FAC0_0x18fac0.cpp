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

// Function: sub_0018FAC0
// Address: 0x18fac0 - 0x18fc30
void sub_0018FAC0_0x18fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FAC0_0x18fac0");
#endif

    switch (ctx->pc) {
        case 0x18fac0u: goto label_18fac0;
        case 0x18fac4u: goto label_18fac4;
        case 0x18fac8u: goto label_18fac8;
        case 0x18faccu: goto label_18facc;
        case 0x18fad0u: goto label_18fad0;
        case 0x18fad4u: goto label_18fad4;
        case 0x18fad8u: goto label_18fad8;
        case 0x18fadcu: goto label_18fadc;
        case 0x18fae0u: goto label_18fae0;
        case 0x18fae4u: goto label_18fae4;
        case 0x18fae8u: goto label_18fae8;
        case 0x18faecu: goto label_18faec;
        case 0x18faf0u: goto label_18faf0;
        case 0x18faf4u: goto label_18faf4;
        case 0x18faf8u: goto label_18faf8;
        case 0x18fafcu: goto label_18fafc;
        case 0x18fb00u: goto label_18fb00;
        case 0x18fb04u: goto label_18fb04;
        case 0x18fb08u: goto label_18fb08;
        case 0x18fb0cu: goto label_18fb0c;
        case 0x18fb10u: goto label_18fb10;
        case 0x18fb14u: goto label_18fb14;
        case 0x18fb18u: goto label_18fb18;
        case 0x18fb1cu: goto label_18fb1c;
        case 0x18fb20u: goto label_18fb20;
        case 0x18fb24u: goto label_18fb24;
        case 0x18fb28u: goto label_18fb28;
        case 0x18fb2cu: goto label_18fb2c;
        case 0x18fb30u: goto label_18fb30;
        case 0x18fb34u: goto label_18fb34;
        case 0x18fb38u: goto label_18fb38;
        case 0x18fb3cu: goto label_18fb3c;
        case 0x18fb40u: goto label_18fb40;
        case 0x18fb44u: goto label_18fb44;
        case 0x18fb48u: goto label_18fb48;
        case 0x18fb4cu: goto label_18fb4c;
        case 0x18fb50u: goto label_18fb50;
        case 0x18fb54u: goto label_18fb54;
        case 0x18fb58u: goto label_18fb58;
        case 0x18fb5cu: goto label_18fb5c;
        case 0x18fb60u: goto label_18fb60;
        case 0x18fb64u: goto label_18fb64;
        case 0x18fb68u: goto label_18fb68;
        case 0x18fb6cu: goto label_18fb6c;
        case 0x18fb70u: goto label_18fb70;
        case 0x18fb74u: goto label_18fb74;
        case 0x18fb78u: goto label_18fb78;
        case 0x18fb7cu: goto label_18fb7c;
        case 0x18fb80u: goto label_18fb80;
        case 0x18fb84u: goto label_18fb84;
        case 0x18fb88u: goto label_18fb88;
        case 0x18fb8cu: goto label_18fb8c;
        case 0x18fb90u: goto label_18fb90;
        case 0x18fb94u: goto label_18fb94;
        case 0x18fb98u: goto label_18fb98;
        case 0x18fb9cu: goto label_18fb9c;
        case 0x18fba0u: goto label_18fba0;
        case 0x18fba4u: goto label_18fba4;
        case 0x18fba8u: goto label_18fba8;
        case 0x18fbacu: goto label_18fbac;
        case 0x18fbb0u: goto label_18fbb0;
        case 0x18fbb4u: goto label_18fbb4;
        case 0x18fbb8u: goto label_18fbb8;
        case 0x18fbbcu: goto label_18fbbc;
        case 0x18fbc0u: goto label_18fbc0;
        case 0x18fbc4u: goto label_18fbc4;
        case 0x18fbc8u: goto label_18fbc8;
        case 0x18fbccu: goto label_18fbcc;
        case 0x18fbd0u: goto label_18fbd0;
        case 0x18fbd4u: goto label_18fbd4;
        case 0x18fbd8u: goto label_18fbd8;
        case 0x18fbdcu: goto label_18fbdc;
        case 0x18fbe0u: goto label_18fbe0;
        case 0x18fbe4u: goto label_18fbe4;
        case 0x18fbe8u: goto label_18fbe8;
        case 0x18fbecu: goto label_18fbec;
        case 0x18fbf0u: goto label_18fbf0;
        case 0x18fbf4u: goto label_18fbf4;
        case 0x18fbf8u: goto label_18fbf8;
        case 0x18fbfcu: goto label_18fbfc;
        case 0x18fc00u: goto label_18fc00;
        case 0x18fc04u: goto label_18fc04;
        case 0x18fc08u: goto label_18fc08;
        case 0x18fc0cu: goto label_18fc0c;
        case 0x18fc10u: goto label_18fc10;
        case 0x18fc14u: goto label_18fc14;
        case 0x18fc18u: goto label_18fc18;
        case 0x18fc1cu: goto label_18fc1c;
        case 0x18fc20u: goto label_18fc20;
        case 0x18fc24u: goto label_18fc24;
        case 0x18fc28u: goto label_18fc28;
        case 0x18fc2cu: goto label_18fc2c;
        default: break;
    }

    ctx->pc = 0x18fac0u;

label_18fac0:
    // 0x18fac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18fac4:
    // 0x18fac4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x18fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_18fac8:
    // 0x18fac8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x18fac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_18facc:
    // 0x18facc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18faccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18fad0:
    // 0x18fad0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x18fad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_18fad4:
    // 0x18fad4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x18fad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_18fad8:
    // 0x18fad8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18fad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_18fadc:
    // 0x18fadc: 0xc061a16  jal         func_186858
label_18fae0:
    if (ctx->pc == 0x18FAE0u) {
        ctx->pc = 0x18FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FADCu;
        // 0x18fae0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAE4u;
        goto label_18fae4;
    }
    ctx->pc = 0x18FADCu;
    SET_GPR_U32(ctx, 31, 0x18FAE4u);
    ctx->pc = 0x18FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FADCu;
    // 0x18fae0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18FADCu, 0x18FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FAE4u;
label_18fae4:
    // 0x18fae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18fae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fae8:
    // 0x18fae8: 0xc06eebe  jal         func_1BBAF8
label_18faec:
    if (ctx->pc == 0x18FAECu) {
        ctx->pc = 0x18FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAE8u;
        // 0x18faec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAF0u;
        goto label_18faf0;
    }
    ctx->pc = 0x18FAE8u;
    SET_GPR_U32(ctx, 31, 0x18FAF0u);
    ctx->pc = 0x18FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FAE8u;
    // 0x18faec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x18FAE8u, 0x18FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FAF0u;
label_18faf0:
    // 0x18faf0: 0xc061a16  jal         func_186858
label_18faf4:
    if (ctx->pc == 0x18FAF4u) {
        ctx->pc = 0x18FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAF0u;
        // 0x18faf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAF8u;
        goto label_18faf8;
    }
    ctx->pc = 0x18FAF0u;
    SET_GPR_U32(ctx, 31, 0x18FAF8u);
    ctx->pc = 0x18FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FAF0u;
    // 0x18faf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18FAF0u, 0x18FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FAF8u;
label_18faf8:
    // 0x18faf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18faf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18fafc:
    // 0x18fafc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18fafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fb00:
    // 0x18fb00: 0x0  nop
    ctx->pc = 0x18fb00u;
    // NOP
label_18fb04:
    // 0x18fb04: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x18fb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_18fb08:
    // 0x18fb08: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x18fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_18fb0c:
    // 0x18fb0c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x18fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_18fb10:
    // 0x18fb10: 0x40f809  jalr        $v0
label_18fb14:
    if (ctx->pc == 0x18FB14u) {
        ctx->pc = 0x18FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB10u;
        // 0x18fb14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB18u;
        goto label_18fb18;
    }
    ctx->pc = 0x18FB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FB18u);
        ctx->pc = 0x18FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB10u;
        // 0x18fb14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FB10u, 0x18FB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FB18u;
label_18fb18:
    // 0x18fb18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18fb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fb1c:
    // 0x18fb1c: 0xc0f6a96  jal         func_3DAA58
label_18fb20:
    if (ctx->pc == 0x18FB20u) {
        ctx->pc = 0x18FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB1Cu;
        // 0x18fb20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB24u;
        goto label_18fb24;
    }
    ctx->pc = 0x18FB1Cu;
    SET_GPR_U32(ctx, 31, 0x18FB24u);
    ctx->pc = 0x18FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB1Cu;
    // 0x18fb20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18FB1Cu, 0x18FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB24u;
label_18fb24:
    // 0x18fb24: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x18fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_18fb28:
    // 0x18fb28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18fb2c:
    // 0x18fb2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18fb2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fb30:
    // 0x18fb30: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18fb34:
    // 0x18fb34: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x18fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_18fb38:
    // 0x18fb38: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x18fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
label_18fb3c:
    // 0x18fb3c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x18fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_18fb40:
    // 0x18fb40: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x18fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
label_18fb44:
    // 0x18fb44: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x18fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_18fb48:
    // 0x18fb48: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18fb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_18fb4c:
    // 0x18fb4c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x18fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18fb50:
    // 0x18fb50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18fb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_18fb54:
    // 0x18fb54: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x18fb54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18fb58:
    // 0x18fb58: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x18fb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fb5c:
    // 0x18fb5c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18fb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18fb60:
    // 0x18fb60: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x18fb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18fb64:
    // 0x18fb64: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_18fb68:
    if (ctx->pc == 0x18FB68u) {
        ctx->pc = 0x18FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB64u;
        // 0x18fb68: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB6Cu;
        goto label_18fb6c;
    }
    ctx->pc = 0x18FB64u;
    {
        const bool branch_taken_0x18fb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB64u;
        // 0x18fb68: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb64) {
            ctx->pc = 0x18FBA4u;
            goto label_18fba4;
        }
    }
    ctx->pc = 0x18FB6Cu;
label_18fb6c:
    // 0x18fb6c: 0xc061a16  jal         func_186858
label_18fb70:
    if (ctx->pc == 0x18FB70u) {
        ctx->pc = 0x18FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB6Cu;
        // 0x18fb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB74u;
        goto label_18fb74;
    }
    ctx->pc = 0x18FB6Cu;
    SET_GPR_U32(ctx, 31, 0x18FB74u);
    ctx->pc = 0x18FB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB6Cu;
    // 0x18fb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18FB6Cu, 0x18FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB74u;
label_18fb74:
    // 0x18fb74: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18fb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_18fb78:
    // 0x18fb78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18fb78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_18fb7c:
    // 0x18fb7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18fb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18fb80:
    // 0x18fb80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fb84:
    // 0x18fb84: 0xc06ee7e  jal         func_1BB9F8
label_18fb88:
    if (ctx->pc == 0x18FB88u) {
        ctx->pc = 0x18FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB84u;
        // 0x18fb88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB8Cu;
        goto label_18fb8c;
    }
    ctx->pc = 0x18FB84u;
    SET_GPR_U32(ctx, 31, 0x18FB8Cu);
    ctx->pc = 0x18FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB84u;
    // 0x18fb88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x18FB84u, 0x18FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB8Cu;
label_18fb8c:
    // 0x18fb8c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x18fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_18fb90:
    // 0x18fb90: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x18fb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fb94:
    // 0x18fb94: 0xc441c6a4  lwc1        $f1, -0x395C($v0)
    ctx->pc = 0x18fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18fb98:
    // 0x18fb98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18fb98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18fb9c:
    // 0x18fb9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_18fba0:
    if (ctx->pc == 0x18FBA0u) {
        ctx->pc = 0x18FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB9Cu;
        // 0x18fba0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBA4u;
        goto label_18fba4;
    }
    ctx->pc = 0x18FB9Cu;
    {
        const bool branch_taken_0x18fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB9Cu;
        // 0x18fba0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb9c) {
            ctx->pc = 0x18FBB8u;
            goto label_18fbb8;
        }
    }
    ctx->pc = 0x18FBA4u;
label_18fba4:
    // 0x18fba4: 0xc061a16  jal         func_186858
label_18fba8:
    if (ctx->pc == 0x18FBA8u) {
        ctx->pc = 0x18FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBA4u;
        // 0x18fba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBACu;
        goto label_18fbac;
    }
    ctx->pc = 0x18FBA4u;
    SET_GPR_U32(ctx, 31, 0x18FBACu);
    ctx->pc = 0x18FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FBA4u;
    // 0x18fba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18FBA4u, 0x18FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FBACu;
label_18fbac:
    // 0x18fbac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fbb0:
    // 0x18fbb0: 0xc06ee5c  jal         func_1BB970
label_18fbb4:
    if (ctx->pc == 0x18FBB4u) {
        ctx->pc = 0x18FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBB0u;
        // 0x18fbb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBB8u;
        goto label_18fbb8;
    }
    ctx->pc = 0x18FBB0u;
    SET_GPR_U32(ctx, 31, 0x18FBB8u);
    ctx->pc = 0x18FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FBB0u;
    // 0x18fbb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB970u, 0x18FBB0u, 0x18FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FBB8u;
label_18fbb8:
    // 0x18fbb8: 0xc061a12  jal         func_186848
label_18fbbc:
    if (ctx->pc == 0x18FBBCu) {
        ctx->pc = 0x18FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBB8u;
        // 0x18fbbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBC0u;
        goto label_18fbc0;
    }
    ctx->pc = 0x18FBB8u;
    SET_GPR_U32(ctx, 31, 0x18FBC0u);
    ctx->pc = 0x18FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FBB8u;
    // 0x18fbbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18FBB8u, 0x18FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FBC0u;
label_18fbc0:
    // 0x18fbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18fbc4:
    // 0x18fbc4: 0xc061a12  jal         func_186848
label_18fbc8:
    if (ctx->pc == 0x18FBC8u) {
        ctx->pc = 0x18FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBC4u;
        // 0x18fbc8: 0xac400338  sw          $zero, 0x338($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBCCu;
        goto label_18fbcc;
    }
    ctx->pc = 0x18FBC4u;
    SET_GPR_U32(ctx, 31, 0x18FBCCu);
    ctx->pc = 0x18FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FBC4u;
    // 0x18fbc8: 0xac400338  sw          $zero, 0x338($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18FBC4u, 0x18FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FBCCu;
label_18fbcc:
    // 0x18fbcc: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18fbd0:
    // 0x18fbd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fbd4:
    // 0x18fbd4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18fbd8:
    // 0x18fbd8: 0x40f809  jalr        $v0
label_18fbdc:
    if (ctx->pc == 0x18FBDCu) {
        ctx->pc = 0x18FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBD8u;
        // 0x18fbdc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBE0u;
        goto label_18fbe0;
    }
    ctx->pc = 0x18FBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FBE0u);
        ctx->pc = 0x18FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBD8u;
        // 0x18fbdc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FBD8u, 0x18FBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FBE0u;
label_18fbe0:
    // 0x18fbe0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18fbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_18fbe4:
    // 0x18fbe4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18fbe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_18fbe8:
    // 0x18fbe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18fbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fbec:
    // 0x18fbec: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x18fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
label_18fbf0:
    // 0x18fbf0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x18fbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_18fbf4:
    // 0x18fbf4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x18fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_18fbf8:
    // 0x18fbf8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x18fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_18fbfc:
    // 0x18fbfc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_18fc00:
    // 0x18fc00: 0x60f809  jalr        $v1
label_18fc04:
    if (ctx->pc == 0x18FC04u) {
        ctx->pc = 0x18FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC00u;
        // 0x18fc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC08u;
        goto label_18fc08;
    }
    ctx->pc = 0x18FC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18FC08u);
        ctx->pc = 0x18FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC00u;
        // 0x18fc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC00u, 0x18FC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FC08u;
label_18fc08:
    // 0x18fc08: 0x26620f90  addiu       $v0, $s3, 0xF90
    ctx->pc = 0x18fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3984));
label_18fc0c:
    // 0x18fc0c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x18fc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18fc10:
    // 0x18fc10: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x18fc10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_18fc14:
    // 0x18fc14: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x18fc14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18fc18:
    // 0x18fc18: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x18fc18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_18fc1c:
    // 0x18fc1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18fc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18fc20:
    // 0x18fc20: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x18fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_18fc24:
    // 0x18fc24: 0x3e00008  jr          $ra
label_18fc28:
    if (ctx->pc == 0x18FC28u) {
        ctx->pc = 0x18FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC24u;
        // 0x18fc28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC2Cu;
        goto label_18fc2c;
    }
    ctx->pc = 0x18FC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC24u;
        // 0x18fc28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FC2Cu;
label_18fc2c:
    // 0x18fc2c: 0x0  nop
    ctx->pc = 0x18fc2cu;
    // NOP
    ctx->pc = 0x18fc30u;
}
