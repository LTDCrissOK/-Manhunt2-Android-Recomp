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

// Function: sub_00217E50
// Address: 0x217e50 - 0x217ff8
void sub_00217E50_0x217e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217E50_0x217e50");
#endif

    switch (ctx->pc) {
        case 0x217e50u: goto label_217e50;
        case 0x217e54u: goto label_217e54;
        case 0x217e58u: goto label_217e58;
        case 0x217e5cu: goto label_217e5c;
        case 0x217e60u: goto label_217e60;
        case 0x217e64u: goto label_217e64;
        case 0x217e68u: goto label_217e68;
        case 0x217e6cu: goto label_217e6c;
        case 0x217e70u: goto label_217e70;
        case 0x217e74u: goto label_217e74;
        case 0x217e78u: goto label_217e78;
        case 0x217e7cu: goto label_217e7c;
        case 0x217e80u: goto label_217e80;
        case 0x217e84u: goto label_217e84;
        case 0x217e88u: goto label_217e88;
        case 0x217e8cu: goto label_217e8c;
        case 0x217e90u: goto label_217e90;
        case 0x217e94u: goto label_217e94;
        case 0x217e98u: goto label_217e98;
        case 0x217e9cu: goto label_217e9c;
        case 0x217ea0u: goto label_217ea0;
        case 0x217ea4u: goto label_217ea4;
        case 0x217ea8u: goto label_217ea8;
        case 0x217eacu: goto label_217eac;
        case 0x217eb0u: goto label_217eb0;
        case 0x217eb4u: goto label_217eb4;
        case 0x217eb8u: goto label_217eb8;
        case 0x217ebcu: goto label_217ebc;
        case 0x217ec0u: goto label_217ec0;
        case 0x217ec4u: goto label_217ec4;
        case 0x217ec8u: goto label_217ec8;
        case 0x217eccu: goto label_217ecc;
        case 0x217ed0u: goto label_217ed0;
        case 0x217ed4u: goto label_217ed4;
        case 0x217ed8u: goto label_217ed8;
        case 0x217edcu: goto label_217edc;
        case 0x217ee0u: goto label_217ee0;
        case 0x217ee4u: goto label_217ee4;
        case 0x217ee8u: goto label_217ee8;
        case 0x217eecu: goto label_217eec;
        case 0x217ef0u: goto label_217ef0;
        case 0x217ef4u: goto label_217ef4;
        case 0x217ef8u: goto label_217ef8;
        case 0x217efcu: goto label_217efc;
        case 0x217f00u: goto label_217f00;
        case 0x217f04u: goto label_217f04;
        case 0x217f08u: goto label_217f08;
        case 0x217f0cu: goto label_217f0c;
        case 0x217f10u: goto label_217f10;
        case 0x217f14u: goto label_217f14;
        case 0x217f18u: goto label_217f18;
        case 0x217f1cu: goto label_217f1c;
        case 0x217f20u: goto label_217f20;
        case 0x217f24u: goto label_217f24;
        case 0x217f28u: goto label_217f28;
        case 0x217f2cu: goto label_217f2c;
        case 0x217f30u: goto label_217f30;
        case 0x217f34u: goto label_217f34;
        case 0x217f38u: goto label_217f38;
        case 0x217f3cu: goto label_217f3c;
        case 0x217f40u: goto label_217f40;
        case 0x217f44u: goto label_217f44;
        case 0x217f48u: goto label_217f48;
        case 0x217f4cu: goto label_217f4c;
        case 0x217f50u: goto label_217f50;
        case 0x217f54u: goto label_217f54;
        case 0x217f58u: goto label_217f58;
        case 0x217f5cu: goto label_217f5c;
        case 0x217f60u: goto label_217f60;
        case 0x217f64u: goto label_217f64;
        case 0x217f68u: goto label_217f68;
        case 0x217f6cu: goto label_217f6c;
        case 0x217f70u: goto label_217f70;
        case 0x217f74u: goto label_217f74;
        case 0x217f78u: goto label_217f78;
        case 0x217f7cu: goto label_217f7c;
        case 0x217f80u: goto label_217f80;
        case 0x217f84u: goto label_217f84;
        case 0x217f88u: goto label_217f88;
        case 0x217f8cu: goto label_217f8c;
        case 0x217f90u: goto label_217f90;
        case 0x217f94u: goto label_217f94;
        case 0x217f98u: goto label_217f98;
        case 0x217f9cu: goto label_217f9c;
        case 0x217fa0u: goto label_217fa0;
        case 0x217fa4u: goto label_217fa4;
        case 0x217fa8u: goto label_217fa8;
        case 0x217facu: goto label_217fac;
        case 0x217fb0u: goto label_217fb0;
        case 0x217fb4u: goto label_217fb4;
        case 0x217fb8u: goto label_217fb8;
        case 0x217fbcu: goto label_217fbc;
        case 0x217fc0u: goto label_217fc0;
        case 0x217fc4u: goto label_217fc4;
        case 0x217fc8u: goto label_217fc8;
        case 0x217fccu: goto label_217fcc;
        case 0x217fd0u: goto label_217fd0;
        case 0x217fd4u: goto label_217fd4;
        case 0x217fd8u: goto label_217fd8;
        case 0x217fdcu: goto label_217fdc;
        case 0x217fe0u: goto label_217fe0;
        case 0x217fe4u: goto label_217fe4;
        case 0x217fe8u: goto label_217fe8;
        case 0x217fecu: goto label_217fec;
        case 0x217ff0u: goto label_217ff0;
        case 0x217ff4u: goto label_217ff4;
        default: break;
    }

    ctx->pc = 0x217e50u;

