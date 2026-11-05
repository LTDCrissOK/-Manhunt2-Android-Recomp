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

// Function: sub_002705F0
// Address: 0x2705f0 - 0x270ae0
void sub_002705F0_0x2705f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002705F0_0x2705f0");
#endif

    switch (ctx->pc) {
        case 0x270628u: goto label_270628;
        case 0x270654u: goto label_270654;
        case 0x270670u: goto label_270670;
        case 0x27068cu: goto label_27068c;
        case 0x2706a8u: goto label_2706a8;
        case 0x2706c4u: goto label_2706c4;
        case 0x2706e0u: goto label_2706e0;
        case 0x2706fcu: goto label_2706fc;
        case 0x270718u: goto label_270718;
        case 0x270734u: goto label_270734;
        case 0x270750u: goto label_270750;
        case 0x27076cu: goto label_27076c;
        case 0x270788u: goto label_270788;
        case 0x2707a4u: goto label_2707a4;
        case 0x2707c0u: goto label_2707c0;
        case 0x2707dcu: goto label_2707dc;
        case 0x2707f8u: goto label_2707f8;
        case 0x270814u: goto label_270814;
        case 0x270830u: goto label_270830;
        case 0x27084cu: goto label_27084c;
        case 0x270868u: goto label_270868;
        case 0x2708a0u: goto label_2708a0;
        case 0x2708c8u: goto label_2708c8;
        case 0x270958u: goto label_270958;
        case 0x270980u: goto label_270980;
        case 0x2709e0u: goto label_2709e0;
        case 0x270a20u: goto label_270a20;
        case 0x270a48u: goto label_270a48;
        case 0x270a80u: goto label_270a80;
        case 0x270aacu: goto label_270aac;
        default: break;
    }

    ctx->pc = 0x2705f0u;

    // 0x2705f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2705f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2705f4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2705f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2705f8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2705f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2705fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2705fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270600: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x270600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x270604: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x270604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x270608: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x270608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x27060c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x270610: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x270610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x270614: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x270614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x270618: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x270618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x27061c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x27061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x270620: 0xc0837d8  jal         func_20DF60
    ctx->pc = 0x270620u;
    SET_GPR_U32(ctx, 31, 0x270628u);
    ctx->pc = 0x270624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270620u;
    // 0x270624: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF60u, 0x270620u, 0x270628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270628u;
label_270628:
    // 0x270628: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x270628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27062c: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x27062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x270630: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x270630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x270634: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x270634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270638: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x270638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27063c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27063cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x270640: 0x24c67cc0  addiu       $a2, $a2, 0x7CC0
    ctx->pc = 0x270640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31936));
    // 0x270644: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27064c: 0xc09c100  jal         func_270400
    ctx->pc = 0x27064Cu;
    SET_GPR_U32(ctx, 31, 0x270654u);
    ctx->pc = 0x270650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27064Cu;
    // 0x270650: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x27064Cu, 0x270654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270654u;
label_270654:
    // 0x270654: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x270654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270658: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x270658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27065c: 0x24c67cd0  addiu       $a2, $a2, 0x7CD0
    ctx->pc = 0x27065cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31952));
    // 0x270660: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270668: 0xc09c100  jal         func_270400
    ctx->pc = 0x270668u;
    SET_GPR_U32(ctx, 31, 0x270670u);
    ctx->pc = 0x27066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270668u;
    // 0x27066c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x270668u, 0x270670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270670u;
label_270670:
    // 0x270670: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x270670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270674: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x270674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270678: 0x24c67ce0  addiu       $a2, $a2, 0x7CE0
    ctx->pc = 0x270678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31968));
    // 0x27067c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27067cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270684: 0xc09c100  jal         func_270400
    ctx->pc = 0x270684u;
    SET_GPR_U32(ctx, 31, 0x27068Cu);
    ctx->pc = 0x270688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270684u;
    // 0x270688: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x270684u, 0x27068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27068Cu;
label_27068c:
    // 0x27068c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x27068cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270690: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x270690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270694: 0x24c67cf8  addiu       $a2, $a2, 0x7CF8
    ctx->pc = 0x270694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31992));
    // 0x270698: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27069c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27069cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706a0: 0xc09c100  jal         func_270400
    ctx->pc = 0x2706A0u;
    SET_GPR_U32(ctx, 31, 0x2706A8u);
    ctx->pc = 0x2706A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706A0u;
    // 0x2706a4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x2706A0u, 0x2706A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706A8u;
