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

// Function: sub_003D5774
// Address: 0x3d5774 - 0x3d595c
void sub_003D5774_0x3d5774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5774_0x3d5774");
#endif

    switch (ctx->pc) {
        case 0x3d5774u: goto label_3d5774;
        case 0x3d5778u: goto label_3d5778;
        case 0x3d577cu: goto label_3d577c;
        case 0x3d5780u: goto label_3d5780;
        case 0x3d5784u: goto label_3d5784;
        case 0x3d5788u: goto label_3d5788;
        case 0x3d578cu: goto label_3d578c;
        case 0x3d5790u: goto label_3d5790;
        case 0x3d5794u: goto label_3d5794;
        case 0x3d5798u: goto label_3d5798;
        case 0x3d579cu: goto label_3d579c;
        case 0x3d57a0u: goto label_3d57a0;
        case 0x3d57a4u: goto label_3d57a4;
        case 0x3d57a8u: goto label_3d57a8;
        case 0x3d57acu: goto label_3d57ac;
        case 0x3d57b0u: goto label_3d57b0;
        case 0x3d57b4u: goto label_3d57b4;
        case 0x3d57b8u: goto label_3d57b8;
        case 0x3d57bcu: goto label_3d57bc;
        case 0x3d57c0u: goto label_3d57c0;
        case 0x3d57c4u: goto label_3d57c4;
        case 0x3d57c8u: goto label_3d57c8;
        case 0x3d57ccu: goto label_3d57cc;
        case 0x3d57d0u: goto label_3d57d0;
        case 0x3d57d4u: goto label_3d57d4;
        case 0x3d57d8u: goto label_3d57d8;
        case 0x3d57dcu: goto label_3d57dc;
        case 0x3d57e0u: goto label_3d57e0;
        case 0x3d57e4u: goto label_3d57e4;
        case 0x3d57e8u: goto label_3d57e8;
        case 0x3d57ecu: goto label_3d57ec;
        case 0x3d57f0u: goto label_3d57f0;
        case 0x3d57f4u: goto label_3d57f4;
        case 0x3d57f8u: goto label_3d57f8;
        case 0x3d57fcu: goto label_3d57fc;
        case 0x3d5800u: goto label_3d5800;
        case 0x3d5804u: goto label_3d5804;
        case 0x3d5808u: goto label_3d5808;
        case 0x3d580cu: goto label_3d580c;
        case 0x3d5810u: goto label_3d5810;
        case 0x3d5814u: goto label_3d5814;
        case 0x3d5818u: goto label_3d5818;
        case 0x3d581cu: goto label_3d581c;
        case 0x3d5820u: goto label_3d5820;
        case 0x3d5824u: goto label_3d5824;
        case 0x3d5828u: goto label_3d5828;
        case 0x3d582cu: goto label_3d582c;
        case 0x3d5830u: goto label_3d5830;
        case 0x3d5834u: goto label_3d5834;
        case 0x3d5838u: goto label_3d5838;
        case 0x3d583cu: goto label_3d583c;
        case 0x3d5840u: goto label_3d5840;
        case 0x3d5844u: goto label_3d5844;
        case 0x3d5848u: goto label_3d5848;
        case 0x3d584cu: goto label_3d584c;
        case 0x3d5850u: goto label_3d5850;
        case 0x3d5854u: goto label_3d5854;
        case 0x3d5858u: goto label_3d5858;
        case 0x3d585cu: goto label_3d585c;
        case 0x3d5860u: goto label_3d5860;
        case 0x3d5864u: goto label_3d5864;
        case 0x3d5868u: goto label_3d5868;
        case 0x3d586cu: goto label_3d586c;
        case 0x3d5870u: goto label_3d5870;
        case 0x3d5874u: goto label_3d5874;
        case 0x3d5878u: goto label_3d5878;
        case 0x3d587cu: goto label_3d587c;
        case 0x3d5880u: goto label_3d5880;
        case 0x3d5884u: goto label_3d5884;
        case 0x3d5888u: goto label_3d5888;
        case 0x3d588cu: goto label_3d588c;
        case 0x3d5890u: goto label_3d5890;
        case 0x3d5894u: goto label_3d5894;
        case 0x3d5898u: goto label_3d5898;
        case 0x3d589cu: goto label_3d589c;
        case 0x3d58a0u: goto label_3d58a0;
        case 0x3d58a4u: goto label_3d58a4;
        case 0x3d58a8u: goto label_3d58a8;
        case 0x3d58acu: goto label_3d58ac;
        case 0x3d58b0u: goto label_3d58b0;
        case 0x3d58b4u: goto label_3d58b4;
        case 0x3d58b8u: goto label_3d58b8;
        case 0x3d58bcu: goto label_3d58bc;
        case 0x3d58c0u: goto label_3d58c0;
        case 0x3d58c4u: goto label_3d58c4;
        case 0x3d58c8u: goto label_3d58c8;
        case 0x3d58ccu: goto label_3d58cc;
        case 0x3d58d0u: goto label_3d58d0;
        case 0x3d58d4u: goto label_3d58d4;
        case 0x3d58d8u: goto label_3d58d8;
        case 0x3d58dcu: goto label_3d58dc;
        case 0x3d58e0u: goto label_3d58e0;
        case 0x3d58e4u: goto label_3d58e4;
        case 0x3d58e8u: goto label_3d58e8;
        case 0x3d58ecu: goto label_3d58ec;
        case 0x3d58f0u: goto label_3d58f0;
        case 0x3d58f4u: goto label_3d58f4;
        case 0x3d58f8u: goto label_3d58f8;
        case 0x3d58fcu: goto label_3d58fc;
        case 0x3d5900u: goto label_3d5900;
        case 0x3d5904u: goto label_3d5904;
        case 0x3d5908u: goto label_3d5908;
        case 0x3d590cu: goto label_3d590c;
        case 0x3d5910u: goto label_3d5910;
        case 0x3d5914u: goto label_3d5914;
        case 0x3d5918u: goto label_3d5918;
        case 0x3d591cu: goto label_3d591c;
        case 0x3d5920u: goto label_3d5920;
        case 0x3d5924u: goto label_3d5924;
        case 0x3d5928u: goto label_3d5928;
        case 0x3d592cu: goto label_3d592c;
        case 0x3d5930u: goto label_3d5930;
        case 0x3d5934u: goto label_3d5934;
        case 0x3d5938u: goto label_3d5938;
        case 0x3d593cu: goto label_3d593c;
        case 0x3d5940u: goto label_3d5940;
        case 0x3d5944u: goto label_3d5944;
        case 0x3d5948u: goto label_3d5948;
        case 0x3d594cu: goto label_3d594c;
        case 0x3d5950u: goto label_3d5950;
        case 0x3d5954u: goto label_3d5954;
        case 0x3d5958u: goto label_3d5958;
        default: break;
    }

    ctx->pc = 0x3d5774u;

