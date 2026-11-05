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

// Function: sub_00390510
// Address: 0x390510 - 0x390658
void sub_00390510_0x390510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390510_0x390510");
#endif

    switch (ctx->pc) {
        case 0x390534u: goto label_390534;
        case 0x39054cu: goto label_39054c;
        case 0x390584u: goto label_390584;
        case 0x3905b0u: goto label_3905b0;
        case 0x3905dcu: goto label_3905dc;
        case 0x390600u: goto label_390600;
        case 0x390610u: goto label_390610;
        case 0x39062cu: goto label_39062c;
        case 0x39063cu: goto label_39063c;
        default: break;
    }

    ctx->pc = 0x390510u;

    // 0x390510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x390510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x390514: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x390514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x390518: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x390518u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x39051c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x39051cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x390520: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x390520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x390524: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x390524u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x390528: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x390528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x39052c: 0xc0e462c  jal         func_3918B0
    ctx->pc = 0x39052Cu;
    SET_GPR_U32(ctx, 31, 0x390534u);
    ctx->pc = 0x390530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39052Cu;
    // 0x390530: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3918B0u, 0x39052Cu, 0x390534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390534u;
label_390534:
    // 0x390534: 0x8e30a478  lw          $s0, -0x5B88($s1)
    ctx->pc = 0x390534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x390538: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x390538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39053c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39053Cu;
    {
        const bool branch_taken_0x39053c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x390540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39053Cu;
        // 0x390540: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39053c) {
            ctx->pc = 0x390568u;
            goto label_390568;
        }
    }
    ctx->pc = 0x390544u;
    // 0x390544: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x390544u;
    SET_GPR_U32(ctx, 31, 0x39054Cu);
    ctx->pc = 0x390548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390544u;
    // 0x390548: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x390544u, 0x39054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39054Cu;
label_39054c:
    // 0x39054c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x39054Cu;
    {
        const bool branch_taken_0x39054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39054Cu;
        // 0x390550: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39054c) {
            ctx->pc = 0x39063Cu;
            goto label_39063c;
        }
    }
    ctx->pc = 0x390554u;
    // 0x390554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x390554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x390558: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x390558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39055c: 0x0  nop
    ctx->pc = 0x39055cu;
    // NOP
    // 0x390560: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x390560u;
    {
        const bool branch_taken_0x390560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x390564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390560u;
        // 0x390564: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390560) {
            ctx->pc = 0x390570u;
            goto label_390570;
        }
    }
    ctx->pc = 0x390568u;
label_390568:
    // 0x390568: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x390568u;
    {
        const bool branch_taken_0x390568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390568u;
        // 0x39056c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390568) {
            ctx->pc = 0x39063Cu;
            goto label_39063c;
        }
    }
    ctx->pc = 0x390570u;
label_390570:
    // 0x390570: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x390570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x390574: 0x24429920  addiu       $v0, $v0, -0x66E0
    ctx->pc = 0x390574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940960));
    // 0x390578: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x390578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x39057c: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x39057Cu;
    SET_GPR_U32(ctx, 31, 0x390584u);
    ctx->pc = 0x390580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39057Cu;
    // 0x390580: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x39057Cu, 0x390584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390584u;
label_390584:
    // 0x390584: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x390584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x390588: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390588u;
    {
        const bool branch_taken_0x390588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390588u;
        // 0x39058c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390588) {
            ctx->pc = 0x3905A0u;
            goto label_3905a0;
        }
    }
    ctx->pc = 0x390590u;
    // 0x390590: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390594: 0xdc229928  ld          $v0, -0x66D8($at)
    ctx->pc = 0x390594u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x479928u));
    // 0x390598: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x390598u;
    {
        const bool branch_taken_0x390598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390598u;
        // 0x39059c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390598) {
            ctx->pc = 0x3905B4u;
            goto label_3905b4;
        }
    }
    ctx->pc = 0x3905A0u;
