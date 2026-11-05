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

// Function: sub_0021CE00
// Address: 0x21ce00 - 0x21d3d0
void sub_0021CE00_0x21ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CE00_0x21ce00");
#endif

    switch (ctx->pc) {
        case 0x21ce40u: goto label_21ce40;
        case 0x21ce4cu: goto label_21ce4c;
        case 0x21ce5cu: goto label_21ce5c;
        case 0x21ce68u: goto label_21ce68;
        case 0x21cee4u: goto label_21cee4;
        case 0x21ceecu: goto label_21ceec;
        case 0x21cfb4u: goto label_21cfb4;
        case 0x21cfc8u: goto label_21cfc8;
        case 0x21d00cu: goto label_21d00c;
        case 0x21d018u: goto label_21d018;
        case 0x21d040u: goto label_21d040;
        default: break;
    }

    ctx->pc = 0x21ce00u;

    // 0x21ce00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ce04: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x21ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x21ce08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21ce0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ce10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21ce10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ce14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21ce18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21ce1c: 0x244219c8  addiu       $v0, $v0, 0x19C8
    ctx->pc = 0x21ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6600));
    // 0x21ce20: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21ce24: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x21ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21ce28: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x21ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x21ce2c: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x21ce2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x21ce30: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x21ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x21ce34: 0x26305b60  addiu       $s0, $s1, 0x5B60
    ctx->pc = 0x21ce34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 23392));
    // 0x21ce38: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21CE38u;
    SET_GPR_U32(ctx, 31, 0x21CE40u);
    ctx->pc = 0x21CE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE38u;
    // 0x21ce3c: 0xae420190  sw          $v0, 0x190($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21CE38u, 0x21CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE40u;
label_21ce40:
    // 0x21ce40: 0xa2400010  sb          $zero, 0x10($s2)
    ctx->pc = 0x21ce40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ce44: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21CE44u;
    SET_GPR_U32(ctx, 31, 0x21CE4Cu);
    ctx->pc = 0x21CE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE44u;
    // 0x21ce48: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21CE44u, 0x21CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE4Cu;
label_21ce4c:
    // 0x21ce4c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x21ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x21ce50: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x21ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x21ce54: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21CE54u;
    SET_GPR_U32(ctx, 31, 0x21CE5Cu);
    ctx->pc = 0x21CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE54u;
    // 0x21ce58: 0xa2400020  sb          $zero, 0x20($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21CE54u, 0x21CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE5Cu;
label_21ce5c:
    // 0x21ce5c: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x21ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x21ce60: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21CE60u;
    SET_GPR_U32(ctx, 31, 0x21CE68u);
    ctx->pc = 0x21CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CE60u;
    // 0x21ce64: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21CE60u, 0x21CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CE68u;
label_21ce68:
    // 0x21ce68: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x21ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x21ce6c: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x21ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x21ce70: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x21ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x21ce74: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x21ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x21ce78: 0xc6215b60  lwc1        $f1, 0x5B60($s1)
    ctx->pc = 0x21ce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 23392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ce7c: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x21ce7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x21ce80: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x21ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x21ce84: 0xe6410040  swc1        $f1, 0x40($s2)
    ctx->pc = 0x21ce84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x21ce88: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x21ce88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ce8c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x21ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x21ce90: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x21ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ce94: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x21ce94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21ce98: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x21ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ce9c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x21ce9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x21cea0: 0xae4300a4  sw          $v1, 0xA4($s2)
    ctx->pc = 0x21cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 3));
    // 0x21cea4: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x21cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x21cea8: 0xa6400054  sh          $zero, 0x54($s2)
    ctx->pc = 0x21cea8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x21ceac: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x21ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x21ceb0: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x21ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x21ceb4: 0xae4000a8  sw          $zero, 0xA8($s2)
    ctx->pc = 0x21ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
    // 0x21ceb8: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x21ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    // 0x21cebc: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x21cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x21cec0: 0xc6205b60  lwc1        $f0, 0x5B60($s1)
    ctx->pc = 0x21cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 23392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cec4: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x21cec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x21cec8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x21cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cecc: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x21ceccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21ced0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x21ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ced4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x21ced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21ced8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x21ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cedc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21CEDCu;
    SET_GPR_U32(ctx, 31, 0x21CEE4u);
    ctx->pc = 0x21CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CEDCu;
    // 0x21cee0: 0xe4a1000c  swc1        $f1, 0xC($a1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21CEDCu, 0x21CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CEE4u;
