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

// Function: sub_001DE448
// Address: 0x1de448 - 0x1de500
void sub_001DE448_0x1de448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE448_0x1de448");
#endif

    switch (ctx->pc) {
        case 0x1de4c4u: goto label_1de4c4;
        case 0x1de4dcu: goto label_1de4dc;
        default: break;
    }

    ctx->pc = 0x1de448u;

    // 0x1de448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de44c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de454: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1de454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de45c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de464: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1de464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de468: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1de468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de46c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1de46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1de470: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x1de470u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x1de474: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1de474u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1de478: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1de478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1de47c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1de47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1de480: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1de480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1de484: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1de484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de488: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1de488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1de48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de490: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1de490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1de494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de498: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1de498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1de49c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4a0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1de4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1de4a4: 0xc440d850  lwc1        $f0, -0x27B0($v0)
    ctx->pc = 0x1de4a4u;
    { uint32_t bits = FAST_READ32(0x45D850u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4a8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1de4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1de4ac: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1de4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1de4b0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1de4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1de4b4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1de4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1de4b8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1de4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1de4bc: 0xc077a50  jal         func_1DE940
    ctx->pc = 0x1DE4BCu;
    SET_GPR_U32(ctx, 31, 0x1DE4C4u);
    ctx->pc = 0x1DE4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4BCu;
    // 0x1de4c0: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE940u, 0x1DE4BCu, 0x1DE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4C4u;
label_1de4c4:
    // 0x1de4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1de4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1de4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1de4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4d4: 0xc077dac  jal         func_1DF6B0
    ctx->pc = 0x1DE4D4u;
    SET_GPR_U32(ctx, 31, 0x1DE4DCu);
    ctx->pc = 0x1DE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4D4u;
    // 0x1de4d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6B0u, 0x1DE4D4u, 0x1DE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4DCu;
label_1de4dc:
    // 0x1de4dc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1de4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1de4e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de4e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de4e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1de4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1de4ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de4ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de4f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de4f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de4f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1de4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F8u;
        // 0x1de4fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE500u;
}
