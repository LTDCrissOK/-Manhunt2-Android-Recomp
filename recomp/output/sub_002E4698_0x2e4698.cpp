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

// Function: sub_002E4698
// Address: 0x2e4698 - 0x2e4b08
void sub_002E4698_0x2e4698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4698_0x2e4698");
#endif

    switch (ctx->pc) {
        case 0x2e46c4u: goto label_2e46c4;
        case 0x2e4724u: goto label_2e4724;
        case 0x2e472cu: goto label_2e472c;
        case 0x2e4734u: goto label_2e4734;
        case 0x2e4764u: goto label_2e4764;
        case 0x2e4800u: goto label_2e4800;
        case 0x2e4890u: goto label_2e4890;
        case 0x2e4898u: goto label_2e4898;
        case 0x2e48acu: goto label_2e48ac;
        case 0x2e48d0u: goto label_2e48d0;
        case 0x2e48d8u: goto label_2e48d8;
        case 0x2e4904u: goto label_2e4904;
        case 0x2e492cu: goto label_2e492c;
        case 0x2e4934u: goto label_2e4934;
        case 0x2e4990u: goto label_2e4990;
        case 0x2e499cu: goto label_2e499c;
        case 0x2e49a4u: goto label_2e49a4;
        case 0x2e49b0u: goto label_2e49b0;
        case 0x2e49b8u: goto label_2e49b8;
        case 0x2e49c8u: goto label_2e49c8;
        case 0x2e49e8u: goto label_2e49e8;
        case 0x2e4a08u: goto label_2e4a08;
        case 0x2e4a10u: goto label_2e4a10;
        case 0x2e4a20u: goto label_2e4a20;
        case 0x2e4ac8u: goto label_2e4ac8;
        case 0x2e4ad0u: goto label_2e4ad0;
        case 0x2e4adcu: goto label_2e4adc;
        default: break;
    }

    ctx->pc = 0x2e4698u;

    // 0x2e4698: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e4698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e469c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e469cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e46a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2e46a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2e46a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e46a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e46a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e46acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e46b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e46b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e46b4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2e46b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e46b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e46b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e46bc: 0xc09439a  jal         func_250E68
    ctx->pc = 0x2E46BCu;
    SET_GPR_U32(ctx, 31, 0x2E46C4u);
    ctx->pc = 0x2E46C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E46BCu;
    // 0x2e46c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250E68u, 0x2E46BCu, 0x2E46C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46C4u;
label_2e46c4:
    // 0x2e46c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e46c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e46c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e46c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e46cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2e46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2e46d0: 0xae4010c0  sw          $zero, 0x10C0($s2)
    ctx->pc = 0x2e46d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4288), GPR_U32(ctx, 0));
    // 0x2e46d4: 0x244240b8  addiu       $v0, $v0, 0x40B8
    ctx->pc = 0x2e46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16568));
    // 0x2e46d8: 0xae4010c4  sw          $zero, 0x10C4($s2)
    ctx->pc = 0x2e46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4292), GPR_U32(ctx, 0));
    // 0x2e46dc: 0xae4010c8  sw          $zero, 0x10C8($s2)
    ctx->pc = 0x2e46dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4296), GPR_U32(ctx, 0));
    // 0x2e46e0: 0x26441110  addiu       $a0, $s2, 0x1110
    ctx->pc = 0x2e46e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4368));
    // 0x2e46e4: 0xa24010cc  sb          $zero, 0x10CC($s2)
    ctx->pc = 0x2e46e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4300), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e46e8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2e46e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e46ec: 0xa25010cd  sb          $s0, 0x10CD($s2)
    ctx->pc = 0x2e46ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4301), (uint8_t)GPR_U32(ctx, 16));
    // 0x2e46f0: 0xa24010ce  sb          $zero, 0x10CE($s2)
    ctx->pc = 0x2e46f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4302), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e46f4: 0xa24010dc  sb          $zero, 0x10DC($s2)
    ctx->pc = 0x2e46f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e46f8: 0xa24010dd  sb          $zero, 0x10DD($s2)
    ctx->pc = 0x2e46f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e46fc: 0xae4010e8  sw          $zero, 0x10E8($s2)
    ctx->pc = 0x2e46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4328), GPR_U32(ctx, 0));
    // 0x2e4700: 0xae4010ec  sw          $zero, 0x10EC($s2)
    ctx->pc = 0x2e4700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4332), GPR_U32(ctx, 0));
    // 0x2e4704: 0xae4010f0  sw          $zero, 0x10F0($s2)
    ctx->pc = 0x2e4704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4336), GPR_U32(ctx, 0));
    // 0x2e4708: 0xae4010f4  sw          $zero, 0x10F4($s2)
    ctx->pc = 0x2e4708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4340), GPR_U32(ctx, 0));
    // 0x2e470c: 0xae4010f8  sw          $zero, 0x10F8($s2)
    ctx->pc = 0x2e470cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4344), GPR_U32(ctx, 0));
    // 0x2e4710: 0xae4010fc  sw          $zero, 0x10FC($s2)
    ctx->pc = 0x2e4710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4348), GPR_U32(ctx, 0));
    // 0x2e4714: 0xae401100  sw          $zero, 0x1100($s2)
    ctx->pc = 0x2e4714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4352), GPR_U32(ctx, 0));
    // 0x2e4718: 0xae401104  sw          $zero, 0x1104($s2)
    ctx->pc = 0x2e4718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4356), GPR_U32(ctx, 0));
    // 0x2e471c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E471Cu;
    SET_GPR_U32(ctx, 31, 0x2E4724u);
    ctx->pc = 0x2E4720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E471Cu;
    // 0x2e4720: 0xae420218  sw          $v0, 0x218($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E471Cu, 0x2E4724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4724u;