label_21cee4:
    // 0x21cee4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21CEE4u;
    SET_GPR_U32(ctx, 31, 0x21CEECu);
    ctx->pc = 0x21CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CEE4u;
    // 0x21cee8: 0x264400d8  addiu       $a0, $s2, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21CEE4u, 0x21CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CEECu;
label_21ceec:
    // 0x21ceec: 0xc6205b60  lwc1        $f0, 0x5B60($s1)
    ctx->pc = 0x21ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 23392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cef0: 0x264200e0  addiu       $v0, $s2, 0xE0
    ctx->pc = 0x21cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x21cef4: 0x264300f0  addiu       $v1, $s2, 0xF0
    ctx->pc = 0x21cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x21cef8: 0x26450110  addiu       $a1, $s2, 0x110
    ctx->pc = 0x21cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x21cefc: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x21cefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x21cf00: 0x26460120  addiu       $a2, $s2, 0x120
    ctx->pc = 0x21cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x21cf04: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x21cf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x21cf08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21cf08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21cf0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x21cf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cf10: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x21cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf14: 0x2644014c  addiu       $a0, $s2, 0x14C
    ctx->pc = 0x21cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
    // 0x21cf18: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x21cf18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x21cf1c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x21cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf20: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x21cf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21cf24: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x21cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf28: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x21cf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x21cf2c: 0xc6205b60  lwc1        $f0, 0x5B60($s1)
    ctx->pc = 0x21cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 23392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf30: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x21cf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x21cf34: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x21cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf38: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x21cf38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21cf3c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x21cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf40: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21cf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21cf44: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x21cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf48: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x21cf48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x21cf4c: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x21cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
    // 0x21cf50: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x21cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x21cf54: 0xc6205b60  lwc1        $f0, 0x5B60($s1)
    ctx->pc = 0x21cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 23392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf58: 0xe6400110  swc1        $f0, 0x110($s2)
    ctx->pc = 0x21cf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 272), bits); }
    // 0x21cf5c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x21cf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf60: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x21cf60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21cf64: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x21cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf68: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x21cf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21cf6c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x21cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf70: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x21cf70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x21cf74: 0xc6205b60  lwc1        $f0, 0x5B60($s1)
    ctx->pc = 0x21cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 23392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf78: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x21cf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x21cf7c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x21cf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf80: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x21cf80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x21cf84: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x21cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf88: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x21cf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x21cf8c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x21cf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf90: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x21cf90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x21cf94: 0xae400130  sw          $zero, 0x130($s2)
    ctx->pc = 0x21cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
    // 0x21cf98: 0xa2400134  sb          $zero, 0x134($s2)
    ctx->pc = 0x21cf98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 308), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cf9c: 0xa2400148  sb          $zero, 0x148($s2)
    ctx->pc = 0x21cf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cfa0: 0xae470140  sw          $a3, 0x140($s2)
    ctx->pc = 0x21cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 7));
    // 0x21cfa4: 0xe6420144  swc1        $f2, 0x144($s2)
    ctx->pc = 0x21cfa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
    // 0x21cfa8: 0xe6420138  swc1        $f2, 0x138($s2)
    ctx->pc = 0x21cfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 312), bits); }
    // 0x21cfac: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21CFACu;
    SET_GPR_U32(ctx, 31, 0x21CFB4u);
    ctx->pc = 0x21CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFACu;
    // 0x21cfb0: 0xe642013c  swc1        $f2, 0x13C($s2) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 316), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21CFACu, 0x21CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CFB4u;