label_2706a8:
    // 0x2706a8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2706a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2706ac: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2706acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706b0: 0x24c67d10  addiu       $a2, $a2, 0x7D10
    ctx->pc = 0x2706b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32016));
    // 0x2706b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2706b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2706b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706bc: 0xc09c100  jal         func_270400
    ctx->pc = 0x2706BCu;
    SET_GPR_U32(ctx, 31, 0x2706C4u);
    ctx->pc = 0x2706C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706BCu;
    // 0x2706c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x2706BCu, 0x2706C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706C4u;
label_2706c4:
    // 0x2706c4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2706c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2706c8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2706c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706cc: 0x24c67d20  addiu       $a2, $a2, 0x7D20
    ctx->pc = 0x2706ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32032));
    // 0x2706d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2706d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2706d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706d8: 0xc09c100  jal         func_270400
    ctx->pc = 0x2706D8u;
    SET_GPR_U32(ctx, 31, 0x2706E0u);
    ctx->pc = 0x2706DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706D8u;
    // 0x2706dc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x2706D8u, 0x2706E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706E0u;
label_2706e0:
    // 0x2706e0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2706e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2706e4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2706e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706e8: 0x24c67d30  addiu       $a2, $a2, 0x7D30
    ctx->pc = 0x2706e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32048));
    // 0x2706ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2706ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2706f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706f4: 0xc09c100  jal         func_270400
    ctx->pc = 0x2706F4u;
    SET_GPR_U32(ctx, 31, 0x2706FCu);
    ctx->pc = 0x2706F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706F4u;
    // 0x2706f8: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x2706F4u, 0x2706FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706FCu;
label_2706fc:
    // 0x2706fc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2706fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270700: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x270700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270704: 0x24c67d48  addiu       $a2, $a2, 0x7D48
    ctx->pc = 0x270704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32072));
    // 0x270708: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27070c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27070cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270710: 0xc09c100  jal         func_270400
    ctx->pc = 0x270710u;
    SET_GPR_U32(ctx, 31, 0x270718u);
    ctx->pc = 0x270714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270710u;
    // 0x270714: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x270710u, 0x270718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270718u;
label_270718:
    // 0x270718: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x270718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x27071c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x27071cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270720: 0x24c67d60  addiu       $a2, $a2, 0x7D60
    ctx->pc = 0x270720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32096));
    // 0x270724: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27072c: 0xc09c100  jal         func_270400
    ctx->pc = 0x27072Cu;
    SET_GPR_U32(ctx, 31, 0x270734u);
    ctx->pc = 0x270730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27072Cu;
    // 0x270730: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x27072Cu, 0x270734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270734u;
label_270734:
    // 0x270734: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x270734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270738: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x270738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27073c: 0x24c67d78  addiu       $a2, $a2, 0x7D78
    ctx->pc = 0x27073cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32120));
    // 0x270740: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270748: 0xc09c100  jal         func_270400
    ctx->pc = 0x270748u;
    SET_GPR_U32(ctx, 31, 0x270750u);
    ctx->pc = 0x27074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270748u;
    // 0x27074c: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x270748u, 0x270750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270750u;
label_270750:
    // 0x270750: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x270750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270754: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x270754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270758: 0x24c67d90  addiu       $a2, $a2, 0x7D90
    ctx->pc = 0x270758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32144));
    // 0x27075c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270764: 0xc09c100  jal         func_270400
    ctx->pc = 0x270764u;
    SET_GPR_U32(ctx, 31, 0x27076Cu);
    ctx->pc = 0x270768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270764u;
    // 0x270768: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x270764u, 0x27076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27076Cu;
label_27076c:
    // 0x27076c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x27076cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270770: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x270770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270774: 0x24c67da8  addiu       $a2, $a2, 0x7DA8
    ctx->pc = 0x270774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32168));
    // 0x270778: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27077c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27077cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270780: 0xc09c100  jal         func_270400
    ctx->pc = 0x270780u;
    SET_GPR_U32(ctx, 31, 0x270788u);
    ctx->pc = 0x270784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270780u;
    // 0x270784: 0x2407000b  addiu       $a3, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x270780u, 0x270788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270788u;
