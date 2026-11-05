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

// Function: sub_003734B0
// Address: 0x3734b0 - 0x3738d8
void sub_003734B0_0x3734b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003734B0_0x3734b0");
#endif

    switch (ctx->pc) {
        case 0x3734f0u: goto label_3734f0;
        case 0x373504u: goto label_373504;
        case 0x373514u: goto label_373514;
        case 0x37351cu: goto label_37351c;
        case 0x373528u: goto label_373528;
        case 0x373534u: goto label_373534;
        case 0x373544u: goto label_373544;
        case 0x373554u: goto label_373554;
        case 0x37355cu: goto label_37355c;
        case 0x373564u: goto label_373564;
        case 0x37359cu: goto label_37359c;
        case 0x3735a8u: goto label_3735a8;
        case 0x3735e0u: goto label_3735e0;
        case 0x3735ecu: goto label_3735ec;
        case 0x373624u: goto label_373624;
        case 0x373630u: goto label_373630;
        case 0x37364cu: goto label_37364c;
        case 0x37365cu: goto label_37365c;
        case 0x37367cu: goto label_37367c;
        case 0x37369cu: goto label_37369c;
        case 0x3736bcu: goto label_3736bc;
        case 0x3736dcu: goto label_3736dc;
        case 0x3737c8u: goto label_3737c8;
        case 0x3737d4u: goto label_3737d4;
        case 0x3737dcu: goto label_3737dc;
        case 0x3737e4u: goto label_3737e4;
        case 0x3737ecu: goto label_3737ec;
        case 0x3737f8u: goto label_3737f8;
        case 0x373804u: goto label_373804;
        case 0x373810u: goto label_373810;
        case 0x373834u: goto label_373834;
        case 0x373844u: goto label_373844;
        case 0x37384cu: goto label_37384c;
        case 0x373854u: goto label_373854;
        case 0x37385cu: goto label_37385c;
        case 0x3738b0u: goto label_3738b0;
        default: break;
    }

    ctx->pc = 0x3734b0u;

    // 0x3734b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3734b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3734b4: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x3734b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x3734b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3734b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3734bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3734bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3734c0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3734c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3734c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3734c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3734c8: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x3734c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x3734cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3734ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3734d0: 0x26326018  addiu       $s2, $s1, 0x6018
    ctx->pc = 0x3734d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24600));
    // 0x3734d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3734d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3734d8: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x3734d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x3734dc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3734dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3734e0: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x3734e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x3734e4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x3734e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3734e8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3734E8u;
    SET_GPR_U32(ctx, 31, 0x3734F0u);
    ctx->pc = 0x3734ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734E8u;
    // 0x3734ec: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3734E8u, 0x3734F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734F0u;
label_3734f0:
    // 0x3734f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3734f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3734f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3734f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3734f8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3734f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3734fc: 0xc0dfe12  jal         func_37F848
    ctx->pc = 0x3734FCu;
    SET_GPR_U32(ctx, 31, 0x373504u);
    ctx->pc = 0x373500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734FCu;
    // 0x373500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F848u, 0x3734FCu, 0x373504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373504u;
label_373504:
    // 0x373504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x373504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37350c: 0xc0dff0e  jal         func_37FC38
    ctx->pc = 0x37350Cu;
    SET_GPR_U32(ctx, 31, 0x373514u);
    ctx->pc = 0x373510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37350Cu;
    // 0x373510: 0xae02cd3c  sw          $v0, -0x32C4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954300), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FC38u, 0x37350Cu, 0x373514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373514u;
label_373514:
    // 0x373514: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x373514u;
    SET_GPR_U32(ctx, 31, 0x37351Cu);
    ctx->pc = 0x373518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373514u;
    // 0x373518: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x373514u, 0x37351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37351Cu;
label_37351c:
    // 0x37351c: 0x8e05cd3c  lw          $a1, -0x32C4($s0)
    ctx->pc = 0x37351cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954300)));
    // 0x373520: 0xc0df60e  jal         func_37D838
    ctx->pc = 0x373520u;
    SET_GPR_U32(ctx, 31, 0x373528u);
    ctx->pc = 0x373524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373520u;
    // 0x373524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D838u, 0x373520u, 0x373528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373528u;