label_2e4724:
    // 0x2e4724: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E4724u;
    SET_GPR_U32(ctx, 31, 0x2E472Cu);
    ctx->pc = 0x2E4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4724u;
    // 0x2e4728: 0x26441130  addiu       $a0, $s2, 0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E4724u, 0x2E472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E472Cu;
label_2e472c:
    // 0x2e472c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E472Cu;
    SET_GPR_U32(ctx, 31, 0x2E4734u);
    ctx->pc = 0x2E4730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E472Cu;
    // 0x2e4730: 0x26441140  addiu       $a0, $s2, 0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E472Cu, 0x2E4734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4734u;
label_2e4734:
    // 0x2e4734: 0xae401158  sw          $zero, 0x1158($s2)
    ctx->pc = 0x2e4734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4440), GPR_U32(ctx, 0));
    // 0x2e4738: 0x2644117c  addiu       $a0, $s2, 0x117C
    ctx->pc = 0x2e4738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4476));
    // 0x2e473c: 0xae40115c  sw          $zero, 0x115C($s2)
    ctx->pc = 0x2e473cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4444), GPR_U32(ctx, 0));
    // 0x2e4740: 0xae401160  sw          $zero, 0x1160($s2)
    ctx->pc = 0x2e4740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4448), GPR_U32(ctx, 0));
    // 0x2e4744: 0xae401164  sw          $zero, 0x1164($s2)
    ctx->pc = 0x2e4744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4452), GPR_U32(ctx, 0));
    // 0x2e4748: 0xae401168  sw          $zero, 0x1168($s2)
    ctx->pc = 0x2e4748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4456), GPR_U32(ctx, 0));
    // 0x2e474c: 0xae40116c  sw          $zero, 0x116C($s2)
    ctx->pc = 0x2e474cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4460), GPR_U32(ctx, 0));
    // 0x2e4750: 0xa2401170  sb          $zero, 0x1170($s2)
    ctx->pc = 0x2e4750u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4464), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4754: 0xa2401171  sb          $zero, 0x1171($s2)
    ctx->pc = 0x2e4754u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4465), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4758: 0xae401174  sw          $zero, 0x1174($s2)
    ctx->pc = 0x2e4758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4468), GPR_U32(ctx, 0));
    // 0x2e475c: 0xc0b903e  jal         func_2E40F8
    ctx->pc = 0x2E475Cu;
    SET_GPR_U32(ctx, 31, 0x2E4764u);
    ctx->pc = 0x2E4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E475Cu;
    // 0x2e4760: 0xae401178  sw          $zero, 0x1178($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4472), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E40F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E40F8u, 0x2E475Cu, 0x2E4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4764u;
