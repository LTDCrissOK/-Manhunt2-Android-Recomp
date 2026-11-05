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

// Function: sub_0011C3A0
// Address: 0x11c3a0 - 0x11c600
void sub_0011C3A0_0x11c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C3A0_0x11c3a0");
#endif

    switch (ctx->pc) {
        case 0x11c3e0u: goto label_11c3e0;
        case 0x11c3ecu: goto label_11c3ec;
        case 0x11c3fcu: goto label_11c3fc;
        case 0x11c40cu: goto label_11c40c;
        case 0x11c420u: goto label_11c420;
        case 0x11c438u: goto label_11c438;
        case 0x11c450u: goto label_11c450;
        case 0x11c458u: goto label_11c458;
        case 0x11c470u: goto label_11c470;
        case 0x11c490u: goto label_11c490;
        case 0x11c4c0u: goto label_11c4c0;
        case 0x11c4d8u: goto label_11c4d8;
        case 0x11c4e4u: goto label_11c4e4;
        case 0x11c50cu: goto label_11c50c;
        case 0x11c520u: goto label_11c520;
        case 0x11c52cu: goto label_11c52c;
        case 0x11c550u: goto label_11c550;
        case 0x11c558u: goto label_11c558;
        case 0x11c560u: goto label_11c560;
        case 0x11c578u: goto label_11c578;
        case 0x11c58cu: goto label_11c58c;
        case 0x11c59cu: goto label_11c59c;
        case 0x11c5b0u: goto label_11c5b0;
        case 0x11c5c0u: goto label_11c5c0;
        case 0x11c5ccu: goto label_11c5cc;
        case 0x11c5d8u: goto label_11c5d8;
        default: break;
    }

    ctx->pc = 0x11c3a0u;

    // 0x11c3a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11c3a4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x11c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x11c3a8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x11c3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x11c3ac: 0x2442fe40  addiu       $v0, $v0, -0x1C0
    ctx->pc = 0x11c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x11c3b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11c3b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11c3b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x11c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x11c3bc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x11c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x11c3c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11c3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c3c4: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x11c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x11c3c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11c3cc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x11c3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x11c3d0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x11c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x11c3d4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x11c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x11c3d8: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x11C3D8u;
    SET_GPR_U32(ctx, 31, 0x11C3E0u);
    ctx->pc = 0x11C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3D8u;
    // 0x11c3dc: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x11C3D8u, 0x11C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3E0u;
label_11c3e0:
    // 0x11c3e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3e4: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x11C3E4u;
    SET_GPR_U32(ctx, 31, 0x11C3ECu);
    ctx->pc = 0x11C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3E4u;
    // 0x11c3e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x11C3E4u, 0x11C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3ECu;
label_11c3ec:
    // 0x11c3ec: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x11c3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x11c3f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3f4: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x11C3F4u;
    SET_GPR_U32(ctx, 31, 0x11C3FCu);
    ctx->pc = 0x11C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3F4u;
    // 0x11c3f8: 0x24a5ee48  addiu       $a1, $a1, -0x11B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x11C3F4u, 0x11C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3FCu;
label_11c3fc:
    // 0x11c3fc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x11c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11c400: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11c400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c404: 0xc09dd98  jal         func_277660
    ctx->pc = 0x11C404u;
    SET_GPR_U32(ctx, 31, 0x11C40Cu);
    ctx->pc = 0x11C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C404u;
    // 0x11c408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x11C404u, 0x11C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C40Cu;
label_11c40c:
    // 0x11c40c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C40Cu;
    {
        const bool branch_taken_0x11c40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C40Cu;
        // 0x11c410: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c40c) {
            ctx->pc = 0x11C428u;
            goto label_11c428;
        }
    }
    ctx->pc = 0x11C414u;
    // 0x11c414: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c418: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11C418u;
    SET_GPR_U32(ctx, 31, 0x11C420u);
    ctx->pc = 0x11C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C418u;
    // 0x11c41c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11C418u, 0x11C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C420u;
label_11c420:
    // 0x11c420: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x11C420u;
    {
        const bool branch_taken_0x11c420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C420u;
        // 0x11c424: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c420) {
            ctx->pc = 0x11C5DCu;
            goto label_11c5dc;
        }
    }
    ctx->pc = 0x11C428u;