label_3d5774:
    // 0x3d5774: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3d5774u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
label_3d5778:
    // 0x3d5778: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x3d5778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_3d577c:
    // 0x3d577c: 0xc0f5b8a  jal         func_3D6E28
label_3d5780:
    if (ctx->pc == 0x3D5780u) {
        ctx->pc = 0x3D5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D577Cu;
        // 0x3d5780: 0x24e45774  addiu       $a0, $a3, 0x5774 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 22388));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5784u;
        goto label_3d5784;
    }
    ctx->pc = 0x3D577Cu;
    SET_GPR_U32(ctx, 31, 0x3D5784u);
    ctx->pc = 0x3D5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D577Cu;
    // 0x3d5780: 0x24e45774  addiu       $a0, $a3, 0x5774 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 22388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6E28u, 0x3D577Cu, 0x3D5784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5784u;
label_3d5784:
    // 0x3d5784: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3d5784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5788:
    // 0x3d5788: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3d578c:
    if (ctx->pc == 0x3D578Cu) {
        ctx->pc = 0x3D578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5788u;
        // 0x3d578c: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5790u;
        goto label_3d5790;
    }
    ctx->pc = 0x3D5788u;
    {
        const bool branch_taken_0x3d5788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5788u;
        // 0x3d578c: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5788) {
            ctx->pc = 0x3D579Cu;
            goto label_3d579c;
        }
    }
    ctx->pc = 0x3D5790u;
