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

// Function: sub_002DC620
// Address: 0x2dc620 - 0x2dc6f8
void sub_002DC620_0x2dc620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC620_0x2dc620");
#endif

    switch (ctx->pc) {
        case 0x2dc650u: goto label_2dc650;
        case 0x2dc6a0u: goto label_2dc6a0;
        case 0x2dc6d4u: goto label_2dc6d4;
        case 0x2dc6dcu: goto label_2dc6dc;
        default: break;
    }

    ctx->pc = 0x2dc620u;

    // 0x2dc620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc624: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2dc624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2dc628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dc628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc62c: 0x24423fd0  addiu       $v0, $v0, 0x3FD0
    ctx->pc = 0x2dc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16336));
    // 0x2dc630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dc630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dc634: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dc634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc638: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc63c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc640: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2dc640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2dc644: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2dc644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dc648: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DC648u;
    SET_GPR_U32(ctx, 31, 0x2DC650u);
    ctx->pc = 0x2DC64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC648u;
    // 0x2dc64c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DC648u, 0x2DC650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC650u;
label_2dc650:
    // 0x2dc650: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x2dc650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2dc654: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2dc654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2dc658: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x2dc658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2dc65c: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x2dc65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2dc660: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2dc660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x2dc664: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2dc664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x2dc668: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2dc668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2dc66c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dc66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dc670: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dc670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dc674: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2dc674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x2dc678: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2dc678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x2dc67c: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x2dc67cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc680: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2dc680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2dc684: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2dc684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2dc688: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2dc688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2dc68c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2dc68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2dc690: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2dc690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2dc694: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2dc694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2dc698: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DC698u;
    SET_GPR_U32(ctx, 31, 0x2DC6A0u);
    ctx->pc = 0x2DC69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC698u;
    // 0x2dc69c: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DC698u, 0x2DC6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6A0u;
label_2dc6a0:
    // 0x2dc6a0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2dc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2dc6a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc6a8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2dc6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2dc6ac: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2dc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2dc6b0: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2dc6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2dc6b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dc6b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc6b8: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x2dc6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dc6bc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2dc6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2dc6c0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2dc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2dc6c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC6C4u;
    {
        const bool branch_taken_0x2dc6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc6c4) {
            ctx->pc = 0x2DC6D4u;
            goto label_2dc6d4;
        }
    }
    ctx->pc = 0x2DC6CCu;
    // 0x2dc6cc: 0xc0b72a0  jal         func_2DCA80
    ctx->pc = 0x2DC6CCu;
    SET_GPR_U32(ctx, 31, 0x2DC6D4u);
    ctx->pc = 0x2DC6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC6CCu;
    // 0x2dc6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA80u, 0x2DC6CCu, 0x2DC6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6D4u;
label_2dc6d4:
    // 0x2dc6d4: 0xc0b7208  jal         func_2DC820
    ctx->pc = 0x2DC6D4u;
    SET_GPR_U32(ctx, 31, 0x2DC6DCu);
    ctx->pc = 0x2DC6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC6D4u;
    // 0x2dc6d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC820u, 0x2DC6D4u, 0x2DC6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6DCu;
label_2dc6dc:
    // 0x2dc6dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dc6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc6e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dc6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dc6e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6ECu;
        // 0x2dc6f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC6F4u;
    // 0x2dc6f4: 0x0  nop
    ctx->pc = 0x2dc6f4u;
    // NOP
    ctx->pc = 0x2dc6f8u;
}
