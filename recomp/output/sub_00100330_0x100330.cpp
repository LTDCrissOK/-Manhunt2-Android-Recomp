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

// Function: sub_00100330
// Address: 0x100330 - 0x100440
void sub_00100330_0x100330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100330_0x100330");
#endif

    switch (ctx->pc) {
        case 0x100378u: goto label_100378;
        case 0x100380u: goto label_100380;
        case 0x1003c0u: goto label_1003c0;
        case 0x1003ccu: goto label_1003cc;
        case 0x100404u: goto label_100404;
        default: break;
    }

    ctx->pc = 0x100330u;

    // 0x100330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100334: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x100334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x100338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10033c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x100340: 0x24702d80  addiu       $s0, $v1, 0x2D80
    ctx->pc = 0x100340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11648));
    // 0x100344: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x100344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x100348: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x100348u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x10034c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100350: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x100350u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x100358: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x100358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10035c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x100360: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x100360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x100364: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x100364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482D84u));
    // 0x100368: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x100368u;
    {
        const bool branch_taken_0x100368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100368u;
        // 0x10036c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100368) {
            ctx->pc = 0x100390u;
            goto label_100390;
        }
    }
    ctx->pc = 0x100370u;
    // 0x100370: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x100370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x100374: 0x0  nop
    ctx->pc = 0x100374u;
    // NOP
label_100378:
    // 0x100378: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x100378u;
    SET_GPR_U32(ctx, 31, 0x100380u);
    ctx->pc = 0x10037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100378u;
    // 0x10037c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x100378u, 0x100380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100380u;
label_100380:
    // 0x100380: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x100380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x100384: 0x0  nop
    ctx->pc = 0x100384u;
    // NOP
    // 0x100388: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x100388u;
    {
        const bool branch_taken_0x100388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100388) {
            ctx->pc = 0x10038Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100388u;
            // 0x10038c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100378;
        }
    }
    ctx->pc = 0x100390u;
label_100390:
    // 0x100390: 0x8e620700  lw          $v0, 0x700($s3)
    ctx->pc = 0x100390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1792)));
    // 0x100394: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x100394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100398: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x100398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x10039c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10039cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1003a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1003a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1003a4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1003A4u;
    {
        const bool branch_taken_0x1003a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003A4u;
        // 0x1003a8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003a4) {
            ctx->pc = 0x100418u;
            goto label_100418;
        }
    }
    ctx->pc = 0x1003ACu;
    // 0x1003ac: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x1003acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x1003b0: 0x3c150044  lui         $s5, 0x44
    ctx->pc = 0x1003b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
    // 0x1003b4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1003b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1003b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1003b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003bc: 0x0  nop
    ctx->pc = 0x1003bcu;
    // NOP
label_1003c0:
    // 0x1003c0: 0x8e440708  lw          $a0, 0x708($s2)
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1800)));
    // 0x1003c4: 0xc041944  jal         func_106510
    ctx->pc = 0x1003C4u;
    SET_GPR_U32(ctx, 31, 0x1003CCu);
    ctx->pc = 0x1003C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003C4u;
    // 0x1003c8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106510u, 0x1003C4u, 0x1003CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003CCu;
label_1003cc:
    // 0x1003cc: 0x8e420708  lw          $v0, 0x708($s2)
    ctx->pc = 0x1003ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1800)));
    // 0x1003d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1003d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1003d4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1003d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1003d8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1003D8u;
    {
        const bool branch_taken_0x1003d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1003DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003D8u;
        // 0x1003dc: 0xc6a1a568  lwc1        $f1, -0x5A98($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003d8) {
            ctx->pc = 0x1003E4u;
            goto label_1003e4;
        }
    }
    ctx->pc = 0x1003E0u;
    // 0x1003e0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1003e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1003e4:
    // 0x1003e4: 0xc68089d0  lwc1        $f0, -0x7630($s4)
    ctx->pc = 0x1003e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1003e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1003e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1003ec: 0x0  nop
    ctx->pc = 0x1003ecu;
    // NOP
    // 0x1003f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1003F0u;
    {
        const bool branch_taken_0x1003f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1003F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003F0u;
        // 0x1003f4: 0x26c42d80  addiu       $a0, $s6, 0x2D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 11648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003f0) {
            ctx->pc = 0x100404u;
            goto label_100404;
        }
    }
    ctx->pc = 0x1003F8u;
    // 0x1003f8: 0x8e450708  lw          $a1, 0x708($s2)
    ctx->pc = 0x1003f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1800)));
    // 0x1003fc: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x1003FCu;
    SET_GPR_U32(ctx, 31, 0x100404u);
    ctx->pc = 0x100400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003FCu;
    // 0x100400: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x1003FCu, 0x100404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100404u;
label_100404:
    // 0x100404: 0x8e620700  lw          $v0, 0x700($s3)
    ctx->pc = 0x100404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1792)));
    // 0x100408: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10040c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10040cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100410: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x100410u;
    {
        const bool branch_taken_0x100410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100410u;
        // 0x100414: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100410) {
            ctx->pc = 0x1003C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1003c0;
        }
    }
    ctx->pc = 0x100418u;
label_100418:
    // 0x100418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10041c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10041cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x100420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100424: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x100424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x100428: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x100428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10042c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10042cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x100430: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x100430u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100434: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x100434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x100438: 0x3e00008  jr          $ra
    ctx->pc = 0x100438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100438u;
        // 0x10043c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100440u;
}
