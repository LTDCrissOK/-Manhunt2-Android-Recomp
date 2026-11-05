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

// Function: sub_003802A8
// Address: 0x3802a8 - 0x380648
void sub_003802A8_0x3802a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003802A8_0x3802a8");
#endif

    switch (ctx->pc) {
        case 0x3802d4u: goto label_3802d4;
        case 0x3802dcu: goto label_3802dc;
        case 0x3802e8u: goto label_3802e8;
        case 0x3802ecu: goto label_3802ec;
        case 0x3802f0u: goto label_3802f0;
        case 0x380300u: goto label_380300;
        case 0x38030cu: goto label_38030c;
        case 0x380314u: goto label_380314;
        case 0x380320u: goto label_380320;
        case 0x38032cu: goto label_38032c;
        case 0x380340u: goto label_380340;
        case 0x380350u: goto label_380350;
        case 0x380364u: goto label_380364;
        case 0x38036cu: goto label_38036c;
        case 0x380374u: goto label_380374;
        case 0x38037cu: goto label_38037c;
        case 0x380388u: goto label_380388;
        case 0x380394u: goto label_380394;
        case 0x3803a4u: goto label_3803a4;
        case 0x3803acu: goto label_3803ac;
        case 0x3803b4u: goto label_3803b4;
        case 0x3803c8u: goto label_3803c8;
        case 0x3803d8u: goto label_3803d8;
        case 0x3803e4u: goto label_3803e4;
        case 0x3803ecu: goto label_3803ec;
        case 0x3803f8u: goto label_3803f8;
        case 0x380404u: goto label_380404;
        case 0x380410u: goto label_380410;
        case 0x380424u: goto label_380424;
        case 0x380430u: goto label_380430;
        case 0x380438u: goto label_380438;
        case 0x380440u: goto label_380440;
        case 0x38044cu: goto label_38044c;
        case 0x380458u: goto label_380458;
        case 0x380464u: goto label_380464;
        case 0x380470u: goto label_380470;
        case 0x38047cu: goto label_38047c;
        case 0x38048cu: goto label_38048c;
        case 0x3804a0u: goto label_3804a0;
        case 0x3804a8u: goto label_3804a8;
        case 0x3804b0u: goto label_3804b0;
        case 0x3804bcu: goto label_3804bc;
        case 0x3804c8u: goto label_3804c8;
        case 0x3804d0u: goto label_3804d0;
        case 0x3804e4u: goto label_3804e4;
        case 0x3804f4u: goto label_3804f4;
        case 0x380500u: goto label_380500;
        case 0x380508u: goto label_380508;
        case 0x38050cu: goto label_38050c;
        case 0x380514u: goto label_380514;
        case 0x380520u: goto label_380520;
        case 0x38052cu: goto label_38052c;
        case 0x380540u: goto label_380540;
        case 0x38054cu: goto label_38054c;
        case 0x380560u: goto label_380560;
        case 0x38056cu: goto label_38056c;
        case 0x380574u: goto label_380574;
        case 0x38057cu: goto label_38057c;
        case 0x380588u: goto label_380588;
        case 0x380594u: goto label_380594;
        case 0x3805a0u: goto label_3805a0;
        case 0x3805b0u: goto label_3805b0;
        case 0x3805bcu: goto label_3805bc;
        case 0x3805c8u: goto label_3805c8;
        case 0x3805d4u: goto label_3805d4;
        case 0x3805e4u: goto label_3805e4;
        case 0x3805f4u: goto label_3805f4;
        case 0x380600u: goto label_380600;
        case 0x380608u: goto label_380608;
        case 0x380610u: goto label_380610;
        case 0x380618u: goto label_380618;
        case 0x380620u: goto label_380620;
        default: break;
    }

    ctx->pc = 0x3802a8u;

    // 0x3802a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3802a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3802ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3802acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3802b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3802b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3802b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3802b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3802b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3802b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3802bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3802bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3802c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3802c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3802c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3802c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3802c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3802c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3802cc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3802CCu;
    SET_GPR_U32(ctx, 31, 0x3802D4u);
    ctx->pc = 0x3802D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802CCu;
    // 0x3802d0: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3802CCu, 0x3802D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802D4u;
