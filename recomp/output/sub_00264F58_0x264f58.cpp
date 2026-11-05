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

// Function: sub_00264F58
// Address: 0x264f58 - 0x265078
void sub_00264F58_0x264f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264F58_0x264f58");
#endif

    switch (ctx->pc) {
        case 0x264f70u: goto label_264f70;
        case 0x264fa4u: goto label_264fa4;
        case 0x264fc0u: goto label_264fc0;
        case 0x264fc8u: goto label_264fc8;
        case 0x264fd0u: goto label_264fd0;
        case 0x264fd8u: goto label_264fd8;
        case 0x264fe4u: goto label_264fe4;
        case 0x264ff4u: goto label_264ff4;
        case 0x26500cu: goto label_26500c;
        case 0x265034u: goto label_265034;
        case 0x265040u: goto label_265040;
        case 0x265048u: goto label_265048;
        case 0x265054u: goto label_265054;
        case 0x265060u: goto label_265060;
        default: break;
    }

    ctx->pc = 0x264f58u;

    // 0x264f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264f60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x264f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x264f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264f68: 0xc09baa8  jal         func_26EAA0
    ctx->pc = 0x264F68u;
    SET_GPR_U32(ctx, 31, 0x264F70u);
    ctx->pc = 0x264F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F68u;
    // 0x264f6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EAA0u, 0x264F68u, 0x264F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F70u;
label_264f70:
    // 0x264f70: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x264f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x264f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x264f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264f78: 0x24632530  addiu       $v1, $v1, 0x2530
    ctx->pc = 0x264f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9520));
    // 0x264f7c: 0xa204028e  sb          $a0, 0x28E($s0)
    ctx->pc = 0x264f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 654), (uint8_t)GPR_U32(ctx, 4));
    // 0x264f80: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x264f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x264f84: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x264f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x264f88: 0xa2040284  sb          $a0, 0x284($s0)
    ctx->pc = 0x264f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 4));
    // 0x264f8c: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x264f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x264f90: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x264f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x264f94: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x264f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x264f98: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x264f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x264f9c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x264F9Cu;
    SET_GPR_U32(ctx, 31, 0x264FA4u);
    ctx->pc = 0x264FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F9Cu;
    // 0x264fa0: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x264F9Cu, 0x264FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FA4u;
label_264fa4:
    // 0x264fa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x264fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x264fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264fac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x264facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264fb0: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x264fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
    // 0x264fb4: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x264fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x264fb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x264FB8u;
    SET_GPR_U32(ctx, 31, 0x264FC0u);
    ctx->pc = 0x264FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264FB8u;
    // 0x264fbc: 0xe60002b0  swc1        $f0, 0x2B0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x264FB8u, 0x264FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FC0u;
label_264fc0:
    // 0x264fc0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x264FC0u;
    SET_GPR_U32(ctx, 31, 0x264FC8u);
    ctx->pc = 0x264FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264FC0u;
    // 0x264fc4: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x264FC0u, 0x264FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FC8u;
label_264fc8:
    // 0x264fc8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x264FC8u;
    SET_GPR_U32(ctx, 31, 0x264FD0u);
    ctx->pc = 0x264FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264FC8u;
    // 0x264fcc: 0x26040310  addiu       $a0, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x264FC8u, 0x264FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FD0u;
label_264fd0:
    // 0x264fd0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x264FD0u;
    SET_GPR_U32(ctx, 31, 0x264FD8u);
    ctx->pc = 0x264FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264FD0u;
    // 0x264fd4: 0x26040324  addiu       $a0, $s0, 0x324 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x264FD0u, 0x264FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FD8u;
label_264fd8:
    // 0x264fd8: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x264fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x264fdc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x264FDCu;
    SET_GPR_U32(ctx, 31, 0x264FE4u);
    ctx->pc = 0x264FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264FDCu;
    // 0x264fe0: 0x26040330  addiu       $a0, $s0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x264FDCu, 0x264FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FE4u;
label_264fe4:
    // 0x264fe4: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x264fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x264fe8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x264fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x264fec: 0xc08665e  jal         func_219978
    ctx->pc = 0x264FECu;
    SET_GPR_U32(ctx, 31, 0x264FF4u);
    ctx->pc = 0x264FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264FECu;
    // 0x264ff0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219978u, 0x264FECu, 0x264FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FF4u;
label_264ff4:
    // 0x264ff4: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x264ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ffc: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x264ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x265000: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x265000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265004: 0xc099438  jal         func_2650E0
    ctx->pc = 0x265004u;
    SET_GPR_U32(ctx, 31, 0x26500Cu);
    ctx->pc = 0x265008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265004u;
    // 0x265008: 0xe60102c4  swc1        $f1, 0x2C4($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2650E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2650E0u, 0x265004u, 0x26500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26500Cu;
label_26500c:
    // 0x26500c: 0xa200028d  sb          $zero, 0x28D($s0)
    ctx->pc = 0x26500cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 653), (uint8_t)GPR_U32(ctx, 0));
    // 0x265010: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x265010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x265014: 0xa200028c  sb          $zero, 0x28C($s0)
    ctx->pc = 0x265014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 652), (uint8_t)GPR_U32(ctx, 0));
    // 0x265018: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x265018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26501c: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x26501cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x265020: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x265020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x265024: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x265024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x265028: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x265028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x26502c: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x26502Cu;
    SET_GPR_U32(ctx, 31, 0x265034u);
    ctx->pc = 0x265030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26502Cu;
    // 0x265030: 0xae0002d0  sw          $zero, 0x2D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x26502Cu, 0x265034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265034u;
label_265034:
    // 0x265034: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x265034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265038: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x265038u;
    SET_GPR_U32(ctx, 31, 0x265040u);
    ctx->pc = 0x26503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265038u;
    // 0x26503c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x265038u, 0x265040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265040u;
label_265040:
    // 0x265040: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x265040u;
    SET_GPR_U32(ctx, 31, 0x265048u);
    ctx->pc = 0x265044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265040u;
    // 0x265044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x265040u, 0x265048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265048u;
label_265048:
    // 0x265048: 0xae1102d4  sw          $s1, 0x2D4($s0)
    ctx->pc = 0x265048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 17));
    // 0x26504c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x26504Cu;
    SET_GPR_U32(ctx, 31, 0x265054u);
    ctx->pc = 0x265050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26504Cu;
    // 0x265050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26504Cu, 0x265054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265054u;
label_265054:
    // 0x265054: 0xa2000320  sb          $zero, 0x320($s0)
    ctx->pc = 0x265054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 800), (uint8_t)GPR_U32(ctx, 0));
    // 0x265058: 0xc099678  jal         func_2659E0
    ctx->pc = 0x265058u;
    SET_GPR_U32(ctx, 31, 0x265060u);
    ctx->pc = 0x26505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265058u;
    // 0x26505c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2659E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2659E0u, 0x265058u, 0x265060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265060u;
label_265060:
    // 0x265060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x265060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265064: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x265064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x265068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x265068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26506c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265070: 0x3e00008  jr          $ra
    ctx->pc = 0x265070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265070u;
        // 0x265074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265078u;
}