label_2e4764:
    // 0x2e4764: 0xae4011a8  sw          $zero, 0x11A8($s2)
    ctx->pc = 0x2e4764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4520), GPR_U32(ctx, 0));
    // 0x2e4768: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e4768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e476c: 0xae4011ac  sw          $zero, 0x11AC($s2)
    ctx->pc = 0x2e476cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4524), GPR_U32(ctx, 0));
    // 0x2e4770: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e4770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e4774: 0xae4011b0  sw          $zero, 0x11B0($s2)
    ctx->pc = 0x2e4774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4528), GPR_U32(ctx, 0));
    // 0x2e4778: 0x2643120c  addiu       $v1, $s2, 0x120C
    ctx->pc = 0x2e4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4620));
    // 0x2e477c: 0xae4011b4  sw          $zero, 0x11B4($s2)
    ctx->pc = 0x2e477cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4532), GPR_U32(ctx, 0));
    // 0x2e4780: 0x26441230  addiu       $a0, $s2, 0x1230
    ctx->pc = 0x2e4780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4656));
    // 0x2e4784: 0xa24011b9  sb          $zero, 0x11B9($s2)
    ctx->pc = 0x2e4784u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4537), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4788: 0xa24011ba  sb          $zero, 0x11BA($s2)
    ctx->pc = 0x2e4788u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4538), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e478c: 0xa24011bb  sb          $zero, 0x11BB($s2)
    ctx->pc = 0x2e478cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4539), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4790: 0xa24011bd  sb          $zero, 0x11BD($s2)
    ctx->pc = 0x2e4790u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4541), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4794: 0xa24011be  sb          $zero, 0x11BE($s2)
    ctx->pc = 0x2e4794u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4542), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4798: 0xa24011bf  sb          $zero, 0x11BF($s2)
    ctx->pc = 0x2e4798u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4543), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e479c: 0xae4011c0  sw          $zero, 0x11C0($s2)
    ctx->pc = 0x2e479cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4544), GPR_U32(ctx, 0));
    // 0x2e47a0: 0x90a2b75c  lbu         $v0, -0x48A4($a1)
    ctx->pc = 0x2e47a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB75Cu));
    // 0x2e47a4: 0xe65411c8  swc1        $f20, 0x11C8($s2)
    ctx->pc = 0x2e47a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4552), bits); }
    // 0x2e47a8: 0xa24211c4  sb          $v0, 0x11C4($s2)
    ctx->pc = 0x2e47a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4548), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e47ac: 0xae4011d0  sw          $zero, 0x11D0($s2)
    ctx->pc = 0x2e47acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4560), GPR_U32(ctx, 0));
    // 0x2e47b0: 0xc4c0b7e0  lwc1        $f0, -0x4820($a2)
    ctx->pc = 0x2e47b0u;
    { uint32_t bits = FAST_READ32(0x3FB7E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e47b4: 0xae4011d8  sw          $zero, 0x11D8($s2)
    ctx->pc = 0x2e47b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4568), GPR_U32(ctx, 0));
    // 0x2e47b8: 0xe64011d4  swc1        $f0, 0x11D4($s2)
    ctx->pc = 0x2e47b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4564), bits); }
    // 0x2e47bc: 0xae4011dc  sw          $zero, 0x11DC($s2)
    ctx->pc = 0x2e47bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4572), GPR_U32(ctx, 0));
    // 0x2e47c0: 0xae4011e0  sw          $zero, 0x11E0($s2)
    ctx->pc = 0x2e47c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4576), GPR_U32(ctx, 0));
    // 0x2e47c4: 0xae4011e4  sw          $zero, 0x11E4($s2)
    ctx->pc = 0x2e47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4580), GPR_U32(ctx, 0));
    // 0x2e47c8: 0xae4011e8  sw          $zero, 0x11E8($s2)
    ctx->pc = 0x2e47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
    // 0x2e47cc: 0xae4011ec  sw          $zero, 0x11EC($s2)
    ctx->pc = 0x2e47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4588), GPR_U32(ctx, 0));
    // 0x2e47d0: 0xae4011f0  sw          $zero, 0x11F0($s2)
    ctx->pc = 0x2e47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4592), GPR_U32(ctx, 0));
    // 0x2e47d4: 0xae4011f4  sw          $zero, 0x11F4($s2)
    ctx->pc = 0x2e47d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4596), GPR_U32(ctx, 0));
    // 0x2e47d8: 0xae4011f8  sw          $zero, 0x11F8($s2)
    ctx->pc = 0x2e47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4600), GPR_U32(ctx, 0));
    // 0x2e47dc: 0xae401200  sw          $zero, 0x1200($s2)
    ctx->pc = 0x2e47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4608), GPR_U32(ctx, 0));
    // 0x2e47e0: 0xe6541204  swc1        $f20, 0x1204($s2)
    ctx->pc = 0x2e47e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4612), bits); }
    // 0x2e47e4: 0xae40120c  sw          $zero, 0x120C($s2)
    ctx->pc = 0x2e47e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4620), GPR_U32(ctx, 0));
    // 0x2e47e8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2e47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2e47ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e47ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e47f0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e47f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e47f4: 0xae40121c  sw          $zero, 0x121C($s2)
    ctx->pc = 0x2e47f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4636), GPR_U32(ctx, 0));
    // 0x2e47f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E47F8u;
    SET_GPR_U32(ctx, 31, 0x2E4800u);
    ctx->pc = 0x2E47FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47F8u;
    // 0x2e47fc: 0xae401220  sw          $zero, 0x1220($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E47F8u, 0x2E4800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4800u;