label_3802d4:
    // 0x3802d4: 0xc0df30c  jal         func_37CC30
    ctx->pc = 0x3802D4u;
    SET_GPR_U32(ctx, 31, 0x3802DCu);
    ctx->pc = 0x3802D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802D4u;
    // 0x3802d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CC30u, 0x3802D4u, 0x3802DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802DCu;
label_3802dc:
    // 0x3802dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3802dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3802e0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3802E0u;
    SET_GPR_U32(ctx, 31, 0x3802E8u);
    ctx->pc = 0x3802E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802E0u;
    // 0x3802e4: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3802E0u, 0x3802E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802E8u;
label_3802e8:
    // 0x3802e8: 0xc0dfe12  jal         func_37F848
label_3802ec:
    if (ctx->pc == 0x3802ECu) {
        ctx->pc = 0x3802ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3802E8u;
        // 0x3802ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3802F0u;
        goto label_3802f0;
    }
    ctx->pc = 0x3802E8u;
    SET_GPR_U32(ctx, 31, 0x3802F0u);
    ctx->pc = 0x3802ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802E8u;
    // 0x3802ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F848u, 0x3802E8u, 0x3802F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802F0u;
label_3802f0:
    // 0x3802f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3802f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3802f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3802f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3802f8: 0xc0df3aa  jal         func_37CEA8
    ctx->pc = 0x3802F8u;
    SET_GPR_U32(ctx, 31, 0x380300u);
    ctx->pc = 0x3802FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802F8u;
    // 0x3802fc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CEA8u, 0x3802F8u, 0x380300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380300u;
label_380300:
    // 0x380300: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x380300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x380304: 0xc0dff0e  jal         func_37FC38
    ctx->pc = 0x380304u;
    SET_GPR_U32(ctx, 31, 0x38030Cu);
    ctx->pc = 0x380308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380304u;
    // 0x380308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FC38u, 0x380304u, 0x38030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38030Cu;
label_38030c:
    // 0x38030c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x38030Cu;
    SET_GPR_U32(ctx, 31, 0x380314u);
    ctx->pc = 0x380310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38030Cu;
    // 0x380310: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x38030Cu, 0x380314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380314u;
label_380314:
    // 0x380314: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x380314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x380318: 0xc0df60e  jal         func_37D838
    ctx->pc = 0x380318u;
    SET_GPR_U32(ctx, 31, 0x380320u);
    ctx->pc = 0x38031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380318u;
    // 0x38031c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D838u, 0x380318u, 0x380320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380320u;
label_380320:
    // 0x380320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380324: 0xc0df61c  jal         func_37D870
    ctx->pc = 0x380324u;
    SET_GPR_U32(ctx, 31, 0x38032Cu);
    ctx->pc = 0x380328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380324u;
    // 0x380328: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D870u, 0x380324u, 0x38032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38032Cu;
label_38032c:
    // 0x38032c: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x38032cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x380330: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x380330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x380334: 0x269480d8  addiu       $s4, $s4, -0x7F28
    ctx->pc = 0x380334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934744));
    // 0x380338: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380338u;
    SET_GPR_U32(ctx, 31, 0x380340u);
    ctx->pc = 0x38033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380338u;
    // 0x38033c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380338u, 0x380340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380340u;
label_380340:
    // 0x380340: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x380340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x380344: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x380344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x380348: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380348u;
    SET_GPR_U32(ctx, 31, 0x380350u);
    ctx->pc = 0x38034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380348u;
    // 0x38034c: 0x24a5d000  addiu       $a1, $a1, -0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380348u, 0x380350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380350u;
label_380350:
    // 0x380350: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x380350u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x380354: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x380354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x380358: 0x26738fb8  addiu       $s3, $s3, -0x7048
    ctx->pc = 0x380358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938552));
    // 0x38035c: 0xc0df620  jal         func_37D880
    ctx->pc = 0x38035Cu;
    SET_GPR_U32(ctx, 31, 0x380364u);
    ctx->pc = 0x380360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38035Cu;
    // 0x380360: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x38035Cu, 0x380364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380364u;
