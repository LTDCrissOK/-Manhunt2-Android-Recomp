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

// Function: sub_003903D0
// Address: 0x3903d0 - 0x390510
void sub_003903D0_0x3903d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003903D0_0x3903d0");
#endif

    switch (ctx->pc) {
        case 0x3903fcu: goto label_3903fc;
        case 0x390414u: goto label_390414;
        case 0x390424u: goto label_390424;
        case 0x39045cu: goto label_39045c;
        case 0x390468u: goto label_390468;
        case 0x390478u: goto label_390478;
        case 0x3904a4u: goto label_3904a4;
        case 0x3904b4u: goto label_3904b4;
        case 0x3904d0u: goto label_3904d0;
        case 0x3904e0u: goto label_3904e0;
        default: break;
    }

    ctx->pc = 0x3903d0u;

    // 0x3903d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3903d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3903d4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3903d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3903d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3903d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3903dc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3903dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3903e0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x3903e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x3903e4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3903e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x3903e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3903e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3903ec: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3903ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3903f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3903f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3903f4: 0xc0e4598  jal         func_391660
    ctx->pc = 0x3903F4u;
    SET_GPR_U32(ctx, 31, 0x3903FCu);
    ctx->pc = 0x3903F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3903F4u;
    // 0x3903f8: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391660u, 0x3903F4u, 0x3903FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3903FCu;
label_3903fc:
    // 0x3903fc: 0x8e30a478  lw          $s0, -0x5B88($s1)
    ctx->pc = 0x3903fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x390400: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x390400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x390404: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x390404u;
    {
        const bool branch_taken_0x390404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x390408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390404u;
        // 0x390408: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390404) {
            ctx->pc = 0x3904E8u;
            goto label_3904e8;
        }
    }
    ctx->pc = 0x39040Cu;
    // 0x39040c: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x39040Cu;
    SET_GPR_U32(ctx, 31, 0x390414u);
    ctx->pc = 0x390410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39040Cu;
    // 0x390410: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x39040Cu, 0x390414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390414u;
label_390414:
    // 0x390414: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x390414u;
    {
        const bool branch_taken_0x390414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390414u;
        // 0x390418: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390414) {
            ctx->pc = 0x3904ECu;
            goto label_3904ec;
        }
    }
    ctx->pc = 0x39041Cu;
    // 0x39041c: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x39041Cu;
    SET_GPR_U32(ctx, 31, 0x390424u);
    ctx->pc = 0x390420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39041Cu;
    // 0x390420: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x39041Cu, 0x390424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390424u;
label_390424:
    // 0x390424: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x390424u;
    {
        const bool branch_taken_0x390424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390424u;
        // 0x390428: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390424) {
            ctx->pc = 0x3904ECu;
            goto label_3904ec;
        }
    }
    ctx->pc = 0x39042Cu;
    // 0x39042c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39042cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x390430: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x390430u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x390434: 0x0  nop
    ctx->pc = 0x390434u;
    // NOP
    // 0x390438: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x390438u;
    {
        const bool branch_taken_0x390438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390438u;
        // 0x39043c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390438) {
            ctx->pc = 0x3904E8u;
            goto label_3904e8;
        }
    }
    ctx->pc = 0x390440u;
    // 0x390440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390444: 0x24429910  addiu       $v0, $v0, -0x66F0
    ctx->pc = 0x390444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940944));
    // 0x390448: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x390448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39044c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x39044cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x390450: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x390450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x390454: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390454u;
    SET_GPR_U32(ctx, 31, 0x39045Cu);
    ctx->pc = 0x390458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390454u;
    // 0x390458: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390454u, 0x39045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39045Cu;
label_39045c:
    // 0x39045c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39045cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x390460: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390460u;
    SET_GPR_U32(ctx, 31, 0x390468u);
    ctx->pc = 0x390464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390460u;
    // 0x390464: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390460u, 0x390468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390468u;
label_390468:
    // 0x390468: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390468u;
    {
        const bool branch_taken_0x390468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390468u;
        // 0x39046c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390468) {
            ctx->pc = 0x390480u;
            goto label_390480;
        }
    }
    ctx->pc = 0x390470u;
    // 0x390470: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390470u;
    SET_GPR_U32(ctx, 31, 0x390478u);
    ctx->pc = 0x390474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390470u;
    // 0x390474: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390470u, 0x390478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390478u;
label_390478:
    // 0x390478: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390478u;
    {
        const bool branch_taken_0x390478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390478u;
        // 0x39047c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390478) {
            ctx->pc = 0x39048Cu;
            goto label_39048c;
        }
    }
    ctx->pc = 0x390480u;
label_390480:
    // 0x390480: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x390480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x390484: 0xdc439918  ld          $v1, -0x66E8($v0)
    ctx->pc = 0x390484u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x479918u));
    // 0x390488: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x390488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_39048c:
    // 0x39048c: 0x8e23a478  lw          $v1, -0x5B88($s1)
    ctx->pc = 0x39048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x390490: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x390490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390494: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390494u;
    {
        const bool branch_taken_0x390494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x390494) {
            ctx->pc = 0x3904ACu;
            goto label_3904ac;
        }
    }
    ctx->pc = 0x39049Cu;
    // 0x39049c: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x39049Cu;
    SET_GPR_U32(ctx, 31, 0x3904A4u);
    ctx->pc = 0x3904A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39049Cu;
    // 0x3904a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x39049Cu, 0x3904A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3904A4u;
label_3904a4:
    // 0x3904a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3904A4u;
    {
        const bool branch_taken_0x3904a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3904A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904A4u;
        // 0x3904a8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904a4) {
            ctx->pc = 0x3904C0u;
            goto label_3904c0;
        }
    }
    ctx->pc = 0x3904ACu;
label_3904ac:
    // 0x3904ac: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x3904ACu;
    SET_GPR_U32(ctx, 31, 0x3904B4u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x3904ACu, 0x3904B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3904B4u;
label_3904b4:
    // 0x3904b4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3904b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3904b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3904b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3904bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3904c0:
    // 0x3904c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3904C0u;
    {
        const bool branch_taken_0x3904c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3904c0) {
            ctx->pc = 0x3904D8u;
            goto label_3904d8;
        }
    }
    ctx->pc = 0x3904C8u;
    // 0x3904c8: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x3904C8u;
    SET_GPR_U32(ctx, 31, 0x3904D0u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x3904C8u, 0x3904D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3904D0u;
label_3904d0:
    // 0x3904d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3904d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3904d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3904d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3904d8:
    // 0x3904d8: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x3904D8u;
    SET_GPR_U32(ctx, 31, 0x3904E0u);
    ctx->pc = 0x3904DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3904D8u;
    // 0x3904dc: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x3904D8u, 0x3904E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3904E0u;
label_3904e0:
    // 0x3904e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3904E0u;
    {
        const bool branch_taken_0x3904e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3904E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904E0u;
        // 0x3904e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904e0) {
            ctx->pc = 0x3904F0u;
            goto label_3904f0;
        }
    }
    ctx->pc = 0x3904E8u;
label_3904e8:
    // 0x3904e8: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x3904e8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_3904ec:
    // 0x3904ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3904ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3904f0:
    // 0x3904f0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3904f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3904f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3904f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3904f8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x3904f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3904fc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3904fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x390500: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x390500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x390504: 0x3e00008  jr          $ra
    ctx->pc = 0x390504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390504u;
        // 0x390508: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39050Cu;
    // 0x39050c: 0x0  nop
    ctx->pc = 0x39050cu;
    // NOP
    ctx->pc = 0x390510u;
}