label_3905a0:
    // 0x3905a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3905a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3905a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3905a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3905a8: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3905A8u;
    SET_GPR_U32(ctx, 31, 0x3905B0u);
    ctx->pc = 0x3905ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3905A8u;
    // 0x3905ac: 0xdc45a470  ld          $a1, -0x5B90($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294943856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3905A8u, 0x3905B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3905B0u;
label_3905b0:
    // 0x3905b0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3905b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_3905b4:
    // 0x3905b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3905b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3905b8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3905b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3905bc: 0x0  nop
    ctx->pc = 0x3905bcu;
    // NOP
    // 0x3905c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3905C0u;
    {
        const bool branch_taken_0x3905c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3905C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905C0u;
        // 0x3905c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3905c0) {
            ctx->pc = 0x3905E4u;
            goto label_3905e4;
        }
    }
    ctx->pc = 0x3905C8u;
    // 0x3905c8: 0x8e23a478  lw          $v1, -0x5B88($s1)
    ctx->pc = 0x3905c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x3905cc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3905CCu;
    {
        const bool branch_taken_0x3905cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3905D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905CCu;
        // 0x3905d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3905cc) {
            ctx->pc = 0x3905F8u;
            goto label_3905f8;
        }
    }
    ctx->pc = 0x3905D4u;
    // 0x3905d4: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x3905D4u;
    SET_GPR_U32(ctx, 31, 0x3905DCu);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x3905D4u, 0x3905DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3905DCu;
label_3905dc:
    // 0x3905dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3905DCu;
    {
        const bool branch_taken_0x3905dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3905E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905DCu;
        // 0x3905e0: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3905dc) {
            ctx->pc = 0x390614u;
            goto label_390614;
        }
    }
    ctx->pc = 0x3905E4u;
label_3905e4:
    // 0x3905e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3905e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3905e8: 0x8e22a478  lw          $v0, -0x5B88($s1)
    ctx->pc = 0x3905e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x3905ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3905ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3905f0: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3905F0u;
    {
        const bool branch_taken_0x3905f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905F0u;
        // 0x3905f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3905f0) {
            ctx->pc = 0x390608u;
            goto label_390608;
        }
    }
    ctx->pc = 0x3905F8u;
label_3905f8:
    // 0x3905f8: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x3905F8u;
    SET_GPR_U32(ctx, 31, 0x390600u);
    ctx->pc = 0x3905FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3905F8u;
    // 0x3905fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x3905F8u, 0x390600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390600u;
label_390600:
    // 0x390600: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x390600u;
    {
        const bool branch_taken_0x390600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390600u;
        // 0x390604: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390600) {
            ctx->pc = 0x39061Cu;
            goto label_39061c;
        }
    }
    ctx->pc = 0x390608u;
label_390608:
    // 0x390608: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390608u;
    SET_GPR_U32(ctx, 31, 0x390610u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390608u, 0x390610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390610u;
label_390610:
    // 0x390610: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x390610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_390614:
    // 0x390614: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x390618: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x390618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39061c:
    // 0x39061c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39061Cu;
    {
        const bool branch_taken_0x39061c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39061c) {
            ctx->pc = 0x390634u;
            goto label_390634;
        }
    }
    ctx->pc = 0x390624u;
    // 0x390624: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390624u;
    SET_GPR_U32(ctx, 31, 0x39062Cu);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390624u, 0x39062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39062Cu;
label_39062c:
    // 0x39062c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x39062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_390634:
    // 0x390634: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x390634u;
    SET_GPR_U32(ctx, 31, 0x39063Cu);
    ctx->pc = 0x390638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390634u;
    // 0x390638: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x390634u, 0x39063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39063Cu;
label_39063c:
    // 0x39063c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x390640: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x390640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390644: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x390644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390648: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x390648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x39064c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x39064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x390650: 0x3e00008  jr          $ra
    ctx->pc = 0x390650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390650u;
        // 0x390654: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390658u;
}