label_380364:
    // 0x380364: 0xc0df638  jal         func_37D8E0
    ctx->pc = 0x380364u;
    SET_GPR_U32(ctx, 31, 0x38036Cu);
    ctx->pc = 0x380368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380364u;
    // 0x380368: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8E0u, 0x380364u, 0x38036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38036Cu;
label_38036c:
    // 0x38036c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x38036Cu;
    SET_GPR_U32(ctx, 31, 0x380374u);
    ctx->pc = 0x380370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38036Cu;
    // 0x380370: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x38036Cu, 0x380374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380374u;
label_380374:
    // 0x380374: 0xc0de838  jal         func_37A0E0
    ctx->pc = 0x380374u;
    SET_GPR_U32(ctx, 31, 0x38037Cu);
    ctx->pc = 0x380378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380374u;
    // 0x380378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A0E0u, 0x380374u, 0x38037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38037Cu;
label_38037c:
    // 0x38037c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x38037cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x380380: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x380380u;
    SET_GPR_U32(ctx, 31, 0x380388u);
    ctx->pc = 0x380384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380380u;
    // 0x380384: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x380380u, 0x380388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380388u;
label_380388:
    // 0x380388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38038c: 0xc0dedcc  jal         func_37B730
    ctx->pc = 0x38038Cu;
    SET_GPR_U32(ctx, 31, 0x380394u);
    ctx->pc = 0x380390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38038Cu;
    // 0x380390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B730u, 0x38038Cu, 0x380394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380394u;
label_380394:
    // 0x380394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38039c: 0xc0dee28  jal         func_37B8A0
    ctx->pc = 0x38039Cu;
    SET_GPR_U32(ctx, 31, 0x3803A4u);
    ctx->pc = 0x3803A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38039Cu;
    // 0x3803a0: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B8A0u, 0x38039Cu, 0x3803A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3803A4u;
label_3803a4:
    // 0x3803a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3803A4u;
    SET_GPR_U32(ctx, 31, 0x3803ACu);
    ctx->pc = 0x3803A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3803A4u;
    // 0x3803a8: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3803A4u, 0x3803ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3803ACu;
label_3803ac:
    // 0x3803ac: 0xc0dfe12  jal         func_37F848
    ctx->pc = 0x3803ACu;
    SET_GPR_U32(ctx, 31, 0x3803B4u);
    ctx->pc = 0x3803B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3803ACu;
    // 0x3803b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F848u, 0x3803ACu, 0x3803B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3803B4u;
label_3803b4:
    // 0x3803b4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3803b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3803b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3803b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3803bc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3803bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x3803c0: 0xc0de8ee  jal         func_37A3B8
    ctx->pc = 0x3803C0u;
    SET_GPR_U32(ctx, 31, 0x3803C8u);
    ctx->pc = 0x3803C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3803C0u;
    // 0x3803c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A3B8u, 0x3803C0u, 0x3803C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3803C8u;
label_3803c8:
    // 0x3803c8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3803c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3803cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3803ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3803d0: 0xc0dee4e  jal         func_37B938
    ctx->pc = 0x3803D0u;
    SET_GPR_U32(ctx, 31, 0x3803D8u);
    ctx->pc = 0x3803D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3803D0u;
    // 0x3803d4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B938u, 0x3803D0u, 0x3803D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3803D8u;
label_3803d8:
    // 0x3803d8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3803d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3803dc: 0xc0dff0e  jal         func_37FC38
    ctx->pc = 0x3803DCu;
    SET_GPR_U32(ctx, 31, 0x3803E4u);
    ctx->pc = 0x3803E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3803DCu;
    // 0x3803e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FC38u, 0x3803DCu, 0x3803E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3803E4u;
label_3803e4:
    // 0x3803e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3803E4u;
    SET_GPR_U32(ctx, 31, 0x3803ECu);
    ctx->pc = 0x3803E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3803E4u;
    // 0x3803e8: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3803E4u, 0x3803ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3803ECu;