label_373528:
    // 0x373528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37352c: 0xc0df61c  jal         func_37D870
    ctx->pc = 0x37352Cu;
    SET_GPR_U32(ctx, 31, 0x373534u);
    ctx->pc = 0x373530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37352Cu;
    // 0x373530: 0xae822d40  sw          $v0, 0x2D40($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 11584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D870u, 0x37352Cu, 0x373534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373534u;
label_373534:
    // 0x373534: 0x8e842d40  lw          $a0, 0x2D40($s4)
    ctx->pc = 0x373534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11584)));
    // 0x373538: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x373538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37353c: 0xc0df620  jal         func_37D880
    ctx->pc = 0x37353Cu;
    SET_GPR_U32(ctx, 31, 0x373544u);
    ctx->pc = 0x373540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37353Cu;
    // 0x373540: 0x24a580d8  addiu       $a1, $a1, -0x7F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x37353Cu, 0x373544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373544u;
label_373544:
    // 0x373544: 0x8e842d40  lw          $a0, 0x2D40($s4)
    ctx->pc = 0x373544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11584)));
    // 0x373548: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x373548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37354c: 0xc0df620  jal         func_37D880
    ctx->pc = 0x37354Cu;
    SET_GPR_U32(ctx, 31, 0x373554u);
    ctx->pc = 0x373550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37354Cu;
    // 0x373550: 0x24a58fb8  addiu       $a1, $a1, -0x7048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x37354Cu, 0x373554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373554u;
label_373554:
    // 0x373554: 0xc0df638  jal         func_37D8E0
    ctx->pc = 0x373554u;
    SET_GPR_U32(ctx, 31, 0x37355Cu);
    ctx->pc = 0x373558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373554u;
    // 0x373558: 0x8e842d40  lw          $a0, 0x2D40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8E0u, 0x373554u, 0x37355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37355Cu;
label_37355c:
    // 0x37355c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x37355Cu;
    SET_GPR_U32(ctx, 31, 0x373564u);
    ctx->pc = 0x373560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37355Cu;
    // 0x373560: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x37355Cu, 0x373564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373564u;
label_373564:
    // 0x373564: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x373564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x373568: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x373568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x37356c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x37356cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x373570: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x373570u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x373574: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x373574u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x373578: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x373578u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x37357c: 0x24a5e910  addiu       $a1, $a1, -0x16F0
    ctx->pc = 0x37357cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961424));
    // 0x373580: 0x24c6ed40  addiu       $a2, $a2, -0x12C0
    ctx->pc = 0x373580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962496));
    // 0x373584: 0x24e7ed40  addiu       $a3, $a3, -0x12C0
    ctx->pc = 0x373584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962496));
    // 0x373588: 0x2508f140  addiu       $t0, $t0, -0xEC0
    ctx->pc = 0x373588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963520));
    // 0x37358c: 0x2529f140  addiu       $t1, $t1, -0xEC0
    ctx->pc = 0x37358cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963520));
    // 0x373590: 0x254af290  addiu       $t2, $t2, -0xD70
    ctx->pc = 0x373590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294963856));
    // 0x373594: 0xc0dfca4  jal         func_37F290
    ctx->pc = 0x373594u;
    SET_GPR_U32(ctx, 31, 0x37359Cu);
    ctx->pc = 0x373598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373594u;
    // 0x373598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F290u, 0x373594u, 0x37359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37359Cu;
label_37359c:
    // 0x37359c: 0xae226018  sw          $v0, 0x6018($s1)
    ctx->pc = 0x37359cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24600), GPR_U32(ctx, 2));
    // 0x3735a0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3735A0u;
    SET_GPR_U32(ctx, 31, 0x3735A8u);
    ctx->pc = 0x3735A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3735A0u;
    // 0x3735a4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3735A0u, 0x3735A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735A8u;
label_3735a8:
    // 0x3735a8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x3735a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x3735ac: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x3735acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x3735b0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3735b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x3735b4: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x3735b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x3735b8: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x3735b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x3735bc: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x3735bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x3735c0: 0x24a5e050  addiu       $a1, $a1, -0x1FB0
    ctx->pc = 0x3735c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959184));
    // 0x3735c4: 0x24c6e430  addiu       $a2, $a2, -0x1BD0
    ctx->pc = 0x3735c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960176));
    // 0x3735c8: 0x24e7e430  addiu       $a3, $a3, -0x1BD0
    ctx->pc = 0x3735c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960176));
    // 0x3735cc: 0x2508e7e0  addiu       $t0, $t0, -0x1820
    ctx->pc = 0x3735ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961120));
    // 0x3735d0: 0x2529e7e0  addiu       $t1, $t1, -0x1820
    ctx->pc = 0x3735d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961120));
    // 0x3735d4: 0x254ae910  addiu       $t2, $t2, -0x16F0
    ctx->pc = 0x3735d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961424));
    // 0x3735d8: 0xc0dfca4  jal         func_37F290
    ctx->pc = 0x3735D8u;
    SET_GPR_U32(ctx, 31, 0x3735E0u);
    ctx->pc = 0x3735DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3735D8u;
    // 0x3735dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F290u, 0x3735D8u, 0x3735E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735E0u;