label_217e50:
    // 0x217e50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x217e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_217e54:
    // 0x217e54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x217e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_217e58:
    // 0x217e58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x217e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_217e5c:
    // 0x217e5c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x217e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_217e60:
    // 0x217e60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x217e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_217e64:
    // 0x217e64: 0x3c11004a  lui         $s1, 0x4A
    ctx->pc = 0x217e64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)74 << 16));
label_217e68:
    // 0x217e68: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x217e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_217e6c:
    // 0x217e6c: 0x3c12004a  lui         $s2, 0x4A
    ctx->pc = 0x217e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)74 << 16));
label_217e70:
    // 0x217e70: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x217e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_217e74:
    // 0x217e74: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x217e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217e78:
    // 0x217e78: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x217e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_217e7c:
    // 0x217e7c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x217e7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_217e80:
    // 0x217e80: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x217e80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_217e84:
    // 0x217e84: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x217e84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_217e88:
    // 0x217e88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x217e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_217e8c:
    // 0x217e8c: 0xc085f62  jal         func_217D88
label_217e90:
    if (ctx->pc == 0x217E90u) {
        ctx->pc = 0x217E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E8Cu;
        // 0x217e90: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E94u;
        goto label_217e94;
    }
    ctx->pc = 0x217E8Cu;
    SET_GPR_U32(ctx, 31, 0x217E94u);
    ctx->pc = 0x217E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E8Cu;
    // 0x217e90: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D88u, 0x217E8Cu, 0x217E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E94u;
label_217e94:
    // 0x217e94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x217e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_217e98:
    // 0x217e98: 0xc085ec6  jal         func_217B18
label_217e9c:
    if (ctx->pc == 0x217E9Cu) {
        ctx->pc = 0x217E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E98u;
        // 0x217e9c: 0x8c449618  lw          $a0, -0x69E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217EA0u;
        goto label_217ea0;
    }
    ctx->pc = 0x217E98u;
    SET_GPR_U32(ctx, 31, 0x217EA0u);
    ctx->pc = 0x217E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E98u;
    // 0x217e9c: 0x8c449618  lw          $a0, -0x69E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217B18u, 0x217E98u, 0x217EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EA0u;
label_217ea0:
    // 0x217ea0: 0xc0c3464  jal         func_30D190
label_217ea4:
    if (ctx->pc == 0x217EA4u) {
        ctx->pc = 0x217EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EA0u;
        // 0x217ea4: 0x26443578  addiu       $a0, $s2, 0x3578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217EA8u;
        goto label_217ea8;
    }
    ctx->pc = 0x217EA0u;
    SET_GPR_U32(ctx, 31, 0x217EA8u);
    ctx->pc = 0x217EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EA0u;
    // 0x217ea4: 0x26443578  addiu       $a0, $s2, 0x3578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 13688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D190u, 0x217EA0u, 0x217EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EA8u;
label_217ea8:
    // 0x217ea8: 0xc0c3464  jal         func_30D190
label_217eac:
    if (ctx->pc == 0x217EACu) {
        ctx->pc = 0x217EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EA8u;
        // 0x217eac: 0x26243588  addiu       $a0, $s1, 0x3588 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 13704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217EB0u;
        goto label_217eb0;
    }
    ctx->pc = 0x217EA8u;
    SET_GPR_U32(ctx, 31, 0x217EB0u);
    ctx->pc = 0x217EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EA8u;
    // 0x217eac: 0x26243588  addiu       $a0, $s1, 0x3588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 13704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D190u, 0x217EA8u, 0x217EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EB0u;
