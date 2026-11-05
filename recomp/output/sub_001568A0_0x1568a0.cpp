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

// Function: sub_001568A0
// Address: 0x1568a0 - 0x156990
void sub_001568A0_0x1568a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001568A0_0x1568a0");
#endif

    switch (ctx->pc) {
        case 0x1568c4u: goto label_1568c4;
        case 0x15693cu: goto label_15693c;
        case 0x156970u: goto label_156970;
        case 0x156980u: goto label_156980;
        default: break;
    }

    ctx->pc = 0x1568a0u;

    // 0x1568a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1568a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1568a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1568a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1568a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1568a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1568ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1568acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1568b0: 0x8e020544  lw          $v0, 0x544($s0)
    ctx->pc = 0x1568b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
    // 0x1568b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1568B4u;
    {
        const bool branch_taken_0x1568b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1568b4) {
            ctx->pc = 0x1568B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1568B4u;
            // 0x1568b8: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1568CCu;
            goto label_1568cc;
        }
    }
    ctx->pc = 0x1568BCu;
    // 0x1568bc: 0xc055a64  jal         func_156990
    ctx->pc = 0x1568BCu;
    SET_GPR_U32(ctx, 31, 0x1568C4u);
    ctx->pc = 0x156990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156990u, 0x1568BCu, 0x1568C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1568C4u;
label_1568c4:
    // 0x1568c4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1568C4u;
    {
        const bool branch_taken_0x1568c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568C4u;
        // 0x1568c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568c4) {
            ctx->pc = 0x156984u;
            goto label_156984;
        }
    }
    ctx->pc = 0x1568CCu;
label_1568cc:
    // 0x1568cc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1568ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1568d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1568d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1568d4: 0x24459a08  addiu       $a1, $v0, -0x65F8
    ctx->pc = 0x1568d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1568d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1568d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1568dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1568dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1568e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1568e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1568e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1568e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1568e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1568e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1568ec: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x1568ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1568f0: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1568F0u;
    {
        const bool branch_taken_0x1568f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1568f0) {
            ctx->pc = 0x1568F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1568F0u;
            // 0x1568f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156984u;
            goto label_156984;
        }
    }
    ctx->pc = 0x1568F8u;
    // 0x1568f8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1568f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1568fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1568fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156900: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x156900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x156904: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x156904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x156908: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156908u;
    {
        const bool branch_taken_0x156908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156908) {
            ctx->pc = 0x15690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156908u;
            // 0x15690c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156918u;
            goto label_156918;
        }
    }
    ctx->pc = 0x156910u;
    // 0x156910: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156910u;
    {
        const bool branch_taken_0x156910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156910u;
        // 0x156914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156910) {
            ctx->pc = 0x156920u;
            goto label_156920;
        }
    }
    ctx->pc = 0x156918u;
label_156918:
    // 0x156918: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x156918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15691c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x15691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_156920:
    // 0x156920: 0x50a00018  beql        $a1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x156920u;
    {
        const bool branch_taken_0x156920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x156920) {
            ctx->pc = 0x156924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156920u;
            // 0x156924: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156984u;
            goto label_156984;
        }
    }
    ctx->pc = 0x156928u;
    // 0x156928: 0x8e060544  lw          $a2, 0x544($s0)
    ctx->pc = 0x156928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
    // 0x15692c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x15692Cu;
    {
        const bool branch_taken_0x15692c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15692c) {
            ctx->pc = 0x156968u;
            goto label_156968;
        }
    }
    ctx->pc = 0x156934u;
    // 0x156934: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x156934u;
    SET_GPR_U32(ctx, 31, 0x15693Cu);
    ctx->pc = 0x156938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156934u;
    // 0x156938: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x156934u, 0x15693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15693Cu;
label_15693c:
    // 0x15693c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156940: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x156940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156944: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x156944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x156948: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x156948u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15694c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15694cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x156950: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x156950u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x156954: 0xc6000548  lwc1        $f0, 0x548($s0)
    ctx->pc = 0x156954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x156958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15695c: 0x0  nop
    ctx->pc = 0x15695cu;
    // NOP
    // 0x156960: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x156960u;
    {
        const bool branch_taken_0x156960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156960) {
            ctx->pc = 0x156978u;
            goto label_156978;
        }
    }
    ctx->pc = 0x156968u;
label_156968:
    // 0x156968: 0xc055a64  jal         func_156990
    ctx->pc = 0x156968u;
    SET_GPR_U32(ctx, 31, 0x156970u);
    ctx->pc = 0x15696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156968u;
    // 0x15696c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156990u, 0x156968u, 0x156970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156970u;
label_156970:
    // 0x156970: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156970u;
    {
        const bool branch_taken_0x156970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156970u;
        // 0x156974: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156970) {
            ctx->pc = 0x156984u;
            goto label_156984;
        }
    }
    ctx->pc = 0x156978u;
label_156978:
    // 0x156978: 0xc055aa0  jal         func_156A80
    ctx->pc = 0x156978u;
    SET_GPR_U32(ctx, 31, 0x156980u);
    ctx->pc = 0x15697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156978u;
    // 0x15697c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A80u, 0x156978u, 0x156980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156980u;
label_156980:
    // 0x156980: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x156980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_156984:
    // 0x156984: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x156984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156988: 0x3e00008  jr          $ra
    ctx->pc = 0x156988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156988u;
        // 0x15698c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156990u;
}