label_3d5790:
    // 0x3d5790: 0xc0f52ce  jal         func_3D4B38
label_3d5794:
    if (ctx->pc == 0x3D5794u) {
        ctx->pc = 0x3D5798u;
        goto label_3d5798;
    }
    ctx->pc = 0x3D5790u;
    SET_GPR_U32(ctx, 31, 0x3D5798u);
    ctx->pc = 0x3D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4B38u, 0x3D5790u, 0x3D5798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5798u;
label_3d5798:
    // 0x3d5798: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x3d5798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_3d579c:
    // 0x3d579c: 0x27c806f0  addiu       $t0, $fp, 0x6F0
    ctx->pc = 0x3d579cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 1776));
label_3d57a0:
    // 0x3d57a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3d57a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d57a4:
    // 0x3d57a4: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3d57a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_3d57a8:
    // 0x3d57a8: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x3d57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_3d57ac:
    // 0x3d57ac: 0x8fc205e8  lw          $v0, 0x5E8($fp)
    ctx->pc = 0x3d57acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_3d57b0:
    // 0x3d57b0: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x3d57b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3d57b4:
    // 0x3d57b4: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x3d57b4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_3d57b8:
    // 0x3d57b8: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x3d57b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_3d57bc:
    // 0x3d57bc: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x3d57bcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_3d57c0:
    // 0x3d57c0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x3d57c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_3d57c4:
    // 0x3d57c4: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x3d57c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_3d57c8:
    // 0x3d57c8: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x3d57c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_3d57cc:
    // 0x3d57cc: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x3d57ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_3d57d0:
    // 0x3d57d0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d57d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3d57d4:
    // 0x3d57d4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3d57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3d57d8:
    // 0x3d57d8: 0x0  nop
    ctx->pc = 0x3d57d8u;
    // NOP
label_3d57dc:
    // 0x3d57dc: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_3d57e0:
    if (ctx->pc == 0x3D57E0u) {
        ctx->pc = 0x3D57E4u;
        goto label_3d57e4;
    }
    ctx->pc = 0x3D57DCu;
    {
        const bool branch_taken_0x3d57dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d57dc) {
            ctx->pc = 0x3D57B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d57b0;
        }
    }
    ctx->pc = 0x3D57E4u;
label_3d57e4:
    // 0x3d57e4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3d57e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3d57e8:
    // 0x3d57e8: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x3d57e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_3d57ec:
    // 0x3d57ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3d57ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_3d57f0:
    // 0x3d57f0: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x3d57f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_3d57f4:
    // 0x3d57f4: 0x27c20680  addiu       $v0, $fp, 0x680
    ctx->pc = 0x3d57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_3d57f8:
    // 0x3d57f8: 0x8fc405e4  lw          $a0, 0x5E4($fp)
    ctx->pc = 0x3d57f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_3d57fc:
    // 0x3d57fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d57fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d5800:
    // 0x3d5800: 0x8fc605e8  lw          $a2, 0x5E8($fp)
    ctx->pc = 0x3d5800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_3d5804:
    // 0x3d5804: 0x8fc705ec  lw          $a3, 0x5EC($fp)
    ctx->pc = 0x3d5804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_3d5808:
    // 0x3d5808: 0xc0f54e8  jal         func_3D53A0
