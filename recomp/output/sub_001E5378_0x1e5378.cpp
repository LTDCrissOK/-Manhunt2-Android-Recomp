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

// Function: sub_001E5378
// Address: 0x1e5378 - 0x1e5470
void sub_001E5378_0x1e5378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5378_0x1e5378");
#endif

    switch (ctx->pc) {
        case 0x1e53d0u: goto label_1e53d0;
        case 0x1e53dcu: goto label_1e53dc;
        case 0x1e5400u: goto label_1e5400;
        default: break;
    }

    ctx->pc = 0x1e5378u;

    // 0x1e5378: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e5378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e537c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e537cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e5380: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e5380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e5384: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e5384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e5388: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e538c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e5390: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e5390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5394: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e5394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1e5398: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e5398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e539c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e53a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e53a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53a4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e53a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e53ac: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1e53acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e53b0: 0xc440d910  lwc1        $f0, -0x26F0($v0)
    ctx->pc = 0x1e53b0u;
    { uint32_t bits = FAST_READ32(0x45D910u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e53b4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e53b8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E53B8u;
    {
        const bool branch_taken_0x1e53b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53B8u;
        // 0x1e53bc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53b8) {
            ctx->pc = 0x1E5444u;
            goto label_1e5444;
        }
    }
    ctx->pc = 0x1E53C0u;
    // 0x1e53c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e53c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e53c4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1e53c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1e53c8: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1e53c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1e53cc: 0x0  nop
    ctx->pc = 0x1e53ccu;
    // NOP
label_1e53d0:
    // 0x1e53d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e53d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53d4: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E53D4u;
    SET_GPR_U32(ctx, 31, 0x1E53DCu);
    ctx->pc = 0x1E53D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53D4u;
    // 0x1e53d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1E53D4u, 0x1E53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53DCu;
label_1e53dc:
    // 0x1e53dc: 0x8e0391d8  lw          $v1, -0x6E28($s0)
    ctx->pc = 0x1e53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939096)));
    // 0x1e53e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e53e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53e4: 0x8e8291d4  lw          $v0, -0x6E2C($s4)
    ctx->pc = 0x1e53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939092)));
    // 0x1e53e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e53e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e53f0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e53f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e53f8: 0xc077912  jal         func_1DE448
    ctx->pc = 0x1E53F8u;
    SET_GPR_U32(ctx, 31, 0x1E5400u);
    ctx->pc = 0x1E53FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53F8u;
    // 0x1e53fc: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x1E53F8u, 0x1E5400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5400u;
label_1e5400:
    // 0x1e5400: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E5400u;
    {
        const bool branch_taken_0x1e5400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5400u;
        // 0x1e5404: 0x8e0291d8  lw          $v0, -0x6E28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5400) {
            ctx->pc = 0x1E5430u;
            goto label_1e5430;
        }
    }
    ctx->pc = 0x1E5408u;
    // 0x1e5408: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e5408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e540c: 0x8e8491d4  lw          $a0, -0x6E2C($s4)
    ctx->pc = 0x1e540cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939092)));
    // 0x1e5410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e5410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5414: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e5414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5418: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e541c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5420: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e5420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e5424: 0x8e0291d8  lw          $v0, -0x6E28($s0)
    ctx->pc = 0x1e5424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939096)));
    // 0x1e5428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e542c: 0xae0291d8  sw          $v0, -0x6E28($s0)
    ctx->pc = 0x1e542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939096), GPR_U32(ctx, 2));
label_1e5430:
    // 0x1e5430: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e5430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e5434: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e5438: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e5438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e543c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1E543Cu;
    {
        const bool branch_taken_0x1e543c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E543Cu;
        // 0x1e5440: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e543c) {
            ctx->pc = 0x1E53D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e53d0;
        }
    }
    ctx->pc = 0x1E5444u;
label_1e5444:
    // 0x1e5444: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e5444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5448: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e5448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e544c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e544cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5450: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e5450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5454: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e5454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5458: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e5458u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e545c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e545cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e5460: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e5460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5464: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1e5464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e5468: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5468u;
        // 0x1e546c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5470u;
}
