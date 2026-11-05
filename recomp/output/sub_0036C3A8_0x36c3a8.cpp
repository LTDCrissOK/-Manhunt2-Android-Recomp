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

// Function: sub_0036C3A8
// Address: 0x36c3a8 - 0x36c528
void sub_0036C3A8_0x36c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C3A8_0x36c3a8");
#endif

    switch (ctx->pc) {
        case 0x36c3c8u: goto label_36c3c8;
        case 0x36c3d8u: goto label_36c3d8;
        case 0x36c3e4u: goto label_36c3e4;
        case 0x36c3f0u: goto label_36c3f0;
        case 0x36c3fcu: goto label_36c3fc;
        case 0x36c408u: goto label_36c408;
        case 0x36c414u: goto label_36c414;
        case 0x36c420u: goto label_36c420;
        case 0x36c42cu: goto label_36c42c;
        case 0x36c438u: goto label_36c438;
        case 0x36c444u: goto label_36c444;
        case 0x36c450u: goto label_36c450;
        case 0x36c45cu: goto label_36c45c;
        case 0x36c468u: goto label_36c468;
        case 0x36c474u: goto label_36c474;
        case 0x36c480u: goto label_36c480;
        case 0x36c48cu: goto label_36c48c;
        case 0x36c498u: goto label_36c498;
        case 0x36c4acu: goto label_36c4ac;
        case 0x36c4bcu: goto label_36c4bc;
        case 0x36c4c8u: goto label_36c4c8;
        case 0x36c4d4u: goto label_36c4d4;
        case 0x36c4e0u: goto label_36c4e0;
        case 0x36c4ecu: goto label_36c4ec;
        case 0x36c4f8u: goto label_36c4f8;
        case 0x36c504u: goto label_36c504;
        case 0x36c510u: goto label_36c510;
        default: break;
    }

    ctx->pc = 0x36c3a8u;

    // 0x36c3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c3ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c3b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c3b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36c3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c3b8: 0x16200037  bnez        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x36C3B8u;
    {
        const bool branch_taken_0x36c3b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C3B8u;
        // 0x36c3bc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c3b8) {
            ctx->pc = 0x36C498u;
            goto label_36c498;
        }
    }
    ctx->pc = 0x36C3C0u;
    // 0x36c3c0: 0xc0db14a  jal         func_36C528
    ctx->pc = 0x36C3C0u;
    SET_GPR_U32(ctx, 31, 0x36C3C8u);
    ctx->pc = 0x36C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3C0u;
    // 0x36c3c4: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C528u, 0x36C3C0u, 0x36C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3C8u;
label_36c3c8:
    // 0x36c3c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c3cc: 0x26101f30  addiu       $s0, $s0, 0x1F30
    ctx->pc = 0x36c3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7984));
    // 0x36c3d0: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C3D0u;
    SET_GPR_U32(ctx, 31, 0x36C3D8u);
    ctx->pc = 0x36C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3D0u;
    // 0x36c3d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C3D0u, 0x36C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3D8u;
label_36c3d8:
    // 0x36c3d8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x36c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36c3dc: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C3DCu;
    SET_GPR_U32(ctx, 31, 0x36C3E4u);
    ctx->pc = 0x36C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3DCu;
    // 0x36c3e0: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C3DCu, 0x36C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3E4u;
label_36c3e4:
    // 0x36c3e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x36c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36c3e8: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C3E8u;
    SET_GPR_U32(ctx, 31, 0x36C3F0u);
    ctx->pc = 0x36C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3E8u;
    // 0x36c3ec: 0x2605fff0  addiu       $a1, $s0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C3E8u, 0x36C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3F0u;
label_36c3f0:
    // 0x36c3f0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x36c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36c3f4: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C3F4u;
    SET_GPR_U32(ctx, 31, 0x36C3FCu);
    ctx->pc = 0x36C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3F4u;
    // 0x36c3f8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C3F4u, 0x36C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3FCu;
label_36c3fc:
    // 0x36c3fc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x36c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36c400: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C400u;
    SET_GPR_U32(ctx, 31, 0x36C408u);
    ctx->pc = 0x36C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C400u;
    // 0x36c404: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C400u, 0x36C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C408u;
label_36c408:
    // 0x36c408: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36c408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c40c: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C40Cu;
    SET_GPR_U32(ctx, 31, 0x36C414u);
    ctx->pc = 0x36C410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C40Cu;
    // 0x36c410: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C40Cu, 0x36C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C414u;
label_36c414:
    // 0x36c414: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x36c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36c418: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C418u;
    SET_GPR_U32(ctx, 31, 0x36C420u);
    ctx->pc = 0x36C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C418u;
    // 0x36c41c: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C418u, 0x36C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C420u;
label_36c420:
    // 0x36c420: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36c420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36c424: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C424u;
    SET_GPR_U32(ctx, 31, 0x36C42Cu);
    ctx->pc = 0x36C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C424u;
    // 0x36c428: 0x2605ffe0  addiu       $a1, $s0, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C424u, 0x36C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C42Cu;
label_36c42c:
    // 0x36c42c: 0x2605ffe8  addiu       $a1, $s0, -0x18
    ctx->pc = 0x36c42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x36c430: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C430u;
    SET_GPR_U32(ctx, 31, 0x36C438u);
    ctx->pc = 0x36C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C430u;
    // 0x36c434: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C430u, 0x36C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C438u;
