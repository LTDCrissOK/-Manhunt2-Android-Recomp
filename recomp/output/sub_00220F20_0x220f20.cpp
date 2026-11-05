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

// Function: sub_00220F20
// Address: 0x220f20 - 0x2214a8
void sub_00220F20_0x220f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220F20_0x220f20");
#endif

    switch (ctx->pc) {
        case 0x220f68u: goto label_220f68;
        case 0x220f84u: goto label_220f84;
        case 0x220f90u: goto label_220f90;
        case 0x220f98u: goto label_220f98;
        case 0x220fb4u: goto label_220fb4;
        case 0x220fe8u: goto label_220fe8;
        case 0x221008u: goto label_221008;
        case 0x221024u: goto label_221024;
        case 0x22102cu: goto label_22102c;
        case 0x221038u: goto label_221038;
        case 0x221044u: goto label_221044;
        case 0x22104cu: goto label_22104c;
        case 0x221060u: goto label_221060;
        case 0x22109cu: goto label_22109c;
        case 0x2210a4u: goto label_2210a4;
        case 0x2210acu: goto label_2210ac;
        case 0x2210b4u: goto label_2210b4;
        case 0x2210c0u: goto label_2210c0;
        case 0x2210ccu: goto label_2210cc;
        case 0x2211c8u: goto label_2211c8;
        case 0x2211d4u: goto label_2211d4;
        case 0x2211f0u: goto label_2211f0;
        case 0x2211fcu: goto label_2211fc;
        case 0x221218u: goto label_221218;
        case 0x221224u: goto label_221224;
        case 0x221284u: goto label_221284;
        case 0x22128cu: goto label_22128c;
        case 0x221298u: goto label_221298;
        case 0x2212a4u: goto label_2212a4;
        case 0x2212e0u: goto label_2212e0;
        case 0x2212ecu: goto label_2212ec;
        case 0x2212f4u: goto label_2212f4;
        case 0x221304u: goto label_221304;
        case 0x22130cu: goto label_22130c;
        case 0x221314u: goto label_221314;
        case 0x221324u: goto label_221324;
        case 0x22132cu: goto label_22132c;
        case 0x221390u: goto label_221390;
        case 0x221410u: goto label_221410;
        case 0x221440u: goto label_221440;
        default: break;
    }

    ctx->pc = 0x220f20u;

    // 0x220f20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x220f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x220f24: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x220f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x220f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f2c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x220f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x220f30: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x220f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x220f34: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x220f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x220f38: 0x2611038c  addiu       $s1, $s0, 0x38C
    ctx->pc = 0x220f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
    // 0x220f3c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x220f3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x220f40: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x220f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x220f44: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x220f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x220f48: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220f4c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x220f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x220f50: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x220f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x220f54: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x220f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x220f58: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x220f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x220f5c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x220f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x220f60: 0xc08897a  jal         func_2225E8
    ctx->pc = 0x220F60u;
    SET_GPR_U32(ctx, 31, 0x220F68u);
    ctx->pc = 0x220F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F60u;
    // 0x220f64: 0xe7b500c8  swc1        $f21, 0xC8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225E8u, 0x220F60u, 0x220F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F68u;
label_220f68:
    // 0x220f68: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x220f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x220f6c: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x220f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x220f70: 0x24421888  addiu       $v0, $v0, 0x1888
    ctx->pc = 0x220f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6280));
    // 0x220f74: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x220f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x220f78: 0x26040228  addiu       $a0, $s0, 0x228
    ctx->pc = 0x220f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x220f7c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x220F7Cu;
    SET_GPR_U32(ctx, 31, 0x220F84u);
    ctx->pc = 0x220F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F7Cu;
    // 0x220f80: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x220F7Cu, 0x220F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F84u;
label_220f84:
    // 0x220f84: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x220f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x220f88: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x220F88u;
    SET_GPR_U32(ctx, 31, 0x220F90u);
    ctx->pc = 0x220F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F88u;
    // 0x220f8c: 0x26040234  addiu       $a0, $s0, 0x234 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x220F88u, 0x220F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F90u;
label_220f90:
    // 0x220f90: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x220F90u;
    SET_GPR_U32(ctx, 31, 0x220F98u);
    ctx->pc = 0x220F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F90u;
    // 0x220f94: 0x2604023c  addiu       $a0, $s0, 0x23C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x220F90u, 0x220F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F98u;
