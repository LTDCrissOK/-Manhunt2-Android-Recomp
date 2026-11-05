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

// Function: sub_0030EE58
// Address: 0x30ee58 - 0x30f100
void sub_0030EE58_0x30ee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030EE58_0x30ee58");
#endif

    switch (ctx->pc) {
        case 0x30ee58u: goto label_30ee58;
        case 0x30ee5cu: goto label_30ee5c;
        case 0x30ee60u: goto label_30ee60;
        case 0x30ee64u: goto label_30ee64;
        case 0x30ee68u: goto label_30ee68;
        case 0x30ee6cu: goto label_30ee6c;
        case 0x30ee70u: goto label_30ee70;
        case 0x30ee74u: goto label_30ee74;
        case 0x30ee78u: goto label_30ee78;
        case 0x30ee7cu: goto label_30ee7c;
        case 0x30ee80u: goto label_30ee80;
        case 0x30ee84u: goto label_30ee84;
        case 0x30ee88u: goto label_30ee88;
        case 0x30ee8cu: goto label_30ee8c;
        case 0x30ee90u: goto label_30ee90;
        case 0x30ee94u: goto label_30ee94;
        case 0x30ee98u: goto label_30ee98;
        case 0x30ee9cu: goto label_30ee9c;
        case 0x30eea0u: goto label_30eea0;
        case 0x30eea4u: goto label_30eea4;
        case 0x30eea8u: goto label_30eea8;
        case 0x30eeacu: goto label_30eeac;
        case 0x30eeb0u: goto label_30eeb0;
        case 0x30eeb4u: goto label_30eeb4;
        case 0x30eeb8u: goto label_30eeb8;
        case 0x30eebcu: goto label_30eebc;
        case 0x30eec0u: goto label_30eec0;
        case 0x30eec4u: goto label_30eec4;
        case 0x30eec8u: goto label_30eec8;
        case 0x30eeccu: goto label_30eecc;
        case 0x30eed0u: goto label_30eed0;
        case 0x30eed4u: goto label_30eed4;
        case 0x30eed8u: goto label_30eed8;
        case 0x30eedcu: goto label_30eedc;
        case 0x30eee0u: goto label_30eee0;
        case 0x30eee4u: goto label_30eee4;
        case 0x30eee8u: goto label_30eee8;
        case 0x30eeecu: goto label_30eeec;
        case 0x30eef0u: goto label_30eef0;
        case 0x30eef4u: goto label_30eef4;
        case 0x30eef8u: goto label_30eef8;
        case 0x30eefcu: goto label_30eefc;
        case 0x30ef00u: goto label_30ef00;
        case 0x30ef04u: goto label_30ef04;
        case 0x30ef08u: goto label_30ef08;
        case 0x30ef0cu: goto label_30ef0c;
        case 0x30ef10u: goto label_30ef10;
        case 0x30ef14u: goto label_30ef14;
        case 0x30ef18u: goto label_30ef18;
        case 0x30ef1cu: goto label_30ef1c;
        case 0x30ef20u: goto label_30ef20;
        case 0x30ef24u: goto label_30ef24;
        case 0x30ef28u: goto label_30ef28;
        case 0x30ef2cu: goto label_30ef2c;
        case 0x30ef30u: goto label_30ef30;
        case 0x30ef34u: goto label_30ef34;
        case 0x30ef38u: goto label_30ef38;
        case 0x30ef3cu: goto label_30ef3c;
        case 0x30ef40u: goto label_30ef40;
        case 0x30ef44u: goto label_30ef44;
        case 0x30ef48u: goto label_30ef48;
        case 0x30ef4cu: goto label_30ef4c;
        case 0x30ef50u: goto label_30ef50;
        case 0x30ef54u: goto label_30ef54;
        case 0x30ef58u: goto label_30ef58;
        case 0x30ef5cu: goto label_30ef5c;
        case 0x30ef60u: goto label_30ef60;
        case 0x30ef64u: goto label_30ef64;
        case 0x30ef68u: goto label_30ef68;
        case 0x30ef6cu: goto label_30ef6c;
        case 0x30ef70u: goto label_30ef70;
        case 0x30ef74u: goto label_30ef74;
        case 0x30ef78u: goto label_30ef78;
        case 0x30ef7cu: goto label_30ef7c;
        case 0x30ef80u: goto label_30ef80;
        case 0x30ef84u: goto label_30ef84;
        case 0x30ef88u: goto label_30ef88;
        case 0x30ef8cu: goto label_30ef8c;
        case 0x30ef90u: goto label_30ef90;
        case 0x30ef94u: goto label_30ef94;
        case 0x30ef98u: goto label_30ef98;
        case 0x30ef9cu: goto label_30ef9c;
        case 0x30efa0u: goto label_30efa0;
        case 0x30efa4u: goto label_30efa4;
        case 0x30efa8u: goto label_30efa8;
        case 0x30efacu: goto label_30efac;
        case 0x30efb0u: goto label_30efb0;
        case 0x30efb4u: goto label_30efb4;
        case 0x30efb8u: goto label_30efb8;
        case 0x30efbcu: goto label_30efbc;
        case 0x30efc0u: goto label_30efc0;
        case 0x30efc4u: goto label_30efc4;
        case 0x30efc8u: goto label_30efc8;
        case 0x30efccu: goto label_30efcc;
        case 0x30efd0u: goto label_30efd0;
        case 0x30efd4u: goto label_30efd4;
        case 0x30efd8u: goto label_30efd8;
        case 0x30efdcu: goto label_30efdc;
        case 0x30efe0u: goto label_30efe0;
        case 0x30efe4u: goto label_30efe4;
        case 0x30efe8u: goto label_30efe8;
        case 0x30efecu: goto label_30efec;
        case 0x30eff0u: goto label_30eff0;
        case 0x30eff4u: goto label_30eff4;
        case 0x30eff8u: goto label_30eff8;
        case 0x30effcu: goto label_30effc;
        case 0x30f000u: goto label_30f000;
        case 0x30f004u: goto label_30f004;
        case 0x30f008u: goto label_30f008;
        case 0x30f00cu: goto label_30f00c;
        case 0x30f010u: goto label_30f010;
        case 0x30f014u: goto label_30f014;
        case 0x30f018u: goto label_30f018;
        case 0x30f01cu: goto label_30f01c;
        case 0x30f020u: goto label_30f020;
        case 0x30f024u: goto label_30f024;
        case 0x30f028u: goto label_30f028;
        case 0x30f02cu: goto label_30f02c;
        case 0x30f030u: goto label_30f030;
        case 0x30f034u: goto label_30f034;
        case 0x30f038u: goto label_30f038;
        case 0x30f03cu: goto label_30f03c;
        case 0x30f040u: goto label_30f040;
        case 0x30f044u: goto label_30f044;
        case 0x30f048u: goto label_30f048;
        case 0x30f04cu: goto label_30f04c;
        case 0x30f050u: goto label_30f050;
        case 0x30f054u: goto label_30f054;
        case 0x30f058u: goto label_30f058;
        case 0x30f05cu: goto label_30f05c;
        case 0x30f060u: goto label_30f060;
        case 0x30f064u: goto label_30f064;
        case 0x30f068u: goto label_30f068;
        case 0x30f06cu: goto label_30f06c;
        case 0x30f070u: goto label_30f070;
        case 0x30f074u: goto label_30f074;
        case 0x30f078u: goto label_30f078;
        case 0x30f07cu: goto label_30f07c;
        case 0x30f080u: goto label_30f080;
        case 0x30f084u: goto label_30f084;
        case 0x30f088u: goto label_30f088;
        case 0x30f08cu: goto label_30f08c;
        case 0x30f090u: goto label_30f090;
        case 0x30f094u: goto label_30f094;
        case 0x30f098u: goto label_30f098;
        case 0x30f09cu: goto label_30f09c;
        case 0x30f0a0u: goto label_30f0a0;
        case 0x30f0a4u: goto label_30f0a4;
        case 0x30f0a8u: goto label_30f0a8;
        case 0x30f0acu: goto label_30f0ac;
        case 0x30f0b0u: goto label_30f0b0;
        case 0x30f0b4u: goto label_30f0b4;
        case 0x30f0b8u: goto label_30f0b8;
        case 0x30f0bcu: goto label_30f0bc;
        case 0x30f0c0u: goto label_30f0c0;
        case 0x30f0c4u: goto label_30f0c4;
        case 0x30f0c8u: goto label_30f0c8;
        case 0x30f0ccu: goto label_30f0cc;
        case 0x30f0d0u: goto label_30f0d0;
        case 0x30f0d4u: goto label_30f0d4;
        case 0x30f0d8u: goto label_30f0d8;
        case 0x30f0dcu: goto label_30f0dc;
        case 0x30f0e0u: goto label_30f0e0;
        case 0x30f0e4u: goto label_30f0e4;
        case 0x30f0e8u: goto label_30f0e8;
        case 0x30f0ecu: goto label_30f0ec;
        case 0x30f0f0u: goto label_30f0f0;
        case 0x30f0f4u: goto label_30f0f4;
        case 0x30f0f8u: goto label_30f0f8;
        case 0x30f0fcu: goto label_30f0fc;
        default: break;
    }

    ctx->pc = 0x30ee58u;