label_3803ec:
    // 0x3803ec: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3803ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3803f0: 0xc0df60e  jal         func_37D838
    ctx->pc = 0x3803F0u;
    SET_GPR_U32(ctx, 31, 0x3803F8u);
    ctx->pc = 0x3803F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3803F0u;
    // 0x3803f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D838u, 0x3803F0u, 0x3803F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3803F8u;
label_3803f8:
    // 0x3803f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3803f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3803fc: 0xc0df61c  jal         func_37D870
    ctx->pc = 0x3803FCu;
    SET_GPR_U32(ctx, 31, 0x380404u);
    ctx->pc = 0x380400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3803FCu;
    // 0x380400: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D870u, 0x3803FCu, 0x380404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380404u;
label_380404:
    // 0x380404: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x380404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x380408: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380408u;
    SET_GPR_U32(ctx, 31, 0x380410u);
    ctx->pc = 0x38040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380408u;
    // 0x38040c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380408u, 0x380410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380410u;
label_380410:
    // 0x380410: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x380410u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x380414: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x380414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x380418: 0x2631a6b8  addiu       $s1, $s1, -0x5948
    ctx->pc = 0x380418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944440));
    // 0x38041c: 0xc0df620  jal         func_37D880
    ctx->pc = 0x38041Cu;
    SET_GPR_U32(ctx, 31, 0x380424u);
    ctx->pc = 0x380420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38041Cu;
    // 0x380420: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x38041Cu, 0x380424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380424u;
label_380424:
    // 0x380424: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x380424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x380428: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380428u;
    SET_GPR_U32(ctx, 31, 0x380430u);
    ctx->pc = 0x38042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380428u;
    // 0x38042c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380428u, 0x380430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380430u;
label_380430:
    // 0x380430: 0xc0df638  jal         func_37D8E0
    ctx->pc = 0x380430u;
    SET_GPR_U32(ctx, 31, 0x380438u);
    ctx->pc = 0x380434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380430u;
    // 0x380434: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8E0u, 0x380430u, 0x380438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380438u;
label_380438:
    // 0x380438: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x380438u;
    SET_GPR_U32(ctx, 31, 0x380440u);
    ctx->pc = 0x38043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380438u;
    // 0x38043c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x380438u, 0x380440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380440u;
label_380440:
    // 0x380440: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x380440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x380444: 0xc0df60e  jal         func_37D838
    ctx->pc = 0x380444u;
    SET_GPR_U32(ctx, 31, 0x38044Cu);
    ctx->pc = 0x380448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380444u;
    // 0x380448: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D838u, 0x380444u, 0x38044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38044Cu;
label_38044c:
    // 0x38044c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380450: 0xc0df61c  jal         func_37D870
    ctx->pc = 0x380450u;
    SET_GPR_U32(ctx, 31, 0x380458u);
    ctx->pc = 0x380454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380450u;
    // 0x380454: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D870u, 0x380450u, 0x380458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380458u;
label_380458:
    // 0x380458: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x380458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x38045c: 0xc0df620  jal         func_37D880
    ctx->pc = 0x38045Cu;
    SET_GPR_U32(ctx, 31, 0x380464u);
    ctx->pc = 0x380460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38045Cu;
    // 0x380460: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x38045Cu, 0x380464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380464u;
label_380464:
    // 0x380464: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x380464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x380468: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380468u;
    SET_GPR_U32(ctx, 31, 0x380470u);
    ctx->pc = 0x38046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380468u;
    // 0x38046c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380468u, 0x380470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380470u;
label_380470:
    // 0x380470: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x380470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x380474: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380474u;
    SET_GPR_U32(ctx, 31, 0x38047Cu);
    ctx->pc = 0x380478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380474u;
    // 0x380478: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380474u, 0x38047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38047Cu;
label_38047c:
    // 0x38047c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x38047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x380480: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x380480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x380484: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380484u;
    SET_GPR_U32(ctx, 31, 0x38048Cu);
    ctx->pc = 0x380488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380484u;
    // 0x380488: 0x24a5be28  addiu       $a1, $a1, -0x41D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380484u, 0x38048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38048Cu;