label_220f98:
    // 0x220f98: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x220f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x220f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x220f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220fa0: 0x26040254  addiu       $a0, $s0, 0x254
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 596));
    // 0x220fa4: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x220fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x220fa8: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x220fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x220fac: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x220FACu;
    SET_GPR_U32(ctx, 31, 0x220FB4u);
    ctx->pc = 0x220FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220FACu;
    // 0x220fb0: 0xe6000250  swc1        $f0, 0x250($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x220FACu, 0x220FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FB4u;
label_220fb4:
    // 0x220fb4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x220fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x220fb8: 0x26020260  addiu       $v0, $s0, 0x260
    ctx->pc = 0x220fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x220fbc: 0xc4615af0  lwc1        $f1, 0x5AF0($v1)
    ctx->pc = 0x220fbcu;
    { uint32_t bits = FAST_READ32(0x575AF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220fc0: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x220fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x220fc4: 0x24635af0  addiu       $v1, $v1, 0x5AF0
    ctx->pc = 0x220fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23280));
    // 0x220fc8: 0xe6010260  swc1        $f1, 0x260($s0)
    ctx->pc = 0x220fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x220fcc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x220fccu;
    { uint32_t bits = FAST_READ32(0x575AF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220fd0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x220fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x220fd4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x220fd4u;
    { uint32_t bits = FAST_READ32(0x575AF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220fd8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x220fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x220fdc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x220fdcu;
    { uint32_t bits = FAST_READ32(0x575AFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220fe0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x220FE0u;
    SET_GPR_U32(ctx, 31, 0x220FE8u);
    ctx->pc = 0x220FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220FE0u;
    // 0x220fe4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x220FE0u, 0x220FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FE8u;
label_220fe8:
    // 0x220fe8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x220fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x220fec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x220fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x220ff0: 0xc4542b38  lwc1        $f20, 0x2B38($v0)
    ctx->pc = 0x220ff0u;
    { uint32_t bits = FAST_READ32(0x462B38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x220ff4: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x220ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x220ff8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x220ff8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x220ffc: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x220ffcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x221000: 0xc0b187c  jal         func_2C61F0
    ctx->pc = 0x221000u;
    SET_GPR_U32(ctx, 31, 0x221008u);
    ctx->pc = 0x221004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221000u;
    // 0x221004: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C61F0u, 0x221000u, 0x221008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221008u;
label_221008:
    // 0x221008: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x221008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x22100c: 0xe6140290  swc1        $f20, 0x290($s0)
    ctx->pc = 0x22100cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x221010: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x221010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x221014: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x221014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x221018: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x221018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22101c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x22101Cu;
    SET_GPR_U32(ctx, 31, 0x221024u);
    ctx->pc = 0x221020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22101Cu;
    // 0x221020: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22101Cu, 0x221024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221024u;
label_221024:
    // 0x221024: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x221024u;
    SET_GPR_U32(ctx, 31, 0x22102Cu);
    ctx->pc = 0x221028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221024u;
    // 0x221028: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x221024u, 0x22102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22102Cu;
label_22102c:
    // 0x22102c: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x22102cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x221030: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x221030u;
    SET_GPR_U32(ctx, 31, 0x221038u);
    ctx->pc = 0x221034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221030u;
    // 0x221034: 0x260402e4  addiu       $a0, $s0, 0x2E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 740));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x221030u, 0x221038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221038u;
label_221038:
    // 0x221038: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x221038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
    // 0x22103c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x22103Cu;
    SET_GPR_U32(ctx, 31, 0x221044u);
    ctx->pc = 0x221040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22103Cu;
    // 0x221040: 0x260402f0  addiu       $a0, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22103Cu, 0x221044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221044u;
label_221044:
    // 0x221044: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x221044u;
    SET_GPR_U32(ctx, 31, 0x22104Cu);
    ctx->pc = 0x221048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221044u;
    // 0x221048: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x221044u, 0x22104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22104Cu;
label_22104c:
    // 0x22104c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22104cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221054: 0x26040314  addiu       $a0, $s0, 0x314
    ctx->pc = 0x221054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
    // 0x221058: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x221058u;
    SET_GPR_U32(ctx, 31, 0x221060u);
    ctx->pc = 0x22105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221058u;
    // 0x22105c: 0xe6000310  swc1        $f0, 0x310($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x221058u, 0x221060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221060u;
label_221060:
    // 0x221060: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x221060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x221064: 0x26020320  addiu       $v0, $s0, 0x320
    ctx->pc = 0x221064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x221068: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x221068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x22106c: 0x26050330  addiu       $a1, $s0, 0x330
    ctx->pc = 0x22106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x221070: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x221070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x221074: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x221074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x221078: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x221078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x22107c: 0x24631868  addiu       $v1, $v1, 0x1868
    ctx->pc = 0x22107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6248));
    // 0x221080: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x221080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x221084: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x221084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x221088: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x221088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x22108c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x22108cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x221090: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x221090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x221094: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x221094u;
    SET_GPR_U32(ctx, 31, 0x22109Cu);
    ctx->pc = 0x221098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221094u;
    // 0x221098: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x221094u, 0x22109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22109Cu;
label_22109c:
    // 0x22109c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22109Cu;
    SET_GPR_U32(ctx, 31, 0x2210A4u);
    ctx->pc = 0x2210A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22109Cu;
    // 0x2210a0: 0x26040348  addiu       $a0, $s0, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22109Cu, 0x2210A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210A4u;
label_2210a4:
    // 0x2210a4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2210A4u;
    SET_GPR_U32(ctx, 31, 0x2210ACu);
    ctx->pc = 0x2210A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210A4u;
    // 0x2210a8: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2210A4u, 0x2210ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210ACu;
label_2210ac:
    // 0x2210ac: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2210ACu;
    SET_GPR_U32(ctx, 31, 0x2210B4u);
    ctx->pc = 0x2210B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210ACu;
    // 0x2210b0: 0x26040358  addiu       $a0, $s0, 0x358 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2210ACu, 0x2210B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210B4u;
label_2210b4:
    // 0x2210b4: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x2210b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x2210b8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2210B8u;
    SET_GPR_U32(ctx, 31, 0x2210C0u);
    ctx->pc = 0x2210BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210B8u;
    // 0x2210bc: 0x26040364  addiu       $a0, $s0, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2210B8u, 0x2210C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210C0u;
label_2210c0:
    // 0x2210c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2210c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210c4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2210C4u;
    SET_GPR_U32(ctx, 31, 0x2210CCu);
    ctx->pc = 0x2210C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210C4u;
    // 0x2210c8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2210C4u, 0x2210CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210CCu;
label_2210cc:
    // 0x2210cc: 0x0  nop
    ctx->pc = 0x2210ccu;
    // NOP
    // 0x2210d0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2210D0u;
    {
        const bool branch_taken_0x2210d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2210D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2210D0u;
        // 0x2210d4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210d0) {
            ctx->pc = 0x2210C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2210c0;
        }
    }
    ctx->pc = 0x2210D8u;
    // 0x2210d8: 0x260205d0  addiu       $v0, $s0, 0x5D0
    ctx->pc = 0x2210d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
    // 0x2210dc: 0x260405e0  addiu       $a0, $s0, 0x5E0
    ctx->pc = 0x2210dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1504));
    // 0x2210e0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2210e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2210e4: 0x261103bc  addiu       $s1, $s0, 0x3BC
    ctx->pc = 0x2210e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 956));
    // 0x2210e8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2210e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2210ec: 0x260205f0  addiu       $v0, $s0, 0x5F0
    ctx->pc = 0x2210ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    // 0x2210f0: 0x26040610  addiu       $a0, $s0, 0x610
    ctx->pc = 0x2210f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x2210f4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2210f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2210f8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2210f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2210fc: 0x26020630  addiu       $v0, $s0, 0x630
    ctx->pc = 0x2210fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x221100: 0x26040638  addiu       $a0, $s0, 0x638
    ctx->pc = 0x221100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1592));
    // 0x221104: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x221104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x221108: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x221108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x22110c: 0x26020654  addiu       $v0, $s0, 0x654
    ctx->pc = 0x22110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1620));
    // 0x221110: 0x26040660  addiu       $a0, $s0, 0x660
    ctx->pc = 0x221110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x221114: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x221114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x221118: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x221118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x22111c: 0x2602066c  addiu       $v0, $s0, 0x66C
    ctx->pc = 0x22111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1644));
    // 0x221120: 0x26040694  addiu       $a0, $s0, 0x694
    ctx->pc = 0x221120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1684));
    // 0x221124: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x221124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x221128: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x221128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x22112c: 0x2602069c  addiu       $v0, $s0, 0x69C
    ctx->pc = 0x22112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1692));
    // 0x221130: 0x260403ac  addiu       $a0, $s0, 0x3AC
    ctx->pc = 0x221130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 940));
    // 0x221134: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x221134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x221138: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x221138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x22113c: 0x2602036c  addiu       $v0, $s0, 0x36C
    ctx->pc = 0x22113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 876));
    // 0x221140: 0x2604037c  addiu       $a0, $s0, 0x37C
    ctx->pc = 0x221140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 892));
    // 0x221144: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x221144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x221148: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x221148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x22114c: 0x260203dc  addiu       $v0, $s0, 0x3DC
    ctx->pc = 0x22114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 988));
    // 0x221150: 0x2604040c  addiu       $a0, $s0, 0x40C
    ctx->pc = 0x221150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1036));
    // 0x221154: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x221154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x221158: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22115c: 0x2602041c  addiu       $v0, $s0, 0x41C
    ctx->pc = 0x22115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    // 0x221160: 0x2604042c  addiu       $a0, $s0, 0x42C
    ctx->pc = 0x221160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1068));
    // 0x221164: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x221164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x221168: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x221168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22116c: 0x2602043c  addiu       $v0, $s0, 0x43C
    ctx->pc = 0x22116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1084));
    // 0x221170: 0x2604044c  addiu       $a0, $s0, 0x44C
    ctx->pc = 0x221170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1100));
    // 0x221174: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x221174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x221178: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x221178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x22117c: 0x2602045c  addiu       $v0, $s0, 0x45C
    ctx->pc = 0x22117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1116));
    // 0x221180: 0x2604046c  addiu       $a0, $s0, 0x46C
    ctx->pc = 0x221180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1132));
    // 0x221184: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x221184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x221188: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x221188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x22118c: 0x2602047c  addiu       $v0, $s0, 0x47C
    ctx->pc = 0x22118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1148));
    // 0x221190: 0x260404a0  addiu       $a0, $s0, 0x4A0
    ctx->pc = 0x221190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1184));
    // 0x221194: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x221194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x221198: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x221198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x22119c: 0x260204b0  addiu       $v0, $s0, 0x4B0
    ctx->pc = 0x22119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1200));
    // 0x2211a0: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x2211a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x2211a4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2211a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2211a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2211a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2211ac: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x2211acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2211b0: 0x261603ec  addiu       $s6, $s0, 0x3EC
    ctx->pc = 0x2211b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1004));
    // 0x2211b4: 0x26170480  addiu       $s7, $s0, 0x480
    ctx->pc = 0x2211b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x2211b8: 0x261405a0  addiu       $s4, $s0, 0x5A0
    ctx->pc = 0x2211b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x2211bc: 0x261e05c0  addiu       $fp, $s0, 0x5C0
    ctx->pc = 0x2211bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x2211c0: 0x26150600  addiu       $s5, $s0, 0x600
    ctx->pc = 0x2211c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x2211c4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2211c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2211c8:
    // 0x2211c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2211c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211cc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2211CCu;
    SET_GPR_U32(ctx, 31, 0x2211D4u);
    ctx->pc = 0x2211D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211CCu;
    // 0x2211d0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2211CCu, 0x2211D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211D4u;