label_2e4800:
    // 0x2e4800: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e4800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e4804: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e4804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e4808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e480c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e4810: 0xe65412dc  swc1        $f20, 0x12DC($s2)
    ctx->pc = 0x2e4810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4828), bits); }
    // 0x2e4814: 0x26441310  addiu       $a0, $s2, 0x1310
    ctx->pc = 0x2e4814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4880));
    // 0x2e4818: 0xae40124c  sw          $zero, 0x124C($s2)
    ctx->pc = 0x2e4818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4684), GPR_U32(ctx, 0));
    // 0x2e481c: 0xae401250  sw          $zero, 0x1250($s2)
    ctx->pc = 0x2e481cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4688), GPR_U32(ctx, 0));
    // 0x2e4820: 0xae401258  sw          $zero, 0x1258($s2)
    ctx->pc = 0x2e4820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4696), GPR_U32(ctx, 0));
    // 0x2e4824: 0xae40125c  sw          $zero, 0x125C($s2)
    ctx->pc = 0x2e4824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4700), GPR_U32(ctx, 0));
    // 0x2e4828: 0xae401260  sw          $zero, 0x1260($s2)
    ctx->pc = 0x2e4828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4704), GPR_U32(ctx, 0));
    // 0x2e482c: 0xae401264  sw          $zero, 0x1264($s2)
    ctx->pc = 0x2e482cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4708), GPR_U32(ctx, 0));
    // 0x2e4830: 0xae401268  sw          $zero, 0x1268($s2)
    ctx->pc = 0x2e4830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4712), GPR_U32(ctx, 0));
    // 0x2e4834: 0xae40126c  sw          $zero, 0x126C($s2)
    ctx->pc = 0x2e4834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4716), GPR_U32(ctx, 0));
    // 0x2e4838: 0xae401270  sw          $zero, 0x1270($s2)
    ctx->pc = 0x2e4838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4720), GPR_U32(ctx, 0));
    // 0x2e483c: 0xae40128c  sw          $zero, 0x128C($s2)
    ctx->pc = 0x2e483cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4748), GPR_U32(ctx, 0));
    // 0x2e4840: 0xae401290  sw          $zero, 0x1290($s2)
    ctx->pc = 0x2e4840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4752), GPR_U32(ctx, 0));
    // 0x2e4844: 0xae401294  sw          $zero, 0x1294($s2)
    ctx->pc = 0x2e4844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4756), GPR_U32(ctx, 0));
    // 0x2e4848: 0xae40129c  sw          $zero, 0x129C($s2)
    ctx->pc = 0x2e4848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4764), GPR_U32(ctx, 0));
    // 0x2e484c: 0xae4012a0  sw          $zero, 0x12A0($s2)
    ctx->pc = 0x2e484cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4768), GPR_U32(ctx, 0));
    // 0x2e4850: 0xae4012a8  sw          $zero, 0x12A8($s2)
    ctx->pc = 0x2e4850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4776), GPR_U32(ctx, 0));
    // 0x2e4854: 0xae4012ac  sw          $zero, 0x12AC($s2)
    ctx->pc = 0x2e4854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4780), GPR_U32(ctx, 0));
    // 0x2e4858: 0xae4012b0  sw          $zero, 0x12B0($s2)
    ctx->pc = 0x2e4858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4784), GPR_U32(ctx, 0));
    // 0x2e485c: 0xae4012b4  sw          $zero, 0x12B4($s2)
    ctx->pc = 0x2e485cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4788), GPR_U32(ctx, 0));
    // 0x2e4860: 0xae4012cc  sw          $zero, 0x12CC($s2)
    ctx->pc = 0x2e4860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4812), GPR_U32(ctx, 0));
    // 0x2e4864: 0xae4012d8  sw          $zero, 0x12D8($s2)
    ctx->pc = 0x2e4864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4824), GPR_U32(ctx, 0));
    // 0x2e4868: 0xae4012e0  sw          $zero, 0x12E0($s2)
    ctx->pc = 0x2e4868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4832), GPR_U32(ctx, 0));
    // 0x2e486c: 0xae4012e4  sw          $zero, 0x12E4($s2)
    ctx->pc = 0x2e486cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4836), GPR_U32(ctx, 0));
    // 0x2e4870: 0xae4012e8  sw          $zero, 0x12E8($s2)
    ctx->pc = 0x2e4870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4840), GPR_U32(ctx, 0));
    // 0x2e4874: 0xae4012ec  sw          $zero, 0x12EC($s2)
    ctx->pc = 0x2e4874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4844), GPR_U32(ctx, 0));
    // 0x2e4878: 0xae4012f0  sw          $zero, 0x12F0($s2)
    ctx->pc = 0x2e4878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4848), GPR_U32(ctx, 0));
    // 0x2e487c: 0xae4012f4  sw          $zero, 0x12F4($s2)
    ctx->pc = 0x2e487cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4852), GPR_U32(ctx, 0));
    // 0x2e4880: 0xae4012f8  sw          $zero, 0x12F8($s2)
    ctx->pc = 0x2e4880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4856), GPR_U32(ctx, 0));
    // 0x2e4884: 0xe6401274  swc1        $f0, 0x1274($s2)
    ctx->pc = 0x2e4884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4724), bits); }
    // 0x2e4888: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E4888u;
    SET_GPR_U32(ctx, 31, 0x2E4890u);
    ctx->pc = 0x2E488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4888u;
    // 0x2e488c: 0xae4212bc  sw          $v0, 0x12BC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E4888u, 0x2E4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4890u;