label_217eb0:
    // 0x217eb0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x217eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_217eb4:
    // 0x217eb4: 0x8e03bd48  lw          $v1, -0x42B8($s0)
    ctx->pc = 0x217eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
label_217eb8:
    // 0x217eb8: 0x245234c0  addiu       $s2, $v0, 0x34C0
    ctx->pc = 0x217eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
label_217ebc:
    // 0x217ebc: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x217ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
label_217ec0:
    // 0x217ec0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_217ec4:
    // 0x217ec4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x217ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_217ec8:
    // 0x217ec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ecc:
    // 0x217ecc: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x217eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
label_217ed0:
    // 0x217ed0: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x217ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_217ed4:
    // 0x217ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_217ed8:
    // 0x217ed8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x217ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_217edc:
    // 0x217edc: 0xc47400f0  lwc1        $f20, 0xF0($v1)
    ctx->pc = 0x217edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_217ee0:
    // 0x217ee0: 0xe46100f0  swc1        $f1, 0xF0($v1)
    ctx->pc = 0x217ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
label_217ee4:
    // 0x217ee4: 0xc47500f4  lwc1        $f21, 0xF4($v1)
    ctx->pc = 0x217ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_217ee8:
    // 0x217ee8: 0x8e02bd48  lw          $v0, -0x42B8($s0)
    ctx->pc = 0x217ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
label_217eec:
    // 0x217eec: 0xc0db256  jal         func_36C958
label_217ef0:
    if (ctx->pc == 0x217EF0u) {
        ctx->pc = 0x217EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EECu;
        // 0x217ef0: 0xe44000f4  swc1        $f0, 0xF4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x217EF4u;
        goto label_217ef4;
    }
    ctx->pc = 0x217EECu;
    SET_GPR_U32(ctx, 31, 0x217EF4u);
    ctx->pc = 0x217EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EECu;
    // 0x217ef0: 0xe44000f4  swc1        $f0, 0xF4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x217EECu, 0x217EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EF4u;
label_217ef4:
    // 0x217ef4: 0x8e04bd48  lw          $a0, -0x42B8($s0)
    ctx->pc = 0x217ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
label_217ef8:
    // 0x217ef8: 0xc0c2a36  jal         func_30A8D8
label_217efc:
    if (ctx->pc == 0x217EFCu) {
        ctx->pc = 0x217EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EF8u;
        // 0x217efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F00u;
        goto label_217f00;
    }
    ctx->pc = 0x217EF8u;
    SET_GPR_U32(ctx, 31, 0x217F00u);
    ctx->pc = 0x217EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EF8u;
    // 0x217efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x217EF8u, 0x217F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F00u;
label_217f00:
    // 0x217f00: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_217f04:
    if (ctx->pc == 0x217F04u) {
        ctx->pc = 0x217F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F00u;
        // 0x217f04: 0x3c110006  lui         $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F08u;
        goto label_217f08;
    }
    ctx->pc = 0x217F00u;
    {
        const bool branch_taken_0x217f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F00u;
        // 0x217f04: 0x3c110006  lui         $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f00) {
            ctx->pc = 0x217FA4u;
            goto label_217fa4;
        }
    }
    ctx->pc = 0x217F08u;
label_217f08:
    // 0x217f08: 0x1000001a  b           . + 4 + (0x1A << 2)
label_217f0c:
    if (ctx->pc == 0x217F0Cu) {
        ctx->pc = 0x217F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F08u;
        // 0x217f0c: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F10u;
        goto label_217f10;
    }
    ctx->pc = 0x217F08u;
    {
        const bool branch_taken_0x217f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F08u;
        // 0x217f0c: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f08) {
            ctx->pc = 0x217F74u;
            goto label_217f74;
        }
    }
    ctx->pc = 0x217F10u;
label_217f10:
    // 0x217f10: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x217f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_217f14:
    // 0x217f14: 0x60f809  jalr        $v1
label_217f18:
    if (ctx->pc == 0x217F18u) {
        ctx->pc = 0x217F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F14u;
        // 0x217f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F1Cu;
        goto label_217f1c;
    }
    ctx->pc = 0x217F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217F1Cu);
        ctx->pc = 0x217F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F14u;
        // 0x217f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217F14u, 0x217F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217F1Cu;