label_21cfb4:
    // 0x21cfb4: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x21cfb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x21cfb8: 0x26440154  addiu       $a0, $s2, 0x154
    ctx->pc = 0x21cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 340));
    // 0x21cfbc: 0x26101848  addiu       $s0, $s0, 0x1848
    ctx->pc = 0x21cfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6216));
    // 0x21cfc0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x21CFC0u;
    SET_GPR_U32(ctx, 31, 0x21CFC8u);
    ctx->pc = 0x21CFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFC0u;
    // 0x21cfc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x21CFC0u, 0x21CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CFC8u;
label_21cfc8:
    // 0x21cfc8: 0xae40015c  sw          $zero, 0x15C($s2)
    ctx->pc = 0x21cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 0));
    // 0x21cfcc: 0x26420160  addiu       $v0, $s2, 0x160
    ctx->pc = 0x21cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x21cfd0: 0xae400160  sw          $zero, 0x160($s2)
    ctx->pc = 0x21cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 0));
    // 0x21cfd4: 0x2644017c  addiu       $a0, $s2, 0x17C
    ctx->pc = 0x21cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 380));
    // 0x21cfd8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x21cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x21cfdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfe0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21cfe4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x21cfe8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x21cfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x21cfec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21cfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cff0: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x21cff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x21cff4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x21cff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x21cff8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21cff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21cffc: 0xae400178  sw          $zero, 0x178($s2)
    ctx->pc = 0x21cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 0));
    // 0x21d000: 0xe6400170  swc1        $f0, 0x170($s2)
    ctx->pc = 0x21d000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 368), bits); }
    // 0x21d004: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x21D004u;
    SET_GPR_U32(ctx, 31, 0x21D00Cu);
    ctx->pc = 0x21D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D004u;
    // 0x21d008: 0xe6410174  swc1        $f1, 0x174($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 372), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x21D004u, 0x21D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D00Cu;
label_21d00c:
    // 0x21d00c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d010: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x21D010u;
    SET_GPR_U32(ctx, 31, 0x21D018u);
    ctx->pc = 0x21D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D010u;
    // 0x21d014: 0x26440184  addiu       $a0, $s2, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x21D010u, 0x21D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D018u;
label_21d018:
    // 0x21d018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21d018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21d01c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d020: 0x26450056  addiu       $a1, $s2, 0x56
    ctx->pc = 0x21d020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 86));
    // 0x21d024: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x21d024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x21d028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21d028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d02c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x21d02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x21d030: 0xe6410100  swc1        $f1, 0x100($s2)
    ctx->pc = 0x21d030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x21d034: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d038: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x21d038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x21d03c: 0xae40018c  sw          $zero, 0x18C($s2)
    ctx->pc = 0x21d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 0));