label_30ee58:
    // 0x30ee58: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_30ee5c:
    // 0x30ee5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30ee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ee60:
    // 0x30ee60: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x30ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_30ee64:
    // 0x30ee64: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x30ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_30ee68:
    // 0x30ee68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30ee68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30ee6c:
    // 0x30ee6c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x30ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_30ee70:
    // 0x30ee70: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x30ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_30ee74:
    // 0x30ee74: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x30ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_30ee78:
    // 0x30ee78: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x30ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_30ee7c:
    // 0x30ee7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x30ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30ee80:
    // 0x30ee80: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x30ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_30ee84:
    // 0x30ee84: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x30ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_30ee88:
    // 0x30ee88: 0x40f809  jalr        $v0
label_30ee8c:
    if (ctx->pc == 0x30EE8Cu) {
        ctx->pc = 0x30EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE88u;
        // 0x30ee8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EE90u;
        goto label_30ee90;
    }
    ctx->pc = 0x30EE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30EE90u);
        ctx->pc = 0x30EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE88u;
        // 0x30ee8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EE88u, 0x30EE90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30EE90u;
label_30ee90:
    // 0x30ee90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ee94:
    // 0x30ee94: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x30ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_30ee98:
    // 0x30ee98: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x30ee98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30ee9c:
    // 0x30ee9c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30ee9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_30eea0:
    // 0x30eea0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x30eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30eea4:
    // 0x30eea4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x30eea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_30eea8:
    // 0x30eea8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30eeac:
    // 0x30eeac: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x30eeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_30eeb0:
    // 0x30eeb0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x30eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30eeb4:
    // 0x30eeb4: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x30eeb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_30eeb8:
    // 0x30eeb8: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x30eeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30eebc:
    // 0x30eebc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x30eebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30eec0:
    // 0x30eec0: 0x0  nop
    ctx->pc = 0x30eec0u;
    // NOP