label_3735e0:
    // 0x3735e0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3735e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3735e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3735E4u;
    SET_GPR_U32(ctx, 31, 0x3735ECu);
    ctx->pc = 0x3735E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3735E4u;
    // 0x3735e8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3735E4u, 0x3735ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735ECu;
label_3735ec:
    // 0x3735ec: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x3735ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x3735f0: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x3735f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x3735f4: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3735f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x3735f8: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x3735f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x3735fc: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x3735fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x373600: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x373600u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x373604: 0x2508df20  addiu       $t0, $t0, -0x20E0
    ctx->pc = 0x373604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958880));
    // 0x373608: 0x2529df20  addiu       $t1, $t1, -0x20E0
    ctx->pc = 0x373608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958880));
    // 0x37360c: 0x254ae050  addiu       $t2, $t2, -0x1FB0
    ctx->pc = 0x37360cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959184));
    // 0x373610: 0x24a5d9c0  addiu       $a1, $a1, -0x2640
    ctx->pc = 0x373610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957504));
    // 0x373614: 0x24c6dc60  addiu       $a2, $a2, -0x23A0
    ctx->pc = 0x373614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958176));
    // 0x373618: 0x24e7dc60  addiu       $a3, $a3, -0x23A0
    ctx->pc = 0x373618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958176));
    // 0x37361c: 0xc0dfca4  jal         func_37F290
    ctx->pc = 0x37361Cu;
    SET_GPR_U32(ctx, 31, 0x373624u);
    ctx->pc = 0x373620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37361Cu;
    // 0x373620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F290u, 0x37361Cu, 0x373624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373624u;
label_373624:
    // 0x373624: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x373624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x373628: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x373628u;
    SET_GPR_U32(ctx, 31, 0x373630u);
    ctx->pc = 0x37362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373628u;
    // 0x37362c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x373628u, 0x373630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373630u;
label_373630:
    // 0x373630: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x373630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x373634: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x373634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x373638: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x373638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x37363c: 0x24c6f780  addiu       $a2, $a2, -0x880
    ctx->pc = 0x37363cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965120));
    // 0x373640: 0x24a5f3d0  addiu       $a1, $a1, -0xC30
    ctx->pc = 0x373640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964176));
    // 0x373644: 0xc0dfde0  jal         func_37F780
    ctx->pc = 0x373644u;
    SET_GPR_U32(ctx, 31, 0x37364Cu);
    ctx->pc = 0x373648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373644u;
    // 0x373648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F780u, 0x373644u, 0x37364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37364Cu;
label_37364c:
    // 0x37364c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x37364cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x373650: 0xae62cd38  sw          $v0, -0x32C8($s3)
    ctx->pc = 0x373650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954296), GPR_U32(ctx, 2));
    // 0x373654: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x373654u;
    SET_GPR_U32(ctx, 31, 0x37365Cu);
    ctx->pc = 0x373658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373654u;
    // 0x373658: 0x24845b40  addiu       $a0, $a0, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x373654u, 0x37365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37365Cu;
label_37365c:
    // 0x37365c: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x37365cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
    // 0x373660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373664: 0x26315c40  addiu       $s1, $s1, 0x5C40
    ctx->pc = 0x373664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23616));
    // 0x373668: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x373668u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x37366c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x37366cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373670: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x373670u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x373674: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x373674u;
    SET_GPR_U32(ctx, 31, 0x37367Cu);
    ctx->pc = 0x373678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373674u;
    // 0x373678: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x373674u, 0x37367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37367Cu;
label_37367c:
    // 0x37367c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x37367cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373680: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373684: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373688: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x373688u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x37368c: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x37368cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x373690: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x373690u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x373694: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x373694u;
    SET_GPR_U32(ctx, 31, 0x37369Cu);
    ctx->pc = 0x373698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373694u;
    // 0x373698: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x373694u, 0x37369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37369Cu;