label_2e4890:
    // 0x2e4890: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E4890u;
    SET_GPR_U32(ctx, 31, 0x2E4898u);
    ctx->pc = 0x2E4894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4890u;
    // 0x2e4894: 0x26441330  addiu       $a0, $s2, 0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E4890u, 0x2E4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4898u;
label_2e4898:
    // 0x2e4898: 0xae401340  sw          $zero, 0x1340($s2)
    ctx->pc = 0x2e4898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4928), GPR_U32(ctx, 0));
    // 0x2e489c: 0x26441350  addiu       $a0, $s2, 0x1350
    ctx->pc = 0x2e489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    // 0x2e48a0: 0xae401344  sw          $zero, 0x1344($s2)
    ctx->pc = 0x2e48a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4932), GPR_U32(ctx, 0));
    // 0x2e48a4: 0xc0b918a  jal         func_2E4628
    ctx->pc = 0x2E48A4u;
    SET_GPR_U32(ctx, 31, 0x2E48ACu);
    ctx->pc = 0x2E48A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48A4u;
    // 0x2e48a8: 0xae401348  sw          $zero, 0x1348($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4936), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4628u, 0x2E48A4u, 0x2E48ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48ACu;
label_2e48ac:
    // 0x2e48ac: 0xa2501385  sb          $s0, 0x1385($s2)
    ctx->pc = 0x2e48acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4997), (uint8_t)GPR_U32(ctx, 16));
    // 0x2e48b0: 0x264413a0  addiu       $a0, $s2, 0x13A0
    ctx->pc = 0x2e48b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5024));
    // 0x2e48b4: 0xae511380  sw          $s1, 0x1380($s2)
    ctx->pc = 0x2e48b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4992), GPR_U32(ctx, 17));
    // 0x2e48b8: 0xa2401384  sb          $zero, 0x1384($s2)
    ctx->pc = 0x2e48b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4996), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e48bc: 0xa2401386  sb          $zero, 0x1386($s2)
    ctx->pc = 0x2e48bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4998), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e48c0: 0xae401388  sw          $zero, 0x1388($s2)
    ctx->pc = 0x2e48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5000), GPR_U32(ctx, 0));
    // 0x2e48c4: 0xa240138c  sb          $zero, 0x138C($s2)
    ctx->pc = 0x2e48c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5004), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e48c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E48C8u;
    SET_GPR_U32(ctx, 31, 0x2E48D0u);
    ctx->pc = 0x2E48CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48C8u;
    // 0x2e48cc: 0xae401390  sw          $zero, 0x1390($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5008), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E48C8u, 0x2E48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48D0u;
label_2e48d0:
    // 0x2e48d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E48D0u;
    SET_GPR_U32(ctx, 31, 0x2E48D8u);
    ctx->pc = 0x2E48D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48D0u;
    // 0x2e48d4: 0x264413b0  addiu       $a0, $s2, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E48D0u, 0x2E48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48D8u;