label_30eec4:
    // 0x30eec4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30eec8:
    if (ctx->pc == 0x30EEC8u) {
        ctx->pc = 0x30EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EEC4u;
        // 0x30eec8: 0x26440024  addiu       $a0, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EECCu;
        goto label_30eecc;
    }
    ctx->pc = 0x30EEC4u;
    {
        const bool branch_taken_0x30eec4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EEC4u;
        // 0x30eec8: 0x26440024  addiu       $a0, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eec4) {
            ctx->pc = 0x30EED0u;
            goto label_30eed0;
        }
    }
    ctx->pc = 0x30EECCu;
label_30eecc:
    // 0x30eecc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x30eeccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30eed0:
    // 0x30eed0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x30eed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30eed4:
    // 0x30eed4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x30eed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_30eed8:
    // 0x30eed8: 0x92420315  lbu         $v0, 0x315($s2)
    ctx->pc = 0x30eed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 789)));
label_30eedc:
    // 0x30eedc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_30eee0:
    if (ctx->pc == 0x30EEE0u) {
        ctx->pc = 0x30EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EEDCu;
        // 0x30eee0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EEE4u;
        goto label_30eee4;
    }
    ctx->pc = 0x30EEDCu;
    {
        const bool branch_taken_0x30eedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EEDCu;
        // 0x30eee0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eedc) {
            ctx->pc = 0x30EF08u;
            goto label_30ef08;
        }
    }
    ctx->pc = 0x30EEE4u;
label_30eee4:
    // 0x30eee4: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x30eee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_30eee8:
    // 0x30eee8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_30eeec:
    if (ctx->pc == 0x30EEECu) {
        ctx->pc = 0x30EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EEE8u;
        // 0x30eeec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EEF0u;
        goto label_30eef0;
    }
    ctx->pc = 0x30EEE8u;
    {
        const bool branch_taken_0x30eee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30eee8) {
            ctx->pc = 0x30EEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EEE8u;
            // 0x30eeec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EF0Cu;
            goto label_30ef0c;
        }
    }
    ctx->pc = 0x30EEF0u;
