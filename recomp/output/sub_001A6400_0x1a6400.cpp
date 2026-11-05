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

// Function: sub_001A6400
// Address: 0x1a6400 - 0x1a6470
void sub_001A6400_0x1a6400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6400_0x1a6400");
#endif

    switch (ctx->pc) {
        case 0x1a6434u: goto label_1a6434;
        case 0x1a6444u: goto label_1a6444;
        default: break;
    }

    ctx->pc = 0x1a6400u;

    // 0x1a6400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a640c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6410: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a6410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6418: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a6418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a641c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a641cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6420: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a6420u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a6424: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a6424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6428: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a642c: 0xc069664  jal         func_1A5990
    ctx->pc = 0x1A642Cu;
    SET_GPR_U32(ctx, 31, 0x1A6434u);
    ctx->pc = 0x1A6430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A642Cu;
    // 0x1a6430: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5990u, 0x1A642Cu, 0x1A6434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6434u;
label_1a6434:
    // 0x1a6434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6438: 0x24460292  addiu       $a2, $v0, 0x292
    ctx->pc = 0x1a6438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 658));
    // 0x1a643c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A643Cu;
    SET_GPR_U32(ctx, 31, 0x1A6444u);
    ctx->pc = 0x1A6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A643Cu;
    // 0x1a6440: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A643Cu, 0x1A6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6444u;
label_1a6444:
    // 0x1a6444: 0xae1101d4  sw          $s1, 0x1D4($s0)
    ctx->pc = 0x1a6444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 17));
    // 0x1a6448: 0xae1201cc  sw          $s2, 0x1CC($s0)
    ctx->pc = 0x1a6448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 18));
    // 0x1a644c: 0xe61401d0  swc1        $f20, 0x1D0($s0)
    ctx->pc = 0x1a644cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
    // 0x1a6450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6458: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a645c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a645cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6460: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a6460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a6464: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6464u;
        // 0x1a6468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A646Cu;
    // 0x1a646c: 0x0  nop
    ctx->pc = 0x1a646cu;
    // NOP
    ctx->pc = 0x1a6470u;
}
