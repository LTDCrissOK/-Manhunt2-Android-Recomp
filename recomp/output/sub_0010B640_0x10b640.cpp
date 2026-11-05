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

// Function: sub_0010B640
// Address: 0x10b640 - 0x10b6e0
void sub_0010B640_0x10b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B640_0x10b640");
#endif

    switch (ctx->pc) {
        case 0x10b66cu: goto label_10b66c;
        case 0x10b69cu: goto label_10b69c;
        case 0x10b6b4u: goto label_10b6b4;
        default: break;
    }

    ctx->pc = 0x10b640u;

    // 0x10b640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b64c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b650: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b654: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b658: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10b658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10b65c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10b65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b660: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10b660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10b664: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B664u;
    SET_GPR_U32(ctx, 31, 0x10B66Cu);
    ctx->pc = 0x10B668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B664u;
    // 0x10b668: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B664u, 0x10B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B66Cu;
label_10b66c:
    // 0x10b66c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b66cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b670: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b674: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10B674u;
    {
        const bool branch_taken_0x10b674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B674u;
        // 0x10b678: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b674) {
            ctx->pc = 0x10B6BCu;
            goto label_10b6bc;
        }
    }
    ctx->pc = 0x10B67Cu;
    // 0x10b67c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b680: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b684: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10b684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b688: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x10B688u;
    {
        const bool branch_taken_0x10b688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B688u;
        // 0x10b68c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b688) {
            ctx->pc = 0x10B6BCu;
            goto label_10b6bc;
        }
    }
    ctx->pc = 0x10B690u;
    // 0x10b690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b694: 0xc047866  jal         func_11E198
    ctx->pc = 0x10B694u;
    SET_GPR_U32(ctx, 31, 0x10B69Cu);
    ctx->pc = 0x10B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B694u;
    // 0x10b698: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x10B694u, 0x10B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B69Cu;
label_10b69c:
    // 0x10b69c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B69Cu;
    {
        const bool branch_taken_0x10b69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B69Cu;
        // 0x10b6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b69c) {
            ctx->pc = 0x10B6BCu;
            goto label_10b6bc;
        }
    }
    ctx->pc = 0x10B6A4u;
    // 0x10b6a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10b6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6ac: 0xc044036  jal         func_1100D8
    ctx->pc = 0x10B6ACu;
    SET_GPR_U32(ctx, 31, 0x10B6B4u);
    ctx->pc = 0x10B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6ACu;
    // 0x10b6b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100D8u, 0x10B6ACu, 0x10B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6B4u;
label_10b6b4:
    // 0x10b6b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B6B4u;
    {
        const bool branch_taken_0x10b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6B4u;
        // 0x10b6b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6b4) {
            ctx->pc = 0x10B6C0u;
            goto label_10b6c0;
        }
    }
    ctx->pc = 0x10B6BCu;
label_10b6bc:
    // 0x10b6bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b6c0:
    // 0x10b6c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b6c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b6c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b6c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b6cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10b6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b6d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10b6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10b6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6D4u;
        // 0x10b6d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B6DCu;
    // 0x10b6dc: 0x0  nop
    ctx->pc = 0x10b6dcu;
    // NOP
    ctx->pc = 0x10b6e0u;
}
