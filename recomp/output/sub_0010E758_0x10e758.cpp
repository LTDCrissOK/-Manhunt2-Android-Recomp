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

// Function: sub_0010E758
// Address: 0x10e758 - 0x10e818
void sub_0010E758_0x10e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E758_0x10e758");
#endif

    switch (ctx->pc) {
        case 0x10e7acu: goto label_10e7ac;
        case 0x10e7b4u: goto label_10e7b4;
        case 0x10e7bcu: goto label_10e7bc;
        case 0x10e7ccu: goto label_10e7cc;
        case 0x10e7d8u: goto label_10e7d8;
        case 0x10e7e8u: goto label_10e7e8;
        default: break;
    }

    ctx->pc = 0x10e758u;

    // 0x10e758: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10e758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10e75c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x10e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x10e760: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x10e760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x10e764: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x10e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x10e768: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10e768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10e76c: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x10e76cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x10e770: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x10e770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x10e774: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10e778: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10e778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10e77c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10e780: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x10e780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x10e784: 0x24920328  addiu       $s2, $a0, 0x328
    ctx->pc = 0x10e784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 808));
    // 0x10e788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10e78c: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x10e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
    // 0x10e790: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10e794: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x10e794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x10e798: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x10e798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x10e79c: 0x24930338  addiu       $s3, $a0, 0x338
    ctx->pc = 0x10e79cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 824));
    // 0x10e7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7a4: 0xc072666  jal         func_1C9998
    ctx->pc = 0x10E7A4u;
    SET_GPR_U32(ctx, 31, 0x10E7ACu);
    ctx->pc = 0x10E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7A4u;
    // 0x10e7a8: 0xae330018  sw          $s3, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9998u, 0x10E7A4u, 0x10E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7ACu;
label_10e7ac:
    // 0x10e7ac: 0xc072812  jal         func_1CA048
    ctx->pc = 0x10E7ACu;
    SET_GPR_U32(ctx, 31, 0x10E7B4u);
    ctx->pc = 0x10E7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7ACu;
    // 0x10e7b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA048u, 0x10E7ACu, 0x10E7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7B4u;
label_10e7b4:
    // 0x10e7b4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x10E7B4u;
    SET_GPR_U32(ctx, 31, 0x10E7BCu);
    ctx->pc = 0x10E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7B4u;
    // 0x10e7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x10E7B4u, 0x10E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7BCu;
label_10e7bc:
    // 0x10e7bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10E7BCu;
    {
        const bool branch_taken_0x10e7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7BCu;
        // 0x10e7c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7bc) {
            ctx->pc = 0x10E7F0u;
            goto label_10e7f0;
        }
    }
    ctx->pc = 0x10E7C4u;
    // 0x10e7c4: 0xc072818  jal         func_1CA060
    ctx->pc = 0x10E7C4u;
    SET_GPR_U32(ctx, 31, 0x10E7CCu);
    ctx->pc = 0x10E7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7C4u;
    // 0x10e7c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA060u, 0x10E7C4u, 0x10E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7CCu;
label_10e7cc:
    // 0x10e7cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10e7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7d0: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x10E7D0u;
    SET_GPR_U32(ctx, 31, 0x10E7D8u);
    ctx->pc = 0x10E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7D0u;
    // 0x10e7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x10E7D0u, 0x10E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7D8u;
label_10e7d8:
    // 0x10e7d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10E7D8u;
    {
        const bool branch_taken_0x10e7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e7d8) {
            ctx->pc = 0x10E7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E7D8u;
            // 0x10e7dc: 0xafb20030  sw          $s2, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E7F4u;
            goto label_10e7f4;
        }
    }
    ctx->pc = 0x10E7E0u;
    // 0x10e7e0: 0xc072890  jal         func_1CA240
    ctx->pc = 0x10E7E0u;
    SET_GPR_U32(ctx, 31, 0x10E7E8u);
    ctx->pc = 0x10E7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7E0u;
    // 0x10e7e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA240u, 0x10E7E0u, 0x10E7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7E8u;
label_10e7e8:
    // 0x10e7e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10E7E8u;
    {
        const bool branch_taken_0x10e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7E8u;
        // 0x10e7ec: 0xafb20030  sw          $s2, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7e8) {
            ctx->pc = 0x10E7F8u;
            goto label_10e7f8;
        }
    }
    ctx->pc = 0x10E7F0u;
label_10e7f0:
    // 0x10e7f0: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x10e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
label_10e7f4:
    // 0x10e7f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e7f8:
    // 0x10e7f8: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x10e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x10e7fc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10e7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e800: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x10e800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10e804: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10e804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10e808: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x10e808u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10e80c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10e80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10e810: 0x3e00008  jr          $ra
    ctx->pc = 0x10E810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E810u;
        // 0x10e814: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E818u;
}
