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

// Function: sub_0019DC18
// Address: 0x19dc18 - 0x19dc80
void sub_0019DC18_0x19dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DC18_0x19dc18");
#endif

    switch (ctx->pc) {
        case 0x19dc50u: goto label_19dc50;
        case 0x19dc64u: goto label_19dc64;
        default: break;
    }

    ctx->pc = 0x19dc18u;

    // 0x19dc18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dc1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19dc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19dc20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19dc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19dc24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19dc24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19dc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19dc2c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19dc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc30: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19dc30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19dc34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19dc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc38: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19dc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19dc40: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19dc40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19dc44: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x19dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x19dc48: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x19DC48u;
    SET_GPR_U32(ctx, 31, 0x19DC50u);
    ctx->pc = 0x19DC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC48u;
    // 0x19dc4c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x19DC48u, 0x19DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC50u;
label_19dc50:
    // 0x19dc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19dc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19dc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc5c: 0xc067774  jal         func_19DDD0
    ctx->pc = 0x19DC5Cu;
    SET_GPR_U32(ctx, 31, 0x19DC64u);
    ctx->pc = 0x19DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC5Cu;
    // 0x19dc60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDD0u, 0x19DC5Cu, 0x19DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC64u;
label_19dc64:
    // 0x19dc64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19dc64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dc68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19dc68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19dc6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19dc6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dc70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19dc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19dc74: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19dc78: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC78u;
        // 0x19dc7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DC80u;
}