label_217f1c:
    // 0x217f1c: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x217f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_217f20:
    // 0x217f20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_217f24:
    if (ctx->pc == 0x217F24u) {
        ctx->pc = 0x217F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F20u;
        // 0x217f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F28u;
        goto label_217f28;
    }
    ctx->pc = 0x217F20u;
    {
        const bool branch_taken_0x217f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F20u;
        // 0x217f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f20) {
            ctx->pc = 0x217F2Cu;
            goto label_217f2c;
        }
    }
    ctx->pc = 0x217F28u;
label_217f28:
    // 0x217f28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x217f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_217f2c:
    // 0x217f2c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_217f30:
    if (ctx->pc == 0x217F30u) {
        ctx->pc = 0x217F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F2Cu;
        // 0x217f30: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F34u;
        goto label_217f34;
    }
    ctx->pc = 0x217F2Cu;
    {
        const bool branch_taken_0x217f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217f2c) {
            ctx->pc = 0x217F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217F2Cu;
            // 0x217f30: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217F78u;
            goto label_217f78;
        }
    }
    ctx->pc = 0x217F34u;
label_217f34:
    // 0x217f34: 0xc085d78  jal         func_2175E0
label_217f38:
    if (ctx->pc == 0x217F38u) {
        ctx->pc = 0x217F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F34u;
        // 0x217f38: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F3Cu;
        goto label_217f3c;
    }
    ctx->pc = 0x217F34u;
    SET_GPR_U32(ctx, 31, 0x217F3Cu);
    ctx->pc = 0x217F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F34u;
    // 0x217f38: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x217F34u, 0x217F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F3Cu;
label_217f3c:
    // 0x217f3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_217f40:
    if (ctx->pc == 0x217F40u) {
        ctx->pc = 0x217F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F3Cu;
        // 0x217f40: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F44u;
        goto label_217f44;
    }
    ctx->pc = 0x217F3Cu;
    {
        const bool branch_taken_0x217f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F3Cu;
        // 0x217f40: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f3c) {
            ctx->pc = 0x217F74u;
            goto label_217f74;
        }
    }
    ctx->pc = 0x217F44u;
label_217f44:
    // 0x217f44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217f48:
    // 0x217f48: 0xc076340  jal         func_1D8D00
label_217f4c:
    if (ctx->pc == 0x217F4Cu) {
        ctx->pc = 0x217F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F48u;
        // 0x217f4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F50u;
        goto label_217f50;
    }
    ctx->pc = 0x217F48u;
    SET_GPR_U32(ctx, 31, 0x217F50u);
    ctx->pc = 0x217F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F48u;
    // 0x217f4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8D00u, 0x217F48u, 0x217F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F50u;
label_217f50:
    // 0x217f50: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x217f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_217f54:
    // 0x217f54: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x217f54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_217f58:
    // 0x217f58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x217f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_217f5c:
    // 0x217f5c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x217f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_217f60:
    // 0x217f60: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
label_217f64:
    if (ctx->pc == 0x217F64u) {
        ctx->pc = 0x217F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F60u;
        // 0x217f64: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F68u;
        goto label_217f68;
    }
    ctx->pc = 0x217F60u;
    {
        const bool branch_taken_0x217f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x217f60) {
            ctx->pc = 0x217F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217F60u;
            // 0x217f64: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217F78u;
            goto label_217f78;
        }
    }
    ctx->pc = 0x217F68u;
label_217f68:
    // 0x217f68: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x217f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217f6c:
    // 0x217f6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x217f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_217f70:
    // 0x217f70: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x217f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_217f74:
    // 0x217f74: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x217f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_217f78:
    // 0x217f78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_217f7c:
    if (ctx->pc == 0x217F7Cu) {
        ctx->pc = 0x217F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F78u;
        // 0x217f7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F80u;
        goto label_217f80;
    }
    ctx->pc = 0x217F78u;
    {
        const bool branch_taken_0x217f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F78u;
        // 0x217f7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f78) {
            ctx->pc = 0x217F84u;
            goto label_217f84;
        }
    }
    ctx->pc = 0x217F80u;
label_217f80:
    // 0x217f80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x217f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_217f84:
    // 0x217f84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_217f88:
    if (ctx->pc == 0x217F88u) {
        ctx->pc = 0x217F8Cu;
        goto label_217f8c;
    }
    ctx->pc = 0x217F84u;
    {
        const bool branch_taken_0x217f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217f84) {
            ctx->pc = 0x217F94u;
            goto label_217f94;
        }
    }
    ctx->pc = 0x217F8Cu;
label_217f8c:
    // 0x217f8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x217f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_217f90:
    // 0x217f90: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x217f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_217f94:
    // 0x217f94: 0x5600ffde  bnel        $s0, $zero, . + 4 + (-0x22 << 2)
