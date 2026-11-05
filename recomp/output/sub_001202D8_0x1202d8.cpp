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

// Function: sub_001202D8
// Address: 0x1202d8 - 0x1203d0
void sub_001202D8_0x1202d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001202D8_0x1202d8");
#endif

    switch (ctx->pc) {
        case 0x12030cu: goto label_12030c;
        case 0x120338u: goto label_120338;
        case 0x120360u: goto label_120360;
        default: break;
    }

    ctx->pc = 0x1202d8u;

    // 0x1202d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1202d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1202dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1202dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1202e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1202e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1202e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1202e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1202e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1202e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1202ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1202ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1202f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1202f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1202f4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1202f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1202f8: 0x92020110  lbu         $v0, 0x110($s0)
    ctx->pc = 0x1202f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1202fc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1202FCu;
    {
        const bool branch_taken_0x1202fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202FCu;
        // 0x120300: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202fc) {
            ctx->pc = 0x1203A8u;
            goto label_1203a8;
        }
    }
    ctx->pc = 0x120304u;
    // 0x120304: 0xc048090  jal         func_120240
    ctx->pc = 0x120304u;
    SET_GPR_U32(ctx, 31, 0x12030Cu);
    ctx->pc = 0x120308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120304u;
    // 0x120308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x120304u, 0x12030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12030Cu;
label_12030c:
    // 0x12030c: 0x92030110  lbu         $v1, 0x110($s0)
    ctx->pc = 0x12030cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x120310: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x120310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120314: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x120314u;
    {
        const bool branch_taken_0x120314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x120318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120314u;
        // 0x120318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120314) {
            ctx->pc = 0x1203ACu;
            goto label_1203ac;
        }
    }
    ctx->pc = 0x12031Cu;
    // 0x12031c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x12031Cu;
    {
        const bool branch_taken_0x12031c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12031Cu;
        // 0x120320: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12031c) {
            ctx->pc = 0x1203A8u;
            goto label_1203a8;
        }
    }
    ctx->pc = 0x120324u;
    // 0x120324: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x120324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x120328: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12032c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12032cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120330: 0x113140  sll         $a2, $s1, 5
    ctx->pc = 0x120330u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x120334: 0x0  nop
    ctx->pc = 0x120334u;
    // NOP
label_120338:
    // 0x120338: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x120338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x12033c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x12033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x120340: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x120340u;
    {
        const bool branch_taken_0x120340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120340u;
        // 0x120344: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120340) {
            ctx->pc = 0x120388u;
            goto label_120388;
        }
    }
    ctx->pc = 0x120348u;
    // 0x120348: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x120348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12034c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x12034cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120350: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x120350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x120354: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120358: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x120358u;
    SET_GPR_U32(ctx, 31, 0x120360u);
    ctx->pc = 0x12035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120358u;
    // 0x12035c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x120358u, 0x120360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120360u;
label_120360:
    // 0x120360: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x120360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x120364: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x120364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x120368: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x120368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12036c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x12036cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x120370: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x120370u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x120374: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x120374u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x120378: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x120378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12037c: 0x0  nop
    ctx->pc = 0x12037cu;
    // NOP
    // 0x120380: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x120380u;
    {
        const bool branch_taken_0x120380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x120384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120380u;
        // 0x120384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120380) {
            ctx->pc = 0x1203ACu;
            goto label_1203ac;
        }
    }
    ctx->pc = 0x120388u;
label_120388:
    // 0x120388: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x120388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12038c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x12038cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120390: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x120390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x120394: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x120394u;
    {
        const bool branch_taken_0x120394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120394u;
        // 0x120398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120394) {
            ctx->pc = 0x1203ACu;
            goto label_1203ac;
        }
    }
    ctx->pc = 0x12039Cu;
    // 0x12039c: 0x92020110  lbu         $v0, 0x110($s0)
    ctx->pc = 0x12039cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1203a0: 0x1642ffe5  bne         $s2, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1203A0u;
    {
        const bool branch_taken_0x1203a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1203A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203A0u;
        // 0x1203a4: 0x113140  sll         $a2, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203a0) {
            ctx->pc = 0x120338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120338;
        }
    }
    ctx->pc = 0x1203A8u;
label_1203a8:
    // 0x1203a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1203a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1203ac:
    // 0x1203ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1203acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1203b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1203b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1203b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1203b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1203b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1203b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1203bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1203bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1203c0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1203c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1203c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1203C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1203C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203C4u;
        // 0x1203c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1203C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1203CCu;
    // 0x1203cc: 0x0  nop
    ctx->pc = 0x1203ccu;
    // NOP
    ctx->pc = 0x1203d0u;
}
