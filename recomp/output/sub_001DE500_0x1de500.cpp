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

// Function: sub_001DE500
// Address: 0x1de500 - 0x1de5f8
void sub_001DE500_0x1de500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE500_0x1de500");
#endif

    switch (ctx->pc) {
        case 0x1de5a0u: goto label_1de5a0;
        case 0x1de5c0u: goto label_1de5c0;
        default: break;
    }

    ctx->pc = 0x1de500u;

    // 0x1de500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1de500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1de504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de508: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de50c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1de50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de510: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de514: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1de514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de518: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1de518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1de51c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1de51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de520: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1de520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1de524: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1de524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de528: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1de528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1de52c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1de52cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de530: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1de530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1de534: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1de534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de538: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1de538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de53c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de540: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1de540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1de544: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x1de544u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x1de548: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1de548u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1de54c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1de54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1de550: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1de550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1de554: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1de554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1de558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1de558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de55c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1de55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1de560: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1de560u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1de564: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1de564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1de568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de56c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1de56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1de570: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de574: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1de574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1de578: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de57c: 0xc460d854  lwc1        $f0, -0x27AC($v1)
    ctx->pc = 0x1de57cu;
    { uint32_t bits = FAST_READ32(0x45D854u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de580: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1de580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1de584: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1de584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1de588: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1de588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1de58c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1de58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1de590: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1de590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1de594: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1de594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1de598: 0xc077a50  jal         func_1DE940
    ctx->pc = 0x1DE598u;
    SET_GPR_U32(ctx, 31, 0x1DE5A0u);
    ctx->pc = 0x1DE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE598u;
    // 0x1de59c: 0xae2b91b8  sw          $t3, -0x6E48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939064), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE940u, 0x1DE598u, 0x1DE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5A0u;
label_1de5a0:
    // 0x1de5a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1de5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1de5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5ac: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1de5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5b0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1de5b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5b4: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x1de5b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5b8: 0xc077e10  jal         func_1DF840
    ctx->pc = 0x1DE5B8u;
    SET_GPR_U32(ctx, 31, 0x1DE5C0u);
    ctx->pc = 0x1DE5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5B8u;
    // 0x1de5bc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF840u, 0x1DE5B8u, 0x1DE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5C0u;
label_1de5c0:
    // 0x1de5c0: 0xae2091b8  sw          $zero, -0x6E48($s1)
    ctx->pc = 0x1de5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939064), GPR_U32(ctx, 0));
    // 0x1de5c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de5c8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1de5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1de5cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de5d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de5d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de5d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1de5d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1de5d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de5d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de5dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de5dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de5e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1de5e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de5e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1de5e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de5e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1de5e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1de5ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1de5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE5F8u;
}