label_217f98:
    if (ctx->pc == 0x217F98u) {
        ctx->pc = 0x217F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F94u;
        // 0x217f98: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217F9Cu;
        goto label_217f9c;
    }
    ctx->pc = 0x217F94u;
    {
        const bool branch_taken_0x217f94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x217f94) {
            ctx->pc = 0x217F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217F94u;
            // 0x217f98: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217f10;
        }
    }
    ctx->pc = 0x217F9Cu;
label_217f9c:
    // 0x217f9c: 0xc0c2bb8  jal         func_30AEE0
label_217fa0:
    if (ctx->pc == 0x217FA0u) {
        ctx->pc = 0x217FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F9Cu;
        // 0x217fa0: 0x8e64bd48  lw          $a0, -0x42B8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217FA4u;
        goto label_217fa4;
    }
    ctx->pc = 0x217F9Cu;
    SET_GPR_U32(ctx, 31, 0x217FA4u);
    ctx->pc = 0x217FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F9Cu;
    // 0x217fa0: 0x8e64bd48  lw          $a0, -0x42B8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x217F9Cu, 0x217FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FA4u;
label_217fa4:
    // 0x217fa4: 0xc0db2b6  jal         func_36CAD8
label_217fa8:
    if (ctx->pc == 0x217FA8u) {
        ctx->pc = 0x217FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FA4u;
        // 0x217fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217FACu;
        goto label_217fac;
    }
    ctx->pc = 0x217FA4u;
    SET_GPR_U32(ctx, 31, 0x217FACu);
    ctx->pc = 0x217FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FA4u;
    // 0x217fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x217FA4u, 0x217FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FACu;
label_217fac:
    // 0x217fac: 0x8e63bd48  lw          $v1, -0x42B8($s3)
    ctx->pc = 0x217facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
label_217fb0:
    // 0x217fb0: 0x26843578  addiu       $a0, $s4, 0x3578
    ctx->pc = 0x217fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 13688));
label_217fb4:
    // 0x217fb4: 0xe47400f0  swc1        $f20, 0xF0($v1)
    ctx->pc = 0x217fb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
label_217fb8:
    // 0x217fb8: 0x8e62bd48  lw          $v0, -0x42B8($s3)
    ctx->pc = 0x217fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
label_217fbc:
    // 0x217fbc: 0xc0c3464  jal         func_30D190
label_217fc0:
    if (ctx->pc == 0x217FC0u) {
        ctx->pc = 0x217FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FBCu;
        // 0x217fc0: 0xe45500f4  swc1        $f21, 0xF4($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x217FC4u;
        goto label_217fc4;
    }
    ctx->pc = 0x217FBCu;
    SET_GPR_U32(ctx, 31, 0x217FC4u);
    ctx->pc = 0x217FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FBCu;
    // 0x217fc0: 0xe45500f4  swc1        $f21, 0xF4($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D190u, 0x217FBCu, 0x217FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FC4u;
label_217fc4:
    // 0x217fc4: 0xc0c3464  jal         func_30D190
label_217fc8:
    if (ctx->pc == 0x217FC8u) {
        ctx->pc = 0x217FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FC4u;
        // 0x217fc8: 0x26a43588  addiu       $a0, $s5, 0x3588 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 13704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217FCCu;
        goto label_217fcc;
    }
    ctx->pc = 0x217FC4u;
    SET_GPR_U32(ctx, 31, 0x217FCCu);
    ctx->pc = 0x217FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217FC4u;
    // 0x217fc8: 0x26a43588  addiu       $a0, $s5, 0x3588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 13704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D190u, 0x217FC4u, 0x217FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FCCu;
label_217fcc:
    // 0x217fcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x217fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_217fd0:
    // 0x217fd0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x217fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_217fd4:
    // 0x217fd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x217fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_217fd8:
    // 0x217fd8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x217fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_217fdc:
    // 0x217fdc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x217fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_217fe0:
    // 0x217fe0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x217fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_217fe4:
    // 0x217fe4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x217fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_217fe8:
    // 0x217fe8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x217fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_217fec:
    // 0x217fec: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x217fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_217ff0:
    // 0x217ff0: 0x3e00008  jr          $ra
label_217ff4:
    if (ctx->pc == 0x217FF4u) {
        ctx->pc = 0x217FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FF0u;
        // 0x217ff4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217FF8u;
        goto label_fallthrough_0x217ff0;
    }
    ctx->pc = 0x217FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FF0u;
        // 0x217ff4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x217ff0:
    ctx->pc = 0x217FF8u;
}