label_38048c:
    // 0x38048c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x38048cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x380490: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x380490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x380494: 0x26b58f98  addiu       $s5, $s5, -0x7068
    ctx->pc = 0x380494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938520));
    // 0x380498: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380498u;
    SET_GPR_U32(ctx, 31, 0x3804A0u);
    ctx->pc = 0x38049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380498u;
    // 0x38049c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380498u, 0x3804A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804A0u;
label_3804a0:
    // 0x3804a0: 0xc0df638  jal         func_37D8E0
    ctx->pc = 0x3804A0u;
    SET_GPR_U32(ctx, 31, 0x3804A8u);
    ctx->pc = 0x3804A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804A0u;
    // 0x3804a4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8E0u, 0x3804A0u, 0x3804A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804A8u;
label_3804a8:
    // 0x3804a8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3804A8u;
    SET_GPR_U32(ctx, 31, 0x3804B0u);
    ctx->pc = 0x3804ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804A8u;
    // 0x3804ac: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3804A8u, 0x3804B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804B0u;
label_3804b0:
    // 0x3804b0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3804b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3804b4: 0xc0df0e0  jal         func_37C380
    ctx->pc = 0x3804B4u;
    SET_GPR_U32(ctx, 31, 0x3804BCu);
    ctx->pc = 0x3804B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804B4u;
    // 0x3804b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C380u, 0x3804B4u, 0x3804BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804BCu;
label_3804bc:
    // 0x3804bc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3804bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3804c0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3804C0u;
    SET_GPR_U32(ctx, 31, 0x3804C8u);
    ctx->pc = 0x3804C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804C0u;
    // 0x3804c4: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3804C0u, 0x3804C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804C8u;
label_3804c8:
    // 0x3804c8: 0xc0dfe12  jal         func_37F848
    ctx->pc = 0x3804C8u;
    SET_GPR_U32(ctx, 31, 0x3804D0u);
    ctx->pc = 0x3804CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804C8u;
    // 0x3804cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F848u, 0x3804C8u, 0x3804D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804D0u;
label_3804d0:
    // 0x3804d0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3804d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3804d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3804d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3804d8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3804d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x3804dc: 0xc0de8ee  jal         func_37A3B8
    ctx->pc = 0x3804DCu;
    SET_GPR_U32(ctx, 31, 0x3804E4u);
    ctx->pc = 0x3804E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804DCu;
    // 0x3804e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A3B8u, 0x3804DCu, 0x3804E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804E4u;
label_3804e4:
    // 0x3804e4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3804e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3804e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3804e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3804ec: 0xc0dee4e  jal         func_37B938
    ctx->pc = 0x3804ECu;
    SET_GPR_U32(ctx, 31, 0x3804F4u);
    ctx->pc = 0x3804F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804ECu;
    // 0x3804f0: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B938u, 0x3804ECu, 0x3804F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3804F4u;
label_3804f4:
    // 0x3804f4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3804f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3804f8: 0xc0df104  jal         func_37C410
    ctx->pc = 0x3804F8u;
    SET_GPR_U32(ctx, 31, 0x380500u);
    ctx->pc = 0x3804FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3804F8u;
    // 0x3804fc: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C410u, 0x3804F8u, 0x380500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380500u;
label_380500:
    // 0x380500: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x380500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x380504: 0xc0dff0e  jal         func_37FC38
label_380508:
    if (ctx->pc == 0x380508u) {
        ctx->pc = 0x380508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380504u;
        // 0x380508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38050Cu;
        goto label_38050c;
    }
    ctx->pc = 0x380504u;
    SET_GPR_U32(ctx, 31, 0x38050Cu);
    ctx->pc = 0x380508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380504u;
    // 0x380508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FC38u, 0x380504u, 0x38050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38050Cu;