label_30eef0:
    // 0x30eef0: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x30eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_30eef4:
    // 0x30eef4: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x30eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_30eef8:
    // 0x30eef8: 0x2442ffb4  addiu       $v0, $v0, -0x4C
    ctx->pc = 0x30eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967220));
label_30eefc:
    // 0x30eefc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x30eefcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_30ef00:
    // 0x30ef00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_30ef04:
    if (ctx->pc == 0x30EF04u) {
        ctx->pc = 0x30EF08u;
        goto label_30ef08;
    }
    ctx->pc = 0x30EF00u;
    {
        const bool branch_taken_0x30ef00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ef00) {
            ctx->pc = 0x30EF0Cu;
            goto label_30ef0c;
        }
    }
    ctx->pc = 0x30EF08u;
label_30ef08:
    // 0x30ef08: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x30ef08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ef0c:
    // 0x30ef0c: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_30ef10:
    if (ctx->pc == 0x30EF10u) {
        ctx->pc = 0x30EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF0Cu;
        // 0x30ef10: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EF14u;
        goto label_30ef14;
    }
    ctx->pc = 0x30EF0Cu;
    {
        const bool branch_taken_0x30ef0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF0Cu;
        // 0x30ef10: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef0c) {
            ctx->pc = 0x30EF44u;
            goto label_30ef44;
        }
    }
    ctx->pc = 0x30EF14u;
label_30ef14:
    // 0x30ef14: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x30ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_30ef18:
    // 0x30ef18: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30ef18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_30ef1c:
    // 0x30ef1c: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x30ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_30ef20:
    // 0x30ef20: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x30ef20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_30ef24:
    // 0x30ef24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_30ef28:
    if (ctx->pc == 0x30EF28u) {
        ctx->pc = 0x30EF2Cu;
        goto label_30ef2c;
    }
    ctx->pc = 0x30EF24u;
    {
        const bool branch_taken_0x30ef24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ef24) {
            ctx->pc = 0x30EF3Cu;
            goto label_30ef3c;
        }
    }
    ctx->pc = 0x30EF2Cu;
label_30ef2c:
    // 0x30ef2c: 0xc0c38ae  jal         func_30E2B8
label_30ef30:
    if (ctx->pc == 0x30EF30u) {
        ctx->pc = 0x30EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF2Cu;
        // 0x30ef30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EF34u;
        goto label_30ef34;
    }
    ctx->pc = 0x30EF2Cu;
    SET_GPR_U32(ctx, 31, 0x30EF34u);
    ctx->pc = 0x30EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF2Cu;
    // 0x30ef30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E2B8u, 0x30EF2Cu, 0x30EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF34u;
label_30ef34:
    // 0x30ef34: 0x10000004  b           . + 4 + (0x4 << 2)
label_30ef38:
    if (ctx->pc == 0x30EF38u) {
        ctx->pc = 0x30EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF34u;
        // 0x30ef38: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EF3Cu;
        goto label_30ef3c;
    }
    ctx->pc = 0x30EF34u;
    {
        const bool branch_taken_0x30ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF34u;
        // 0x30ef38: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef34) {
            ctx->pc = 0x30EF48u;
            goto label_30ef48;
        }
    }
    ctx->pc = 0x30EF3Cu;
label_30ef3c:
    // 0x30ef3c: 0xc0c37e8  jal         func_30DFA0
label_30ef40:
    if (ctx->pc == 0x30EF40u) {
        ctx->pc = 0x30EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF3Cu;
        // 0x30ef40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EF44u;
        goto label_30ef44;
    }
    ctx->pc = 0x30EF3Cu;
    SET_GPR_U32(ctx, 31, 0x30EF44u);
    ctx->pc = 0x30EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF3Cu;
    // 0x30ef40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DFA0u, 0x30EF3Cu, 0x30EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF44u;
