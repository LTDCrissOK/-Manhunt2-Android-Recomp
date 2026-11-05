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

// Function: sub_001BF408
// Address: 0x1bf408 - 0x1bf620
void sub_001BF408_0x1bf408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF408_0x1bf408");
#endif

    switch (ctx->pc) {
        case 0x1bf45cu: goto label_1bf45c;
        case 0x1bf470u: goto label_1bf470;
        case 0x1bf498u: goto label_1bf498;
        case 0x1bf4d8u: goto label_1bf4d8;
        case 0x1bf510u: goto label_1bf510;
        case 0x1bf548u: goto label_1bf548;
        case 0x1bf580u: goto label_1bf580;
        default: break;
    }

    ctx->pc = 0x1bf408u;

    // 0x1bf408: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bf408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bf40c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1bf40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1bf410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf414: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1bf414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1bf418: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bf418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1bf41c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1bf41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1bf420: 0x261103a0  addiu       $s1, $s0, 0x3A0
    ctx->pc = 0x1bf420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    // 0x1bf424: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1bf424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1bf428: 0x261203f0  addiu       $s2, $s0, 0x3F0
    ctx->pc = 0x1bf428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x1bf42c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1bf42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1bf430: 0x26130420  addiu       $s3, $s0, 0x420
    ctx->pc = 0x1bf430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x1bf434: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1bf434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1bf438: 0x26140450  addiu       $s4, $s0, 0x450
    ctx->pc = 0x1bf438u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    // 0x1bf43c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1bf43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1bf440: 0x26160480  addiu       $s6, $s0, 0x480
    ctx->pc = 0x1bf440u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x1bf444: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1bf444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1bf448: 0x261703c0  addiu       $s7, $s0, 0x3C0
    ctx->pc = 0x1bf448u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x1bf44c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1bf44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1bf450: 0x241e0006  addiu       $fp, $zero, 0x6
    ctx->pc = 0x1bf450u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bf454: 0xc06ef00  jal         func_1BBC00
    ctx->pc = 0x1BF454u;
    SET_GPR_U32(ctx, 31, 0x1BF45Cu);
    ctx->pc = 0x1BF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF454u;
    // 0x1bf458: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC00u, 0x1BF454u, 0x1BF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF45Cu;
label_1bf45c:
    // 0x1bf45c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bf45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bf460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf464: 0x24421418  addiu       $v0, $v0, 0x1418
    ctx->pc = 0x1bf464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5144));
    // 0x1bf468: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BF468u;
    SET_GPR_U32(ctx, 31, 0x1BF470u);
    ctx->pc = 0x1BF46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF468u;
    // 0x1bf46c: 0xae020394  sw          $v0, 0x394($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BF468u, 0x1BF470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF470u;
label_1bf470:
    // 0x1bf470: 0x3c150043  lui         $s5, 0x43
    ctx->pc = 0x1bf470u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)67 << 16));
    // 0x1bf474: 0xae3e0010  sw          $fp, 0x10($s1)
    ctx->pc = 0x1bf474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 30));
    // 0x1bf478: 0x26b50f90  addiu       $s5, $s5, 0xF90
    ctx->pc = 0x1bf478u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3984));
    // 0x1bf47c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1bf47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1bf480: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x1bf480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
    // 0x1bf484: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1bf484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf488: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x1bf488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x1bf48c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1bf48cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1bf490: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BF490u;
    SET_GPR_U32(ctx, 31, 0x1BF498u);
    ctx->pc = 0x1BF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF490u;
    // 0x1bf494: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BF490u, 0x1BF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF498u;