label_21d040:
    // 0x21d040: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x21d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21d044: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21d044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21d048: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x21d048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x21d04c: 0x0  nop
    ctx->pc = 0x21d04cu;
    // NOP
    // 0x21d050: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21D050u;
    {
        const bool branch_taken_0x21d050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D050u;
        // 0x21d054: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d050) {
            ctx->pc = 0x21D040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d040;
        }
    }
    ctx->pc = 0x21D058u;
    // 0x21d058: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x21d058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x21d05c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21d05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d060: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x21d060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21d064: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x21d064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x21d068: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d06c: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x21d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x21d070: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x21d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
    // 0x21d074: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x21d074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21d078: 0xa240005a  sb          $zero, 0x5A($s2)
    ctx->pc = 0x21d078u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d07c: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x21d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x21d080: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x21d080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
    // 0x21d084: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x21d084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x21d088: 0xae4000a8  sw          $zero, 0xA8($s2)
    ctx->pc = 0x21d088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
    // 0x21d08c: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x21d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x21d090: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21d090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21d094: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21d094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21d098: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21d098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x21d09c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21d09cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d0a0: 0xfa4100c0  sqc2        $vf1, 0xC0($s2)
    ctx->pc = 0x21d0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21d0a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21d0a8: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x21d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x21d0ac: 0x1062009a  beq         $v1, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x21D0ACu;
    {
        const bool branch_taken_0x21d0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0ACu;
        // 0x21d0b0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0ac) {
            ctx->pc = 0x21D318u;
            goto label_21d318;
        }
    }
    ctx->pc = 0x21D0B4u;
    // 0x21d0b4: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x21D0B4u;
    {
        const bool branch_taken_0x21d0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0B4u;
        // 0x21d0b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0b4) {
            ctx->pc = 0x21D1B0u;
            goto label_21d1b0;
        }
    }
    ctx->pc = 0x21D0BCu;
    // 0x21d0bc: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x21d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x21d0c0: 0x1062008b  beq         $v1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x21D0C0u;
    {
        const bool branch_taken_0x21d0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0C0u;
        // 0x21d0c4: 0x2c620080  sltiu       $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0c0) {
            ctx->pc = 0x21D2F0u;
            goto label_21d2f0;
        }
    }
    ctx->pc = 0x21D0C8u;
    // 0x21d0c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21D0C8u;
    {
        const bool branch_taken_0x21d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0C8u;
        // 0x21d0cc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0c8) {
            ctx->pc = 0x21D130u;
            goto label_21d130;
        }
    }
    ctx->pc = 0x21D0D0u;
    // 0x21d0d0: 0x10620083  beq         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x21D0D0u;
    {
        const bool branch_taken_0x21d0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0D0u;
        // 0x21d0d4: 0x2c620008  sltiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0d0) {
            ctx->pc = 0x21D2E0u;
            goto label_21d2e0;
        }
    }
    ctx->pc = 0x21D0D8u;
    // 0x21d0d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D0D8u;
    {
        const bool branch_taken_0x21d0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0D8u;
        // 0x21d0dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0d8) {
            ctx->pc = 0x21D0F8u;
            goto label_21d0f8;
        }
    }
    ctx->pc = 0x21D0E0u;
    // 0x21d0e0: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x21D0E0u;
    {
        const bool branch_taken_0x21d0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0E0u;
        // 0x21d0e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0e0) {
            ctx->pc = 0x21D2D8u;
            goto label_21d2d8;
        }
    }
    ctx->pc = 0x21D0E8u;
    // 0x21d0e8: 0x10620099  beq         $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x21D0E8u;
    {
        const bool branch_taken_0x21d0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0E8u;
        // 0x21d0ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0e8) {
            ctx->pc = 0x21D350u;
            goto label_21d350;
        }
    }
    ctx->pc = 0x21D0F0u;
    // 0x21d0f0: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x21D0F0u;
    {
        const bool branch_taken_0x21d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0F0u;
        // 0x21d0f4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0f0) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D0F8u;
label_21d0f8:
    // 0x21d0f8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x21d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x21d0fc: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x21D0FCu;
    {
        const bool branch_taken_0x21d0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0FCu;
        // 0x21d100: 0x2c620020  sltiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0fc) {
            ctx->pc = 0x21D2E8u;
            goto label_21d2e8;
        }
    }
    ctx->pc = 0x21D104u;
    // 0x21d104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D104u;
    {
        const bool branch_taken_0x21d104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D104u;
        // 0x21d108: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d104) {
            ctx->pc = 0x21D11Cu;
            goto label_21d11c;
        }
    }
    ctx->pc = 0x21D10Cu;
    // 0x21d10c: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x21D10Cu;
    {
        const bool branch_taken_0x21d10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D10Cu;
        // 0x21d110: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d10c) {
            ctx->pc = 0x21D350u;
            goto label_21d350;
        }
    }
    ctx->pc = 0x21D114u;
    // 0x21d114: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x21D114u;
    {
        const bool branch_taken_0x21d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D114u;
        // 0x21d118: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d114) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D11Cu;
label_21d11c:
    // 0x21d11c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x21d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x21d120: 0x1062008b  beq         $v1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x21D120u;
    {
        const bool branch_taken_0x21d120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D120u;
        // 0x21d124: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d120) {
            ctx->pc = 0x21D350u;
            goto label_21d350;
        }
    }
    ctx->pc = 0x21D128u;
    // 0x21d128: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x21D128u;
    {
        const bool branch_taken_0x21d128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D128u;
        // 0x21d12c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d128) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D130u;
label_21d130:
    // 0x21d130: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x21d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x21d134: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x21D134u;
    {
        const bool branch_taken_0x21d134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D134u;
        // 0x21d138: 0x2c620402  sltiu       $v0, $v1, 0x402 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1026) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d134) {
            ctx->pc = 0x21D304u;
            goto label_21d304;
        }
    }
    ctx->pc = 0x21D13Cu;
    // 0x21d13c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21D13Cu;
    {
        const bool branch_taken_0x21d13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D13Cu;
        // 0x21d140: 0x24020181  addiu       $v0, $zero, 0x181 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d13c) {
            ctx->pc = 0x21D178u;
            goto label_21d178;
        }
    }
    ctx->pc = 0x21D144u;
    // 0x21d144: 0x1062006c  beq         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x21D144u;
    {
        const bool branch_taken_0x21d144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D144u;
        // 0x21d148: 0x2c620182  sltiu       $v0, $v1, 0x182 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d144) {
            ctx->pc = 0x21D2F8u;
            goto label_21d2f8;
        }
    }
    ctx->pc = 0x21D14Cu;
    // 0x21d14c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D14Cu;
    {
        const bool branch_taken_0x21d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D14Cu;
        // 0x21d150: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d14c) {
            ctx->pc = 0x21D164u;
            goto label_21d164;
        }
    }
    ctx->pc = 0x21D154u;
    // 0x21d154: 0x10620089  beq         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x21D154u;
    {
        const bool branch_taken_0x21d154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D154u;
        // 0x21d158: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d154) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D15Cu;
    // 0x21d15c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x21D15Cu;
    {
        const bool branch_taken_0x21d15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D15Cu;
        // 0x21d160: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d15c) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D164u;
label_21d164:
    // 0x21d164: 0x2402020f  addiu       $v0, $zero, 0x20F
    ctx->pc = 0x21d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x21d168: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x21D168u;
    {
        const bool branch_taken_0x21d168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D168u;
        // 0x21d16c: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d168) {
            ctx->pc = 0x21D350u;
            goto label_21d350;
        }
    }
    ctx->pc = 0x21D170u;
    // 0x21d170: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x21D170u;
    {
        const bool branch_taken_0x21d170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D170u;
        // 0x21d174: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d170) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D178u;
label_21d178:
    // 0x21d178: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x21d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21d17c: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x21D17Cu;
    {
        const bool branch_taken_0x21d17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D17Cu;
        // 0x21d180: 0x2c623002  sltiu       $v0, $v1, 0x3002 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d17c) {
            ctx->pc = 0x21D30Cu;
            goto label_21d30c;
        }
    }
    ctx->pc = 0x21D184u;
    // 0x21d184: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D184u;
    {
        const bool branch_taken_0x21d184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D184u;
        // 0x21d188: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d184) {
            ctx->pc = 0x21D19Cu;
            goto label_21d19c;
        }
    }
    ctx->pc = 0x21D18Cu;
    // 0x21d18c: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x21D18Cu;
    {
        const bool branch_taken_0x21d18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D18Cu;
        // 0x21d190: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d18c) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D194u;
    // 0x21d194: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x21D194u;
    {
        const bool branch_taken_0x21d194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D194u;
        // 0x21d198: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d194) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D19Cu;
label_21d19c:
    // 0x21d19c: 0x24027001  addiu       $v0, $zero, 0x7001
    ctx->pc = 0x21d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28673));
    // 0x21d1a0: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x21D1A0u;
    {
        const bool branch_taken_0x21d1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1A0u;
        // 0x21d1a4: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1a0) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D1A8u;
    // 0x21d1a8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x21D1A8u;
    {
        const bool branch_taken_0x21d1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1A8u;
        // 0x21d1ac: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1a8) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D1B0u;
label_21d1b0:
    // 0x21d1b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d1b4: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x21D1B4u;
    {
        const bool branch_taken_0x21d1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1B4u;
        // 0x21d1b8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1b4) {
            ctx->pc = 0x21D348u;
            goto label_21d348;
        }
    }
    ctx->pc = 0x21D1BCu;
    // 0x21d1bc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x21D1BCu;
    {
        const bool branch_taken_0x21d1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1BCu;
        // 0x21d1c0: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1bc) {
            ctx->pc = 0x21D240u;
            goto label_21d240;
        }
    }
    ctx->pc = 0x21D1C4u;
    // 0x21d1c4: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x21d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x21d1c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d1cc: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x21D1CCu;
    {
        const bool branch_taken_0x21d1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1CCu;
        // 0x21d1d0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1cc) {
            ctx->pc = 0x21D32Cu;
            goto label_21d32c;
        }
    }
    ctx->pc = 0x21D1D4u;
    // 0x21d1d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D1D4u;
    {
        const bool branch_taken_0x21d1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1D4u;
        // 0x21d1d8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1d4) {
            ctx->pc = 0x21D200u;
            goto label_21d200;
        }
    }
    ctx->pc = 0x21D1DCu;
    // 0x21d1dc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x21d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x21d1e0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d1e4: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x21D1E4u;
    {
        const bool branch_taken_0x21d1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1E4u;
        // 0x21d1e8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1e4) {
            ctx->pc = 0x21D320u;
            goto label_21d320;
        }
    }
    ctx->pc = 0x21D1ECu;
    // 0x21d1ec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d1f0: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x21D1F0u;
    {
        const bool branch_taken_0x21d1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1F0u;
        // 0x21d1f4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1f0) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D1F8u;
    // 0x21d1f8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x21D1F8u;
    {
        const bool branch_taken_0x21d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1F8u;
        // 0x21d1fc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1f8) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D200u;
label_21d200:
    // 0x21d200: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d204: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x21D204u;
    {
        const bool branch_taken_0x21d204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D204u;
        // 0x21d208: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d204) {
            ctx->pc = 0x21D378u;
            goto label_21d378;
        }
    }
    ctx->pc = 0x21D20Cu;
    // 0x21d20c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D20Cu;
    {
        const bool branch_taken_0x21d20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D20Cu;
        // 0x21d210: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d20c) {
            ctx->pc = 0x21D22Cu;
            goto label_21d22c;
        }
    }
    ctx->pc = 0x21D214u;
    // 0x21d214: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x21d214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x21d218: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d21c: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x21D21Cu;
    {
        const bool branch_taken_0x21d21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D21Cu;
        // 0x21d220: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d21c) {
            ctx->pc = 0x21D338u;
            goto label_21d338;
        }
    }
    ctx->pc = 0x21D224u;
    // 0x21d224: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x21D224u;
    {
        const bool branch_taken_0x21d224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D224u;
        // 0x21d228: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d224) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D22Cu;
label_21d22c:
    // 0x21d22c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d230: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x21D230u;
    {
        const bool branch_taken_0x21d230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D230u;
        // 0x21d234: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d230) {
            ctx->pc = 0x21D340u;
            goto label_21d340;
        }
    }
    ctx->pc = 0x21D238u;
    // 0x21d238: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x21D238u;
    {
        const bool branch_taken_0x21d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D238u;
        // 0x21d23c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d238) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D240u;
label_21d240:
    // 0x21d240: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d244: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x21D244u;
    {
        const bool branch_taken_0x21d244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D244u;
        // 0x21d248: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d244) {
            ctx->pc = 0x21D368u;
            goto label_21d368;
        }
    }
    ctx->pc = 0x21D24Cu;
    // 0x21d24c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21D24Cu;
    {
        const bool branch_taken_0x21d24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D24Cu;
        // 0x21d250: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d24c) {
            ctx->pc = 0x21D298u;
            goto label_21d298;
        }
    }
    ctx->pc = 0x21D254u;
    // 0x21d254: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x21d254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x21d258: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d25c: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x21D25Cu;
    {
        const bool branch_taken_0x21d25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D25Cu;
        // 0x21d260: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d25c) {
            ctx->pc = 0x21D360u;
            goto label_21d360;
        }
    }
    ctx->pc = 0x21D264u;
    // 0x21d264: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D264u;
    {
        const bool branch_taken_0x21d264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D264u;
        // 0x21d268: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d264) {
            ctx->pc = 0x21D284u;
            goto label_21d284;
        }
    }
    ctx->pc = 0x21D26Cu;
    // 0x21d26c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x21d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x21d270: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d274: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x21D274u;
    {
        const bool branch_taken_0x21d274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D274u;
        // 0x21d278: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d274) {
            ctx->pc = 0x21D350u;
            goto label_21d350;
        }
    }
    ctx->pc = 0x21D27Cu;
    // 0x21d27c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x21D27Cu;
    {
        const bool branch_taken_0x21d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D27Cu;
        // 0x21d280: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d27c) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D284u;
label_21d284:
    // 0x21d284: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d288: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x21D288u;
    {
        const bool branch_taken_0x21d288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D288u;
        // 0x21d28c: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d288) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D290u;
    // 0x21d290: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x21D290u;
    {
        const bool branch_taken_0x21d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D290u;
        // 0x21d294: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d290) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D298u;
label_21d298:
    // 0x21d298: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d29c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x21D29Cu;
    {
        const bool branch_taken_0x21d29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D29Cu;
        // 0x21d2a0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d29c) {
            ctx->pc = 0x21D370u;
            goto label_21d370;
        }
    }
    ctx->pc = 0x21D2A4u;
    // 0x21d2a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D2A4u;
    {
        const bool branch_taken_0x21d2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2A4u;
        // 0x21d2a8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2a4) {
            ctx->pc = 0x21D2C0u;
            goto label_21d2c0;
        }
    }
    ctx->pc = 0x21D2ACu;
    // 0x21d2ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d2b0: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x21D2B0u;
    {
        const bool branch_taken_0x21d2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2B0u;
        // 0x21d2b4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2b0) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D2B8u;
    // 0x21d2b8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x21D2B8u;
    {
        const bool branch_taken_0x21d2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2B8u;
        // 0x21d2bc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2b8) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D2C0u;
label_21d2c0:
    // 0x21d2c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21d2c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d2c8: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x21D2C8u;
    {
        const bool branch_taken_0x21d2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2C8u;
        // 0x21d2cc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2c8) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D2D0u;
    // 0x21d2d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x21D2D0u;
    {
        const bool branch_taken_0x21d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2D0u;
        // 0x21d2d4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2d0) {
            ctx->pc = 0x21D384u;
            goto label_21d384;
        }
    }
    ctx->pc = 0x21D2D8u;
label_21d2d8:
    // 0x21d2d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x21D2D8u;
    {
        const bool branch_taken_0x21d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2D8u;
        // 0x21d2dc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2d8) {
            ctx->pc = 0x21D380u;
            goto label_21d380;
        }
    }
    ctx->pc = 0x21D2E0u;
label_21d2e0:
    // 0x21d2e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x21D2E0u;
    {
        const bool branch_taken_0x21d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2E0u;
        // 0x21d2e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2e0) {
            ctx->pc = 0x21D350u;
            goto label_21d350;
        }
    }
    ctx->pc = 0x21D2E8u;
label_21d2e8:
    // 0x21d2e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x21D2E8u;
    {
        const bool branch_taken_0x21d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2E8u;
        // 0x21d2ec: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2e8) {
            ctx->pc = 0x21D350u;
            goto label_21d350;
        }
    }
    ctx->pc = 0x21D2F0u;