label_270788:
    // 0x270788: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x270788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x27078c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x27078cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270790: 0x24c67dc0  addiu       $a2, $a2, 0x7DC0
    ctx->pc = 0x270790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32192));
    // 0x270794: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27079c: 0xc09c100  jal         func_270400
    ctx->pc = 0x27079Cu;
    SET_GPR_U32(ctx, 31, 0x2707A4u);
    ctx->pc = 0x2707A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27079Cu;
    // 0x2707a0: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x27079Cu, 0x2707A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707A4u;
label_2707a4:
    // 0x2707a4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2707a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2707a8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2707a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707ac: 0x24c67dd8  addiu       $a2, $a2, 0x7DD8
    ctx->pc = 0x2707acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32216));
    // 0x2707b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2707b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2707b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707b8: 0xc09c100  jal         func_270400
    ctx->pc = 0x2707B8u;
    SET_GPR_U32(ctx, 31, 0x2707C0u);
    ctx->pc = 0x2707BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707B8u;
    // 0x2707bc: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x2707B8u, 0x2707C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707C0u;
label_2707c0:
    // 0x2707c0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2707c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2707c4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2707c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707c8: 0x24c67df0  addiu       $a2, $a2, 0x7DF0
    ctx->pc = 0x2707c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32240));
    // 0x2707cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2707ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2707d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707d4: 0xc09c100  jal         func_270400
    ctx->pc = 0x2707D4u;
    SET_GPR_U32(ctx, 31, 0x2707DCu);
    ctx->pc = 0x2707D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707D4u;
    // 0x2707d8: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x2707D4u, 0x2707DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707DCu;
label_2707dc:
    // 0x2707dc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2707dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2707e0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2707e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707e4: 0x24c67e08  addiu       $a2, $a2, 0x7E08
    ctx->pc = 0x2707e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32264));
    // 0x2707e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2707e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2707ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707f0: 0xc09c100  jal         func_270400
    ctx->pc = 0x2707F0u;
    SET_GPR_U32(ctx, 31, 0x2707F8u);
    ctx->pc = 0x2707F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707F0u;
    // 0x2707f4: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x2707F0u, 0x2707F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707F8u;
label_2707f8:
    // 0x2707f8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2707f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2707fc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2707fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270800: 0x24c67e20  addiu       $a2, $a2, 0x7E20
    ctx->pc = 0x270800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32288));
    // 0x270804: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27080c: 0xc09c100  jal         func_270400
    ctx->pc = 0x27080Cu;
    SET_GPR_U32(ctx, 31, 0x270814u);
    ctx->pc = 0x270810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27080Cu;
    // 0x270810: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x27080Cu, 0x270814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270814u;
label_270814:
    // 0x270814: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x270814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270818: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x270818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27081c: 0x24c67e38  addiu       $a2, $a2, 0x7E38
    ctx->pc = 0x27081cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32312));
    // 0x270820: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270828: 0xc09c100  jal         func_270400
    ctx->pc = 0x270828u;
    SET_GPR_U32(ctx, 31, 0x270830u);
    ctx->pc = 0x27082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270828u;
    // 0x27082c: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x270828u, 0x270830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270830u;
label_270830:
    // 0x270830: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x270830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x270834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270838: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x270838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27083c: 0x24c67e50  addiu       $a2, $a2, 0x7E50
    ctx->pc = 0x27083cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32336));
    // 0x270840: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x270840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x270844: 0xc09c100  jal         func_270400
    ctx->pc = 0x270844u;
    SET_GPR_U32(ctx, 31, 0x27084Cu);
    ctx->pc = 0x270848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270844u;
    // 0x270848: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270400u, 0x270844u, 0x27084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27084Cu;
