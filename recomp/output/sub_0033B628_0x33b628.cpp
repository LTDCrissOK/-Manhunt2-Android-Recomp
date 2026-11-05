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

// Function: sub_0033B628
// Address: 0x33b628 - 0x33b6e0
void sub_0033B628_0x33b628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B628_0x33b628");
#endif

    switch (ctx->pc) {
        case 0x33b660u: goto label_33b660;
        case 0x33b680u: goto label_33b680;
        case 0x33b6acu: goto label_33b6ac;
        case 0x33b6c8u: goto label_33b6c8;
        default: break;
    }

    ctx->pc = 0x33b628u;

    // 0x33b628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33b628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33b62c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33b62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33b630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33b630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33b634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33b634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33b63c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33b63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b640: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x33B640u;
    {
        const bool branch_taken_0x33b640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B640u;
        // 0x33b644: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b640) {
            ctx->pc = 0x33B688u;
            goto label_33b688;
        }
    }
    ctx->pc = 0x33B648u;
    // 0x33b648: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x33b648u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x33b64c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x33b64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33b650: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x33b650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
    // 0x33b654: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33b654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33b658: 0xc07f6f0  jal         func_1FDBC0
    ctx->pc = 0x33B658u;
    SET_GPR_U32(ctx, 31, 0x33B660u);
    ctx->pc = 0x33B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B658u;
    // 0x33b65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBC0u, 0x33B658u, 0x33B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B660u;
label_33b660:
    // 0x33b660: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x33b660u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x33b664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33b668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b66c: 0x24e75cd8  addiu       $a3, $a3, 0x5CD8
    ctx->pc = 0x33b66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23768));
    // 0x33b670: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x33b670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33b674: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x33b674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b678: 0xc07f672  jal         func_1FD9C8
    ctx->pc = 0x33B678u;
    SET_GPR_U32(ctx, 31, 0x33B680u);
    ctx->pc = 0x33B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B678u;
    // 0x33b67c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9C8u, 0x33B678u, 0x33B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B680u;
label_33b680:
    // 0x33b680: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33B680u;
    {
        const bool branch_taken_0x33b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B680u;
        // 0x33b684: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b680) {
            ctx->pc = 0x33B6B0u;
            goto label_33b6b0;
        }
    }
    ctx->pc = 0x33B688u;
label_33b688:
    // 0x33b688: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x33b688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x33b68c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x33b68cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x33b690: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x33b690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x33b694: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33b694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b698: 0x24e75ce8  addiu       $a3, $a3, 0x5CE8
    ctx->pc = 0x33b698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23784));
    // 0x33b69c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33b69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33b6a0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x33b6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b6a4: 0xc07f672  jal         func_1FD9C8
    ctx->pc = 0x33B6A4u;
    SET_GPR_U32(ctx, 31, 0x33B6ACu);
    ctx->pc = 0x33B6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6A4u;
    // 0x33b6a8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9C8u, 0x33B6A4u, 0x33B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B6ACu;
label_33b6ac:
    // 0x33b6ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x33b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_33b6b0:
    // 0x33b6b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33b6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6b4: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x33b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x33b6b8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x33b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33b6bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33b6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6c0: 0xc046642  jal         func_119908
    ctx->pc = 0x33B6C0u;
    SET_GPR_U32(ctx, 31, 0x33B6C8u);
    ctx->pc = 0x33B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6C0u;
    // 0x33b6c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x33B6C0u, 0x33B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B6C8u;
label_33b6c8:
    // 0x33b6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b6cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33b6ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b6d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33b6d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b6d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33b6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33b6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x33B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B6D8u;
        // 0x33b6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B6E0u;
}
