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

// Function: sub_001986D8
// Address: 0x1986d8 - 0x198908
void sub_001986D8_0x1986d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001986D8_0x1986d8");
#endif

    switch (ctx->pc) {
        case 0x198724u: goto label_198724;
        case 0x19873cu: goto label_19873c;
        case 0x198764u: goto label_198764;
        case 0x198784u: goto label_198784;
        case 0x1987a4u: goto label_1987a4;
        case 0x1987c4u: goto label_1987c4;
        case 0x1987e4u: goto label_1987e4;
        case 0x1987f0u: goto label_1987f0;
        case 0x1987fcu: goto label_1987fc;
        case 0x198808u: goto label_198808;
        case 0x198814u: goto label_198814;
        case 0x198828u: goto label_198828;
        case 0x198844u: goto label_198844;
        case 0x198864u: goto label_198864;
        case 0x198884u: goto label_198884;
        case 0x19888cu: goto label_19888c;
        case 0x198894u: goto label_198894;
        case 0x1988b0u: goto label_1988b0;
        default: break;
    }

    ctx->pc = 0x1986d8u;

    // 0x1986d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1986d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1986dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1986dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1986e0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1986e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1986e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1986e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986e8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1986e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1986ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1986f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1986f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1986f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1986f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1986f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1986f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1986fc: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x198700: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x198700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x198704: 0x26710040  addiu       $s1, $s3, 0x40
    ctx->pc = 0x198704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x198708: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x198708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x19870c: 0x26720060  addiu       $s2, $s3, 0x60
    ctx->pc = 0x19870cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x198710: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x198710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x198714: 0x267400d0  addiu       $s4, $s3, 0xD0
    ctx->pc = 0x198714u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x198718: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x198718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x19871c: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x19871Cu;
    SET_GPR_U32(ctx, 31, 0x198724u);
    ctx->pc = 0x198720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19871Cu;
    // 0x198720: 0x24170006  addiu       $s7, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x19871Cu, 0x198724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198724u;
label_198724:
    // 0x198724: 0x26750100  addiu       $s5, $s3, 0x100
    ctx->pc = 0x198724u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x198728: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x198728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x19872c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19872cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198730: 0x24421288  addiu       $v0, $v0, 0x1288
    ctx->pc = 0x198730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4744));
    // 0x198734: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x198734u;
    SET_GPR_U32(ctx, 31, 0x19873Cu);
    ctx->pc = 0x198738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198734u;
    // 0x198738: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x198734u, 0x19873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19873Cu;
label_19873c:
    // 0x19873c: 0x3c160043  lui         $s6, 0x43
    ctx->pc = 0x19873cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)67 << 16));
    // 0x198740: 0xae170010  sw          $s7, 0x10($s0)
    ctx->pc = 0x198740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 23));
    // 0x198744: 0x26d60f90  addiu       $s6, $s6, 0xF90
    ctx->pc = 0x198744u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
    // 0x198748: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x198748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x19874c: 0xae160018  sw          $s6, 0x18($s0)
    ctx->pc = 0x19874cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
    // 0x198750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198754: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x198754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x198758: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x198758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x19875c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19875Cu;
    SET_GPR_U32(ctx, 31, 0x198764u);
    ctx->pc = 0x198760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19875Cu;
    // 0x198760: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19875Cu, 0x198764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198764u;
label_198764:
    // 0x198764: 0xae360018  sw          $s6, 0x18($s1)
    ctx->pc = 0x198764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
    // 0x198768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19876c: 0xae370010  sw          $s7, 0x10($s1)
    ctx->pc = 0x19876cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 23));
    // 0x198770: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x198770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x198774: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x198774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x198778: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x198778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x19877c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19877Cu;
    SET_GPR_U32(ctx, 31, 0x198784u);
    ctx->pc = 0x198780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19877Cu;
    // 0x198780: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19877Cu, 0x198784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198784u;
label_198784:
    // 0x198784: 0xae560018  sw          $s6, 0x18($s2)
    ctx->pc = 0x198784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 22));
    // 0x198788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19878c: 0xae570010  sw          $s7, 0x10($s2)
    ctx->pc = 0x19878cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 23));
    // 0x198790: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x198790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x198794: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x198794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x198798: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x198798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x19879c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19879Cu;
    SET_GPR_U32(ctx, 31, 0x1987A4u);
    ctx->pc = 0x1987A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19879Cu;
    // 0x1987a0: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19879Cu, 0x1987A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987A4u;
label_1987a4:
    // 0x1987a4: 0xae960018  sw          $s6, 0x18($s4)
    ctx->pc = 0x1987a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 22));
    // 0x1987a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1987a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987ac: 0xae970010  sw          $s7, 0x10($s4)
    ctx->pc = 0x1987acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 23));
    // 0x1987b0: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x1987b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x1987b4: 0xae6000d0  sw          $zero, 0xD0($s3)
    ctx->pc = 0x1987b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
    // 0x1987b8: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1987b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x1987bc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1987BCu;
    SET_GPR_U32(ctx, 31, 0x1987C4u);
    ctx->pc = 0x1987C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1987BCu;
    // 0x1987c0: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1987BCu, 0x1987C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987C4u;
label_1987c4:
    // 0x1987c4: 0xaeb60018  sw          $s6, 0x18($s5)
    ctx->pc = 0x1987c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 22));
    // 0x1987c8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1987cc: 0xaeb70010  sw          $s7, 0x10($s5)
    ctx->pc = 0x1987ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 23));
    // 0x1987d0: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x1987d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1987d4: 0xae600100  sw          $zero, 0x100($s3)
    ctx->pc = 0x1987d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 0));
    // 0x1987d8: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x1987d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x1987dc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1987DCu;
    SET_GPR_U32(ctx, 31, 0x1987E4u);
    ctx->pc = 0x1987E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1987DCu;
    // 0x1987e0: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1987DCu, 0x1987E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987E4u;
