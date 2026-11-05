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

// Function: sub_0037BA20
// Address: 0x37ba20 - 0x37bc58
void sub_0037BA20_0x37ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BA20_0x37ba20");
#endif

    switch (ctx->pc) {
        case 0x37ba60u: goto label_37ba60;
        case 0x37ba68u: goto label_37ba68;
        case 0x37baf4u: goto label_37baf4;
        case 0x37bb00u: goto label_37bb00;
        case 0x37bb14u: goto label_37bb14;
        case 0x37bb68u: goto label_37bb68;
        case 0x37bb6cu: goto label_37bb6c;
        case 0x37bb80u: goto label_37bb80;
        case 0x37bbb4u: goto label_37bbb4;
        case 0x37bbccu: goto label_37bbcc;
        case 0x37bbdcu: goto label_37bbdc;
        case 0x37bbe8u: goto label_37bbe8;
        case 0x37bbf4u: goto label_37bbf4;
        case 0x37bc28u: goto label_37bc28;
        default: break;
    }

    ctx->pc = 0x37ba20u;

    // 0x37ba20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37ba24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37ba28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x37ba2c: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x37ba2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x37ba30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37ba34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37ba34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x37ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x37ba3c: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x37ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x37ba40: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x37ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF910u));
    // 0x37ba44: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF914u));
    // 0x37ba48: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x37ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x37ba4c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x37ba4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x37ba50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37BA50u;
    {
        const bool branch_taken_0x37ba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA50u;
        // 0x37ba54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba50) {
            ctx->pc = 0x37BA60u;
            goto label_37ba60;
        }
    }
    ctx->pc = 0x37BA58u;
    // 0x37ba58: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37BA58u;
    SET_GPR_U32(ctx, 31, 0x37BA60u);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37BA58u, 0x37BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA60u;
label_37ba60:
    // 0x37ba60: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x37ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x37ba64: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x37ba64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_37ba68:
    // 0x37ba68: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x37ba68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x37ba6c: 0x34c60005  ori         $a2, $a2, 0x5
    ctx->pc = 0x37ba6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x37ba70: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x37ba70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x37ba74: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x37ba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x37ba78: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x37ba78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x37ba7c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x37ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x37ba80: 0x3c056c05  lui         $a1, 0x6C05
    ctx->pc = 0x37ba80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27653 << 16));
    // 0x37ba84: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x37ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
    // 0x37ba88: 0x2452825  or          $a1, $s2, $a1
    ctx->pc = 0x37ba88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x37ba8c: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x37ba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    // 0x37ba90: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x37ba90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37ba94: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x37ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x37ba98: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x37ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37ba9c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x37ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x37baa0: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x37baa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x37baa4: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x37baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x37baa8: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x37baa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x37baac: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x37baacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x37bab0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bab4: 0xfe070010  sd          $a3, 0x10($s0)
    ctx->pc = 0x37bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 7));
    // 0x37bab8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37bab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37babc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x37babcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x37bac0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x37bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37bac4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x37bac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x37bac8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x37bac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37bacc: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x37baccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x37bad0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x37bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37bad4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x37bad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x37bad8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x37bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37badc: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x37badcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x37bae0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x37bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37bae4: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x37bae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x37bae8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x37bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37baec: 0xc0dd5b2  jal         func_3756C8
    ctx->pc = 0x37BAECu;
    SET_GPR_U32(ctx, 31, 0x37BAF4u);
    ctx->pc = 0x37BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAECu;
    // 0x37baf0: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756C8u, 0x37BAECu, 0x37BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAF4u;
label_37baf4:
    // 0x37baf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37baf8: 0xc0dd5b2  jal         func_3756C8
    ctx->pc = 0x37BAF8u;
    SET_GPR_U32(ctx, 31, 0x37BB00u);
    ctx->pc = 0x37BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAF8u;
    // 0x37bafc: 0xfe020028  sd          $v0, 0x28($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756C8u, 0x37BAF8u, 0x37BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB00u;
label_37bb00:
    // 0x37bb00: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x37bb00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x37bb04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bb08: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x37bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x37bb0c: 0xc0dd2ca  jal         func_374B28
    ctx->pc = 0x37BB0Cu;
    SET_GPR_U32(ctx, 31, 0x37BB14u);
    ctx->pc = 0x37BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB0Cu;
    // 0x37bb10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374B28u, 0x37BB0Cu, 0x37BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB14u;
label_37bb14:
    // 0x37bb14: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x37bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x37bb18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x37bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37bb1c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x37bb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37bb20: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x37bb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x37bb24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37BB24u;
    {
        const bool branch_taken_0x37bb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB24u;
        // 0x37bb28: 0x3200b  movn        $a0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb24) {
            ctx->pc = 0x37BB74u;
            goto label_37bb74;
        }
    }
    ctx->pc = 0x37BB2Cu;
    // 0x37bb2c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x37bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x37bb30: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x37bb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x37bb34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x37bb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x37bb38: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x37bb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x37bb3c: 0x52dc0  sll         $a1, $a1, 23
    ctx->pc = 0x37bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 23));
    // 0x37bb40: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x37bb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x37bb44: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x37bb44u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x37bb48: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x37bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37bb4c: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x37bb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x37bb50: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x37bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x37bb54: 0x52e3b  dsra        $a1, $a1, 24
    ctx->pc = 0x37bb54u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 24);
    // 0x37bb58: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x37bb58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x37bb5c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x37bb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x37bb60: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x37bb60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37bb64: 0xc0dd83c  jal         func_3760F0