label_21d2f0:
    // 0x21d2f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21D2F0u;
    {
        const bool branch_taken_0x21d2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2F0u;
        // 0x21d2f4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2f0) {
            ctx->pc = 0x21D350u;
            goto label_21d350;
        }
    }
    ctx->pc = 0x21D2F8u;
label_21d2f8:
    // 0x21d2f8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x21d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x21d2fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21D2FCu;
    {
        const bool branch_taken_0x21d2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2FCu;
        // 0x21d300: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2fc) {
            ctx->pc = 0x21D354u;
            goto label_21d354;
        }
    }
    ctx->pc = 0x21D304u;
label_21d304:
    // 0x21d304: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x21D304u;
    {
        const bool branch_taken_0x21d304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D304u;
        // 0x21d308: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d304) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D30Cu;
label_21d30c:
    // 0x21d30c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x21d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x21d310: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21D310u;
    {
        const bool branch_taken_0x21d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D310u;
        // 0x21d314: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d310) {
            ctx->pc = 0x21D354u;
            goto label_21d354;
        }
    }
    ctx->pc = 0x21D318u;
label_21d318:
    // 0x21d318: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21D318u;
    {
        const bool branch_taken_0x21d318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D318u;
        // 0x21d31c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d318) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D320u;
label_21d320:
    // 0x21d320: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x21d320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x21d324: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21D324u;
    {
        const bool branch_taken_0x21d324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D324u;
        // 0x21d328: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d324) {
            ctx->pc = 0x21D354u;
            goto label_21d354;
        }
    }
    ctx->pc = 0x21D32Cu;
