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

// Function: sub_00334068
// Address: 0x334068 - 0x3341d0
void sub_00334068_0x334068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334068_0x334068");
#endif

    switch (ctx->pc) {
        case 0x3340b0u: goto label_3340b0;
        case 0x3340ccu: goto label_3340cc;
        case 0x3340dcu: goto label_3340dc;
        case 0x3340f0u: goto label_3340f0;
        case 0x3340fcu: goto label_3340fc;
        case 0x334108u: goto label_334108;
        case 0x334118u: goto label_334118;
        case 0x33412cu: goto label_33412c;
        case 0x33413cu: goto label_33413c;
        case 0x334148u: goto label_334148;
        case 0x33415cu: goto label_33415c;
        case 0x334168u: goto label_334168;
        case 0x334170u: goto label_334170;
        case 0x334188u: goto label_334188;
        case 0x33419cu: goto label_33419c;
        default: break;
    }

    ctx->pc = 0x334068u;

    // 0x334068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x334068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33406c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x334070: 0x3c15004c  lui         $s5, 0x4C
    ctx->pc = 0x334070u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
    // 0x334074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334078: 0x8ea4ee20  lw          $a0, -0x11E0($s5)
    ctx->pc = 0x334078u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BEE20u));
    // 0x33407c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334080: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334084: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x334084u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x334088: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x334088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33408c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x334090: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x334090u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x334094: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x334094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x334098: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x334098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33409c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x33409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x3340a0: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x3340a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    // 0x3340a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3340a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3340a8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3340A8u;
    SET_GPR_U32(ctx, 31, 0x3340B0u);
    ctx->pc = 0x3340ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3340A8u;
    // 0x3340ac: 0x3c17004c  lui         $s7, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3340A8u, 0x3340B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3340B0u;
label_3340b0:
    // 0x3340b0: 0x8e649160  lw          $a0, -0x6EA0($s3)
    ctx->pc = 0x3340b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938976)));
    // 0x3340b4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3340b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3340b8: 0x24729920  addiu       $s2, $v1, -0x66E0
    ctx->pc = 0x3340b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940960));
    // 0x3340bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3340bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340c0: 0x942018  mult        $a0, $a0, $s4
    ctx->pc = 0x3340c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3340c4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3340C4u;
    SET_GPR_U32(ctx, 31, 0x3340CCu);
    ctx->pc = 0x3340C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3340C4u;
    // 0x3340c8: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3340C4u, 0x3340CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3340CCu;
label_3340cc:
    // 0x3340cc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3340ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3340d0: 0x8ec4ee28  lw          $a0, -0x11D8($s6)
    ctx->pc = 0x3340d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962728)));
    // 0x3340d4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3340D4u;
    SET_GPR_U32(ctx, 31, 0x3340DCu);
    ctx->pc = 0x3340D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3340D4u;
    // 0x3340d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3340D4u, 0x3340DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3340DCu;
label_3340dc:
    // 0x3340dc: 0x8e649160  lw          $a0, -0x6EA0($s3)
    ctx->pc = 0x3340dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938976)));
    // 0x3340e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3340e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3340e4: 0x941018  mult        $v0, $a0, $s4
    ctx->pc = 0x3340e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3340e8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3340E8u;
    SET_GPR_U32(ctx, 31, 0x3340F0u);
    ctx->pc = 0x3340ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3340E8u;
    // 0x3340ec: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3340E8u, 0x3340F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3340F0u;
label_3340f0:
    // 0x3340f0: 0x8ee4eec0  lw          $a0, -0x1140($s7)
    ctx->pc = 0x3340f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962880)));
    // 0x3340f4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3340F4u;
    SET_GPR_U32(ctx, 31, 0x3340FCu);
    ctx->pc = 0x3340F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3340F4u;
    // 0x3340f8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3340F4u, 0x3340FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3340FCu;
label_3340fc:
    // 0x3340fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3340fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x334100: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x334100u;
    SET_GPR_U32(ctx, 31, 0x334108u);
    ctx->pc = 0x334104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334100u;
    // 0x334104: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x334100u, 0x334108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334108u;
label_334108:
    // 0x334108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33410c: 0x8ea5ee20  lw          $a1, -0x11E0($s5)
    ctx->pc = 0x33410cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962720)));
    // 0x334110: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x334110u;
    SET_GPR_U32(ctx, 31, 0x334118u);
    ctx->pc = 0x334114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334110u;
    // 0x334114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x334110u, 0x334118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334118u;
