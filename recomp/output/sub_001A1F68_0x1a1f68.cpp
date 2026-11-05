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

// Function: sub_001A1F68
// Address: 0x1a1f68 - 0x1a20f0
void sub_001A1F68_0x1a1f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1F68_0x1a1f68");
#endif

    switch (ctx->pc) {
        case 0x1a1f7cu: goto label_1a1f7c;
        case 0x1a1f8cu: goto label_1a1f8c;
        case 0x1a1f9cu: goto label_1a1f9c;
        case 0x1a1fa4u: goto label_1a1fa4;
        case 0x1a1fe0u: goto label_1a1fe0;
        case 0x1a1ffcu: goto label_1a1ffc;
        case 0x1a200cu: goto label_1a200c;
        case 0x1a2028u: goto label_1a2028;
        case 0x1a2064u: goto label_1a2064;
        case 0x1a2074u: goto label_1a2074;
        default: break;
    }

    ctx->pc = 0x1a1f68u;

    // 0x1a1f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1f6c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a1f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a1f70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a1f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a1f74: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A1F74u;
    SET_GPR_U32(ctx, 31, 0x1A1F7Cu);
    ctx->pc = 0x1A1F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F74u;
    // 0x1a1f78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A1F74u, 0x1A1F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F7Cu;
label_1a1f7c:
    // 0x1a1f7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f84: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A1F84u;
    SET_GPR_U32(ctx, 31, 0x1A1F8Cu);
    ctx->pc = 0x1A1F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F84u;
    // 0x1a1f88: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A1F84u, 0x1A1F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F8Cu;
label_1a1f8c:
    // 0x1a1f8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1f90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a1f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f94: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1A1F94u;
    SET_GPR_U32(ctx, 31, 0x1A1F9Cu);
    ctx->pc = 0x1A1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F94u;
    // 0x1a1f98: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1A1F94u, 0x1A1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F9Cu;
label_1a1f9c:
    // 0x1a1f9c: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A1F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A1FA4u);
    ctx->pc = 0x1A1FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F9Cu;
    // 0x1a1fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A1F9Cu, 0x1A1FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FA4u;
label_1a1fa4:
    // 0x1a1fa4: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a1fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1fa8: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1a1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a1fac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1a1facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a1fb0: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A1FB0u;
    {
        const bool branch_taken_0x1a1fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FB0u;
        // 0x1a1fb4: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fb0) {
            ctx->pc = 0x1A20D4u;
            goto label_1a20d4;
        }
    }
    ctx->pc = 0x1A1FB8u;
    // 0x1a1fb8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1a1fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1a1fbc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a1fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a1fc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1fc4: 0x0  nop
    ctx->pc = 0x1a1fc4u;
    // NOP
    // 0x1a1fc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a1fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1fcc: 0x0  nop
    ctx->pc = 0x1a1fccu;
    // NOP
    // 0x1a1fd0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1FD0u;
    {
        const bool branch_taken_0x1a1fd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1fd0) {
            ctx->pc = 0x1A2014u;
            goto label_1a2014;
        }
    }
    ctx->pc = 0x1A1FD8u;
    // 0x1a1fd8: 0xc061a22  jal         func_186888
    ctx->pc = 0x1A1FD8u;
    SET_GPR_U32(ctx, 31, 0x1A1FE0u);
    ctx->pc = 0x1A1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1FD8u;
    // 0x1a1fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x1A1FD8u, 0x1A1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FE0u;
label_1a1fe0:
    // 0x1a1fe0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1a1fe4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1a1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1a1fe8: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1a1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1a1fec: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x1a1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    // 0x1a1ff0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1a1ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a1ff4: 0xc06042c  jal         func_1810B0
    ctx->pc = 0x1A1FF4u;
    SET_GPR_U32(ctx, 31, 0x1A1FFCu);
    ctx->pc = 0x1A1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1FF4u;
    // 0x1a1ff8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1810B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1810B0u, 0x1A1FF4u, 0x1A1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1FFCu;
