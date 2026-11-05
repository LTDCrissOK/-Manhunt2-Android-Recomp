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

// Function: sub_0016A258
// Address: 0x16a258 - 0x16a300
void sub_0016A258_0x16a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A258_0x16a258");
#endif

    switch (ctx->pc) {
        case 0x16a29cu: goto label_16a29c;
        case 0x16a2b0u: goto label_16a2b0;
        case 0x16a2b8u: goto label_16a2b8;
        case 0x16a2e0u: goto label_16a2e0;
        default: break;
    }

    ctx->pc = 0x16a258u;

    // 0x16a258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16a25c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a260: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16a260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16a264: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x16a264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a268: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16a268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a26c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x16a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a270: 0x2711026  xor         $v0, $s3, $s1
    ctx->pc = 0x16a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 17));
    // 0x16a274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a278: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a27c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x16a27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a280: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16a284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a288: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16a288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a28c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16a290: 0x102880b  movn        $s1, $t0, $v0
    ctx->pc = 0x16a290u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
    // 0x16a294: 0xc05ab66  jal         func_16AD98
    ctx->pc = 0x16A294u;
    SET_GPR_U32(ctx, 31, 0x16A29Cu);
    ctx->pc = 0x16A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A294u;
    // 0x16a298: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD98u, 0x16A294u, 0x16A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A29Cu;
label_16a29c:
    // 0x16a29c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16a2a0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A2A0u;
    {
        const bool branch_taken_0x16a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2A0u;
        // 0x16a2a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2a0) {
            ctx->pc = 0x16A2B0u;
            goto label_16a2b0;
        }
    }
    ctx->pc = 0x16A2A8u;
    // 0x16a2a8: 0xc05a824  jal         func_16A090
    ctx->pc = 0x16A2A8u;
    SET_GPR_U32(ctx, 31, 0x16A2B0u);
    ctx->pc = 0x16A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2A8u;
    // 0x16a2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A090u, 0x16A2A8u, 0x16A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2B0u;
label_16a2b0:
    // 0x16a2b0: 0xc05abc8  jal         func_16AF20
    ctx->pc = 0x16A2B0u;
    SET_GPR_U32(ctx, 31, 0x16A2B8u);
    ctx->pc = 0x16A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2B0u;
    // 0x16a2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x16A2B0u, 0x16A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2B8u;
label_16a2b8:
    // 0x16a2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a2bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16a2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16a2c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16a2c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2c8: 0xa4530014  sh          $s3, 0x14($v0)
    ctx->pc = 0x16a2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 19));
    // 0x16a2cc: 0xa4510016  sh          $s1, 0x16($v0)
    ctx->pc = 0x16a2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 17));
    // 0x16a2d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2d4: 0xac540018  sw          $s4, 0x18($v0)
    ctx->pc = 0x16a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 20));
    // 0x16a2d8: 0xc05a926  jal         func_16A498
    ctx->pc = 0x16A2D8u;
    SET_GPR_U32(ctx, 31, 0x16A2E0u);
    ctx->pc = 0x16A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2D8u;
    // 0x16a2dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A498u, 0x16A2D8u, 0x16A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2E0u;
label_16a2e0:
    // 0x16a2e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a2e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a2e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a2e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a2ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16a2ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a2f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16a2f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a2f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16a2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16a2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x16A2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2F8u;
        // 0x16a2fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A300u;
}