label_37bb68:
    if (ctx->pc == 0x37BB68u) {
        ctx->pc = 0x37BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB64u;
        // 0x37bb68: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BB6Cu;
        goto label_37bb6c;
    }
    ctx->pc = 0x37BB64u;
    SET_GPR_U32(ctx, 31, 0x37BB6Cu);
    ctx->pc = 0x37BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB64u;
    // 0x37bb68: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x37BB64u, 0x37BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB6Cu;
label_37bb6c:
    // 0x37bb6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x37BB6Cu;
    {
        const bool branch_taken_0x37bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB6Cu;
        // 0x37bb70: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb6c) {
            ctx->pc = 0x37BBB8u;
            goto label_37bbb8;
        }
    }
    ctx->pc = 0x37BB74u;
label_37bb74:
    // 0x37bb74: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x37bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x37bb78: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x37bb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x37bb7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x37bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_37bb80:
    // 0x37bb80: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x37bb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x37bb84: 0x52dc0  sll         $a1, $a1, 23
    ctx->pc = 0x37bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 23));
    // 0x37bb88: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x37bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x37bb8c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x37bb8cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x37bb90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37bb94: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x37bb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x37bb98: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x37bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x37bb9c: 0x52e3b  dsra        $a1, $a1, 24
    ctx->pc = 0x37bb9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 24);
    // 0x37bba0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x37bba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x37bba4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x37bba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x37bba8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x37bba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37bbac: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x37BBACu;
    SET_GPR_U32(ctx, 31, 0x37BBB4u);
    ctx->pc = 0x37BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBACu;
    // 0x37bbb0: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x37BBACu, 0x37BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBB4u;
label_37bbb4:
    // 0x37bbb4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x37bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_37bbb8:
    // 0x37bbb8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37bbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37bbbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BBBCu;
    {
        const bool branch_taken_0x37bbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BBBCu;
        // 0x37bbc0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bbbc) {
            ctx->pc = 0x37BBD4u;
            goto label_37bbd4;
        }
    }
    ctx->pc = 0x37BBC4u;
    // 0x37bbc4: 0xc0dd5b8  jal         func_3756E0
    ctx->pc = 0x37BBC4u;
    SET_GPR_U32(ctx, 31, 0x37BBCCu);
    ctx->pc = 0x37BBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBC4u;
    // 0x37bbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756E0u, 0x37BBC4u, 0x37BBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBCCu;
label_37bbcc:
    // 0x37bbcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37BBCCu;
    {
        const bool branch_taken_0x37bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BBCCu;
        // 0x37bbd0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bbcc) {
            ctx->pc = 0x37BBE0u;
            goto label_37bbe0;
        }
    }
    ctx->pc = 0x37BBD4u;
label_37bbd4:
    // 0x37bbd4: 0xc0dd5b8  jal         func_3756E0
    ctx->pc = 0x37BBD4u;
    SET_GPR_U32(ctx, 31, 0x37BBDCu);
    ctx->pc = 0x37BBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBD4u;
    // 0x37bbd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756E0u, 0x37BBD4u, 0x37BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBDCu;
label_37bbdc:
    // 0x37bbdc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x37bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_37bbe0:
    // 0x37bbe0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x37BBE0u;
    SET_GPR_U32(ctx, 31, 0x37BBE8u);
    ctx->pc = 0x37BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBE0u;
    // 0x37bbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x37BBE0u, 0x37BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBE8u;
label_37bbe8:
    // 0x37bbe8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x37bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x37bbec: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x37BBECu;
    SET_GPR_U32(ctx, 31, 0x37BBF4u);
    ctx->pc = 0x37BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBECu;
    // 0x37bbf0: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x37BBECu, 0x37BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBF4u;
label_37bbf4:
    // 0x37bbf4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x37bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x37bbf8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37bbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37bbfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37BBFCu;
    {
        const bool branch_taken_0x37bbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BBFCu;
        // 0x37bc00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bbfc) {
            ctx->pc = 0x37BC28u;
            goto label_37bc28;
        }
    }
    ctx->pc = 0x37BC04u;
    // 0x37bc04: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x37bc04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x37bc08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37bc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bc0c: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x37bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x37bc10: 0x24e2fffa  addiu       $v0, $a3, -0x6
    ctx->pc = 0x37bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967290));
    // 0x37bc14: 0x8e280030  lw          $t0, 0x30($s1)
    ctx->pc = 0x37bc14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x37bc18: 0x8e2a0028  lw          $t2, 0x28($s1)
    ctx->pc = 0x37bc18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x37bc1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37bc1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc20: 0xc0dd4a4  jal         func_375290
    ctx->pc = 0x37BC20u;
    SET_GPR_U32(ctx, 31, 0x37BC28u);
    ctx->pc = 0x37BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BC20u;
    // 0x37bc24: 0x463004  sllv        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375290u, 0x37BC20u, 0x37BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BC28u;
label_37bc28:
    // 0x37bc28: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x37bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x37bc2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x37bc30: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x37bc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x37bc34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37bc34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bc38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x37bc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37bc3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37bc3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bc40: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x37bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x37bc44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37bc44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37bc48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x37bc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37bc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x37BC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC4Cu;
        // 0x37bc50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BC54u;
    // 0x37bc54: 0x0  nop
    ctx->pc = 0x37bc54u;
    // NOP
    ctx->pc = 0x37bc58u;
}
