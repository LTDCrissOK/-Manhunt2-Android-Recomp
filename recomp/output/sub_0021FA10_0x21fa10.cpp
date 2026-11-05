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

// Function: sub_0021FA10
// Address: 0x21fa10 - 0x21fba8
void sub_0021FA10_0x21fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FA10_0x21fa10");
#endif

    switch (ctx->pc) {
        case 0x21fa44u: goto label_21fa44;
        case 0x21fa60u: goto label_21fa60;
        case 0x21fa80u: goto label_21fa80;
        case 0x21fa8cu: goto label_21fa8c;
        case 0x21faa0u: goto label_21faa0;
        case 0x21fab0u: goto label_21fab0;
        case 0x21fabcu: goto label_21fabc;
        case 0x21fb50u: goto label_21fb50;
        case 0x21fb5cu: goto label_21fb5c;
        default: break;
    }

    ctx->pc = 0x21fa10u;

    // 0x21fa10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21fa14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21fa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21fa18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21fa18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21fa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21fa20: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21fa24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fa28: 0x265613d0  addiu       $s6, $s2, 0x13D0
    ctx->pc = 0x21fa28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 5072));
    // 0x21fa2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21fa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21fa30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21fa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21fa34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21fa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21fa38: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x21fa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x21fa3c: 0xc087380  jal         func_21CE00
    ctx->pc = 0x21FA3Cu;
    SET_GPR_U32(ctx, 31, 0x21FA44u);
    ctx->pc = 0x21FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA3Cu;
    // 0x21fa40: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x21FA3Cu, 0x21FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA44u;
label_21fa44:
    // 0x21fa44: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x21fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x21fa48: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x21fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21fa4c: 0x24421968  addiu       $v0, $v0, 0x1968
    ctx->pc = 0x21fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6504));
    // 0x21fa50: 0xae4301a0  sw          $v1, 0x1A0($s2)
    ctx->pc = 0x21fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 3));
    // 0x21fa54: 0x264401a4  addiu       $a0, $s2, 0x1A4
    ctx->pc = 0x21fa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 420));
    // 0x21fa58: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21FA58u;
    SET_GPR_U32(ctx, 31, 0x21FA60u);
    ctx->pc = 0x21FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA58u;
    // 0x21fa5c: 0xae420190  sw          $v0, 0x190($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21FA58u, 0x21FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA60u;
label_21fa60:
    // 0x21fa60: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x21fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x21fa64: 0xae4001ac  sw          $zero, 0x1AC($s2)
    ctx->pc = 0x21fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 0));
    // 0x21fa68: 0x24631948  addiu       $v1, $v1, 0x1948
    ctx->pc = 0x21fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6472));
    // 0x21fa6c: 0xae4001b0  sw          $zero, 0x1B0($s2)
    ctx->pc = 0x21fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 0));
    // 0x21fa70: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x21fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
    // 0x21fa74: 0x264401c0  addiu       $a0, $s2, 0x1C0
    ctx->pc = 0x21fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x21fa78: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21FA78u;
    SET_GPR_U32(ctx, 31, 0x21FA80u);
    ctx->pc = 0x21FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA78u;
    // 0x21fa7c: 0xae430190  sw          $v1, 0x190($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21FA78u, 0x21FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA80u;
label_21fa80:
    // 0x21fa80: 0xae4001c8  sw          $zero, 0x1C8($s2)
    ctx->pc = 0x21fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 0));
    // 0x21fa84: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21FA84u;
    SET_GPR_U32(ctx, 31, 0x21FA8Cu);
    ctx->pc = 0x21FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA84u;
    // 0x21fa88: 0x264401cc  addiu       $a0, $s2, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21FA84u, 0x21FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA8Cu;
label_21fa8c:
    // 0x21fa8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fa90: 0x264401d8  addiu       $a0, $s2, 0x1D8
    ctx->pc = 0x21fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
    // 0x21fa94: 0xae4301d4  sw          $v1, 0x1D4($s2)
    ctx->pc = 0x21fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 3));
    // 0x21fa98: 0x2402008d  addiu       $v0, $zero, 0x8D
    ctx->pc = 0x21fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x21fa9c: 0x0  nop
    ctx->pc = 0x21fa9cu;
    // NOP
label_21faa0:
    // 0x21faa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21faa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21faa4: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x21faa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21faa8: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x21faa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21faac: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x21faacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21fab0:
    // 0x21fab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fab4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21FAB4u;
    SET_GPR_U32(ctx, 31, 0x21FABCu);
    ctx->pc = 0x21FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FAB4u;
    // 0x21fab8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21FAB4u, 0x21FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FABCu;
