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

// Function: sub_0033AB80
// Address: 0x33ab80 - 0x33af50
void sub_0033AB80_0x33ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AB80_0x33ab80");
#endif

    switch (ctx->pc) {
        case 0x33abc4u: goto label_33abc4;
        case 0x33abd4u: goto label_33abd4;
        case 0x33ac00u: goto label_33ac00;
        case 0x33ac0cu: goto label_33ac0c;
        case 0x33ac34u: goto label_33ac34;
        case 0x33ac60u: goto label_33ac60;
        case 0x33ac70u: goto label_33ac70;
        case 0x33acc4u: goto label_33acc4;
        case 0x33acf8u: goto label_33acf8;
        case 0x33ad3cu: goto label_33ad3c;
        case 0x33ad5cu: goto label_33ad5c;
        case 0x33ad98u: goto label_33ad98;
        case 0x33aeb8u: goto label_33aeb8;
        case 0x33aee0u: goto label_33aee0;
        case 0x33aef8u: goto label_33aef8;
        case 0x33af20u: goto label_33af20;
        default: break;
    }

    ctx->pc = 0x33ab80u;

    // 0x33ab80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x33ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x33ab84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33ab88: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x33ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x33ab8c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x33ab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x33ab90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ab90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab94: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x33ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x33ab98: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x33ab98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab9c: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x33ab9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x33aba0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x33aba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x33aba4: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x33aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x33aba8: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x33aba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x33abac: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x33abacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x33abb0: 0x8c43bfcc  lw          $v1, -0x4034($v0)
    ctx->pc = 0x33abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBFCCu));
    // 0x33abb4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x33ABB4u;
    {
        const bool branch_taken_0x33abb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABB4u;
        // 0x33abb8: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33abb4) {
            ctx->pc = 0x33ABECu;
            goto label_33abec;
        }
    }
    ctx->pc = 0x33ABBCu;
    // 0x33abbc: 0xc0c49da  jal         func_312768
    ctx->pc = 0x33ABBCu;
    SET_GPR_U32(ctx, 31, 0x33ABC4u);
    ctx->pc = 0x33ABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABBCu;
    // 0x33abc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312768u, 0x33ABBCu, 0x33ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABC4u;
label_33abc4:
    // 0x33abc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33ABC4u;
    {
        const bool branch_taken_0x33abc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABC4u;
        // 0x33abc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33abc4) {
            ctx->pc = 0x33ABECu;
            goto label_33abec;
        }
    }
    ctx->pc = 0x33ABCCu;
    // 0x33abcc: 0xc0c49d2  jal         func_312748
    ctx->pc = 0x33ABCCu;
    SET_GPR_U32(ctx, 31, 0x33ABD4u);
    ctx->pc = 0x33ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABCCu;
    // 0x33abd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x33ABCCu, 0x33ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABD4u;
label_33abd4:
    // 0x33abd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33abd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33abd8: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x33abd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33abdc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33ABDCu;
    {
        const bool branch_taken_0x33abdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABDCu;
        // 0x33abe0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33abdc) {
            ctx->pc = 0x33ABE8u;
            goto label_33abe8;
        }
    }
    ctx->pc = 0x33ABE4u;
    // 0x33abe4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33abe8:
    // 0x33abe8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x33abe8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33abec:
    // 0x33abec: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x33abecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33abf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33abf4: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x33abf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x33abf8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x33ABF8u;
    SET_GPR_U32(ctx, 31, 0x33AC00u);
    ctx->pc = 0x33ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABF8u;
    // 0x33abfc: 0x2453fffe  addiu       $s3, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x33ABF8u, 0x33AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC00u;
label_33ac00:
    // 0x33ac00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33ac00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ac04: 0xc0ce9fa  jal         func_33A7E8
    ctx->pc = 0x33AC04u;
    SET_GPR_U32(ctx, 31, 0x33AC0Cu);
    ctx->pc = 0x33AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC04u;
    // 0x33ac08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A7E8u, 0x33AC04u, 0x33AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC0Cu;
label_33ac0c:
    // 0x33ac0c: 0x9642001a  lhu         $v0, 0x1A($s2)
    ctx->pc = 0x33ac0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x33ac10: 0x96510018  lhu         $s1, 0x18($s2)
    ctx->pc = 0x33ac10u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x33ac14: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x33ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x33ac18: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x33ac18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x33ac1c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x33ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x33ac20: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33AC20u;
    {
        const bool branch_taken_0x33ac20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC20u;
        // 0x33ac24: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac20) {
            ctx->pc = 0x33AC3Cu;
            goto label_33ac3c;
        }
    }
    ctx->pc = 0x33AC28u;
    // 0x33ac28: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x33ac28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33ac2c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x33AC2Cu;
    SET_GPR_U32(ctx, 31, 0x33AC34u);
    ctx->pc = 0x33AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC2Cu;
    // 0x33ac30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x33AC2Cu, 0x33AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC34u;