label_2211d4:
    // 0x2211d4: 0x0  nop
    ctx->pc = 0x2211d4u;
    // NOP
    // 0x2211d8: 0x1672fffb  bne         $s3, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2211D8u;
    {
        const bool branch_taken_0x2211d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x2211DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2211D8u;
        // 0x2211dc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211d8) {
            ctx->pc = 0x2211C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2211c8;
        }
    }
    ctx->pc = 0x2211E0u;
    // 0x2211e0: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x2211e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211e4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2211e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2211e8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2211e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2211ec: 0x0  nop
    ctx->pc = 0x2211ecu;
    // NOP
label_2211f0:
    // 0x2211f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2211f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211f4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2211F4u;
    SET_GPR_U32(ctx, 31, 0x2211FCu);
    ctx->pc = 0x2211F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2211F4u;
    // 0x2211f8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2211F4u, 0x2211FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211FCu;
label_2211fc:
    // 0x2211fc: 0x0  nop
    ctx->pc = 0x2211fcu;
    // NOP
    // 0x221200: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x221200u;
    {
        const bool branch_taken_0x221200 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x221204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221200u;
        // 0x221204: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221200) {
            ctx->pc = 0x2211F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2211f0;
        }
    }
    ctx->pc = 0x221208u;
    // 0x221208: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x221208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22120c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x22120cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x221210: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x221210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221214: 0x0  nop
    ctx->pc = 0x221214u;
    // NOP