label_21d32c:
    // 0x21d32c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x21d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x21d330: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21D330u;
    {
        const bool branch_taken_0x21d330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D330u;
        // 0x21d334: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d330) {
            ctx->pc = 0x21D354u;
            goto label_21d354;
        }
    }
    ctx->pc = 0x21D338u;
label_21d338:
    // 0x21d338: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21D338u;
    {
        const bool branch_taken_0x21d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D338u;
        // 0x21d33c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d338) {
            ctx->pc = 0x21D354u;
            goto label_21d354;
        }
    }
    ctx->pc = 0x21D340u;
label_21d340:
    // 0x21d340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21D340u;
    {
        const bool branch_taken_0x21d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D340u;
        // 0x21d344: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d340) {
            ctx->pc = 0x21D354u;
            goto label_21d354;
        }
    }
    ctx->pc = 0x21D348u;
label_21d348:
    // 0x21d348: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21D348u;
    {
        const bool branch_taken_0x21d348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D348u;
        // 0x21d34c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d348) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D350u;
label_21d350:
    // 0x21d350: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x21d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_21d354:
    // 0x21d354: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x21d354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x21d358: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21D358u;
    {
        const bool branch_taken_0x21d358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D358u;
        // 0x21d35c: 0xa6430054  sh          $v1, 0x54($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d358) {
            ctx->pc = 0x21D380u;
            goto label_21d380;
        }
    }
    ctx->pc = 0x21D360u;