label_27084c:
    // 0x27084c: 0x8ea40258  lw          $a0, 0x258($s5)
    ctx->pc = 0x27084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
    // 0x270850: 0x26a50258  addiu       $a1, $s5, 0x258
    ctx->pc = 0x270850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 600));
    // 0x270854: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x270854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x270858: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x270858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27085c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27085Cu;
    {
        const bool branch_taken_0x27085c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x270860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27085Cu;
        // 0x270860: 0x26b30258  addiu       $s3, $s5, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27085c) {
            ctx->pc = 0x270880u;
            goto label_270880;
        }
    }
    ctx->pc = 0x270864u;
    // 0x270864: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x270864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_270868:
    // 0x270868: 0x0  nop
    ctx->pc = 0x270868u;
    // NOP
    // 0x27086c: 0x0  nop
    ctx->pc = 0x27086cu;
    // NOP
    // 0x270870: 0x0  nop
    ctx->pc = 0x270870u;
    // NOP
    // 0x270874: 0x0  nop
    ctx->pc = 0x270874u;
    // NOP
    // 0x270878: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x270878u;
    {
        const bool branch_taken_0x270878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270878u;
        // 0x27087c: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270878) {
            ctx->pc = 0x270868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270868;
        }
    }
    ctx->pc = 0x270880u;
label_270880:
    // 0x270880: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x270880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x270884: 0xaea00268  sw          $zero, 0x268($s5)
    ctx->pc = 0x270884u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 616), GPR_U32(ctx, 0));
    // 0x270888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27088c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270890: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x270890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x270894: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x270894u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x270898: 0xc0f7ed4  jal         func_3DFB50
    ctx->pc = 0x270898u;
    SET_GPR_U32(ctx, 31, 0x2708A0u);
    ctx->pc = 0x27089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270898u;
    // 0x27089c: 0x52843  sra         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFB50u, 0x270898u, 0x2708A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708A0u;
label_2708a0:
    // 0x2708a0: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x2708a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2708a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2708a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2708a8: 0x1222006f  beq         $s1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2708A8u;
    {
        const bool branch_taken_0x2708a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2708ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708A8u;
        // 0x2708ac: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708a8) {
            ctx->pc = 0x270A68u;
            goto label_270a68;
        }
    }
    ctx->pc = 0x2708B0u;
    // 0x2708b0: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x2708b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2708b4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2708b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2708b8: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x2708b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708bc: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x2708bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x2708c0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2708c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2708c4: 0x0  nop
    ctx->pc = 0x2708c4u;
    // NOP
label_2708c8:
    // 0x2708c8: 0x8ea30268  lw          $v1, 0x268($s5)
    ctx->pc = 0x2708c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 616)));
    // 0x2708cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2708ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2708d0: 0xaea30268  sw          $v1, 0x268($s5)
    ctx->pc = 0x2708d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 616), GPR_U32(ctx, 3));
    // 0x2708d4: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x2708d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2708d8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2708d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2708dc: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2708DCu;
    {
        const bool branch_taken_0x2708dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2708dc) {
            ctx->pc = 0x2708E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2708DCu;
            // 0x2708e0: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270910u;
            goto label_270910;
        }
    }
    ctx->pc = 0x2708E4u;
    // 0x2708e4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2708E4u;
    {
        const bool branch_taken_0x2708e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2708e4) {
            ctx->pc = 0x2708E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2708E4u;
            // 0x2708e8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270900u;
            goto label_270900;
        }
    }
    ctx->pc = 0x2708ECu;
    // 0x2708ec: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x2708ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2708f0: 0x82250001  lb          $a1, 0x1($s1)
    ctx->pc = 0x2708f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2708f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2708f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2708f8: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x2708f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2708fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2708fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_270900:
    // 0x270900: 0x26370002  addiu       $s7, $s1, 0x2
    ctx->pc = 0x270900u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x270904: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x270904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x270908: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x270908u;
    {
        const bool branch_taken_0x270908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270908u;
        // 0x27090c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270908) {
            ctx->pc = 0x270A58u;
            goto label_270a58;
        }
    }
    ctx->pc = 0x270910u;
label_270910:
    // 0x270910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270914: 0x8ea20258  lw          $v0, 0x258($s5)
    ctx->pc = 0x270914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
    // 0x270918: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x270918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x27091c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x27091cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x270920: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270924: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x270924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x270928: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x270928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x27092c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x27092cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x270930: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x270930u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x270934: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x270934u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x270938: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x270938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27093c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x270940: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x270940u;
    {
        const bool branch_taken_0x270940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270940) {
            ctx->pc = 0x270944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270940u;
            // 0x270944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270960u;
            goto label_270960;
        }
    }
    ctx->pc = 0x270948u;
    // 0x270948: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x270948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27094c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270950: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x270950u;
    SET_GPR_U32(ctx, 31, 0x270958u);
    ctx->pc = 0x270954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270950u;
    // 0x270954: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x270950u, 0x270958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270958u;