label_30ef44:
    // 0x30ef44: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x30ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_30ef48:
    // 0x30ef48: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30ef48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_30ef4c:
    // 0x30ef4c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x30ef4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_30ef50:
    // 0x30ef50: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30ef50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_30ef54:
    // 0x30ef54: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x30ef54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_30ef58:
    // 0x30ef58: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x30ef58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30ef5c:
    // 0x30ef5c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x30ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30ef60:
    // 0x30ef60: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x30ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ef64:
    // 0x30ef64: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x30ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ef68:
    // 0x30ef68: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x30ef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_30ef6c:
    // 0x30ef6c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x30ef6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_30ef70:
    // 0x30ef70: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x30ef70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_30ef74:
    // 0x30ef74: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x30ef74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_30ef78:
    // 0x30ef78: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x30ef78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_30ef7c:
    // 0x30ef7c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x30ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30ef80:
    // 0x30ef80: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x30ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30ef84:
    // 0x30ef84: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x30ef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30ef88:
    // 0x30ef88: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x30ef88u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_30ef8c:
    // 0x30ef8c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x30ef8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_30ef90:
    // 0x30ef90: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x30ef90u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_30ef94:
    // 0x30ef94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x30ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30ef98:
    // 0x30ef98: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x30ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_30ef9c:
    // 0x30ef9c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x30ef9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_30efa0:
    // 0x30efa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30efa4:
    if (ctx->pc == 0x30EFA4u) {
        ctx->pc = 0x30EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EFA0u;
        // 0x30efa4: 0x8e420fc8  lw          $v0, 0xFC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EFA8u;
        goto label_30efa8;
    }
    ctx->pc = 0x30EFA0u;
    {
        const bool branch_taken_0x30efa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EFA0u;
        // 0x30efa4: 0x8e420fc8  lw          $v0, 0xFC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30efa0) {
            ctx->pc = 0x30EFB8u;
            goto label_30efb8;
        }
    }
    ctx->pc = 0x30EFA8u;
label_30efa8:
    // 0x30efa8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x30efa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_30efac:
    // 0x30efac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30efacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30efb0:
    // 0x30efb0: 0x0  nop
    ctx->pc = 0x30efb0u;
    // NOP
label_30efb4:
    // 0x30efb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x30efb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_30efb8:
    // 0x30efb8: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
label_30efbc:
    if (ctx->pc == 0x30EFBCu) {
        ctx->pc = 0x30EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EFB8u;
        // 0x30efbc: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EFC0u;
        goto label_30efc0;
    }
    ctx->pc = 0x30EFB8u;
    {
        const bool branch_taken_0x30efb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EFB8u;
        // 0x30efbc: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30efb8) {
            ctx->pc = 0x30EFE8u;
            goto label_30efe8;
        }
    }
    ctx->pc = 0x30EFC0u;
label_30efc0:
    // 0x30efc0: 0x3c0139d1  lui         $at, 0x39D1
    ctx->pc = 0x30efc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14801 << 16));
label_30efc4:
    // 0x30efc4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x30efc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_30efc8:
    // 0x30efc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30efc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30efcc:
    // 0x30efcc: 0x0  nop
    ctx->pc = 0x30efccu;
    // NOP
label_30efd0:
    // 0x30efd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30efd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30efd4:
    // 0x30efd4: 0x0  nop
    ctx->pc = 0x30efd4u;
    // NOP
label_30efd8:
    // 0x30efd8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_30efdc:
    if (ctx->pc == 0x30EFDCu) {
        ctx->pc = 0x30EFE0u;
        goto label_30efe0;
    }
    ctx->pc = 0x30EFD8u;
    {
        const bool branch_taken_0x30efd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30efd8) {
            ctx->pc = 0x30EFE8u;
            goto label_30efe8;
        }
    }
    ctx->pc = 0x30EFE0u;
label_30efe0:
    // 0x30efe0: 0x5260003f  beql        $s3, $zero, . + 4 + (0x3F << 2)
label_30efe4:
    if (ctx->pc == 0x30EFE4u) {
        ctx->pc = 0x30EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EFE0u;
        // 0x30efe4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EFE8u;
        goto label_30efe8;
    }
    ctx->pc = 0x30EFE0u;
    {
        const bool branch_taken_0x30efe0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x30efe0) {
            ctx->pc = 0x30EFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EFE0u;
            // 0x30efe4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F0E0u;
            goto label_30f0e0;
        }
    }
    ctx->pc = 0x30EFE8u;
label_30efe8:
    // 0x30efe8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30efe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_30efec:
    // 0x30efec: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x30efecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_30eff0:
    // 0x30eff0: 0xc0b1488  jal         func_2C5220