label_221218:
    // 0x221218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22121c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22121Cu;
    SET_GPR_U32(ctx, 31, 0x221224u);
    ctx->pc = 0x221220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22121Cu;
    // 0x221220: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22121Cu, 0x221224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221224u;
label_221224:
    // 0x221224: 0x0  nop
    ctx->pc = 0x221224u;
    // NOP
    // 0x221228: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x221228u;
    {
        const bool branch_taken_0x221228 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x22122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221228u;
        // 0x22122c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221228) {
            ctx->pc = 0x221218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221218;
        }
    }
    ctx->pc = 0x221230u;
    // 0x221230: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x221230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x221234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221238: 0x2402008e  addiu       $v0, $zero, 0x8E
    ctx->pc = 0x221238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x22123c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22123cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x221240: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x221240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221244: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x221244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22124c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x22124cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x221250: 0xe6000584  swc1        $f0, 0x584($s0)
    ctx->pc = 0x221250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1412), bits); }
    // 0x221254: 0xae020580  sw          $v0, 0x580($s0)
    ctx->pc = 0x221254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 2));
    // 0x221258: 0xae000588  sw          $zero, 0x588($s0)
    ctx->pc = 0x221258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
    // 0x22125c: 0xae00058c  sw          $zero, 0x58C($s0)
    ctx->pc = 0x22125cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
    // 0x221260: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x221260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x221264: 0xe6140594  swc1        $f20, 0x594($s0)
    ctx->pc = 0x221264u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1428), bits); }
    // 0x221268: 0xe6140598  swc1        $f20, 0x598($s0)
    ctx->pc = 0x221268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1432), bits); }
    // 0x22126c: 0xae00059c  sw          $zero, 0x59C($s0)
    ctx->pc = 0x22126cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 0));
    // 0x221270: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x221270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x221274: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x221274u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x221278: 0xe6950004  swc1        $f21, 0x4($s4)
    ctx->pc = 0x221278u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x22127c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x22127Cu;
    SET_GPR_U32(ctx, 31, 0x221284u);
    ctx->pc = 0x221280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22127Cu;
    // 0x221280: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22127Cu, 0x221284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221284u;