label_21d360:
    // 0x21d360: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21D360u;
    {
        const bool branch_taken_0x21d360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D360u;
        // 0x21d364: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d360) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D368u;
label_21d368:
    // 0x21d368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21D368u;
    {
        const bool branch_taken_0x21d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D368u;
        // 0x21d36c: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d368) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D370u;
label_21d370:
    // 0x21d370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21D370u;
    {
        const bool branch_taken_0x21d370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D370u;
        // 0x21d374: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d370) {
            ctx->pc = 0x21D37Cu;
            goto label_21d37c;
        }
    }
    ctx->pc = 0x21D378u;
label_21d378:
    // 0x21d378: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x21d378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_21d37c:
    // 0x21d37c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x21d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_21d380:
    // 0x21d380: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21d380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_21d384:
    // 0x21d384: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21d384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21d388: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21d388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21d38c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x21d390: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21d390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d394: 0xfa4100e0  sqc2        $vf1, 0xE0($s2)
    ctx->pc = 0x21d394u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21d398: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21d398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21d39c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21d3a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21d3a4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x21d3a8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21d3a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d3ac: 0xfa4100f0  sqc2        $vf1, 0xF0($s2)
    ctx->pc = 0x21d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21d3b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21d3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21d3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d3b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21d3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d3bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21d3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d3c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21d3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21d3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x21D3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3C4u;
        // 0x21d3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D3CCu;
    // 0x21d3cc: 0x0  nop
    ctx->pc = 0x21d3ccu;
    // NOP
    ctx->pc = 0x21d3d0u;
}