label_334118:
    // 0x334118: 0x8e659160  lw          $a1, -0x6EA0($s3)
    ctx->pc = 0x334118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938976)));
    // 0x33411c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334120: 0xb41018  mult        $v0, $a1, $s4
    ctx->pc = 0x334120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x334124: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x334124u;
    SET_GPR_U32(ctx, 31, 0x33412Cu);
    ctx->pc = 0x334128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334124u;
    // 0x334128: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x334124u, 0x33412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33412Cu;
label_33412c:
    // 0x33412c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x33412cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x334130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334134: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x334134u;
    SET_GPR_U32(ctx, 31, 0x33413Cu);
    ctx->pc = 0x334138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334134u;
    // 0x334138: 0x24a55990  addiu       $a1, $a1, 0x5990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x334134u, 0x33413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33413Cu;
label_33413c:
    // 0x33413c: 0x8ec5ee28  lw          $a1, -0x11D8($s6)
    ctx->pc = 0x33413cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962728)));
    // 0x334140: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x334140u;
    SET_GPR_U32(ctx, 31, 0x334148u);
    ctx->pc = 0x334144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334140u;
    // 0x334144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x334140u, 0x334148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334148u;
label_334148:
    // 0x334148: 0x8e659160  lw          $a1, -0x6EA0($s3)
    ctx->pc = 0x334148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938976)));
    // 0x33414c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334150: 0xb41018  mult        $v0, $a1, $s4
    ctx->pc = 0x334150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x334154: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x334154u;
    SET_GPR_U32(ctx, 31, 0x33415Cu);
    ctx->pc = 0x334158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334154u;
    // 0x334158: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x334154u, 0x33415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33415Cu;
label_33415c:
    // 0x33415c: 0x8ee5eec0  lw          $a1, -0x1140($s7)
    ctx->pc = 0x33415cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962880)));
    // 0x334160: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x334160u;
    SET_GPR_U32(ctx, 31, 0x334168u);
    ctx->pc = 0x334164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334160u;
    // 0x334164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x334160u, 0x334168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334168u;
label_334168:
    // 0x334168: 0xc0cd0b2  jal         func_3342C8
    ctx->pc = 0x334168u;
    SET_GPR_U32(ctx, 31, 0x334170u);
    ctx->pc = 0x33416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334168u;
    // 0x33416c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3342C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3342C8u, 0x334168u, 0x334170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334170u;
label_334170:
    // 0x334170: 0x8e23bed8  lw          $v1, -0x4128($s1)
    ctx->pc = 0x334170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950616)));
    // 0x334174: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x334174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x334178: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334178u;
    {
        const bool branch_taken_0x334178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334178u;
        // 0x33417c: 0xae23bed8  sw          $v1, -0x4128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334178) {
            ctx->pc = 0x334188u;
            goto label_334188;
        }
    }
    ctx->pc = 0x334180u;
    // 0x334180: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x334180u;
    SET_GPR_U32(ctx, 31, 0x334188u);
    ctx->pc = 0x334184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334180u;
    // 0x334184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x334180u, 0x334188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334188u;
label_334188:
    // 0x334188: 0x8e22bed8  lw          $v0, -0x4128($s1)
    ctx->pc = 0x334188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950616)));
    // 0x33418c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33418Cu;
    {
        const bool branch_taken_0x33418c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x334190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33418Cu;
        // 0x334190: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33418c) {
            ctx->pc = 0x3341A4u;
            goto label_3341a4;
        }
    }
    ctx->pc = 0x334194u;
    // 0x334194: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x334194u;
    SET_GPR_U32(ctx, 31, 0x33419Cu);
    ctx->pc = 0x334198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334194u;
    // 0x334198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x334194u, 0x33419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33419Cu;
label_33419c:
    // 0x33419c: 0x8e22bed8  lw          $v0, -0x4128($s1)
    ctx->pc = 0x33419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950616)));
    // 0x3341a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3341a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3341a4:
    // 0x3341a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3341a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3341a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3341a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3341ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3341acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3341b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3341b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3341b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3341b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3341b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3341b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3341bc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3341bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3341c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3341c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3341c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3341C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3341C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341C4u;
        // 0x3341c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3341C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3341CCu;
    // 0x3341cc: 0x0  nop
    ctx->pc = 0x3341ccu;
    // NOP
    ctx->pc = 0x3341d0u;
}