label_2e48d8:
    // 0x2e48d8: 0x264213e0  addiu       $v0, $s2, 0x13E0
    ctx->pc = 0x2e48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5088));
    // 0x2e48dc: 0xa24013d4  sb          $zero, 0x13D4($s2)
    ctx->pc = 0x2e48dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5076), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e48e0: 0xae4013e0  sw          $zero, 0x13E0($s2)
    ctx->pc = 0x2e48e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5088), GPR_U32(ctx, 0));
    // 0x2e48e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e48e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e48e8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2e48e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2e48ec: 0x26441430  addiu       $a0, $s2, 0x1430
    ctx->pc = 0x2e48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5168));
    // 0x2e48f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e48f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e48f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e48f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e48f8: 0xae401420  sw          $zero, 0x1420($s2)
    ctx->pc = 0x2e48f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5152), GPR_U32(ctx, 0));
    // 0x2e48fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E48FCu;
    SET_GPR_U32(ctx, 31, 0x2E4904u);
    ctx->pc = 0x2E4900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48FCu;
    // 0x2e4900: 0xae4313f0  sw          $v1, 0x13F0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5104), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E48FCu, 0x2E4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4904u;
label_2e4904:
    // 0x2e4904: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e4904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2e4908: 0xae51144c  sw          $s1, 0x144C($s2)
    ctx->pc = 0x2e4908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5196), GPR_U32(ctx, 17));
    // 0x2e490c: 0xa2401440  sb          $zero, 0x1440($s2)
    ctx->pc = 0x2e490cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5184), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4914: 0xae401444  sw          $zero, 0x1444($s2)
    ctx->pc = 0x2e4914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5188), GPR_U32(ctx, 0));
    // 0x2e4918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e491c: 0xa2401448  sb          $zero, 0x1448($s2)
    ctx->pc = 0x2e491cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5192), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4920: 0xae401454  sw          $zero, 0x1454($s2)
    ctx->pc = 0x2e4920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5204), GPR_U32(ctx, 0));
    // 0x2e4924: 0xc0b93c2  jal         func_2E4F08
    ctx->pc = 0x2E4924u;
    SET_GPR_U32(ctx, 31, 0x2E492Cu);
    ctx->pc = 0x2E4928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4924u;
    // 0x2e4928: 0xac4058e4  sw          $zero, 0x58E4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 22756), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F08u, 0x2E4924u, 0x2E492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E492Cu;
label_2e492c:
    // 0x2e492c: 0xc0b91a4  jal         func_2E4690
    ctx->pc = 0x2E492Cu;
    SET_GPR_U32(ctx, 31, 0x2E4934u);
    ctx->pc = 0x2E4930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E492Cu;
    // 0x2e4930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4690u, 0x2E492Cu, 0x2E4934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4934u;
label_2e4934:
    // 0x2e4934: 0xde421020  ld          $v0, 0x1020($s2)
    ctx->pc = 0x2e4934u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 4128)));
    // 0x2e4938: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x2e4938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x2e493c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2e493cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2e4940: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x2e4940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x2e4944: 0x34840007  ori         $a0, $a0, 0x7
    ctx->pc = 0x2e4944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7);
    // 0x2e4948: 0x8e4311c0  lw          $v1, 0x11C0($s2)
    ctx->pc = 0x2e4948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x2e494c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2e494cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2e4950: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2e4950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2e4954: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x2e4954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    // 0x2e4958: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x2e4958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x2e495c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e495cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2e4960: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2e4960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2e4964: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2e4964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2e4968: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2e4968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2e496c: 0xfe421020  sd          $v0, 0x1020($s2)
    ctx->pc = 0x2e496cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4128), GPR_U64(ctx, 2));
    // 0x2e4970: 0xae4311c0  sw          $v1, 0x11C0($s2)
    ctx->pc = 0x2e4970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4544), GPR_U32(ctx, 3));
    // 0x2e4974: 0xacc0b82c  sw          $zero, -0x47D4($a2)
    ctx->pc = 0x2e4974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294948908), GPR_U32(ctx, 0));
    // 0x2e4978: 0x8e421390  lw          $v0, 0x1390($s2)
    ctx->pc = 0x2e4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5008)));
    // 0x2e497c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E497Cu;
    {
        const bool branch_taken_0x2e497c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E497Cu;
        // 0x2e4980: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e497c) {
            ctx->pc = 0x2E49B0u;
            goto label_2e49b0;
        }
    }
    ctx->pc = 0x2E4984u;
    // 0x2e4984: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2e4984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e4988: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2E4988u;
    SET_GPR_U32(ctx, 31, 0x2E4990u);
    ctx->pc = 0x2E498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4988u;
    // 0x2e498c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2E4988u, 0x2E4990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4990u;