label_36c438:
    // 0x36c438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c43c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C43Cu;
    SET_GPR_U32(ctx, 31, 0x36C444u);
    ctx->pc = 0x36C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C43Cu;
    // 0x36c440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C43Cu, 0x36C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C444u;
label_36c444:
    // 0x36c444: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x36c444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36c448: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C448u;
    SET_GPR_U32(ctx, 31, 0x36C450u);
    ctx->pc = 0x36C44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C448u;
    // 0x36c44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C448u, 0x36C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C450u;
label_36c450:
    // 0x36c450: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x36c450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36c454: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C454u;
    SET_GPR_U32(ctx, 31, 0x36C45Cu);
    ctx->pc = 0x36C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C454u;
    // 0x36c458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C454u, 0x36C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C45Cu;
label_36c45c:
    // 0x36c45c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x36c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36c460: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C460u;
    SET_GPR_U32(ctx, 31, 0x36C468u);
    ctx->pc = 0x36C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C460u;
    // 0x36c464: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C460u, 0x36C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C468u;
label_36c468:
    // 0x36c468: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x36c468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36c46c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C46Cu;
    SET_GPR_U32(ctx, 31, 0x36C474u);
    ctx->pc = 0x36C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C46Cu;
    // 0x36c470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C46Cu, 0x36C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C474u;
label_36c474:
    // 0x36c474: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36c474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c478: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C478u;
    SET_GPR_U32(ctx, 31, 0x36C480u);
    ctx->pc = 0x36C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C478u;
    // 0x36c47c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C478u, 0x36C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C480u;
label_36c480:
    // 0x36c480: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x36c480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36c484: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C484u;
    SET_GPR_U32(ctx, 31, 0x36C48Cu);
    ctx->pc = 0x36C488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C484u;
    // 0x36c488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C484u, 0x36C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C48Cu;
label_36c48c:
    // 0x36c48c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x36c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36c490: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x36C490u;
    SET_GPR_U32(ctx, 31, 0x36C498u);
    ctx->pc = 0x36C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C490u;
    // 0x36c494: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x36C490u, 0x36C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C498u;
label_36c498:
    // 0x36c498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c49c: 0x1622001d  bne         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36C49Cu;
    {
        const bool branch_taken_0x36c49c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x36C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C49Cu;
        // 0x36c4a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c49c) {
            ctx->pc = 0x36C514u;
            goto label_36c514;
        }
    }
    ctx->pc = 0x36C4A4u;
    // 0x36c4a4: 0xc0db158  jal         func_36C560
    ctx->pc = 0x36C4A4u;
    SET_GPR_U32(ctx, 31, 0x36C4ACu);
    ctx->pc = 0x36C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4A4u;
    // 0x36c4a8: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C560u, 0x36C4A4u, 0x36C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4ACu;
label_36c4ac:
    // 0x36c4ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c4b0: 0x26101f00  addiu       $s0, $s0, 0x1F00
    ctx->pc = 0x36c4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7936));
    // 0x36c4b4: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C4B4u;
    SET_GPR_U32(ctx, 31, 0x36C4BCu);
    ctx->pc = 0x36C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4B4u;
    // 0x36c4b8: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C4B4u, 0x36C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4BCu;
label_36c4bc:
    // 0x36c4bc: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x36c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x36c4c0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C4C0u;
    SET_GPR_U32(ctx, 31, 0x36C4C8u);
    ctx->pc = 0x36C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4C0u;
    // 0x36c4c4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C4C0u, 0x36C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4C8u;
label_36c4c8:
    // 0x36c4c8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x36c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36c4cc: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C4CCu;
    SET_GPR_U32(ctx, 31, 0x36C4D4u);
    ctx->pc = 0x36C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4CCu;
    // 0x36c4d0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C4CCu, 0x36C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4D4u;
label_36c4d4:
    // 0x36c4d4: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x36c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x36c4d8: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C4D8u;
    SET_GPR_U32(ctx, 31, 0x36C4E0u);
    ctx->pc = 0x36C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4D8u;
    // 0x36c4dc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C4D8u, 0x36C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4E0u;
label_36c4e0:
    // 0x36c4e0: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x36c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x36c4e4: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C4E4u;
    SET_GPR_U32(ctx, 31, 0x36C4ECu);
    ctx->pc = 0x36C4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4E4u;
    // 0x36c4e8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C4E4u, 0x36C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4ECu;
label_36c4ec:
    // 0x36c4ec: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x36c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x36c4f0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C4F0u;
    SET_GPR_U32(ctx, 31, 0x36C4F8u);
    ctx->pc = 0x36C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4F0u;
    // 0x36c4f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C4F0u, 0x36C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4F8u;
label_36c4f8:
    // 0x36c4f8: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x36c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36c4fc: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C4FCu;
    SET_GPR_U32(ctx, 31, 0x36C504u);
    ctx->pc = 0x36C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4FCu;
    // 0x36c500: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C4FCu, 0x36C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C504u;
label_36c504:
    // 0x36c504: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x36c504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x36c508: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x36C508u;
    SET_GPR_U32(ctx, 31, 0x36C510u);
    ctx->pc = 0x36C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C508u;
    // 0x36c50c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x36C508u, 0x36C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C510u;
label_36c510:
    // 0x36c510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36c514:
    // 0x36c514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c51c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C51Cu;
        // 0x36c520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C524u;
    // 0x36c524: 0x0  nop
    ctx->pc = 0x36c524u;
    // NOP
    ctx->pc = 0x36c528u;
}