label_221284:
    // 0x221284: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x221284u;
    SET_GPR_U32(ctx, 31, 0x22128Cu);
    ctx->pc = 0x221288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221284u;
    // 0x221288: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x221284u, 0x22128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22128Cu;
label_22128c:
    // 0x22128c: 0xae0005d8  sw          $zero, 0x5D8($s0)
    ctx->pc = 0x22128cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1496), GPR_U32(ctx, 0));
    // 0x221290: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x221290u;
    SET_GPR_U32(ctx, 31, 0x221298u);
    ctx->pc = 0x221294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221290u;
    // 0x221294: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x221290u, 0x221298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221298u;
label_221298:
    // 0x221298: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x221298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x22129c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x22129Cu;
    SET_GPR_U32(ctx, 31, 0x2212A4u);
    ctx->pc = 0x2212A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22129Cu;
    // 0x2212a0: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22129Cu, 0x2212A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212A4u;
label_2212a4:
    // 0x2212a4: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x2212a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x2212a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2212a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2212ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2212acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2212b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2212b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2212b4: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2212b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2212b8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2212b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2212bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2212bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2212c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2212c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2212c4: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x2212c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x2212c8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2212c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2212cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2212ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2212d0: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x2212d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x2212d4: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x2212d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x2212d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2212D8u;
    SET_GPR_U32(ctx, 31, 0x2212E0u);
    ctx->pc = 0x2212DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212D8u;
    // 0x2212dc: 0xe6a20004  swc1        $f2, 0x4($s5) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2212D8u, 0x2212E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212E0u;