label_33ac34:
    // 0x33ac34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33AC34u;
    {
        const bool branch_taken_0x33ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC34u;
        // 0x33ac38: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac34) {
            ctx->pc = 0x33AC44u;
            goto label_33ac44;
        }
    }
    ctx->pc = 0x33AC3Cu;
label_33ac3c:
    // 0x33ac3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33ac3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ac40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33ac40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ac44:
    // 0x33ac44: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x33ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x33ac48: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x33ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x33ac4c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x33ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x33ac50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33ac54: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x33ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x33ac58: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33AC58u;
    SET_GPR_U32(ctx, 31, 0x33AC60u);
    ctx->pc = 0x33AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AC58u;
    // 0x33ac5c: 0x3c14005b  lui         $s4, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)91 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33AC58u, 0x33AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC60u;
label_33ac60:
    // 0x33ac60: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x33ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x33ac64: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x33ac64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ac68: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x33AC68u;
    {
        const bool branch_taken_0x33ac68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC68u;
        // 0x33ac6c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac68) {
            ctx->pc = 0x33ACA0u;
            goto label_33aca0;
        }
    }
    ctx->pc = 0x33AC70u;
label_33ac70:
    // 0x33ac70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AC70u;
    {
        const bool branch_taken_0x33ac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC70u;
        // 0x33ac74: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac70) {
            ctx->pc = 0x33AC94u;
            goto label_33ac94;
        }
    }
    ctx->pc = 0x33AC78u;
    // 0x33ac78: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33ac78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33ac7c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x33ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ac80: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x33ac80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33ac84: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x33ac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ac88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x33ac88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x33ac8c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x33ac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ac90: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x33ac90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_33ac94:
    // 0x33ac94: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x33ac94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x33ac98: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x33AC98u;
    {
        const bool branch_taken_0x33ac98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC98u;
        // 0x33ac9c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac98) {
            ctx->pc = 0x33AC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ac70;
        }
    }
    ctx->pc = 0x33ACA0u;
label_33aca0:
    // 0x33aca0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x33aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x33aca4: 0x96510018  lhu         $s1, 0x18($s2)
    ctx->pc = 0x33aca4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x33aca8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x33aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x33acac: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x33acacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x33acb0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33ACB0u;
    {
        const bool branch_taken_0x33acb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACB0u;
        // 0x33acb4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33acb0) {
            ctx->pc = 0x33ACCCu;
            goto label_33accc;
        }
    }
    ctx->pc = 0x33ACB8u;
    // 0x33acb8: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x33acb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x33acbc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x33ACBCu;
    SET_GPR_U32(ctx, 31, 0x33ACC4u);
    ctx->pc = 0x33ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACBCu;
    // 0x33acc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x33ACBCu, 0x33ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACC4u;
label_33acc4:
    // 0x33acc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33ACC4u;
    {
        const bool branch_taken_0x33acc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACC4u;
        // 0x33acc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33acc4) {
            ctx->pc = 0x33ACD4u;
            goto label_33acd4;
        }
    }
    ctx->pc = 0x33ACCCu;
label_33accc:
    // 0x33accc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33acccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33acd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33acd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33acd4:
    // 0x33acd4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x33acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x33acd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33acd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33acdc: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x33acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x33ace0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x33ace0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ace4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x33ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x33ace8: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x33ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x33acec: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x33acecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x33acf0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33ACF0u;
    {
        const bool branch_taken_0x33acf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACF0u;
        // 0x33acf4: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33acf0) {
            ctx->pc = 0x33AD18u;
            goto label_33ad18;
        }
    }
    ctx->pc = 0x33ACF8u;
label_33acf8:
    // 0x33acf8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33ACF8u;
    {
        const bool branch_taken_0x33acf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACF8u;
        // 0x33acfc: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33acf8) {
            ctx->pc = 0x33AD0Cu;
            goto label_33ad0c;
        }
    }
    ctx->pc = 0x33AD00u;
    // 0x33ad00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33ad00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33ad04: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x33ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ad08: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x33ad08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_33ad0c:
    // 0x33ad0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33ad10: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x33AD10u;
    {
        const bool branch_taken_0x33ad10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD10u;
        // 0x33ad14: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad10) {
            ctx->pc = 0x33ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33acf8;
        }
    }
    ctx->pc = 0x33AD18u;
label_33ad18:
    // 0x33ad18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ad1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33ad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ad20: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x33ad20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x33ad24: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x33ad24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33ad28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33ad28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ad2c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x33ad2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33ad30: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x33ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x33ad34: 0xc0ce966  jal         func_33A598
    ctx->pc = 0x33AD34u;
    SET_GPR_U32(ctx, 31, 0x33AD3Cu);
    ctx->pc = 0x33AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD34u;
    // 0x33ad38: 0x73903  sra         $a3, $a3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A598u, 0x33AD34u, 0x33AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD3Cu;