label_3d580c:
    if (ctx->pc == 0x3D580Cu) {
        ctx->pc = 0x3D580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5808u;
        // 0x3d580c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5810u;
        goto label_3d5810;
    }
    ctx->pc = 0x3D5808u;
    SET_GPR_U32(ctx, 31, 0x3D5810u);
    ctx->pc = 0x3D580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5808u;
    // 0x3d580c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D53A0u, 0x3D5808u, 0x3D5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5810u;
label_3d5810:
    // 0x3d5810: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x3d5810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_3d5814:
    // 0x3d5814: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3d5814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
label_3d5818:
    // 0x3d5818: 0x8fc805e8  lw          $t0, 0x5E8($fp)
    ctx->pc = 0x3d5818u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_3d581c:
    // 0x3d581c: 0x24655840  addiu       $a1, $v1, 0x5840
    ctx->pc = 0x3d581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 22592));
label_3d5820:
    // 0x3d5820: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3d5820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3d5824:
    // 0x3d5824: 0x27c40680  addiu       $a0, $fp, 0x680
    ctx->pc = 0x3d5824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_3d5828:
    // 0x3d5828: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x3d5828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d582c:
    // 0x3d582c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d582cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_3d5830:
    // 0x3d5830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d5830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5834:
    // 0x3d5834: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3d5834u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3d5838:
    // 0x3d5838: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d583c:
    if (ctx->pc == 0x3D583Cu) {
        ctx->pc = 0x3D583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5838u;
        // 0x3d583c: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5840u;
        goto label_3d5840;
    }
    ctx->pc = 0x3D5838u;
    {
        const bool branch_taken_0x3d5838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5838u;
        // 0x3d583c: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5838) {
            ctx->pc = 0x3D5848u;
            goto label_3d5848;
        }
    }
    ctx->pc = 0x3D5840u;
label_3d5840:
    // 0x3d5840: 0x800008  jr          $a0
label_3d5844:
    if (ctx->pc == 0x3D5844u) {
        ctx->pc = 0x3D5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5840u;
        // 0x3d5844: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5848u;
        goto label_3d5848;
    }
    ctx->pc = 0x3D5840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x3D5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5840u;
        // 0x3d5844: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D5848u;
label_3d5848:
    // 0x3d5848: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3d5848u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d584c:
    // 0x3d584c: 0xdfbf0680  ld          $ra, 0x680($sp)
    ctx->pc = 0x3d584cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_3d5850:
    // 0x3d5850: 0xdfbe0670  ld          $fp, 0x670($sp)
    ctx->pc = 0x3d5850u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_3d5854:
    // 0x3d5854: 0xdfb70660  ld          $s7, 0x660($sp)
    ctx->pc = 0x3d5854u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_3d5858:
    // 0x3d5858: 0xdfb60650  ld          $s6, 0x650($sp)
    ctx->pc = 0x3d5858u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_3d585c:
    // 0x3d585c: 0xdfb50640  ld          $s5, 0x640($sp)
    ctx->pc = 0x3d585cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_3d5860:
    // 0x3d5860: 0xdfb40630  ld          $s4, 0x630($sp)
    ctx->pc = 0x3d5860u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_3d5864:
    // 0x3d5864: 0xdfb30620  ld          $s3, 0x620($sp)
    ctx->pc = 0x3d5864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_3d5868:
    // 0x3d5868: 0xdfb20610  ld          $s2, 0x610($sp)
    ctx->pc = 0x3d5868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_3d586c:
    // 0x3d586c: 0xdfb10600  ld          $s1, 0x600($sp)
    ctx->pc = 0x3d586cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_3d5870:
    // 0x3d5870: 0xdfb005f0  ld          $s0, 0x5F0($sp)
    ctx->pc = 0x3d5870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1520)));