label_1bf498:
    // 0x1bf498: 0xaef50018  sw          $s5, 0x18($s7)
    ctx->pc = 0x1bf498u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 21));
    // 0x1bf49c: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x1bf49cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x1bf4a0: 0xaefe0010  sw          $fp, 0x10($s7)
    ctx->pc = 0x1bf4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 30));
    // 0x1bf4a4: 0x26311408  addiu       $s1, $s1, 0x1408
    ctx->pc = 0x1bf4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5128));
    // 0x1bf4a8: 0xaee00014  sw          $zero, 0x14($s7)
    ctx->pc = 0x1bf4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 0));
    // 0x1bf4ac: 0x260203e0  addiu       $v0, $s0, 0x3E0
    ctx->pc = 0x1bf4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    // 0x1bf4b0: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1bf4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x1bf4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bf4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4b8: 0xaef10018  sw          $s1, 0x18($s7)
    ctx->pc = 0x1bf4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 17));
    // 0x1bf4bc: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1bf4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
    // 0x1bf4c0: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x1bf4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x1bf4c4: 0xae0003e0  sw          $zero, 0x3E0($s0)
    ctx->pc = 0x1bf4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 0));
    // 0x1bf4c8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bf4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1bf4cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bf4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bf4d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BF4D0u;
    SET_GPR_U32(ctx, 31, 0x1BF4D8u);
    ctx->pc = 0x1BF4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4D0u;
    // 0x1bf4d4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BF4D0u, 0x1BF4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4D8u;
label_1bf4d8:
    // 0x1bf4d8: 0xae550018  sw          $s5, 0x18($s2)
    ctx->pc = 0x1bf4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 21));
    // 0x1bf4dc: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x1bf4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x1bf4e0: 0xae5e0010  sw          $fp, 0x10($s2)
    ctx->pc = 0x1bf4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 30));
    // 0x1bf4e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bf4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4e8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1bf4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1bf4ec: 0xae0003f0  sw          $zero, 0x3F0($s0)
    ctx->pc = 0x1bf4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 0));
    // 0x1bf4f0: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x1bf4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x1bf4f4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1bf4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1bf4f8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1bf4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1bf4fc: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x1bf4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x1bf500: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bf500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1bf504: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bf504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bf508: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BF508u;
    SET_GPR_U32(ctx, 31, 0x1BF510u);
    ctx->pc = 0x1BF50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF508u;
    // 0x1bf50c: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BF508u, 0x1BF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF510u;
label_1bf510:
    // 0x1bf510: 0xae750018  sw          $s5, 0x18($s3)
    ctx->pc = 0x1bf510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 21));
    // 0x1bf514: 0x26020440  addiu       $v0, $s0, 0x440
    ctx->pc = 0x1bf514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x1bf518: 0xae7e0010  sw          $fp, 0x10($s3)
    ctx->pc = 0x1bf518u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 30));
    // 0x1bf51c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bf51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf520: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1bf520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1bf524: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x1bf524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
    // 0x1bf528: 0xae710018  sw          $s1, 0x18($s3)
    ctx->pc = 0x1bf528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 17));
    // 0x1bf52c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1bf52cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1bf530: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1bf530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1bf534: 0xae000440  sw          $zero, 0x440($s0)
    ctx->pc = 0x1bf534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 0));
    // 0x1bf538: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bf538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1bf53c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bf53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bf540: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BF540u;
    SET_GPR_U32(ctx, 31, 0x1BF548u);
    ctx->pc = 0x1BF544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF540u;
    // 0x1bf544: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BF540u, 0x1BF548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF548u;
label_1bf548:
    // 0x1bf548: 0xae950018  sw          $s5, 0x18($s4)
    ctx->pc = 0x1bf548u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 21));
    // 0x1bf54c: 0x26020470  addiu       $v0, $s0, 0x470
    ctx->pc = 0x1bf54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
    // 0x1bf550: 0xae9e0010  sw          $fp, 0x10($s4)
    ctx->pc = 0x1bf550u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 30));
    // 0x1bf554: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf558: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x1bf558u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x1bf55c: 0xae000450  sw          $zero, 0x450($s0)
    ctx->pc = 0x1bf55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1104), GPR_U32(ctx, 0));
    // 0x1bf560: 0xae910018  sw          $s1, 0x18($s4)
    ctx->pc = 0x1bf560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 17));
    // 0x1bf564: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1bf564u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1bf568: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1bf568u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x1bf56c: 0xae000470  sw          $zero, 0x470($s0)
    ctx->pc = 0x1bf56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1136), GPR_U32(ctx, 0));
    // 0x1bf570: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bf570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1bf574: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bf574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bf578: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BF578u;
    SET_GPR_U32(ctx, 31, 0x1BF580u);
    ctx->pc = 0x1BF57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF578u;
    // 0x1bf57c: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BF578u, 0x1BF580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF580u;