label_11c428:
    // 0x11c428: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x11c428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11c42c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11c42cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c430: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x11C430u;
    SET_GPR_U32(ctx, 31, 0x11C438u);
    ctx->pc = 0x11C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C430u;
    // 0x11c434: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x11C430u, 0x11C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C438u;
label_11c438:
    // 0x11c438: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11c438u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c43c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11c43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c440: 0x3c150044  lui         $s5, 0x44
    ctx->pc = 0x11c440u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
    // 0x11c444: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x11c444u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x11c448: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x11c448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11c44c: 0x0  nop
    ctx->pc = 0x11c44cu;
    // NOP
label_11c450:
    // 0x11c450: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x11C450u;
    SET_GPR_U32(ctx, 31, 0x11C458u);
    ctx->pc = 0x11C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C450u;
    // 0x11c454: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x11C450u, 0x11C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C458u;
label_11c458:
    // 0x11c458: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C458u;
    {
        const bool branch_taken_0x11c458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C458u;
        // 0x11c45c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c458) {
            ctx->pc = 0x11C468u;
            goto label_11c468;
        }
    }
    ctx->pc = 0x11C460u;
    // 0x11c460: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11C460u;
    {
        const bool branch_taken_0x11c460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C460u;
        // 0x11c464: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c460) {
            ctx->pc = 0x11C4A0u;
            goto label_11c4a0;
        }
    }
    ctx->pc = 0x11C468u;
label_11c468:
    // 0x11c468: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11C468u;
    SET_GPR_U32(ctx, 31, 0x11C470u);
    ctx->pc = 0x11C46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C468u;
    // 0x11c46c: 0x26a5bcf8  addiu       $a1, $s5, -0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C468u, 0x11C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C470u;
label_11c470:
    // 0x11c470: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11c474: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C474u;
    {
        const bool branch_taken_0x11c474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C474u;
        // 0x11c478: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c474) {
            ctx->pc = 0x11C484u;
            goto label_11c484;
        }
    }
    ctx->pc = 0x11C47Cu;
    // 0x11c47c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11C47Cu;
    {
        const bool branch_taken_0x11c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C47Cu;
        // 0x11c480: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c47c) {
            ctx->pc = 0x11C4A0u;
            goto label_11c4a0;
        }
    }
    ctx->pc = 0x11C484u;
label_11c484:
    // 0x11c484: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c488: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11C488u;
    SET_GPR_U32(ctx, 31, 0x11C490u);
    ctx->pc = 0x11C48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C488u;
    // 0x11c48c: 0x2625bd00  addiu       $a1, $s1, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C488u, 0x11C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C490u;
label_11c490:
    // 0x11c490: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11c494: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C494u;
    {
        const bool branch_taken_0x11c494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C494u;
        // 0x11c498: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c494) {
            ctx->pc = 0x11C4A0u;
            goto label_11c4a0;
        }
    }
    ctx->pc = 0x11C49Cu;
    // 0x11c49c: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x11c49cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_11c4a0:
    // 0x11c4a0: 0x5600ffeb  bnel        $s0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x11C4A0u;
    {
        const bool branch_taken_0x11c4a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c4a0) {
            ctx->pc = 0x11C4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C4A0u;
            // 0x11c4a4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c450;
        }
    }
    ctx->pc = 0x11C4A8u;
    // 0x11c4a8: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x11C4A8u;
    {
        const bool branch_taken_0x11c4a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4A8u;
        // 0x11c4ac: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4a8) {
            ctx->pc = 0x11C4F4u;
            goto label_11c4f4;
        }
    }
    ctx->pc = 0x11C4B0u;
    // 0x11c4b0: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x11c4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11c4b4: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x11c4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11c4b8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x11C4B8u;
    SET_GPR_U32(ctx, 31, 0x11C4C0u);
    ctx->pc = 0x11C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4B8u;
    // 0x11c4bc: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x11C4B8u, 0x11C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4C0u;