label_30eff4:
    if (ctx->pc == 0x30EFF4u) {
        ctx->pc = 0x30EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EFF0u;
        // 0x30eff4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30EFF8u;
        goto label_30eff8;
    }
    ctx->pc = 0x30EFF0u;
    SET_GPR_U32(ctx, 31, 0x30EFF8u);
    ctx->pc = 0x30EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFF0u;
    // 0x30eff4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x30EFF0u, 0x30EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFF8u;
label_30eff8:
    // 0x30eff8: 0xc0c3dc2  jal         func_30F708
label_30effc:
    if (ctx->pc == 0x30EFFCu) {
        ctx->pc = 0x30F000u;
        goto label_30f000;
    }
    ctx->pc = 0x30EFF8u;
    SET_GPR_U32(ctx, 31, 0x30F000u);
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x30EFF8u, 0x30F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F000u;
label_30f000:
    // 0x30f000: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x30f000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_30f004:
    // 0x30f004: 0xc0c47b6  jal         func_311ED8
label_30f008:
    if (ctx->pc == 0x30F008u) {
        ctx->pc = 0x30F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F004u;
        // 0x30f008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F00Cu;
        goto label_30f00c;
    }
    ctx->pc = 0x30F004u;
    SET_GPR_U32(ctx, 31, 0x30F00Cu);
    ctx->pc = 0x30F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F004u;
    // 0x30f008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311ED8u, 0x30F004u, 0x30F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F00Cu;
label_30f00c:
    // 0x30f00c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f010:
    // 0x30f010: 0xc0c368e  jal         func_30DA38
label_30f014:
    if (ctx->pc == 0x30F014u) {
        ctx->pc = 0x30F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F010u;
        // 0x30f014: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F018u;
        goto label_30f018;
    }
    ctx->pc = 0x30F010u;
    SET_GPR_U32(ctx, 31, 0x30F018u);
    ctx->pc = 0x30F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F010u;
    // 0x30f014: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DA38u, 0x30F010u, 0x30F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F018u;
label_30f018:
    // 0x30f018: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30f018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30f01c:
    // 0x30f01c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x30f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_30f020:
    // 0x30f020: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x30f020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_30f024:
    // 0x30f024: 0x8e340020  lw          $s4, 0x20($s1)
    ctx->pc = 0x30f024u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_30f028:
    // 0x30f028: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_30f02c:
    if (ctx->pc == 0x30F02Cu) {
        ctx->pc = 0x30F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F028u;
        // 0x30f02c: 0x245081a0  addiu       $s0, $v0, -0x7E60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F030u;
        goto label_30f030;
    }
    ctx->pc = 0x30F028u;
    {
        const bool branch_taken_0x30f028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F028u;
        // 0x30f02c: 0x245081a0  addiu       $s0, $v0, -0x7E60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f028) {
            ctx->pc = 0x30F044u;
            goto label_30f044;
        }
    }
    ctx->pc = 0x30F030u;
label_30f030:
    // 0x30f030: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x30f030u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30f034:
    // 0x30f034: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x30f034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_30f038:
    // 0x30f038: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x30f038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_30f03c:
    // 0x30f03c: 0xc0b1ace  jal         func_2C6B38
label_30f040:
    if (ctx->pc == 0x30F040u) {
        ctx->pc = 0x30F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F03Cu;
        // 0x30f040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F044u;
        goto label_30f044;
    }
    ctx->pc = 0x30F03Cu;
    SET_GPR_U32(ctx, 31, 0x30F044u);
    ctx->pc = 0x30F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F03Cu;
    // 0x30f040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x30F03Cu, 0x30F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F044u;
label_30f044:
    // 0x30f044: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x30f044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_30f048:
    // 0x30f048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30f04c:
    // 0x30f04c: 0x0  nop
    ctx->pc = 0x30f04cu;
    // NOP
label_30f050:
    // 0x30f050: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30f050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_30f054:
    // 0x30f054: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_30f058:
    if (ctx->pc == 0x30F058u) {
        ctx->pc = 0x30F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F054u;
        // 0x30f058: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F05Cu;
        goto label_30f05c;
    }
    ctx->pc = 0x30F054u;
    {
        const bool branch_taken_0x30f054 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F054u;
        // 0x30f058: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f054) {
            ctx->pc = 0x30F068u;
            goto label_30f068;
        }
    }
    ctx->pc = 0x30F05Cu;
label_30f05c:
    // 0x30f05c: 0x8e420fc8  lw          $v0, 0xFC8($s2)
    ctx->pc = 0x30f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4040)));