label_21fabc:
    // 0x21fabc: 0x0  nop
    ctx->pc = 0x21fabcu;
    // NOP
    // 0x21fac0: 0x1635fffb  bne         $s1, $s5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21FAC0u;
    {
        const bool branch_taken_0x21fac0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x21FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC0u;
        // 0x21fac4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fac0) {
            ctx->pc = 0x21FAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fab0;
        }
    }
    ctx->pc = 0x21FAC8u;
    // 0x21fac8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x21fac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21facc: 0x1455fff4  bne         $v0, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x21FACCu;
    {
        const bool branch_taken_0x21facc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x21FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FACCu;
        // 0x21fad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21facc) {
            ctx->pc = 0x21FAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21faa0;
        }
    }
    ctx->pc = 0x21FAD4u;
    // 0x21fad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21fad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21fad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21fad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fadc: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x21fadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fae0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x21fae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x21fae4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x21fae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x21fae8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x21fae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21faec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x21faecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x21faf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21faf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21faf4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x21faf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21faf8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x21faf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x21fafc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21fafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21fb00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21fb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21fb04: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x21fb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x21fb08: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x21fb08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x21fb0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21fb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21fb10: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x21fb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x21fb14: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x21fb14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x21fb18: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x21fb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x21fb1c: 0xe641139c  swc1        $f1, 0x139C($s2)
    ctx->pc = 0x21fb1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5020), bits); }
    // 0x21fb20: 0xe64013b4  swc1        $f0, 0x13B4($s2)
    ctx->pc = 0x21fb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5044), bits); }
    // 0x21fb24: 0xe64513c0  swc1        $f5, 0x13C0($s2)
    ctx->pc = 0x21fb24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5056), bits); }
    // 0x21fb28: 0xe64213c4  swc1        $f2, 0x13C4($s2)
    ctx->pc = 0x21fb28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5060), bits); }
    // 0x21fb2c: 0xe64313c8  swc1        $f3, 0x13C8($s2)
    ctx->pc = 0x21fb2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5064), bits); }
    // 0x21fb30: 0xe64413cc  swc1        $f4, 0x13CC($s2)
    ctx->pc = 0x21fb30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5068), bits); }
    // 0x21fb34: 0xae401398  sw          $zero, 0x1398($s2)
    ctx->pc = 0x21fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5016), GPR_U32(ctx, 0));
    // 0x21fb38: 0xe64013a4  swc1        $f0, 0x13A4($s2)
    ctx->pc = 0x21fb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5028), bits); }
    // 0x21fb3c: 0xe64013a8  swc1        $f0, 0x13A8($s2)
    ctx->pc = 0x21fb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5032), bits); }
    // 0x21fb40: 0xe64013ac  swc1        $f0, 0x13AC($s2)
    ctx->pc = 0x21fb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5036), bits); }
    // 0x21fb44: 0xe64013b0  swc1        $f0, 0x13B0($s2)
    ctx->pc = 0x21fb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5040), bits); }
    // 0x21fb48: 0xe64513bc  swc1        $f5, 0x13BC($s2)
    ctx->pc = 0x21fb48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5052), bits); }
    // 0x21fb4c: 0x0  nop
    ctx->pc = 0x21fb4cu;
    // NOP
label_21fb50:
    // 0x21fb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb54: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21FB54u;
    SET_GPR_U32(ctx, 31, 0x21FB5Cu);
    ctx->pc = 0x21FB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB54u;
    // 0x21fb58: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21FB54u, 0x21FB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB5Cu;
label_21fb5c:
    // 0x21fb5c: 0x0  nop
    ctx->pc = 0x21fb5cu;
    // NOP
    // 0x21fb60: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21FB60u;
    {
        const bool branch_taken_0x21fb60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x21FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB60u;
        // 0x21fb64: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb60) {
            ctx->pc = 0x21FB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fb50;
        }
    }
    ctx->pc = 0x21FB68u;
    // 0x21fb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fb6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fb70: 0xae4213f8  sw          $v0, 0x13F8($s2)
    ctx->pc = 0x21fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5112), GPR_U32(ctx, 2));
    // 0x21fb74: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21fb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb78: 0xae4313fc  sw          $v1, 0x13FC($s2)
    ctx->pc = 0x21fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5116), GPR_U32(ctx, 3));
    // 0x21fb7c: 0xae401400  sw          $zero, 0x1400($s2)
    ctx->pc = 0x21fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5120), GPR_U32(ctx, 0));
    // 0x21fb80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fb80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fb84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fb84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fb88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21fb88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fb8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21fb8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fb90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21fb90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fb94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21fb94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21fb98: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21fb98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fb9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x21fb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21fba0: 0x3e00008  jr          $ra
    ctx->pc = 0x21FBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBA0u;
        // 0x21fba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FBA8u;
}