label_11c4c0:
    // 0x11c4c0: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x11c4c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x11c4c4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x11c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x11c4c8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C4C8u;
    {
        const bool branch_taken_0x11c4c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4C8u;
        // 0x11c4cc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4c8) {
            ctx->pc = 0x11C4F0u;
            goto label_11c4f0;
        }
    }
    ctx->pc = 0x11C4D0u;
    // 0x11c4d0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11c4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c4d4: 0x0  nop
    ctx->pc = 0x11c4d4u;
    // NOP
label_11c4d8:
    // 0x11c4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4dc: 0xc04557a  jal         func_1155E8
    ctx->pc = 0x11C4DCu;
    SET_GPR_U32(ctx, 31, 0x11C4E4u);
    ctx->pc = 0x11C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4DCu;
    // 0x11c4e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1155E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E8u, 0x11C4DCu, 0x11C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4E4u;
label_11c4e4:
    // 0x11c4e4: 0x0  nop
    ctx->pc = 0x11c4e4u;
    // NOP
    // 0x11c4e8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11C4E8u;
    {
        const bool branch_taken_0x11c4e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x11C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4E8u;
        // 0x11c4ec: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4e8) {
            ctx->pc = 0x11C4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c4d8;
        }
    }
    ctx->pc = 0x11C4F0u;
label_11c4f0:
    // 0x11c4f0: 0xae750008  sw          $s5, 0x8($s3)
    ctx->pc = 0x11c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 21));
label_11c4f4:
    // 0x11c4f4: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C4F4u;
    {
        const bool branch_taken_0x11c4f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4F4u;
        // 0x11c4f8: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4f4) {
            ctx->pc = 0x11C53Cu;
            goto label_11c53c;
        }
    }
    ctx->pc = 0x11C4FCu;
    // 0x11c4fc: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x11c4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11c500: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x11c500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11c504: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x11C504u;
    SET_GPR_U32(ctx, 31, 0x11C50Cu);
    ctx->pc = 0x11C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C504u;
    // 0x11c508: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x11C504u, 0x11C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C50Cu;
label_11c50c:
    // 0x11c50c: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x11c50cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x11c510: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x11c510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x11c514: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C514u;
    {
        const bool branch_taken_0x11c514 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C514u;
        // 0x11c518: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c514) {
            ctx->pc = 0x11C538u;
            goto label_11c538;
        }
    }
    ctx->pc = 0x11C51Cu;
    // 0x11c51c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x11c51cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11c520:
    // 0x11c520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c524: 0xc0454e4  jal         func_115390
    ctx->pc = 0x11C524u;
    SET_GPR_U32(ctx, 31, 0x11C52Cu);
    ctx->pc = 0x11C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C524u;
    // 0x11c528: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115390u, 0x11C524u, 0x11C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C52Cu;
label_11c52c:
    // 0x11c52c: 0x0  nop
    ctx->pc = 0x11c52cu;
    // NOP
    // 0x11c530: 0x1634fffb  bne         $s1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11C530u;
    {
        const bool branch_taken_0x11c530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x11C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C530u;
        // 0x11c534: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c530) {
            ctx->pc = 0x11C520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c520;
        }
    }
    ctx->pc = 0x11C538u;
label_11c538:
    // 0x11c538: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x11c538u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
label_11c53c:
    // 0x11c53c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x11c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11c540: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11c540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c544: 0x3c120044  lui         $s2, 0x44
    ctx->pc = 0x11c544u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)68 << 16));
    // 0x11c548: 0xc09dd92  jal         func_277648
    ctx->pc = 0x11C548u;
    SET_GPR_U32(ctx, 31, 0x11C550u);
    ctx->pc = 0x11C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C548u;
    // 0x11c54c: 0x3c110044  lui         $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277648u, 0x11C548u, 0x11C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C550u;
label_11c550:
    // 0x11c550: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x11c550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11c554: 0x0  nop
    ctx->pc = 0x11c554u;
    // NOP
label_11c558:
    // 0x11c558: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x11C558u;
    SET_GPR_U32(ctx, 31, 0x11C560u);
    ctx->pc = 0x11C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C558u;
    // 0x11c55c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x11C558u, 0x11C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C560u;
