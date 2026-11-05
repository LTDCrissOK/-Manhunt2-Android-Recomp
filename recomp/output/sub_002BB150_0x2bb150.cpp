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

// Function: sub_002BB150
// Address: 0x2bb150 - 0x2bb1c0
void sub_002BB150_0x2bb150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB150_0x2bb150");
#endif

    switch (ctx->pc) {
        case 0x2bb178u: goto label_2bb178;
        case 0x2bb190u: goto label_2bb190;
        default: break;
    }

    ctx->pc = 0x2bb150u;

    // 0x2bb150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bb154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bb154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bb158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb15c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2bb15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2bb160: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2bb160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2bb164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bb168: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2bb168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb16c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bb170: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2BB170u;
    SET_GPR_U32(ctx, 31, 0x2BB178u);
    ctx->pc = 0x2BB174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB170u;
    // 0x2bb174: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2BB170u, 0x2BB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB178u;
label_2bb178:
    // 0x2bb178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bb178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb17c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb180: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2bb180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2bb184: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bb184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb188: 0xc0aec70  jal         func_2BB1C0
    ctx->pc = 0x2BB188u;
    SET_GPR_U32(ctx, 31, 0x2BB190u);
    ctx->pc = 0x2BB18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB188u;
    // 0x2bb18c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB1C0u, 0x2BB188u, 0x2BB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB190u;
label_2bb190:
    // 0x2bb190: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x2bb190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2bb194: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb198: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2bb198u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2bb19c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2bb19cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb1a0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2bb1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2bb1a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2bb1a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb1a8: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x2bb1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bb1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb1b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bb1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb1b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1B8u;
        // 0x2bb1bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB1C0u;
}