label_37369c:
    // 0x37369c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x37369cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3736a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3736a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3736a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3736a8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3736a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3736ac: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3736acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x3736b0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x3736b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x3736b4: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x3736B4u;
    SET_GPR_U32(ctx, 31, 0x3736BCu);
    ctx->pc = 0x3736B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736B4u;
    // 0x3736b8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x3736B4u, 0x3736BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736BCu;
label_3736bc:
    // 0x3736bc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3736bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3736c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3736c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736c4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3736c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3736c8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x3736c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x3736cc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3736ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x3736d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3736d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3736d4: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x3736D4u;
    SET_GPR_U32(ctx, 31, 0x3736DCu);
    ctx->pc = 0x3736D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736D4u;
    // 0x3736d8: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x3736D4u, 0x3736DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736DCu;
label_3736dc:
    // 0x3736dc: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3736dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3736e0: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x3736e0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x3736e4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x3736e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x3736e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3736e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3736ec: 0x25a36028  addiu       $v1, $t5, 0x6028
    ctx->pc = 0x3736ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 24616));
    // 0x3736f0: 0x7e240030  sq          $a0, 0x30($s1)
    ctx->pc = 0x3736f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 4));
    // 0x3736f4: 0x3c0f006c  lui         $t7, 0x6C
    ctx->pc = 0x3736f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)108 << 16));
    // 0x3736f8: 0x3c0143f0  lui         $at, 0x43F0
    ctx->pc = 0x3736f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17392 << 16));
    // 0x3736fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3736fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373700: 0x25e26038  addiu       $v0, $t7, 0x6038
    ctx->pc = 0x373700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 24632));
    // 0x373704: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x373704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6C6034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C6034u, _value); } while (0); }
    // 0x373708: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x373708u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x37370c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x37370cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x373710: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x373710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x373714: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x373714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x373718: 0x2669cd20  addiu       $t1, $s3, -0x32E0
    ctx->pc = 0x373718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954272));
    // 0x37371c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x37371cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6C6044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C6044u, _value); } while (0); }
    // 0x373720: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x373720u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x373724: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x373724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x373728: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x373728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x37372c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x37372cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x373730: 0x264acd28  addiu       $t2, $s2, -0x32D8
    ctx->pc = 0x373730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954280));
    // 0x373734: 0xe5230004  swc1        $f3, 0x4($t1)
    ctx->pc = 0x373734u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FCD24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD24u, _value); } while (0); }
    // 0x373738: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x373738u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x37373c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x37373cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x373740: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x373740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x373744: 0x24c62d48  addiu       $a2, $a2, 0x2D48
    ctx->pc = 0x373744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11592));
    // 0x373748: 0xe5420004  swc1        $f2, 0x4($t2)
    ctx->pc = 0x373748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FCD2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD2Cu, _value); } while (0); }
    // 0x37374c: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x37374cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x373750: 0xe4c5000c  swc1        $f5, 0xC($a2)
    ctx->pc = 0x373750u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482D54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D54u, _value); } while (0); }
    // 0x373754: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x373754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x373758: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x373758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x37375c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x37375cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x373760: 0x3c0e006c  lui         $t6, 0x6C
    ctx->pc = 0x373760u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)108 << 16));
    // 0x373764: 0xad072d50  sw          $a3, 0x2D50($t0)
    ctx->pc = 0x373764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x482D50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D50u, _value); } while (0);
    // 0x373768: 0x340bc001  ori         $t3, $zero, 0xC001
    ctx->pc = 0x373768u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49153);
    // 0x37376c: 0xb5bbc  dsll32      $t3, $t3, 14
    ctx->pc = 0x37376cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 14));
    // 0x373770: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x373770u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x373774: 0xe5b56028  swc1        $f21, 0x6028($t5)
    ctx->pc = 0x373774u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 24616), bits); }
    // 0x373778: 0x25d06050  addiu       $s0, $t6, 0x6050
    ctx->pc = 0x373778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 24656));
    // 0x37377c: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x37377cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x373780: 0x240c0412  addiu       $t4, $zero, 0x412
    ctx->pc = 0x373780u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x373784: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x373784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x373788: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x373788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x37378c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373790: 0xe5f46038  swc1        $f20, 0x6038($t7)
    ctx->pc = 0x373790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 24632), bits); }
    // 0x373794: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x373794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x373798: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x373798u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x37379c: 0xe663cd20  swc1        $f3, -0x32E0($s3)
    ctx->pc = 0x37379cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294954272), bits); }
    // 0x3737a0: 0xe642cd28  swc1        $f2, -0x32D8($s2)
    ctx->pc = 0x3737a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294954280), bits); }
    // 0x3737a4: 0xfdcb6050  sd          $t3, 0x6050($t6)
    ctx->pc = 0x3737a4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24656), GPR_U64(ctx, 11));
    // 0x3737a8: 0xfe0b0010  sd          $t3, 0x10($s0)
    ctx->pc = 0x3737a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 11));
    // 0x3737ac: 0xfe0c0018  sd          $t4, 0x18($s0)
    ctx->pc = 0x3737acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 12));
    // 0x3737b0: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x3737b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3737b4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x3737b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3737b8: 0xe4c50008  swc1        $f5, 0x8($a2)
    ctx->pc = 0x3737b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3737bc: 0xfe0c0008  sd          $t4, 0x8($s0)
    ctx->pc = 0x3737bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x3737c0: 0xc0dd2a0  jal         func_374A80
    ctx->pc = 0x3737C0u;
    SET_GPR_U32(ctx, 31, 0x3737C8u);
    ctx->pc = 0x3737C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737C0u;
    // 0x3737c4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374A80u, 0x3737C0u, 0x3737C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737C8u;