label_2212e0:
    // 0x2212e0: 0xae000620  sw          $zero, 0x620($s0)
    ctx->pc = 0x2212e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 0));
    // 0x2212e4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2212E4u;
    SET_GPR_U32(ctx, 31, 0x2212ECu);
    ctx->pc = 0x2212E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212E4u;
    // 0x2212e8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2212E4u, 0x2212ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212ECu;
label_2212ec:
    // 0x2212ec: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2212ECu;
    SET_GPR_U32(ctx, 31, 0x2212F4u);
    ctx->pc = 0x2212F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212ECu;
    // 0x2212f0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2212ECu, 0x2212F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212F4u;
label_2212f4:
    // 0x2212f4: 0xe6150644  swc1        $f21, 0x644($s0)
    ctx->pc = 0x2212f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1604), bits); }
    // 0x2212f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2212f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2212fc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2212FCu;
    SET_GPR_U32(ctx, 31, 0x221304u);
    ctx->pc = 0x221300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212FCu;
    // 0x221300: 0xae000648  sw          $zero, 0x648($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1608), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2212FCu, 0x221304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221304u;
label_221304:
    // 0x221304: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x221304u;
    SET_GPR_U32(ctx, 31, 0x22130Cu);
    ctx->pc = 0x221308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221304u;
    // 0x221308: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x221304u, 0x22130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22130Cu;
label_22130c:
    // 0x22130c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22130Cu;
    SET_GPR_U32(ctx, 31, 0x221314u);
    ctx->pc = 0x221310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22130Cu;
    // 0x221310: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22130Cu, 0x221314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221314u;
label_221314:
    // 0x221314: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x221314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221318: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x221318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22131c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22131Cu;
    SET_GPR_U32(ctx, 31, 0x221324u);
    ctx->pc = 0x221320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22131Cu;
    // 0x221320: 0xae030690  sw          $v1, 0x690($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22131Cu, 0x221324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221324u;
label_221324:
    // 0x221324: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x221324u;
    SET_GPR_U32(ctx, 31, 0x22132Cu);
    ctx->pc = 0x221328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221324u;
    // 0x221328: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x221324u, 0x22132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22132Cu;