label_1bf580:
    // 0x1bf580: 0xaed50018  sw          $s5, 0x18($s6)
    ctx->pc = 0x1bf580u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 21));
    // 0x1bf584: 0x260304a0  addiu       $v1, $s0, 0x4A0
    ctx->pc = 0x1bf584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1184));
    // 0x1bf588: 0xaede0010  sw          $fp, 0x10($s6)
    ctx->pc = 0x1bf588u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 30));
    // 0x1bf58c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf590: 0xaec00014  sw          $zero, 0x14($s6)
    ctx->pc = 0x1bf590u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 0));
    // 0x1bf594: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bf594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf598: 0xae000480  sw          $zero, 0x480($s0)
    ctx->pc = 0x1bf598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1152), GPR_U32(ctx, 0));
    // 0x1bf59c: 0xaed10018  sw          $s1, 0x18($s6)
    ctx->pc = 0x1bf59cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 17));
    // 0x1bf5a0: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x1bf5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x1bf5a4: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x1bf5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x1bf5a8: 0xae0004a0  sw          $zero, 0x4A0($s0)
    ctx->pc = 0x1bf5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 0));
    // 0x1bf5ac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1bf5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1bf5b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bf5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bf5b4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1bf5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1bf5b8: 0xae0404b4  sw          $a0, 0x4B4($s0)
    ctx->pc = 0x1bf5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1204), GPR_U32(ctx, 4));
    // 0x1bf5bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1bf5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf5c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bf5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf5c4: 0xae0004b0  sw          $zero, 0x4B0($s0)
    ctx->pc = 0x1bf5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 0));
    // 0x1bf5c8: 0xae0304bc  sw          $v1, 0x4BC($s0)
    ctx->pc = 0x1bf5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1212), GPR_U32(ctx, 3));
    // 0x1bf5cc: 0xae0004b8  sw          $zero, 0x4B8($s0)
    ctx->pc = 0x1bf5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1208), GPR_U32(ctx, 0));
    // 0x1bf5d0: 0xae0004c0  sw          $zero, 0x4C0($s0)
    ctx->pc = 0x1bf5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 0));
    // 0x1bf5d4: 0xae0004c4  sw          $zero, 0x4C4($s0)
    ctx->pc = 0x1bf5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 0));
    // 0x1bf5d8: 0xae0004c8  sw          $zero, 0x4C8($s0)
    ctx->pc = 0x1bf5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 0));
    // 0x1bf5dc: 0xae0004d0  sw          $zero, 0x4D0($s0)
    ctx->pc = 0x1bf5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 0));
    // 0x1bf5e0: 0xae0004d4  sw          $zero, 0x4D4($s0)
    ctx->pc = 0x1bf5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 0));
    // 0x1bf5e4: 0xae0004d8  sw          $zero, 0x4D8($s0)
    ctx->pc = 0x1bf5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1240), GPR_U32(ctx, 0));
    // 0x1bf5e8: 0xae0004dc  sw          $zero, 0x4DC($s0)
    ctx->pc = 0x1bf5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1244), GPR_U32(ctx, 0));
    // 0x1bf5ec: 0xaefe0010  sw          $fp, 0x10($s7)
    ctx->pc = 0x1bf5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 30));
    // 0x1bf5f0: 0xaee00014  sw          $zero, 0x14($s7)
    ctx->pc = 0x1bf5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 0));
    // 0x1bf5f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bf5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf5f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bf5f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf5fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1bf5fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bf600: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1bf600u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf604: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1bf604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf608: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1bf608u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf60c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1bf60cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1bf610: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1bf610u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf614: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1bf614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bf618: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF618u;
        // 0x1bf61c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF620u;
}