label_3737c8:
    // 0x3737c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3737c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3737cc: 0xc0dd2a0  jal         func_374A80
    ctx->pc = 0x3737CCu;
    SET_GPR_U32(ctx, 31, 0x3737D4u);
    ctx->pc = 0x3737D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737CCu;
    // 0x3737d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374A80u, 0x3737CCu, 0x3737D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737D4u;
label_3737d4:
    // 0x3737d4: 0xc0dd1d4  jal         func_374750
    ctx->pc = 0x3737D4u;
    SET_GPR_U32(ctx, 31, 0x3737DCu);
    ctx->pc = 0x3737D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737D4u;
    // 0x3737d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374750u, 0x3737D4u, 0x3737DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737DCu;
label_3737dc:
    // 0x3737dc: 0xc0dd1ac  jal         func_3746B0
    ctx->pc = 0x3737DCu;
    SET_GPR_U32(ctx, 31, 0x3737E4u);
    ctx->pc = 0x3737E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737DCu;
    // 0x3737e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3746B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3746B0u, 0x3737DCu, 0x3737E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737E4u;
label_3737e4:
    // 0x3737e4: 0xc0dd1c8  jal         func_374720
    ctx->pc = 0x3737E4u;
    SET_GPR_U32(ctx, 31, 0x3737ECu);
    ctx->pc = 0x3737E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737E4u;
    // 0x3737e8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x374720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374720u, 0x3737E4u, 0x3737ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737ECu;
label_3737ec:
    // 0x3737ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3737ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737f0: 0xc0dd208  jal         func_374820
    ctx->pc = 0x3737F0u;
    SET_GPR_U32(ctx, 31, 0x3737F8u);
    ctx->pc = 0x3737F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737F0u;
    // 0x3737f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374820u, 0x3737F0u, 0x3737F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737F8u;
label_3737f8:
    // 0x3737f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3737f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737fc: 0xc0dd208  jal         func_374820
    ctx->pc = 0x3737FCu;
    SET_GPR_U32(ctx, 31, 0x373804u);
    ctx->pc = 0x373800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737FCu;
    // 0x373800: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374820u, 0x3737FCu, 0x373804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373804u;
label_373804:
    // 0x373804: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x373804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x373808: 0xc0dd1ee  jal         func_3747B8
    ctx->pc = 0x373808u;
    SET_GPR_U32(ctx, 31, 0x373810u);
    ctx->pc = 0x37380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373808u;
    // 0x37380c: 0x34848080  ori         $a0, $a0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3747B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3747B8u, 0x373808u, 0x373810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373810u;
label_373810:
    // 0x373810: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x373810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x373814: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x373814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x373818: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x373818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x37381c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373820: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x373820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x373824: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x373824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x373828: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x373828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x37382c: 0xc0dd2ca  jal         func_374B28
    ctx->pc = 0x37382Cu;
    SET_GPR_U32(ctx, 31, 0x373834u);
    ctx->pc = 0x373830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37382Cu;
    // 0x373830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374B28u, 0x37382Cu, 0x373834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373834u;