label_11c560:
    // 0x11c560: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C560u;
    {
        const bool branch_taken_0x11c560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C560u;
        // 0x11c564: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c560) {
            ctx->pc = 0x11C570u;
            goto label_11c570;
        }
    }
    ctx->pc = 0x11C568u;
    // 0x11c568: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11C568u;
    {
        const bool branch_taken_0x11c568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C568u;
        // 0x11c56c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c568) {
            ctx->pc = 0x11C5B0u;
            goto label_11c5b0;
        }
    }
    ctx->pc = 0x11C570u;
label_11c570:
    // 0x11c570: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11C570u;
    SET_GPR_U32(ctx, 31, 0x11C578u);
    ctx->pc = 0x11C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C570u;
    // 0x11c574: 0x2645bcf8  addiu       $a1, $s2, -0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C570u, 0x11C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C578u;
label_11c578:
    // 0x11c578: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11c57c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C57Cu;
    {
        const bool branch_taken_0x11c57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C57Cu;
        // 0x11c580: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c57c) {
            ctx->pc = 0x11C594u;
            goto label_11c594;
        }
    }
    ctx->pc = 0x11C584u;
    // 0x11c584: 0xc047180  jal         func_11C600
    ctx->pc = 0x11C584u;
    SET_GPR_U32(ctx, 31, 0x11C58Cu);
    ctx->pc = 0x11C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C584u;
    // 0x11c588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C600u, 0x11C584u, 0x11C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C58Cu;
label_11c58c:
    // 0x11c58c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11C58Cu;
    {
        const bool branch_taken_0x11c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c58c) {
            ctx->pc = 0x11C5B0u;
            goto label_11c5b0;
        }
    }
    ctx->pc = 0x11C594u;
label_11c594:
    // 0x11c594: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11C594u;
    SET_GPR_U32(ctx, 31, 0x11C59Cu);
    ctx->pc = 0x11C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C594u;
    // 0x11c598: 0x2625bd00  addiu       $a1, $s1, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C594u, 0x11C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C59Cu;
label_11c59c:
    // 0x11c59c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11c5a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C5A0u;
    {
        const bool branch_taken_0x11c5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c5a0) {
            ctx->pc = 0x11C5B0u;
            goto label_11c5b0;
        }
    }
    ctx->pc = 0x11C5A8u;
    // 0x11c5a8: 0xc04722c  jal         func_11C8B0
    ctx->pc = 0x11C5A8u;
    SET_GPR_U32(ctx, 31, 0x11C5B0u);
    ctx->pc = 0x11C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5A8u;
    // 0x11c5ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C8B0u, 0x11C5A8u, 0x11C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5B0u;
label_11c5b0:
    // 0x11c5b0: 0x5600ffe9  bnel        $s0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11C5B0u;
    {
        const bool branch_taken_0x11c5b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c5b0) {
            ctx->pc = 0x11C5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C5B0u;
            // 0x11c5b4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c558;
        }
    }
    ctx->pc = 0x11C5B8u;
    // 0x11c5b8: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x11C5B8u;
    SET_GPR_U32(ctx, 31, 0x11C5C0u);
    ctx->pc = 0x11C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5B8u;
    // 0x11c5bc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x11C5B8u, 0x11C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5C0u;
label_11c5c0:
    // 0x11c5c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5c4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11C5C4u;
    SET_GPR_U32(ctx, 31, 0x11C5CCu);
    ctx->pc = 0x11C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5C4u;
    // 0x11c5c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11C5C4u, 0x11C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5CCu;
label_11c5cc:
    // 0x11c5cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5d0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11C5D0u;
    SET_GPR_U32(ctx, 31, 0x11C5D8u);
    ctx->pc = 0x11C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5D0u;
    // 0x11c5d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11C5D0u, 0x11C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5D8u;
label_11c5d8:
    // 0x11c5d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11c5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11c5dc:
    // 0x11c5dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x11c5dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11c5e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11c5e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c5e4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x11c5e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11c5e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11c5e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c5ec: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x11c5ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11c5f0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x11c5f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c5f4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x11c5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11c5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11C5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5F8u;
        // 0x11c5fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C600u;
}