label_33ad3c:
    // 0x33ad3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ad40: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x33ad40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ad44: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x33ad44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x33ad48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33ad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ad4c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x33ad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33ad50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33ad50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ad54: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x33AD54u;
    SET_GPR_U32(ctx, 31, 0x33AD5Cu);
    ctx->pc = 0x33AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD54u;
    // 0x33ad58: 0x63103  sra         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x33AD54u, 0x33AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD5Cu;
label_33ad5c:
    // 0x33ad5c: 0x8e826ec0  lw          $v0, 0x6EC0($s4)
    ctx->pc = 0x33ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28352)));
    // 0x33ad60: 0x26856ec0  addiu       $a1, $s4, 0x6EC0
    ctx->pc = 0x33ad60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 28352));
    // 0x33ad64: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x33ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x33ad68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33ad68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ad6c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x33ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ad70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33ad74: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33ad78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x33ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ad7c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x33ad7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x33ad80: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x33AD80u;
    {
        const bool branch_taken_0x33ad80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD80u;
        // 0x33ad84: 0xac530018  sw          $s3, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad80) {
            ctx->pc = 0x33AEA4u;
            goto label_33aea4;
        }
    }
    ctx->pc = 0x33AD88u;
    // 0x33ad88: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x33ad88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ad8c: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x33ad8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x33ad90: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x33ad90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x33ad94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33ad94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ad98:
    // 0x33ad98: 0x8d426ec0  lw          $v0, 0x6EC0($t2)
    ctx->pc = 0x33ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28352)));
    // 0x33ad9c: 0xd3182a  slt         $v1, $a2, $s3
    ctx->pc = 0x33ad9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x33ada0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33ada4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33ada8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33ADA8u;
    {
        const bool branch_taken_0x33ada8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADA8u;
        // 0x33adac: 0x8c4c0000  lw          $t4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ada8) {
            ctx->pc = 0x33ADF4u;
            goto label_33adf4;
        }
    }
    ctx->pc = 0x33ADB0u;
    // 0x33adb0: 0xc72818  mult        $a1, $a2, $a3
    ctx->pc = 0x33adb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33adb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33adb8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x33adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x33adbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33adc0: 0xac2021  addu        $a0, $a1, $t4
    ctx->pc = 0x33adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x33adc4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33adc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33adc8: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x33adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33adcc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x33adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33add0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x33add0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33add4: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x33add4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x33add8: 0x10c2821  addu        $a1, $t0, $t4
    ctx->pc = 0x33add8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x33addc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33ade0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x33ade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ade4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x33ade4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ade8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x33ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33adec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x33adecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x33adf0: 0xacb60090  sw          $s6, 0x90($a1)
    ctx->pc = 0x33adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 22));
label_33adf4:
    // 0x33adf4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x33adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33adf8: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33ADF8u;
    {
        const bool branch_taken_0x33adf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADF8u;
        // 0x33adfc: 0x53102a  slt         $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33adf8) {
            ctx->pc = 0x33AE40u;
            goto label_33ae40;
        }
    }
    ctx->pc = 0x33AE00u;
    // 0x33ae00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33AE00u;
    {
        const bool branch_taken_0x33ae00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE00u;
        // 0x33ae04: 0xc72818  mult        $a1, $a2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae00) {
            ctx->pc = 0x33AE40u;
            goto label_33ae40;
        }
    }
    ctx->pc = 0x33AE08u;
    // 0x33ae08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ae0c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x33ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x33ae10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ae14: 0xac2021  addu        $a0, $a1, $t4
    ctx->pc = 0x33ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x33ae18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33ae18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ae1c: 0xf881ff80  sqc2        $vf1, -0x80($a0)
    ctx->pc = 0x33ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294967168), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33ae20: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x33ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33ae24: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x33ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33ae28: 0x2484ffb8  addiu       $a0, $a0, -0x48
    ctx->pc = 0x33ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
    // 0x33ae2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33ae30: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x33ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ae34: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x33ae34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ae38: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x33ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ae3c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x33ae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_33ae40:
    // 0x33ae40: 0x24c2fffe  addiu       $v0, $a2, -0x2
    ctx->pc = 0x33ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x33ae44: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33AE44u;
    {
        const bool branch_taken_0x33ae44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE44u;
        // 0x33ae48: 0xc72818  mult        $a1, $a2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae44) {
            ctx->pc = 0x33AE84u;
            goto label_33ae84;
        }
    }
    ctx->pc = 0x33AE4Cu;
    // 0x33ae4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ae50: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x33ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x33ae54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ae58: 0xac2021  addu        $a0, $a1, $t4
    ctx->pc = 0x33ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x33ae5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33ae5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ae60: 0xf881fef0  sqc2        $vf1, -0x110($a0)
    ctx->pc = 0x33ae60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294967024), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33ae64: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x33ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33ae68: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x33ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33ae6c: 0x2484ff20  addiu       $a0, $a0, -0xE0
    ctx->pc = 0x33ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    // 0x33ae70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33ae74: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x33ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ae78: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x33ae78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ae7c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x33ae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ae80: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x33ae80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_33ae84:
    // 0x33ae84: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x33ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x33ae88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33ae8c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x33ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ae90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ae94: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x33ae94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x33ae98: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x33ae98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33ae9c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x33AE9Cu;
    {
        const bool branch_taken_0x33ae9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE9Cu;
        // 0x33aea0: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae9c) {
            ctx->pc = 0x33AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ad98;
        }
    }
    ctx->pc = 0x33AEA4u;