label_373834:
    // 0x373834: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x373834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x373838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37383c: 0xc0dd2ca  jal         func_374B28
    ctx->pc = 0x37383Cu;
    SET_GPR_U32(ctx, 31, 0x373844u);
    ctx->pc = 0x373840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37383Cu;
    // 0x373840: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374B28u, 0x37383Cu, 0x373844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373844u;
label_373844:
    // 0x373844: 0xc0dd17e  jal         func_3745F8
    ctx->pc = 0x373844u;
    SET_GPR_U32(ctx, 31, 0x37384Cu);
    ctx->pc = 0x373848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373844u;
    // 0x373848: 0x8e842d40  lw          $a0, 0x2D40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3745F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3745F8u, 0x373844u, 0x37384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37384Cu;
label_37384c:
    // 0x37384c: 0xc0dd198  jal         func_374660
    ctx->pc = 0x37384Cu;
    SET_GPR_U32(ctx, 31, 0x373854u);
    ctx->pc = 0x373850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37384Cu;
    // 0x373850: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374660u, 0x37384Cu, 0x373854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373854u;
label_373854:
    // 0x373854: 0xc0dd1a2  jal         func_374688
    ctx->pc = 0x373854u;
    SET_GPR_U32(ctx, 31, 0x37385Cu);
    ctx->pc = 0x373858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373854u;
    // 0x373858: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374688u, 0x373854u, 0x37385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37385Cu;
label_37385c:
    // 0x37385c: 0x3c033e1d  lui         $v1, 0x3E1D
    ctx->pc = 0x37385cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15901 << 16));
    // 0x373860: 0x3c090065  lui         $t1, 0x65
    ctx->pc = 0x373860u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)101 << 16));
    // 0x373864: 0x3463b380  ori         $v1, $v1, 0xB380
    ctx->pc = 0x373864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45952);
    // 0x373868: 0x3c02c009  lui         $v0, 0xC009
    ctx->pc = 0x373868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49161 << 16));
    // 0x37386c: 0xad236030  sw          $v1, 0x6030($t1)
    ctx->pc = 0x37386cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x656030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656030u, _value); } while (0);
    // 0x373870: 0x25256030  addiu       $a1, $t1, 0x6030
    ctx->pc = 0x373870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 24624));
    // 0x373874: 0x344258b4  ori         $v0, $v0, 0x58B4
    ctx->pc = 0x373874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22708);
    // 0x373878: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x373878u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x37387c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x37387cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x65603Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65603Cu, _value); } while (0);
    // 0x373880: 0x3c06bf84  lui         $a2, 0xBF84
    ctx->pc = 0x373880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49028 << 16));
    // 0x373884: 0x3c074041  lui         $a3, 0x4041
    ctx->pc = 0x373884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16449 << 16));
    // 0x373888: 0xad10cd70  sw          $s0, -0x3290($t0)
    ctx->pc = 0x373888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3FCD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD70u, _value); } while (0);
    // 0x37388c: 0x34c67a00  ori         $a2, $a2, 0x7A00
    ctx->pc = 0x37388cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31232);
    // 0x373890: 0x34e7ba98  ori         $a3, $a3, 0xBA98
    ctx->pc = 0x373890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)47768);
    // 0x373894: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x373894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x656034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656034u, _value); } while (0);
    // 0x373898: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x373898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x37389c: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x37389cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x656038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656038u, _value); } while (0);
    // 0x3738a0: 0x24845ff0  addiu       $a0, $a0, 0x5FF0
    ctx->pc = 0x3738a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24560));
    // 0x3738a4: 0xe6140044  swc1        $f20, 0x44($s0)
    ctx->pc = 0x3738a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x3738a8: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x3738A8u;
    SET_GPR_U32(ctx, 31, 0x3738B0u);
    ctx->pc = 0x3738ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738A8u;
    // 0x3738ac: 0xe6140040  swc1        $f20, 0x40($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x3738A8u, 0x3738B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3738B0u;
label_3738b0:
    // 0x3738b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3738b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3738b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3738b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3738b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3738b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3738bc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3738bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3738c0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3738c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3738c4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3738c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3738c8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x3738c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3738cc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3738ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3738d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3738D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3738D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738D0u;
        // 0x3738d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3738D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3738D8u;
}