label_1987e4:
    // 0x1987e4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1987e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987e8: 0xc06569c  jal         func_195A70
    ctx->pc = 0x1987E8u;
    SET_GPR_U32(ctx, 31, 0x1987F0u);
    ctx->pc = 0x1987ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1987E8u;
    // 0x1987ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195A70u, 0x1987E8u, 0x1987F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987F0u;
label_1987f0:
    // 0x1987f0: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x1987f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x1987f4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1987F4u;
    SET_GPR_U32(ctx, 31, 0x1987FCu);
    ctx->pc = 0x1987F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1987F4u;
    // 0x1987f8: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1987F4u, 0x1987FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987FCu;
label_1987fc:
    // 0x1987fc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1987fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198800: 0xc065b6c  jal         func_196DB0
    ctx->pc = 0x198800u;
    SET_GPR_U32(ctx, 31, 0x198808u);
    ctx->pc = 0x198804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198800u;
    // 0x198804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196DB0u, 0x198800u, 0x198808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198808u;
label_198808:
    // 0x198808: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x198808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x19880c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x19880Cu;
    SET_GPR_U32(ctx, 31, 0x198814u);
    ctx->pc = 0x198810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19880Cu;
    // 0x198810: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x19880Cu, 0x198814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198814u;
label_198814:
    // 0x198814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198818: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x198818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19881c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198820: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x198820u;
    SET_GPR_U32(ctx, 31, 0x198828u);
    ctx->pc = 0x198824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198820u;
    // 0x198824: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x198820u, 0x198828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198828u;
label_198828:
    // 0x198828: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x198828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x19882c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x198830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198834: 0x244211c8  addiu       $v0, $v0, 0x11C8
    ctx->pc = 0x198834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4552));
    // 0x198838: 0x261400a0  addiu       $s4, $s0, 0xA0
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x19883c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19883Cu;
    SET_GPR_U32(ctx, 31, 0x198844u);
    ctx->pc = 0x198840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19883Cu;
    // 0x198840: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19883Cu, 0x198844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198844u;
label_198844:
    // 0x198844: 0xae360018  sw          $s6, 0x18($s1)
    ctx->pc = 0x198844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
    // 0x198848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19884c: 0xae370010  sw          $s7, 0x10($s1)
    ctx->pc = 0x19884cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 23));
    // 0x198850: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x198850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x198854: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x198854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x198858: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x198858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x19885c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19885Cu;
    SET_GPR_U32(ctx, 31, 0x198864u);
    ctx->pc = 0x198860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19885Cu;
    // 0x198860: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19885Cu, 0x198864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198864u;
label_198864:
    // 0x198864: 0xae560018  sw          $s6, 0x18($s2)
    ctx->pc = 0x198864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 22));
    // 0x198868: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x198868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x19886c: 0xae570010  sw          $s7, 0x10($s2)
    ctx->pc = 0x19886cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 23));
    // 0x198870: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x198870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x198874: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x198874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x198878: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x198878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x19887c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19887Cu;
    SET_GPR_U32(ctx, 31, 0x198884u);
    ctx->pc = 0x198880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19887Cu;
    // 0x198880: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19887Cu, 0x198884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198884u;
label_198884:
    // 0x198884: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x198884u;
    SET_GPR_U32(ctx, 31, 0x19888Cu);
    ctx->pc = 0x198888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198884u;
    // 0x198888: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x198884u, 0x19888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19888Cu;
label_19888c:
    // 0x19888c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19888Cu;
    SET_GPR_U32(ctx, 31, 0x198894u);
    ctx->pc = 0x198890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19888Cu;
    // 0x198890: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19888Cu, 0x198894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198894u;
label_198894:
    // 0x198894: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x198894u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
    // 0x198898: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x198898u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x19889c: 0x7e0000b0  sq          $zero, 0xB0($s0)
    ctx->pc = 0x19889cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 0));
    // 0x1988a0: 0x7e0000e0  sq          $zero, 0xE0($s0)
    ctx->pc = 0x1988a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 0));
    // 0x1988a4: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x1988a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1988a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1988A8u;
    SET_GPR_U32(ctx, 31, 0x1988B0u);
    ctx->pc = 0x1988ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988A8u;
    // 0x1988ac: 0x261100f0  addiu       $s1, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1988A8u, 0x1988B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988B0u;
label_1988b0:
    // 0x1988b0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1988b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1988b4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1988b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1988b8: 0x7e000100  sq          $zero, 0x100($s0)
    ctx->pc = 0x1988b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 0));
    // 0x1988bc: 0x7e000130  sq          $zero, 0x130($s0)
    ctx->pc = 0x1988bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), GPR_VEC(ctx, 0));
    // 0x1988c0: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1988c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1988c4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1988c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1988c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1988c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1988cc: 0xae70001c  sw          $s0, 0x1C($s3)
    ctx->pc = 0x1988ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 16));
    // 0x1988d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1988d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988d4: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1988d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x1988d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1988d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1988dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1988dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1988e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1988e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1988e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1988e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1988e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1988e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1988ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1988ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1988f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1988f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1988f4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1988f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1988f8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1988f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1988fc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1988fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x198900: 0x3e00008  jr          $ra
    ctx->pc = 0x198900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198900u;
        // 0x198904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198908u;
}