label_30f060:
    // 0x30f060: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x30f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f064:
    // 0x30f064: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x30f064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_30f068:
    // 0x30f068: 0x46010800  add.s       $f0, $f1, $f1
    ctx->pc = 0x30f068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_30f06c:
    // 0x30f06c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x30f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_30f070:
    // 0x30f070: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30f070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30f074:
    // 0x30f074: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30f074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_30f078:
    // 0x30f078: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x30f078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_30f07c:
    // 0x30f07c: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_30f080:
    if (ctx->pc == 0x30F080u) {
        ctx->pc = 0x30F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F07Cu;
        // 0x30f080: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F084u;
        goto label_30f084;
    }
    ctx->pc = 0x30F07Cu;
    {
        const bool branch_taken_0x30f07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F07Cu;
        // 0x30f080: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f07c) {
            ctx->pc = 0x30F0DCu;
            goto label_30f0dc;
        }
    }
    ctx->pc = 0x30F084u;
label_30f084:
    // 0x30f084: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x30f084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_30f088:
    // 0x30f088: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x30f088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_30f08c:
    // 0x30f08c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30f08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30f090:
    // 0x30f090: 0xac62ffd8  sw          $v0, -0x28($v1)
    ctx->pc = 0x30f090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967256), GPR_U32(ctx, 2));
label_30f094:
    // 0x30f094: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x30f094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_30f098:
    // 0x30f098: 0xac62fff0  sw          $v0, -0x10($v1)
    ctx->pc = 0x30f098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 2));
label_30f09c:
    // 0x30f09c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x30f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_30f0a0:
    // 0x30f0a0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x30f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f0a4:
    // 0x30f0a4: 0xe460ffd0  swc1        $f0, -0x30($v1)
    ctx->pc = 0x30f0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967248), bits); }
label_30f0a8:
    // 0x30f0a8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x30f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f0ac:
    // 0x30f0ac: 0xe461ffe8  swc1        $f1, -0x18($v1)
    ctx->pc = 0x30f0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), bits); }
label_30f0b0:
    // 0x30f0b0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x30f0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f0b4:
    // 0x30f0b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30f0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_30f0b8:
    // 0x30f0b8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30f0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f0bc:
    // 0x30f0bc: 0xe461ffd4  swc1        $f1, -0x2C($v1)
    ctx->pc = 0x30f0bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967252), bits); }
label_30f0c0:
    // 0x30f0c0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x30f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f0c4:
    // 0x30f0c4: 0xe460ffec  swc1        $f0, -0x14($v1)
    ctx->pc = 0x30f0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967276), bits); }
label_30f0c8:
    // 0x30f0c8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x30f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f0cc:
    // 0x30f0cc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x30f0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_30f0d0:
    // 0x30f0d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x30f0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_30f0d4:
    // 0x30f0d4: 0x1485ffee  bne         $a0, $a1, . + 4 + (-0x12 << 2)
label_30f0d8:
    if (ctx->pc == 0x30F0D8u) {
        ctx->pc = 0x30F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0D4u;
        // 0x30f0d8: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F0DCu;
        goto label_30f0dc;
    }
    ctx->pc = 0x30F0D4u;
    {
        const bool branch_taken_0x30f0d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x30F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0D4u;
        // 0x30f0d8: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f0d4) {
            ctx->pc = 0x30F090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f090;
        }
    }
    ctx->pc = 0x30F0DCu;
label_30f0dc:
    // 0x30f0dc: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x30f0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_30f0e0:
    // 0x30f0e0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x30f0e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_30f0e4:
    // 0x30f0e4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x30f0e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_30f0e8:
    // 0x30f0e8: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x30f0e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_30f0ec:
    // 0x30f0ec: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x30f0ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_30f0f0:
    // 0x30f0f0: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x30f0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_30f0f4:
    // 0x30f0f4: 0x3e00008  jr          $ra
label_30f0f8:
    if (ctx->pc == 0x30F0F8u) {
        ctx->pc = 0x30F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0F4u;
        // 0x30f0f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F0FCu;
        goto label_30f0fc;
    }
    ctx->pc = 0x30F0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0F4u;
        // 0x30f0f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F0FCu;
label_30f0fc:
    // 0x30f0fc: 0x0  nop
    ctx->pc = 0x30f0fcu;
    // NOP
    ctx->pc = 0x30f100u;
}