label_2e4990:
    // 0x2e4990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4994: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2E4994u;
    SET_GPR_U32(ctx, 31, 0x2E499Cu);
    ctx->pc = 0x2E4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4994u;
    // 0x2e4998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2E4994u, 0x2E499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E499Cu;
label_2e499c:
    // 0x2e499c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2E499Cu;
    SET_GPR_U32(ctx, 31, 0x2E49A4u);
    ctx->pc = 0x2E49A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E499Cu;
    // 0x2e49a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2E499Cu, 0x2E49A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E49A4u;
label_2e49a4:
    // 0x2e49a4: 0xae501390  sw          $s0, 0x1390($s2)
    ctx->pc = 0x2e49a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5008), GPR_U32(ctx, 16));
    // 0x2e49a8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2E49A8u;
    SET_GPR_U32(ctx, 31, 0x2E49B0u);
    ctx->pc = 0x2E49ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E49A8u;
    // 0x2e49ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2E49A8u, 0x2E49B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E49B0u;
label_2e49b0:
    // 0x2e49b0: 0xc0b9f42  jal         func_2E7D08
    ctx->pc = 0x2E49B0u;
    SET_GPR_U32(ctx, 31, 0x2E49B8u);
    ctx->pc = 0x2E49B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E49B0u;
    // 0x2e49b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D08u, 0x2E49B0u, 0x2E49B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E49B8u;
label_2e49b8:
    // 0x2e49b8: 0x264410cf  addiu       $a0, $s2, 0x10CF
    ctx->pc = 0x2e49b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4303));
    // 0x2e49bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e49bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e49c0: 0x264212d4  addiu       $v0, $s2, 0x12D4
    ctx->pc = 0x2e49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4820));
    // 0x2e49c4: 0x0  nop
    ctx->pc = 0x2e49c4u;
    // NOP
label_2e49c8:
    // 0x2e49c8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2e49c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e49cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e49d0: 0x0  nop
    ctx->pc = 0x2e49d0u;
    // NOP
    // 0x2e49d4: 0x0  nop
    ctx->pc = 0x2e49d4u;
    // NOP
    // 0x2e49d8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E49D8u;
    {
        const bool branch_taken_0x2e49d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2E49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49D8u;
        // 0x2e49dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49d8) {
            ctx->pc = 0x2E49C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e49c8;
        }
    }
    ctx->pc = 0x2E49E0u;
    // 0x2e49e0: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x2e49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x2e49e4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2e49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e49e8:
    // 0x2e49e8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2e49e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e49ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e49f0: 0x0  nop
    ctx->pc = 0x2e49f0u;
    // NOP
    // 0x2e49f4: 0x0  nop
    ctx->pc = 0x2e49f4u;
    // NOP
    // 0x2e49f8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E49F8u;
    {
        const bool branch_taken_0x2e49f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2E49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49F8u;
        // 0x2e49fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49f8) {
            ctx->pc = 0x2E49E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e49e8;
        }
    }
    ctx->pc = 0x2E4A00u;
    // 0x2e4a00: 0xc0bf22e  jal         func_2FC8B8
    ctx->pc = 0x2E4A00u;
    SET_GPR_U32(ctx, 31, 0x2E4A08u);
    ctx->pc = 0x2E4A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A00u;
    // 0x2e4a04: 0xae4010d8  sw          $zero, 0x10D8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8B8u, 0x2E4A00u, 0x2E4A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A08u;
label_2e4a08:
    // 0x2e4a08: 0xc0a4758  jal         func_291D60
    ctx->pc = 0x2E4A08u;
    SET_GPR_U32(ctx, 31, 0x2E4A10u);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x2E4A08u, 0x2E4A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A10u;
label_2e4a10:
    // 0x2e4a10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e4a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e4a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4a18: 0xc0a5140  jal         func_294500
    ctx->pc = 0x2E4A18u;
    SET_GPR_U32(ctx, 31, 0x2E4A20u);
    ctx->pc = 0x2E4A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A18u;
    // 0x2e4a1c: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294500u, 0x2E4A18u, 0x2E4A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A20u;