label_270958:
    // 0x270958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270958u;
    {
        const bool branch_taken_0x270958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270958u;
        // 0x27095c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270958) {
            ctx->pc = 0x270968u;
            goto label_270968;
        }
    }
    ctx->pc = 0x270960u;
label_270960:
    // 0x270960: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x270960u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270968:
    // 0x270968: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x270968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27096c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x27096cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270970: 0x26370002  addiu       $s7, $s1, 0x2
    ctx->pc = 0x270970u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x270974: 0x1072000b  beq         $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x270974u;
    {
        const bool branch_taken_0x270974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x270978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270974u;
        // 0x270978: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270974) {
            ctx->pc = 0x2709A4u;
            goto label_2709a4;
        }
    }
    ctx->pc = 0x27097Cu;
    // 0x27097c: 0x0  nop
    ctx->pc = 0x27097cu;
    // NOP
label_270980:
    // 0x270980: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x270980u;
    {
        const bool branch_taken_0x270980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270980) {
            ctx->pc = 0x270984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270980u;
            // 0x270984: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27099Cu;
            goto label_27099c;
        }
    }
    ctx->pc = 0x270988u;
    // 0x270988: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x270988u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27098c: 0x80660001  lb          $a2, 0x1($v1)
    ctx->pc = 0x27098cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x270990: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x270990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x270994: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x270994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x270998: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x270998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_27099c:
    // 0x27099c: 0x1472fff8  bne         $v1, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27099Cu;
    {
        const bool branch_taken_0x27099c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2709A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27099Cu;
        // 0x2709a0: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27099c) {
            ctx->pc = 0x270980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270980;
        }
    }
    ctx->pc = 0x2709A4u;
label_2709a4:
    // 0x2709a4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2709a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2709a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2709a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2709ac: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2709ACu;
    {
        const bool branch_taken_0x2709ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2709B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709ACu;
        // 0x2709b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709ac) {
            ctx->pc = 0x2709D4u;
            goto label_2709d4;
        }
    }
    ctx->pc = 0x2709B4u;
    // 0x2709b4: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2709B4u;
    {
        const bool branch_taken_0x2709b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709b4) {
            ctx->pc = 0x2709B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2709B4u;
            // 0x2709b8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270A08u;
            goto label_270a08;
        }
    }
    ctx->pc = 0x2709BCu;
    // 0x2709bc: 0x82260000  lb          $a2, 0x0($s1)
    ctx->pc = 0x2709bcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2709c0: 0x82270001  lb          $a3, 0x1($s1)
    ctx->pc = 0x2709c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2709c4: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x2709c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2709c8: 0xa2070001  sb          $a3, 0x1($s0)
    ctx->pc = 0x2709c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2709cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2709CCu;
    {
        const bool branch_taken_0x2709cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709CCu;
        // 0x2709d0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709cc) {
            ctx->pc = 0x270A08u;
            goto label_270a08;
        }
    }
    ctx->pc = 0x2709D4u;
label_2709d4:
    // 0x2709d4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2709D4u;
    {
        const bool branch_taken_0x2709d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709D4u;
        // 0x2709d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709d4) {
            ctx->pc = 0x270A00u;
            goto label_270a00;
        }
    }
    ctx->pc = 0x2709DCu;
    // 0x2709dc: 0x0  nop
    ctx->pc = 0x2709dcu;
    // NOP
label_2709e0:
    // 0x2709e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2709E0u;
    {
        const bool branch_taken_0x2709e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709E0u;
        // 0x2709e4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709e0) {
            ctx->pc = 0x2709F8u;
            goto label_2709f8;
        }
    }
    ctx->pc = 0x2709E8u;
    // 0x2709e8: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x2709e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2709ec: 0x82250001  lb          $a1, 0x1($s1)
    ctx->pc = 0x2709ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2709f0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2709f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2709f4: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x2709f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_2709f8:
    // 0x2709f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2709F8u;
    {
        const bool branch_taken_0x2709f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2709FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709F8u;
        // 0x2709fc: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709f8) {
            ctx->pc = 0x2709E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2709e0;
        }
    }
    ctx->pc = 0x270A00u;
label_270a00:
    // 0x270a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a04: 0x0  nop
    ctx->pc = 0x270a04u;
    // NOP
