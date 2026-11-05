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

// Function: sub_0010B140
// Address: 0x10b140 - 0x10b1c8
void sub_0010B140_0x10b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B140_0x10b140");
#endif

    switch (ctx->pc) {
        case 0x10b174u: goto label_10b174;
        case 0x10b1a4u: goto label_10b1a4;
        default: break;
    }

    ctx->pc = 0x10b140u;

    // 0x10b140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b150: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b154: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b158: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10b158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10b15c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10b15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b160: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10b164: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x10b164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b168: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10b168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10b16c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B16Cu;
    SET_GPR_U32(ctx, 31, 0x10B174u);
    ctx->pc = 0x10B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B16Cu;
    // 0x10b170: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B16Cu, 0x10B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B174u;
label_10b174:
    // 0x10b174: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b178: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b17c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B17Cu;
    {
        const bool branch_taken_0x10b17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B17Cu;
        // 0x10b180: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b17c) {
            ctx->pc = 0x10B1A4u;
            goto label_10b1a4;
        }
    }
    ctx->pc = 0x10B184u;
    // 0x10b184: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b188: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b18c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10b18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b190: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b194: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x10b194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b198: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x10b198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b19c: 0xc0442de  jal         func_110B78
    ctx->pc = 0x10B19Cu;
    SET_GPR_U32(ctx, 31, 0x10B1A4u);
    ctx->pc = 0x10B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B19Cu;
    // 0x10b1a0: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B78u, 0x10B19Cu, 0x10B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1A4u;
label_10b1a4:
    // 0x10b1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b1a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b1ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b1acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b1b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b1b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b1b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10b1b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b1b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10b1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10b1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x10B1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1BCu;
        // 0x10b1c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B1C4u;
    // 0x10b1c4: 0x0  nop
    ctx->pc = 0x10b1c4u;
    // NOP
    ctx->pc = 0x10b1c8u;
}