label_38050c:
    // 0x38050c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x38050Cu;
    SET_GPR_U32(ctx, 31, 0x380514u);
    ctx->pc = 0x380510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38050Cu;
    // 0x380510: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x38050Cu, 0x380514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380514u;
label_380514:
    // 0x380514: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x380514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x380518: 0xc0df60e  jal         func_37D838
    ctx->pc = 0x380518u;
    SET_GPR_U32(ctx, 31, 0x380520u);
    ctx->pc = 0x38051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380518u;
    // 0x38051c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D838u, 0x380518u, 0x380520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380520u;
label_380520:
    // 0x380520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380524: 0xc0df61c  jal         func_37D870
    ctx->pc = 0x380524u;
    SET_GPR_U32(ctx, 31, 0x38052Cu);
    ctx->pc = 0x380528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380524u;
    // 0x380528: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D870u, 0x380524u, 0x38052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38052Cu;
label_38052c:
    // 0x38052c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x38052cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x380530: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x380530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380534: 0x2631c9d8  addiu       $s1, $s1, -0x3628
    ctx->pc = 0x380534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953432));
    // 0x380538: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380538u;
    SET_GPR_U32(ctx, 31, 0x380540u);
    ctx->pc = 0x38053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380538u;
    // 0x38053c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380538u, 0x380540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380540u;
label_380540:
    // 0x380540: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x380540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380544: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380544u;
    SET_GPR_U32(ctx, 31, 0x38054Cu);
    ctx->pc = 0x380548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380544u;
    // 0x380548: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380544u, 0x38054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38054Cu;
label_38054c:
    // 0x38054c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x38054cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x380550: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x380550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380554: 0x2652ac78  addiu       $s2, $s2, -0x5388
    ctx->pc = 0x380554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945912));
    // 0x380558: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380558u;
    SET_GPR_U32(ctx, 31, 0x380560u);
    ctx->pc = 0x38055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380558u;
    // 0x38055c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380558u, 0x380560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380560u;
label_380560:
    // 0x380560: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x380560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380564: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380564u;
    SET_GPR_U32(ctx, 31, 0x38056Cu);
    ctx->pc = 0x380568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380564u;
    // 0x380568: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380564u, 0x38056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38056Cu;
label_38056c:
    // 0x38056c: 0xc0df638  jal         func_37D8E0
    ctx->pc = 0x38056Cu;
    SET_GPR_U32(ctx, 31, 0x380574u);
    ctx->pc = 0x380570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38056Cu;
    // 0x380570: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8E0u, 0x38056Cu, 0x380574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380574u;
label_380574:
    // 0x380574: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x380574u;
    SET_GPR_U32(ctx, 31, 0x38057Cu);
    ctx->pc = 0x380578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380574u;
    // 0x380578: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x380574u, 0x38057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38057Cu;
label_38057c:
    // 0x38057c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x38057cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x380580: 0xc0df60e  jal         func_37D838
    ctx->pc = 0x380580u;
    SET_GPR_U32(ctx, 31, 0x380588u);
    ctx->pc = 0x380584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380580u;
    // 0x380584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D838u, 0x380580u, 0x380588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380588u;
label_380588:
    // 0x380588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38058c: 0xc0df61c  jal         func_37D870
    ctx->pc = 0x38058Cu;
    SET_GPR_U32(ctx, 31, 0x380594u);
    ctx->pc = 0x380590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38058Cu;
    // 0x380590: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D870u, 0x38058Cu, 0x380594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380594u;
label_380594:
    // 0x380594: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x380594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x380598: 0xc0df620  jal         func_37D880
    ctx->pc = 0x380598u;
    SET_GPR_U32(ctx, 31, 0x3805A0u);
    ctx->pc = 0x38059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380598u;
    // 0x38059c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x380598u, 0x3805A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3805A0u;
label_3805a0:
    // 0x3805a0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3805a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3805a4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x3805a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x3805a8: 0xc0df620  jal         func_37D880
    ctx->pc = 0x3805A8u;
    SET_GPR_U32(ctx, 31, 0x3805B0u);
    ctx->pc = 0x3805ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3805A8u;
    // 0x3805ac: 0x24a5c108  addiu       $a1, $a1, -0x3EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x3805A8u, 0x3805B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3805B0u;
