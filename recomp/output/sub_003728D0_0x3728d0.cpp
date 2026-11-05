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

// Function: sub_003728D0
// Address: 0x3728d0 - 0x372960
void sub_003728D0_0x3728d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003728D0_0x3728d0");
#endif

    switch (ctx->pc) {
        case 0x3728d0u: goto label_3728d0;
        case 0x3728d4u: goto label_3728d4;
        case 0x3728d8u: goto label_3728d8;
        case 0x3728dcu: goto label_3728dc;
        case 0x3728e0u: goto label_3728e0;
        case 0x3728e4u: goto label_3728e4;
        case 0x3728e8u: goto label_3728e8;
        case 0x3728ecu: goto label_3728ec;
        case 0x3728f0u: goto label_3728f0;
        case 0x3728f4u: goto label_3728f4;
        case 0x3728f8u: goto label_3728f8;
        case 0x3728fcu: goto label_3728fc;
        case 0x372900u: goto label_372900;
        case 0x372904u: goto label_372904;
        case 0x372908u: goto label_372908;
        case 0x37290cu: goto label_37290c;
        case 0x372910u: goto label_372910;
        case 0x372914u: goto label_372914;
        case 0x372918u: goto label_372918;
        case 0x37291cu: goto label_37291c;
        case 0x372920u: goto label_372920;
        case 0x372924u: goto label_372924;
        case 0x372928u: goto label_372928;
        case 0x37292cu: goto label_37292c;
        case 0x372930u: goto label_372930;
        case 0x372934u: goto label_372934;
        case 0x372938u: goto label_372938;
        case 0x37293cu: goto label_37293c;
        case 0x372940u: goto label_372940;
        case 0x372944u: goto label_372944;
        case 0x372948u: goto label_372948;
        case 0x37294cu: goto label_37294c;
        case 0x372950u: goto label_372950;
        case 0x372954u: goto label_372954;
        case 0x372958u: goto label_372958;
        case 0x37295cu: goto label_37295c;
        default: break;
    }

    ctx->pc = 0x3728d0u;

label_3728d0:
    // 0x3728d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3728d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3728d4:
    // 0x3728d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3728d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3728d8:
    // 0x3728d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3728d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3728dc:
    // 0x3728dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3728dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3728e0:
    // 0x3728e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3728e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3728e4:
    // 0x3728e4: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
label_3728e8:
    if (ctx->pc == 0x3728E8u) {
        ctx->pc = 0x3728E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728E4u;
        // 0x3728e8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3728ECu;
        goto label_3728ec;
    }
    ctx->pc = 0x3728E4u;
    {
        const bool branch_taken_0x3728e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3728E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728E4u;
        // 0x3728e8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3728e4) {
            ctx->pc = 0x372934u;
            goto label_372934;
        }
    }
    ctx->pc = 0x3728ECu;
label_3728ec:
    // 0x3728ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3728ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3728f0:
    // 0x3728f0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3728f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3728f4:
    // 0x3728f4: 0xac625ae8  sw          $v0, 0x5AE8($v1)
    ctx->pc = 0x3728f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23272), GPR_U32(ctx, 2));
label_3728f8:
    // 0x3728f8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3728f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3728fc:
    // 0x3728fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3728fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_372900:
    // 0x372900: 0x24925ac8  addiu       $s2, $a0, 0x5AC8
    ctx->pc = 0x372900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 23240));
label_372904:
    // 0x372904: 0x24515ff8  addiu       $s1, $v0, 0x5FF8
    ctx->pc = 0x372904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24568));
label_372908:
    // 0x372908: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x372908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_37290c:
    // 0x37290c: 0x0  nop
    ctx->pc = 0x37290cu;
    // NOP
label_372910:
    // 0x372910: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x372910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_372914:
    // 0x372914: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_372918:
    if (ctx->pc == 0x372918u) {
        ctx->pc = 0x372918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372914u;
        // 0x372918: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37291Cu;
        goto label_37291c;
    }
    ctx->pc = 0x372914u;
    {
        const bool branch_taken_0x372914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372914) {
            ctx->pc = 0x372918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372914u;
            // 0x372918: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372928u;
            goto label_372928;
        }
    }
    ctx->pc = 0x37291Cu;
label_37291c:
    // 0x37291c: 0x40f809  jalr        $v0
label_372920:
    if (ctx->pc == 0x372920u) {
        ctx->pc = 0x372920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37291Cu;
        // 0x372920: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372924u;
        goto label_372924;
    }
    ctx->pc = 0x37291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x372924u);
        ctx->pc = 0x372920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37291Cu;
        // 0x372920: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37291Cu, 0x372924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x372924u;
label_372924:
    // 0x372924: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x372924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_372928:
    // 0x372928: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x372928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_37292c:
    // 0x37292c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_372930:
    if (ctx->pc == 0x372930u) {
        ctx->pc = 0x372930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37292Cu;
        // 0x372930: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372934u;
        goto label_372934;
    }
    ctx->pc = 0x37292Cu;
    {
        const bool branch_taken_0x37292c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x372930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37292Cu;
        // 0x372930: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37292c) {
            ctx->pc = 0x372910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372910;
        }
    }
    ctx->pc = 0x372934u;
label_372934:
    // 0x372934: 0xf  sync
    ctx->pc = 0x372934u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_372938:
    // 0x372938: 0x42000038  ei
    ctx->pc = 0x372938u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_37293c:
    // 0x37293c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37293cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_372940:
    // 0x372940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372944:
    // 0x372944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x372944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_372948:
    // 0x372948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x372948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37294c:
    // 0x37294c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x37294cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_372950:
    // 0x372950: 0x3e00008  jr          $ra
label_372954:
    if (ctx->pc == 0x372954u) {
        ctx->pc = 0x372954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372950u;
        // 0x372954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372958u;
        goto label_372958;
    }
    ctx->pc = 0x372950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372950u;
        // 0x372954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372958u;
label_372958:
    // 0x372958: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x372958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_37295c:
    // 0x37295c: 0x0  nop
    ctx->pc = 0x37295cu;
    // NOP
    ctx->pc = 0x372960u;
}