label_1a1ffc:
    // 0x1a1ffc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1FFCu;
    {
        const bool branch_taken_0x1a1ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ffc) {
            ctx->pc = 0x1A2014u;
            goto label_1a2014;
        }
    }
    ctx->pc = 0x1A2004u;
    // 0x1a2004: 0xc06928e  jal         func_1A4A38
    ctx->pc = 0x1A2004u;
    SET_GPR_U32(ctx, 31, 0x1A200Cu);
    ctx->pc = 0x1A2008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2004u;
    // 0x1a2008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A38u, 0x1A2004u, 0x1A200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A200Cu;
label_1a200c:
    // 0x1a200c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A200Cu;
    {
        const bool branch_taken_0x1a200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A200Cu;
        // 0x1a2010: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a200c) {
            ctx->pc = 0x1A2078u;
            goto label_1a2078;
        }
    }
    ctx->pc = 0x1A2014u;
label_1a2014:
    // 0x1a2014: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2018: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a2018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1a201c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a201cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a2020: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1A2020u;
    SET_GPR_U32(ctx, 31, 0x1A2028u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A2020u, 0x1A2028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2028u;
label_1a2028:
    // 0x1a2028: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a2028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1a202c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a202cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2034: 0x0  nop
    ctx->pc = 0x1a2034u;
    // NOP
    // 0x1a2038: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1a2038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a203c: 0x0  nop
    ctx->pc = 0x1a203cu;
    // NOP
    // 0x1a2040: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1A2040u;
    {
        const bool branch_taken_0x1a2040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2040u;
        // 0x1a2044: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2040) {
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A2048u;
    // 0x1a2048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a204c: 0x2443fe90  addiu       $v1, $v0, -0x170
    ctx->pc = 0x1a204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
    // 0x1a2050: 0x9c46fe90  lwu         $a2, -0x170($v0)
    ctx->pc = 0x1a2050u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294966928)));
    // 0x1a2054: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x1a2054u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a2058: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a2058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a205c: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x1A205Cu;
    SET_GPR_U32(ctx, 31, 0x1A2064u);
    ctx->pc = 0x1A2060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A205Cu;
    // 0x1a2060: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x1A205Cu, 0x1A2064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2064u;
label_1a2064:
    // 0x1a2064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2064u;
    {
        const bool branch_taken_0x1a2064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2064u;
        // 0x1a2068: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2064) {
            ctx->pc = 0x1A2078u;
            goto label_1a2078;
        }
    }
    ctx->pc = 0x1A206Cu;
label_1a206c:
    // 0x1a206c: 0xc069350  jal         func_1A4D40
    ctx->pc = 0x1A206Cu;
    SET_GPR_U32(ctx, 31, 0x1A2074u);
    ctx->pc = 0x1A2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A206Cu;
    // 0x1a2070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D40u, 0x1A206Cu, 0x1A2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2074u;
label_1a2074:
    // 0x1a2074: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a2074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a2078:
    // 0x1a2078: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a2078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1a207c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A207Cu;
    {
        const bool branch_taken_0x1a207c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A207Cu;
        // 0x1a2080: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a207c) {
            ctx->pc = 0x1A2098u;
            goto label_1a2098;
        }
    }
    ctx->pc = 0x1A2084u;
    // 0x1a2084: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2088: 0x0  nop
    ctx->pc = 0x1a2088u;
    // NOP
    // 0x1a208c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a208cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a2090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2090u;
    {
        const bool branch_taken_0x1a2090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2090) {
            ctx->pc = 0x1A20B0u;
            goto label_1a20b0;
        }
    }
    ctx->pc = 0x1A2098u;
label_1a2098:
    // 0x1a2098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a209c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a209cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a20a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a20a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a20a4: 0x0  nop
    ctx->pc = 0x1a20a4u;
    // NOP
    // 0x1a20a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a20a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a20ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a20acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a20b0:
    // 0x1a20b0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a20b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a20b4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a20b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a20b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a20b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a20bc: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1a20bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x1a20c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a20c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a20c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a20c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a20c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a20c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a20cc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1a20ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1a20d0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1a20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_1a20d4:
    // 0x1a20d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a20d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a20d8: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x1a20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x1a20dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a20dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a20e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a20e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20e4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1a20e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A20E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20E8u;
        // 0x1a20ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A20E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A20F0u;
}