label_33aea4:
    // 0x33aea4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x33aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33aea8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x33aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x33aeac: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AEACu;
    {
        const bool branch_taken_0x33aeac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEACu;
        // 0x33aeb0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aeac) {
            ctx->pc = 0x33AED0u;
            goto label_33aed0;
        }
    }
    ctx->pc = 0x33AEB4u;
    // 0x33aeb4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x33aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_33aeb8:
    // 0x33aeb8: 0x0  nop
    ctx->pc = 0x33aeb8u;
    // NOP
    // 0x33aebc: 0x0  nop
    ctx->pc = 0x33aebcu;
    // NOP
    // 0x33aec0: 0x0  nop
    ctx->pc = 0x33aec0u;
    // NOP
    // 0x33aec4: 0x0  nop
    ctx->pc = 0x33aec4u;
    // NOP
    // 0x33aec8: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33AEC8u;
    {
        const bool branch_taken_0x33aec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33aec8) {
            ctx->pc = 0x33AECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AEC8u;
            // 0x33aecc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33aeb8;
        }
    }
    ctx->pc = 0x33AED0u;
label_33aed0:
    // 0x33aed0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AED0u;
    {
        const bool branch_taken_0x33aed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aed0) {
            ctx->pc = 0x33AED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AED0u;
            // 0x33aed4: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AEE4u;
            goto label_33aee4;
        }
    }
    ctx->pc = 0x33AED8u;
    // 0x33aed8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x33AED8u;
    SET_GPR_U32(ctx, 31, 0x33AEE0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x33AED8u, 0x33AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEE0u;
label_33aee0:
    // 0x33aee0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x33aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_33aee4:
    // 0x33aee4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x33aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x33aee8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33AEE8u;
    {
        const bool branch_taken_0x33aee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEE8u;
        // 0x33aeec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aee8) {
            ctx->pc = 0x33AF10u;
            goto label_33af10;
        }
    }
    ctx->pc = 0x33AEF0u;
    // 0x33aef0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33aef4: 0x0  nop
    ctx->pc = 0x33aef4u;
    // NOP
label_33aef8:
    // 0x33aef8: 0x0  nop
    ctx->pc = 0x33aef8u;
    // NOP
    // 0x33aefc: 0x0  nop
    ctx->pc = 0x33aefcu;
    // NOP
    // 0x33af00: 0x0  nop
    ctx->pc = 0x33af00u;
    // NOP
    // 0x33af04: 0x0  nop
    ctx->pc = 0x33af04u;
    // NOP
    // 0x33af08: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33AF08u;
    {
        const bool branch_taken_0x33af08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF08u;
        // 0x33af0c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af08) {
            ctx->pc = 0x33AEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33aef8;
        }
    }
    ctx->pc = 0x33AF10u;
label_33af10:
    // 0x33af10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AF10u;
    {
        const bool branch_taken_0x33af10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF10u;
        // 0x33af14: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af10) {
            ctx->pc = 0x33AF24u;
            goto label_33af24;
        }
    }
    ctx->pc = 0x33AF18u;
    // 0x33af18: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x33AF18u;
    SET_GPR_U32(ctx, 31, 0x33AF20u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x33AF18u, 0x33AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF20u;
label_33af20:
    // 0x33af20: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x33af20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_33af24:
    // 0x33af24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33af24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33af28: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x33af28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x33af2c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x33af2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33af30: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x33af30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x33af34: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x33af34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33af38: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x33af38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33af3c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x33af3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33af40: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x33af40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x33af44: 0x3e00008  jr          $ra
    ctx->pc = 0x33AF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF44u;
        // 0x33af48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AF4Cu;
    // 0x33af4c: 0x0  nop
    ctx->pc = 0x33af4cu;
    // NOP
    ctx->pc = 0x33af50u;
}