label_270a08:
    // 0x270a08: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x270a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x270a0c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x270a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x270a10: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x270A10u;
    {
        const bool branch_taken_0x270a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x270A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A10u;
        // 0x270a14: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a10) {
            ctx->pc = 0x270A38u;
            goto label_270a38;
        }
    }
    ctx->pc = 0x270A18u;
    // 0x270a18: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x270a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x270a1c: 0x0  nop
    ctx->pc = 0x270a1cu;
    // NOP
label_270a20:
    // 0x270a20: 0x0  nop
    ctx->pc = 0x270a20u;
    // NOP
    // 0x270a24: 0x0  nop
    ctx->pc = 0x270a24u;
    // NOP
    // 0x270a28: 0x0  nop
    ctx->pc = 0x270a28u;
    // NOP
    // 0x270a2c: 0x0  nop
    ctx->pc = 0x270a2cu;
    // NOP
    // 0x270a30: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x270A30u;
    {
        const bool branch_taken_0x270a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x270A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A30u;
        // 0x270a34: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a30) {
            ctx->pc = 0x270A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270a20;
        }
    }
    ctx->pc = 0x270A38u;
label_270a38:
    // 0x270a38: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270A38u;
    {
        const bool branch_taken_0x270a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A38u;
        // 0x270a3c: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a38) {
            ctx->pc = 0x270A4Cu;
            goto label_270a4c;
        }
    }
    ctx->pc = 0x270A40u;
    // 0x270a40: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x270A40u;
    SET_GPR_U32(ctx, 31, 0x270A48u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x270A40u, 0x270A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A48u;
label_270a48:
    // 0x270a48: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x270a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_270a4c:
    // 0x270a4c: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x270a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x270a50: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x270a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x270a54: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x270a54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_270a58:
    // 0x270a58: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x270a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x270a5c: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x270a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a60: 0x5622ff99  bnel        $s1, $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x270A60u;
    {
        const bool branch_taken_0x270a60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x270a60) {
            ctx->pc = 0x270A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A60u;
            // 0x270a64: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2708C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2708c8;
        }
    }
    ctx->pc = 0x270A68u;
label_270a68:
    // 0x270a68: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x270a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x270a6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x270a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270a70: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x270A70u;
    {
        const bool branch_taken_0x270a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x270A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A70u;
        // 0x270a74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a70) {
            ctx->pc = 0x270A98u;
            goto label_270a98;
        }
    }
    ctx->pc = 0x270A78u;
    // 0x270a78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x270a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x270a7c: 0x0  nop
    ctx->pc = 0x270a7cu;
    // NOP
label_270a80:
    // 0x270a80: 0x0  nop
    ctx->pc = 0x270a80u;
    // NOP
    // 0x270a84: 0x0  nop
    ctx->pc = 0x270a84u;
    // NOP
    // 0x270a88: 0x0  nop
    ctx->pc = 0x270a88u;
    // NOP
    // 0x270a8c: 0x0  nop
    ctx->pc = 0x270a8cu;
    // NOP
    // 0x270a90: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x270A90u;
    {
        const bool branch_taken_0x270a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270a90) {
            ctx->pc = 0x270A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A90u;
            // 0x270a94: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270a80;
        }
    }
    ctx->pc = 0x270A98u;
label_270a98:
    // 0x270a98: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x270a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x270a9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270A9Cu;
    {
        const bool branch_taken_0x270a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A9Cu;
        // 0x270aa0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a9c) {
            ctx->pc = 0x270AB0u;
            goto label_270ab0;
        }
    }
    ctx->pc = 0x270AA4u;
    // 0x270aa4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x270AA4u;
    SET_GPR_U32(ctx, 31, 0x270AACu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x270AA4u, 0x270AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AACu;
label_270aac:
    // 0x270aac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x270aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_270ab0:
    // 0x270ab0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x270ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x270ab4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x270ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270ab8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x270ab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x270abc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x270abcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270ac0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x270ac0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x270ac4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x270ac4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x270ac8: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x270ac8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x270acc: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x270accu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x270ad0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x270ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x270ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x270AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AD4u;
        // 0x270ad8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270ADCu;
    // 0x270adc: 0x0  nop
    ctx->pc = 0x270adcu;
    // NOP
    ctx->pc = 0x270ae0u;
}