label_3d5874:
    // 0x3d5874: 0xc7bf06e8  lwc1        $f31, 0x6E8($sp)
    ctx->pc = 0x3d5874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_3d5878:
    // 0x3d5878: 0xc7be06e0  lwc1        $f30, 0x6E0($sp)
    ctx->pc = 0x3d5878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_3d587c:
    // 0x3d587c: 0xc7bd06d8  lwc1        $f29, 0x6D8($sp)
    ctx->pc = 0x3d587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_3d5880:
    // 0x3d5880: 0xc7bc06d0  lwc1        $f28, 0x6D0($sp)
    ctx->pc = 0x3d5880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3d5884:
    // 0x3d5884: 0xc7bb06c8  lwc1        $f27, 0x6C8($sp)
    ctx->pc = 0x3d5884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3d5888:
    // 0x3d5888: 0xc7ba06c0  lwc1        $f26, 0x6C0($sp)
    ctx->pc = 0x3d5888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3d588c:
    // 0x3d588c: 0xc7b906b8  lwc1        $f25, 0x6B8($sp)
    ctx->pc = 0x3d588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3d5890:
    // 0x3d5890: 0xc7b806b0  lwc1        $f24, 0x6B0($sp)
    ctx->pc = 0x3d5890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3d5894:
    // 0x3d5894: 0xc7b706a8  lwc1        $f23, 0x6A8($sp)
    ctx->pc = 0x3d5894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3d5898:
    // 0x3d5898: 0xc7b606a0  lwc1        $f22, 0x6A0($sp)
    ctx->pc = 0x3d5898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d589c:
    // 0x3d589c: 0xc7b50698  lwc1        $f21, 0x698($sp)
    ctx->pc = 0x3d589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d58a0:
    // 0x3d58a0: 0xc7b40690  lwc1        $f20, 0x690($sp)
    ctx->pc = 0x3d58a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d58a4:
    // 0x3d58a4: 0x3e00008  jr          $ra
label_3d58a8:
    if (ctx->pc == 0x3D58A8u) {
        ctx->pc = 0x3D58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58A4u;
        // 0x3d58a8: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58ACu;
        goto label_3d58ac;
    }
    ctx->pc = 0x3D58A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58A4u;
        // 0x3d58a8: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D58A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D58ACu;
label_3d58ac:
    // 0x3d58ac: 0x0  nop
    ctx->pc = 0x3d58acu;
    // NOP
label_3d58b0:
    // 0x3d58b0: 0x27bdf900  addiu       $sp, $sp, -0x700
    ctx->pc = 0x3d58b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965504));
label_3d58b4:
    // 0x3d58b4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3d58b8:
    // 0x3d58b8: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x3d58b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
label_3d58bc:
    // 0x3d58bc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3d58bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d58c0:
    // 0x3d58c0: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x3d58c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
label_3d58c4:
    // 0x3d58c4: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x3d58c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
label_3d58c8:
    // 0x3d58c8: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x3d58c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
label_3d58cc:
    // 0x3d58cc: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x3d58ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
label_3d58d0:
    // 0x3d58d0: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x3d58d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
label_3d58d4:
    // 0x3d58d4: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x3d58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
label_3d58d8:
    // 0x3d58d8: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x3d58d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
label_3d58dc:
    // 0x3d58dc: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x3d58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
label_3d58e0:
    // 0x3d58e0: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x3d58e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