label_3805b0:
    // 0x3805b0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3805b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3805b4: 0xc0df620  jal         func_37D880
    ctx->pc = 0x3805B4u;
    SET_GPR_U32(ctx, 31, 0x3805BCu);
    ctx->pc = 0x3805B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3805B4u;
    // 0x3805b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x3805B4u, 0x3805BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3805BCu;
label_3805bc:
    // 0x3805bc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3805bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3805c0: 0xc0df620  jal         func_37D880
    ctx->pc = 0x3805C0u;
    SET_GPR_U32(ctx, 31, 0x3805C8u);
    ctx->pc = 0x3805C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3805C0u;
    // 0x3805c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x3805C0u, 0x3805C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3805C8u;
label_3805c8:
    // 0x3805c8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3805c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3805cc: 0xc0df620  jal         func_37D880
    ctx->pc = 0x3805CCu;
    SET_GPR_U32(ctx, 31, 0x3805D4u);
    ctx->pc = 0x3805D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3805CCu;
    // 0x3805d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x3805CCu, 0x3805D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3805D4u;
label_3805d4:
    // 0x3805d4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3805d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3805d8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x3805d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x3805dc: 0xc0df620  jal         func_37D880
    ctx->pc = 0x3805DCu;
    SET_GPR_U32(ctx, 31, 0x3805E4u);
    ctx->pc = 0x3805E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3805DCu;
    // 0x3805e0: 0x24a5c158  addiu       $a1, $a1, -0x3EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x3805DCu, 0x3805E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3805E4u;
label_3805e4:
    // 0x3805e4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3805e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3805e8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x3805e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x3805ec: 0xc0df620  jal         func_37D880
    ctx->pc = 0x3805ECu;
    SET_GPR_U32(ctx, 31, 0x3805F4u);
    ctx->pc = 0x3805F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3805ECu;
    // 0x3805f0: 0x24a5c1a8  addiu       $a1, $a1, -0x3E58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x3805ECu, 0x3805F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3805F4u;
label_3805f4:
    // 0x3805f4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3805f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3805f8: 0xc0df620  jal         func_37D880
    ctx->pc = 0x3805F8u;
    SET_GPR_U32(ctx, 31, 0x380600u);
    ctx->pc = 0x3805FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3805F8u;
    // 0x3805fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D880u, 0x3805F8u, 0x380600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380600u;
label_380600:
    // 0x380600: 0xc0df638  jal         func_37D8E0
    ctx->pc = 0x380600u;
    SET_GPR_U32(ctx, 31, 0x380608u);
    ctx->pc = 0x380604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380600u;
    // 0x380604: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8E0u, 0x380600u, 0x380608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380608u;
label_380608:
    // 0x380608: 0xc0dffd2  jal         func_37FF48
    ctx->pc = 0x380608u;
    SET_GPR_U32(ctx, 31, 0x380610u);
    ctx->pc = 0x38060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380608u;
    // 0x38060c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FF48u, 0x380608u, 0x380610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380610u;
label_380610:
    // 0x380610: 0xc0dffd2  jal         func_37FF48
    ctx->pc = 0x380610u;
    SET_GPR_U32(ctx, 31, 0x380618u);
    ctx->pc = 0x380614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380610u;
    // 0x380614: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FF48u, 0x380610u, 0x380618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380618u;
label_380618:
    // 0x380618: 0xc0dffd2  jal         func_37FF48
    ctx->pc = 0x380618u;
    SET_GPR_U32(ctx, 31, 0x380620u);
    ctx->pc = 0x38061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380618u;
    // 0x38061c: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FF48u, 0x380618u, 0x380620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380620u;
label_380620:
    // 0x380620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x380620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x380624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x380628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x380628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38062c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x38062cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380630: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x380630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x380634: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x380634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380638: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x380638u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x38063c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x380640: 0x3e00008  jr          $ra
    ctx->pc = 0x380640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380640u;
        // 0x380644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380648u;
}