label_22132c:
    // 0x22132c: 0x8fb6003c  lw          $s6, 0x3C($sp)
    ctx->pc = 0x22132cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x221330: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x221330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x221334: 0x8fb50000  lw          $s5, 0x0($sp)
    ctx->pc = 0x221334u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221338: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x221338u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22133c: 0x8fb4000c  lw          $s4, 0xC($sp)
    ctx->pc = 0x22133cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x221340: 0x24180014  addiu       $t8, $zero, 0x14
    ctx->pc = 0x221340u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x221344: 0x8fb3005c  lw          $s3, 0x5C($sp)
    ctx->pc = 0x221344u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x221348: 0x24572b38  addiu       $s7, $v0, 0x2B38
    ctx->pc = 0x221348u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 11064));
    // 0x22134c: 0x8fb20010  lw          $s2, 0x10($sp)
    ctx->pc = 0x22134cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x221350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221354: 0x8fb1001c  lw          $s1, 0x1C($sp)
    ctx->pc = 0x221354u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x221358: 0x8faf0030  lw          $t7, 0x30($sp)
    ctx->pc = 0x221358u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22135c: 0x8fae0040  lw          $t6, 0x40($sp)
    ctx->pc = 0x22135cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221360: 0x8fad0024  lw          $t5, 0x24($sp)
    ctx->pc = 0x221360u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x221364: 0x8fac0048  lw          $t4, 0x48($sp)
    ctx->pc = 0x221364u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x221368: 0x8fab004c  lw          $t3, 0x4C($sp)
    ctx->pc = 0x221368u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x22136c: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x22136cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221370: 0x8fa90064  lw          $t1, 0x64($sp)
    ctx->pc = 0x221370u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x221374: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x221374u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x221378: 0x8fbe0018  lw          $fp, 0x18($sp)
    ctx->pc = 0x221378u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22137c: 0xae0006a4  sw          $zero, 0x6A4($s0)
    ctx->pc = 0x22137cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 0));
    // 0x221380: 0xc4412b38  lwc1        $f1, 0x2B38($v0)
    ctx->pc = 0x221380u;
    { uint32_t bits = FAST_READ32(0x462B38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221384: 0xae0006a8  sw          $zero, 0x6A8($s0)
    ctx->pc = 0x221384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 0));
    // 0x221388: 0xae0006ac  sw          $zero, 0x6AC($s0)
    ctx->pc = 0x221388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1708), GPR_U32(ctx, 0));
    // 0x22138c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x22138cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_221390:
    // 0x221390: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x221390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x221394: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x221394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x221398: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x221398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x22139c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22139cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2213a0: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x2213a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2213a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2213a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2213a8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x2213a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2213ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2213acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2213b0: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2213b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2213b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2213b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2213b8: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2213b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2213bc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2213bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2213c0: 0x1e31021  addu        $v0, $t7, $v1
    ctx->pc = 0x2213c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x2213c4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2213c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2213c8: 0x1c32021  addu        $a0, $t6, $v1
    ctx->pc = 0x2213c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2213cc: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x2213ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2213d0: 0x1832821  addu        $a1, $t4, $v1
    ctx->pc = 0x2213d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2213d4: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x2213d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2213d8: 0x1631021  addu        $v0, $t3, $v1
    ctx->pc = 0x2213d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2213dc: 0xacb90000  sw          $t9, 0x0($a1)
    ctx->pc = 0x2213dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 25));
    // 0x2213e0: 0x1432021  addu        $a0, $t2, $v1
    ctx->pc = 0x2213e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2213e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2213e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2213e8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2213e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2213ec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2213ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2213f0: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x2213f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2213f4: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x2213f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2213f8: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2213f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2213fc: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x2213fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x221400: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x221400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x221404: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x221404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x221408: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x221408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22140c: 0x0  nop
    ctx->pc = 0x22140cu;
    // NOP
label_221410:
    // 0x221410: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x221410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x221414: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x221414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x221418: 0x0  nop
    ctx->pc = 0x221418u;
    // NOP
    // 0x22141c: 0x0  nop
    ctx->pc = 0x22141cu;
    // NOP
    // 0x221420: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x221420u;
    {
        const bool branch_taken_0x221420 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x221424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221420u;
        // 0x221424: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221420) {
            ctx->pc = 0x221410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221410;
        }
    }
    ctx->pc = 0x221428u;
    // 0x221428: 0xf82018  mult        $a0, $a3, $t8
    ctx->pc = 0x221428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22142c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x22142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221430: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x221430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x221434: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x221434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x221438: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x221438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22143c: 0x0  nop
    ctx->pc = 0x22143cu;
    // NOP
label_221440:
    // 0x221440: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x221440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x221444: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x221444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x221448: 0x0  nop
    ctx->pc = 0x221448u;
    // NOP
    // 0x22144c: 0x0  nop
    ctx->pc = 0x22144cu;
    // NOP
    // 0x221450: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x221450u;
    {
        const bool branch_taken_0x221450 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x221454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221450u;
        // 0x221454: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221450) {
            ctx->pc = 0x221440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221440;
        }
    }
    ctx->pc = 0x221458u;
    // 0x221458: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x221458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22145c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x22145cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x221460: 0x5440ffcb  bnel        $v0, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x221460u;
    {
        const bool branch_taken_0x221460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221460) {
            ctx->pc = 0x221464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221460u;
            // 0x221464: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221390;
        }
    }
    ctx->pc = 0x221468u;
    // 0x221468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x221468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22146c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x22146cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x221470: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x221470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221474: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x221474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221478: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x221478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22147c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x22147cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x221480: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x221480u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x221484: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x221484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x221488: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x221488u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22148c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x22148cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x221490: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x221490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x221494: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x221494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x221498: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x221498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22149c: 0x3e00008  jr          $ra
    ctx->pc = 0x22149Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2214A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22149Cu;
        // 0x2214a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22149Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2214A4u;
    // 0x2214a4: 0x0  nop
    ctx->pc = 0x2214a4u;
    // NOP
    ctx->pc = 0x2214a8u;
}