label_3d58e4:
    // 0x3d58e4: 0xe7bf06f8  swc1        $f31, 0x6F8($sp)
    ctx->pc = 0x3d58e4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_3d58e8:
    // 0x3d58e8: 0xe7be06f0  swc1        $f30, 0x6F0($sp)
    ctx->pc = 0x3d58e8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_3d58ec:
    // 0x3d58ec: 0xe7bd06e8  swc1        $f29, 0x6E8($sp)
    ctx->pc = 0x3d58ecu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_3d58f0:
    // 0x3d58f0: 0xe7bc06e0  swc1        $f28, 0x6E0($sp)
    ctx->pc = 0x3d58f0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_3d58f4:
    // 0x3d58f4: 0xe7bb06d8  swc1        $f27, 0x6D8($sp)
    ctx->pc = 0x3d58f4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_3d58f8:
    // 0x3d58f8: 0xe7ba06d0  swc1        $f26, 0x6D0($sp)
    ctx->pc = 0x3d58f8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_3d58fc:
    // 0x3d58fc: 0xe7b906c8  swc1        $f25, 0x6C8($sp)
    ctx->pc = 0x3d58fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_3d5900:
    // 0x3d5900: 0xe7b806c0  swc1        $f24, 0x6C0($sp)
    ctx->pc = 0x3d5900u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_3d5904:
    // 0x3d5904: 0xe7b706b8  swc1        $f23, 0x6B8($sp)
    ctx->pc = 0x3d5904u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_3d5908:
    // 0x3d5908: 0xe7b606b0  swc1        $f22, 0x6B0($sp)
    ctx->pc = 0x3d5908u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_3d590c:
    // 0x3d590c: 0xe7b506a8  swc1        $f21, 0x6A8($sp)
    ctx->pc = 0x3d590cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_3d5910:
    // 0x3d5910: 0xe7b406a0  swc1        $f20, 0x6A0($sp)
    ctx->pc = 0x3d5910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_3d5914:
    // 0x3d5914: 0xafc405e4  sw          $a0, 0x5E4($fp)
    ctx->pc = 0x3d5914u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 4));
label_3d5918:
    // 0x3d5918: 0x8c62ede8  lw          $v0, -0x1218($v1)
    ctx->pc = 0x3d5918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962664)));
label_3d591c:
    // 0x3d591c: 0x40f809  jalr        $v0
label_3d5920:
    if (ctx->pc == 0x3D5920u) {
        ctx->pc = 0x3D5924u;
        goto label_3d5924;
    }
    ctx->pc = 0x3D591Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D591Cu, 0x3D5924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5924u;
label_3d5924:
    // 0x3d5924: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x3d5924u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_3d5928:
    // 0x3d5928: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x3d5928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_3d592c:
    // 0x3d592c: 0x8fc305e8  lw          $v1, 0x5E8($fp)
    ctx->pc = 0x3d592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_3d5930:
    // 0x3d5930: 0xafc205ec  sw          $v0, 0x5EC($fp)
    ctx->pc = 0x3d5930u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 2));
label_3d5934:
    // 0x3d5934: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d5934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d5938:
    // 0x3d5938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d593c:
    if (ctx->pc == 0x3D593Cu) {
        ctx->pc = 0x3D593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5938u;
        // 0x3d593c: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5940u;
        goto label_3d5940;
    }
    ctx->pc = 0x3D5938u;
    {
        const bool branch_taken_0x3d5938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5938u;
        // 0x3d593c: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5938) {
            ctx->pc = 0x3D5948u;
            goto label_3d5948;
        }
    }
    ctx->pc = 0x3D5940u;
label_3d5940:
    // 0x3d5940: 0xc0f52ce  jal         func_3D4B38
label_3d5944:
    if (ctx->pc == 0x3D5944u) {
        ctx->pc = 0x3D5948u;
        goto label_3d5948;
    }
    ctx->pc = 0x3D5940u;
    SET_GPR_U32(ctx, 31, 0x3D5948u);
    ctx->pc = 0x3D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4B38u, 0x3D5940u, 0x3D5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5948u;
label_3d5948:
    // 0x3d5948: 0x8fc605e4  lw          $a2, 0x5E4($fp)
    ctx->pc = 0x3d5948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_3d594c:
    // 0x3d594c: 0x27c705e0  addiu       $a3, $fp, 0x5E0
    ctx->pc = 0x3d594cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_3d5950:
    // 0x3d5950: 0x8fc505e8  lw          $a1, 0x5E8($fp)
    ctx->pc = 0x3d5950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_3d5954:
    // 0x3d5954: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x3d5954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_3d5958:
    // 0x3d5958: 0xafc705f0  sw          $a3, 0x5F0($fp)
    ctx->pc = 0x3d5958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1520), GPR_U32(ctx, 7));
    ctx->pc = 0x3d595cu;
}
