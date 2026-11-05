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

// Function: sub_001DE5F8
// Address: 0x1de5f8 - 0x1de690
void sub_001DE5F8_0x1de5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE5F8_0x1de5f8");
#endif

    switch (ctx->pc) {
        case 0x1de638u: goto label_1de638;
        case 0x1de640u: goto label_1de640;
        case 0x1de658u: goto label_1de658;
        default: break;
    }

    ctx->pc = 0x1de5f8u;

    // 0x1de5f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1de5fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1de5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1de600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de604: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x1de604u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x1de608: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de610: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de614: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1de614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de618: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de61c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1de61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de620: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1de620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1de624: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1de624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de628: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1de628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1de62c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1de62cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de630: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x1DE630u;
    SET_GPR_U32(ctx, 31, 0x1DE638u);
    ctx->pc = 0x1DE634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE630u;
    // 0x1de634: 0xaea991b8  sw          $t1, -0x6E48($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294939064), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x1DE630u, 0x1DE638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE638u;
label_1de638:
    // 0x1de638: 0xc077ade  jal         func_1DEB78
    ctx->pc = 0x1DE638u;
    SET_GPR_U32(ctx, 31, 0x1DE640u);
    ctx->pc = 0x1DE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE638u;
    // 0x1de63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x1DE638u, 0x1DE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE640u;
label_1de640:
    // 0x1de640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de644: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1de644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de648: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de64c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1de64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de650: 0xc077b46  jal         func_1DED18
    ctx->pc = 0x1DE650u;
    SET_GPR_U32(ctx, 31, 0x1DE658u);
    ctx->pc = 0x1DE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE650u;
    // 0x1de654: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED18u, 0x1DE650u, 0x1DE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE658u;
label_1de658:
    // 0x1de658: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de65c: 0xaea091b8  sw          $zero, -0x6E48($s5)
    ctx->pc = 0x1de65cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294939064), GPR_U32(ctx, 0));
    // 0x1de660: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1de660u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1de664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de66c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1de66cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1de670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de674: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de678: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de67c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1de67cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de680: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1de680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de684: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE684u;
        // 0x1de688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE68Cu;
    // 0x1de68c: 0x0  nop
    ctx->pc = 0x1de68cu;
    // NOP
    ctx->pc = 0x1de690u;
}
