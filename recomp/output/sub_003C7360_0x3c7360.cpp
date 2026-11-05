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

// Function: sub_003C7360
// Address: 0x3c7360 - 0x3c7448
void sub_003C7360_0x3c7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7360_0x3c7360");
#endif

    switch (ctx->pc) {
        case 0x3c73a4u: goto label_3c73a4;
        case 0x3c7400u: goto label_3c7400;
        default: break;
    }

    ctx->pc = 0x3c7360u;

    // 0x3c7360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c7360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c7364: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c7364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c7368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c736c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c736cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7370: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3c7370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3c7374: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C7374u;
    {
        const bool branch_taken_0x3c7374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7374) {
            ctx->pc = 0x3C7378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7374u;
            // 0x3c7378: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7390u;
            goto label_3c7390;
        }
    }
    ctx->pc = 0x3C737Cu;
    // 0x3c737c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c7380: 0x8c43cddc  lw          $v1, -0x3224($v0)
    ctx->pc = 0x3c7380u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c7384: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3c7384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3c7388: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3c7388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3c738c: 0x0  nop
    ctx->pc = 0x3c738cu;
    // NOP
label_3c7390:
    // 0x3c7390: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3c7390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3c7394: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C7394u;
    {
        const bool branch_taken_0x3c7394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7394) {
            ctx->pc = 0x3C7398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7394u;
            // 0x3c7398: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C73A8u;
            goto label_3c73a8;
        }
    }
    ctx->pc = 0x3C739Cu;
    // 0x3c739c: 0xc0f1a98  jal         func_3C6A60
    ctx->pc = 0x3C739Cu;
    SET_GPR_U32(ctx, 31, 0x3C73A4u);
    ctx->pc = 0x3C6A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A60u, 0x3C739Cu, 0x3C73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C73A4u;
label_3c73a4:
    // 0x3c73a4: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x3c73a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3c73a8:
    // 0x3c73a8: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x3c73a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x3c73ac: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C73ACu;
    {
        const bool branch_taken_0x3c73ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c73ac) {
            ctx->pc = 0x3C73B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C73ACu;
            // 0x3c73b0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C73F0u;
            goto label_3c73f0;
        }
    }
    ctx->pc = 0x3C73B4u;
    // 0x3c73b4: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x3c73b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x3c73b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C73B8u;
    {
        const bool branch_taken_0x3c73b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73B8u;
        // 0x3c73bc: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c73b8) {
            ctx->pc = 0x3C73C8u;
            goto label_3c73c8;
        }
    }
    ctx->pc = 0x3C73C0u;
    // 0x3c73c0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3C73C0u;
    {
        const bool branch_taken_0x3c73c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73C0u;
        // 0x3c73c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c73c0) {
            ctx->pc = 0x3C7438u;
            goto label_3c7438;
        }
    }
    ctx->pc = 0x3C73C8u;
label_3c73c8:
    // 0x3c73c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C73C8u;
    {
        const bool branch_taken_0x3c73c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73C8u;
        // 0x3c73cc: 0x3082ffdb  andi        $v0, $a0, 0xFFDB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65499);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c73c8) {
            ctx->pc = 0x3C73E0u;
            goto label_3c73e0;
        }
    }
    ctx->pc = 0x3C73D0u;
    // 0x3c73d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3c73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c73d4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3c73d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c73d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3c73d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3c73dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3c73dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3c73e0:
    // 0x3c73e0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3c73e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c73e4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3c73e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3c73e8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3c73e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c73ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3c73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c73f0:
    // 0x3c73f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C73F0u;
    {
        const bool branch_taken_0x3c73f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c73f0) {
            ctx->pc = 0x3C73F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C73F0u;
            // 0x3c73f4: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7404u;
            goto label_3c7404;
        }
    }
    ctx->pc = 0x3C73F8u;
    // 0x3c73f8: 0xc0f1be4  jal         func_3C6F90
    ctx->pc = 0x3C73F8u;
    SET_GPR_U32(ctx, 31, 0x3C7400u);
    ctx->pc = 0x3C73FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C73F8u;
    // 0x3c73fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6F90u, 0x3C73F8u, 0x3C7400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7400u;
label_3c7400:
    // 0x3c7400: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3c7400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3c7404:
    // 0x3c7404: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3c7404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3c7408: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C7408u;
    {
        const bool branch_taken_0x3c7408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7408u;
        // 0x3c740c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7408) {
            ctx->pc = 0x3C7424u;
            goto label_3c7424;
        }
    }
    ctx->pc = 0x3C7410u;
    // 0x3c7410: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3c7410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3c7414: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3c7414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3c7418: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3c7418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3c741c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C741Cu;
    {
        const bool branch_taken_0x3c741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C741Cu;
        // 0x3c7420: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c741c) {
            ctx->pc = 0x3C7434u;
            goto label_3c7434;
        }
    }
    ctx->pc = 0x3C7424u;
label_3c7424:
    // 0x3c7424: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C7424u;
    {
        const bool branch_taken_0x3c7424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7424u;
        // 0x3c7428: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7424) {
            ctx->pc = 0x3C7430u;
            goto label_3c7430;
        }
    }
    ctx->pc = 0x3C742Cu;
    // 0x3c742c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3c742cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c7430:
    // 0x3c7430: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3c7430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3c7434:
    // 0x3c7434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c7434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7438:
    // 0x3c7438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c7438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c743c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c743cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7440: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7440u;
        // 0x3c7444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7448u;
}