label_2e4a20:
    // 0x2e4a20: 0xc6601590  lwc1        $f0, 0x1590($s3)
    ctx->pc = 0x2e4a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4a24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e4a28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4a2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e4a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e4a30: 0xe440bacc  swc1        $f0, -0x4534($v0)
    ctx->pc = 0x2e4a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBACCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBACCu, _value); } while (0); }
    // 0x2e4a34: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2e4a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e4a38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e4a3c: 0xc6601594  lwc1        $f0, 0x1594($s3)
    ctx->pc = 0x2e4a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4a40: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e4a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e4a44: 0xe440bad0  swc1        $f0, -0x4530($v0)
    ctx->pc = 0x2e4a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBAD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBAD0u, _value); } while (0); }
    // 0x2e4a48: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2e4a4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e4a50: 0xc6611598  lwc1        $f1, 0x1598($s3)
    ctx->pc = 0x2e4a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a54: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e4a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2e4a58: 0xe441bad4  swc1        $f1, -0x452C($v0)
    ctx->pc = 0x2e4a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBAD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBAD4u, _value); } while (0); }
    // 0x2e4a5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e4a60: 0xc660159c  lwc1        $f0, 0x159C($s3)
    ctx->pc = 0x2e4a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4a64: 0xe440bad8  swc1        $f0, -0x4528($v0)
    ctx->pc = 0x2e4a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBAD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBAD8u, _value); } while (0); }
    // 0x2e4a68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e4a6c: 0xc66115a0  lwc1        $f1, 0x15A0($s3)
    ctx->pc = 0x2e4a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a70: 0xe441badc  swc1        $f1, -0x4524($v0)
    ctx->pc = 0x2e4a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBADCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBADCu, _value); } while (0); }
    // 0x2e4a74: 0xa24013f4  sb          $zero, 0x13F4($s2)
    ctx->pc = 0x2e4a74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5108), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4a78: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x2e4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x2e4a7c: 0xa2401418  sb          $zero, 0x1418($s2)
    ctx->pc = 0x2e4a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5144), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4a80: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2e4a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2e4a84: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x2e4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x2e4a88: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e4a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4a8c: 0xfa410170  sqc2        $vf1, 0x170($s2)
    ctx->pc = 0x2e4a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e4a90: 0xe6420160  swc1        $f2, 0x160($s2)
    ctx->pc = 0x2e4a90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 352), bits); }
    // 0x2e4a94: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2e4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2e4a98: 0xae400154  sw          $zero, 0x154($s2)
    ctx->pc = 0x2e4a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 0));
    // 0x2e4a9c: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x2e4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x2e4aa0: 0xae400158  sw          $zero, 0x158($s2)
    ctx->pc = 0x2e4aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 0));
    // 0x2e4aa4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e4aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4aa8: 0xae40015c  sw          $zero, 0x15C($s2)
    ctx->pc = 0x2e4aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 0));
    // 0x2e4aac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e4aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ab0: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2e4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2e4ab4: 0x8c430268  lw          $v1, 0x268($v0)
    ctx->pc = 0x2e4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BF4B8u));
    // 0x2e4ab8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2e4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2e4abc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e4abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e4ac0: 0xc0cfbe0  jal         func_33EF80
    ctx->pc = 0x2E4AC0u;
    SET_GPR_U32(ctx, 31, 0x2E4AC8u);
    ctx->pc = 0x2E4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4AC0u;
    // 0x2e4ac4: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EF80u, 0x2E4AC0u, 0x2E4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4AC8u;
label_2e4ac8:
    // 0x2e4ac8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2E4AC8u;
    SET_GPR_U32(ctx, 31, 0x2E4AD0u);
    ctx->pc = 0x2E4ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4AC8u;
    // 0x2e4acc: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2E4AC8u, 0x2E4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4AD0u;
label_2e4ad0:
    // 0x2e4ad0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e4ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ad4: 0xc0d5bf4  jal         func_356FD0
    ctx->pc = 0x2E4AD4u;
    SET_GPR_U32(ctx, 31, 0x2E4ADCu);
    ctx->pc = 0x2E4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4AD4u;
    // 0x2e4ad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356FD0u, 0x2E4AD4u, 0x2E4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4ADCu;
label_2e4adc:
    // 0x2e4adc: 0xae421454  sw          $v0, 0x1454($s2)
    ctx->pc = 0x2e4adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5204), GPR_U32(ctx, 2));
    // 0x2e4ae0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e4ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ae4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e4ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4ae8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e4ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4aec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e4aecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4af0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2e4af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4af4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e4af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4af8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2e4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e4afc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4AFCu;
        // 0x2e4b00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4B04u;
    // 0x2e4b04: 0x0  nop
    ctx->pc = 0x2e4b04u;
    // NOP
    ctx->pc = 0x2e4b08u;
}
